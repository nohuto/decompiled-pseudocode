/*
 * XREFs of WmipSecurityMethod @ 0x1406CF680
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObQuerySecurityDescriptorInfo @ 0x1405C5A80 (ObQuerySecurityDescriptorInfo.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C6C40 (ObSetSecurityDescriptorInfo.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406CF844 (ObAssignObjectSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x1406CF8BC (ObDeassignSecurity.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407893C0 (WmipSaveGuidSecurityDescriptor.c)
 */

__int64 __fastcall WmipSecurityMethod(
        unsigned __int16 *Object,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        __int64 a6,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING a8)
{
  int v9; // edx
  int v10; // edx
  int v12; // ebx
  SIZE_T v13; // rdx
  PVOID PoolWithTag; // rax
  void *v15; // r15
  POOL_TYPE v16[2]; // [rsp+20h] [rbp-C1h]
  PGENERIC_MAPPING v17; // [rsp+28h] [rbp-B9h]
  ULONG i; // [rsp+70h] [rbp-71h] BYREF
  DWORD v19; // [rsp+74h] [rbp-6Dh] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-69h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-51h] BYREF

  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 != 1 )
          KeBugCheckEx(0x29u, 1uLL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
        return ObAssignObjectSecurityDescriptor(Object, a4, a3, a6);
      }
      else
      {
        return ObDeassignSecurity(a6);
      }
    }
    else
    {
      return ObQuerySecurityDescriptorInfo((__int64)Object, a3, a4, a5);
    }
  }
  else
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    v12 = ObSetSecurityDescriptorInfo(Object, a3, a4, a6, PoolType, a8);
    if ( v12 >= 0 )
    {
      v13 = 1024LL;
      for ( i = 1024; ; v13 = i )
      {
        PoolWithTag = ExAllocatePoolWithTag(PoolType, v13, 0x70696D57u);
        v15 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        v19 = -1;
        v12 = ObQuerySecurityDescriptorInfo((__int64)Object, &v19, PoolWithTag, &i);
        if ( v12 != -1073741789 )
          goto LABEL_12;
        ExFreePoolWithTag(v15, 0);
      }
      v12 = -1073741670;
LABEL_12:
      if ( v12 >= 0 )
      {
        LODWORD(v17) = Object[15];
        v16[0] = Object[14];
        RtlStringCbPrintfW(
          pszDest,
          0x4CuLL,
          L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *((unsigned int *)Object + 6),
          *(_QWORD *)v16,
          v17,
          *((unsigned __int8 *)Object + 32),
          *((unsigned __int8 *)Object + 33),
          *((unsigned __int8 *)Object + 34),
          *((unsigned __int8 *)Object + 35),
          *((unsigned __int8 *)Object + 36),
          *((unsigned __int8 *)Object + 37),
          *((unsigned __int8 *)Object + 38),
          *((unsigned __int8 *)Object + 39));
        RtlInitUnicodeString(&DestinationString, pszDest);
        v12 = WmipSaveGuidSecurityDescriptor(&DestinationString, v15);
        ExFreePoolWithTag(v15, 0);
      }
    }
    return (unsigned int)v12;
  }
}
