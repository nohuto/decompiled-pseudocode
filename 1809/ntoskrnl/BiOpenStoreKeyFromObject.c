/*
 * XREFs of BiOpenStoreKeyFromObject @ 0x1403274D0
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140327598 (BiSetFirmwareModifiedFromObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     BiOpenKey @ 0x140714A20 (BiOpenKey.c)
 *     BiCloseKey @ 0x140714B90 (BiCloseKey.c)
 */

__int64 __fastcall BiOpenStoreKeyFromObject(void *a1, _QWORD *a2)
{
  NTSTATUS v3; // ebx
  ULONG ResultLength[4]; // [rsp+30h] [rbp-C8h] BYREF
  unsigned int KeyInformation; // [rsp+40h] [rbp-B8h] BYREF
  _BYTE v7[58]; // [rsp+44h] [rbp-B4h] BYREF
  __int16 v8; // [rsp+7Eh] [rbp-7Ah]

  ResultLength[0] = 160;
  *a2 = 0LL;
  if ( ((unsigned __int8)a1 & 1) != 0 )
  {
    return (unsigned int)-1073741822;
  }
  else
  {
    v3 = ZwQueryKey(a1, KeyNameInformation, &KeyInformation, 0xA0u, ResultLength);
    if ( v3 < 0 )
      goto LABEL_12;
    if ( KeyInformation >= 0x4C )
    {
      v8 = 0;
      v3 = BiOpenKey(0LL, v7, 131103LL, a2);
    }
    if ( v3 < 0 )
    {
LABEL_12:
      if ( *a2 )
      {
        BiCloseKey();
        *a2 = 0LL;
      }
    }
  }
  return (unsigned int)v3;
}
