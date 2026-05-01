/*
 * XREFs of wil::details::lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___::_lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___ @ 0x180415AE4
 * Callers:
 *     _EyeControlApp::Initialize_::_1_::dtor$1 @ 0x180415DAE (_EyeControlApp--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

HLOCAL __fastcall wil::details::lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___::_lambda_call__lambda_26a40d8ff18b49dcc861860eae32045c___(
        __int64 a1)
{
  HLOCAL result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return LocalFree(**(HLOCAL **)a1);
  }
  return result;
}
