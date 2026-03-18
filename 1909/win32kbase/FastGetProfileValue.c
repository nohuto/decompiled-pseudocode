/*
 * XREFs of FastGetProfileValue @ 0x1C0060EF0
 * Callers:
 *     InitScancodeMap @ 0x1C0060090 (InitScancodeMap.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C0060344 (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     OpenCacheKeyEx @ 0x1C0015390 (OpenCacheKeyEx.c)
 *     RtlLoadStringOrError @ 0x1C00616E0 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

__int64 __fastcall FastGetProfileValue(
        const UNICODE_STRING *a1,
        unsigned int a2,
        const WCHAR *a3,
        const void *a4,
        void *a5,
        unsigned int Size,
        int a7)
{
  const WCHAR *v8; // r14
  void *i; // rax
  void *v12; // rsi
  ULONG *v13; // rbx
  NTSTATUS v14; // eax
  ULONG Length; // [rsp+30h] [rbp-91h] BYREF
  int v17; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int v18; // [rsp+38h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-81h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-71h] BYREF
  _WORD v21[40]; // [rsp+60h] [rbp-61h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = a3;
  v20[0] = 0LL;
  v20[1] = 0LL;
  v17 = a7 | gdwPolicyFlags;
  v18 = a2;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v21[0] = 0;
    RtlLoadStringOrError((unsigned __int16)a3, v21);
    v8 = v21;
  }
  for ( i = OpenCacheKeyEx(a1, a2, 0x20019u, &v17); ; i = OpenCacheKeyEx(a1, v18, 0x20019u, &v17) )
  {
    v12 = i;
    if ( !i )
    {
      if ( (a7 & 0x10) == 0 )
      {
LABEL_12:
        if ( v12 )
          ZwClose(v12);
        if ( a4 )
        {
          memmove(a5, a4, Size);
          return Size;
        }
      }
      return 0LL;
    }
    if ( Size )
    {
      Length = Size + 12;
      v13 = (ULONG *)Win32AllocPoolWithQuota(Size + 12, 0x72707355u);
      if ( !v13 )
        goto LABEL_12;
    }
    else
    {
      Length = 16;
      v13 = (ULONG *)v20;
    }
    RtlInitUnicodeString(&DestinationString, v8);
    v14 = ZwQueryValueKey(v12, &DestinationString, KeyValuePartialInformation, v13, Length, &Length);
    if ( v14 >= 0 )
      break;
    if ( v14 == -2147483643 && !Size )
    {
      ZwClose(v12);
      return v13[2];
    }
    if ( !v17 )
    {
      if ( Size )
        Win32FreePool((__int64)v13);
      goto LABEL_12;
    }
    if ( Size )
      Win32FreePool((__int64)v13);
    ZwClose(v12);
  }
  Length = v13[2];
  memmove(a5, v13 + 3, Length);
  if ( Size )
    Win32FreePool((__int64)v13);
  ZwClose(v12);
  return Length;
}
