/*
 * XREFs of FastGetProfileValue @ 0x1C00A84E0
 * Callers:
 *     InitScancodeMap @ 0x1C012F7F0 (InitScancodeMap.c)
 *     ?CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x1C013374C (-CreateDefaultAcceleratorCurve@CDeviceAcceleration@@QEAAXPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     RtlLoadStringOrError @ 0x1C0067F00 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
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
  ULONG *p_KeyValueInformation; // rbx
  NTSTATUS v13; // eax
  void *v14; // rsi
  ULONG Length; // [rsp+30h] [rbp-91h] BYREF
  int v17; // [rsp+34h] [rbp-8Dh] BYREF
  unsigned int v18; // [rsp+38h] [rbp-89h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-81h] BYREF
  char KeyValueInformation; // [rsp+50h] [rbp-71h] BYREF
  _WORD v21[40]; // [rsp+60h] [rbp-61h] BYREF

  v8 = a3;
  v17 = a7 | gdwPolicyFlags;
  v18 = a2;
  if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v21[0] = 0;
    RtlLoadStringOrError((unsigned __int16)a3, v21, 40, 0);
    v8 = v21;
  }
  for ( i = OpenCacheKeyEx(a1, a2, 0x20019u, &v17); ; i = OpenCacheKeyEx(a1, v18, 0x20019u, &v17) )
  {
    v14 = i;
    if ( !i )
    {
      if ( (a7 & 0x10) != 0 )
        return 0LL;
LABEL_16:
      if ( v14 )
        ZwClose(v14);
      if ( a4 )
      {
        memmove(a5, a4, Size);
        return Size;
      }
      return 0LL;
    }
    if ( Size )
    {
      Length = Size + 12;
      p_KeyValueInformation = (ULONG *)Win32AllocPoolWithQuota(Size + 12, 0x72707355u);
      if ( !p_KeyValueInformation )
        goto LABEL_16;
    }
    else
    {
      Length = 16;
      p_KeyValueInformation = (ULONG *)&KeyValueInformation;
    }
    RtlInitUnicodeString(&DestinationString, v8);
    v13 = ZwQueryValueKey(v14, &DestinationString, KeyValuePartialInformation, p_KeyValueInformation, Length, &Length);
    if ( v13 >= 0 )
      break;
    if ( v13 == -2147483643 && !Size )
    {
      ZwClose(v14);
      return p_KeyValueInformation[2];
    }
    if ( !v17 )
    {
      if ( Size )
        Win32FreePool((__int64)p_KeyValueInformation);
      goto LABEL_16;
    }
    if ( Size )
      Win32FreePool((__int64)p_KeyValueInformation);
    ZwClose(v14);
  }
  Length = p_KeyValueInformation[2];
  memmove(a5, p_KeyValueInformation + 3, Length);
  if ( Size )
    Win32FreePool((__int64)p_KeyValueInformation);
  ZwClose(v14);
  return Length;
}
