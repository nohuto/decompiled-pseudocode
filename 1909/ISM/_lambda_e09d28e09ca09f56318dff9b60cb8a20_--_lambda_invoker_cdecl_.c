/*
 * XREFs of _lambda_e09d28e09ca09f56318dff9b60cb8a20_::_lambda_invoker_cdecl_ @ 0x1801048B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall lambda_e09d28e09ca09f56318dff9b60cb8a20_::_lambda_invoker_cdecl_(_BYTE *a1, HKEY a2)
{
  char v3; // al
  DWORD v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+60h] [rbp+18h] BYREF

  v4 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\GameInputConfig",
         L"GameInputEnabled",
         0x10u,
         0LL,
         &v5,
         &v4)
    || (v3 = 1, v5 != 1) )
  {
    v3 = 0;
  }
  a1[8] = v3;
}
