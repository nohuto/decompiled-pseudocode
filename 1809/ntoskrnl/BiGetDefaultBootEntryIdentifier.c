/*
 * XREFs of BiGetDefaultBootEntryIdentifier @ 0x1408F0DB4
 * Callers:
 *     BcdOpenObject @ 0x140712E44 (BcdOpenObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x140712E44 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FC0 (BcdCloseObject.c)
 *     BcdGetElementDataWithFlags @ 0x140713570 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BiGetDefaultBootEntryIdentifier(__int64 a1, _OWORD *a2)
{
  int ElementDataWithFlags; // ebx
  __int64 v4; // r8
  int v6; // [rsp+30h] [rbp-38h] BYREF
  __int64 v7; // [rsp+38h] [rbp-30h] BYREF
  __int128 v8; // [rsp+40h] [rbp-28h] BYREF

  v7 = 0LL;
  ElementDataWithFlags = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR.Data1, &v7);
  if ( ElementDataWithFlags >= 0 )
  {
    v6 = 16;
    ElementDataWithFlags = BcdGetElementDataWithFlags(v7, 0x23000003u, v4, (__int64)&v8, &v6);
    if ( ElementDataWithFlags >= 0 )
      *a2 = v8;
  }
  if ( v7 )
    BcdCloseObject(v7);
  return (unsigned int)ElementDataWithFlags;
}
