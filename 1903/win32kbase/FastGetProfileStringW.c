/*
 * XREFs of FastGetProfileStringW @ 0x1C000FA00
 * Callers:
 *     FastGetProfileIntW @ 0x1C0075AB0 (FastGetProfileIntW.c)
 *     FastGetProfileStringFromIDW @ 0x1C0075B70 (FastGetProfileStringFromIDW.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0011680 (OpenCacheKeyEx.c)
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C003DFE4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall FastGetProfileStringW(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v8; // r12d
  void *v10; // rdi
  __int64 v11; // rbx
  NTSTATUS v12; // eax
  unsigned int v14; // esi
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp-48h] BYREF
  ULONG Length; // [rsp+34h] [rbp-44h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-40h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = a2;
  v16 = a7 | gdwPolicyFlags;
  v10 = (void *)OpenCacheKeyEx(a1, a2, 131097LL, &v16);
  if ( v10 )
  {
    while ( 1 )
    {
      Length = 2 * a6 + 12;
      v11 = Win32AllocPoolWithQuota(Length, 1919972181LL);
      if ( !v11 )
        break;
      RtlInitUnicodeString(&DestinationString, a3);
      v12 = ZwQueryValueKey(v10, &DestinationString, KeyValuePartialInformation, (PVOID)v11, Length, &Length);
      if ( v12 == -2147483643 )
        v12 = 0;
      if ( v12 >= 0 )
      {
        v14 = a6;
        if ( *(_DWORD *)(v11 + 8) >> 1 < a6 )
          v14 = *(_DWORD *)(v11 + 8) >> 1;
        if ( *(_DWORD *)(v11 + 8) < 2u )
        {
          *a5 = 0;
        }
        else
        {
          *(_WORD *)(v11 + 2LL * (v14 - 1) + 12) = 0;
          RtlStringCchCopyW(a5, a6, (const unsigned __int16 *)(v11 + 12));
        }
        Win32FreePool(v11);
        ZwClose(v10);
        return v14;
      }
      Win32FreePool(v11);
      if ( !v16 )
        break;
      ZwClose(v10);
      v10 = (void *)OpenCacheKeyEx(a1, v8, 131097LL, &v16);
      if ( !v10 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    if ( (a7 & 0x10) != 0 )
      return 0LL;
  }
  if ( v10 )
    ZwClose(v10);
  if ( !a4 || RtlStringCchCopyW(a5, a6, a4) < 0 )
    return 0LL;
  v15 = -1LL;
  do
    ++v15;
  while ( a5[v15] );
  return (unsigned int)(v15 + 1);
}
