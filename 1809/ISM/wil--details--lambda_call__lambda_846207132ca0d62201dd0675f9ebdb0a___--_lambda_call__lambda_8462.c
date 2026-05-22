/*
 * XREFs of wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___ @ 0x18009DA7C
 * Callers:
 *     _RegistryWatcher::Create_::_1_::dtor$2 @ 0x180132DCF (_RegistryWatcher--Create_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___(
        _BYTE *a1)
{
  __int64 v2; // rax
  HKEY v3; // rcx
  void *v4; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    v2 = *(_QWORD *)a1;
    v3 = *(HKEY *)(*(_QWORD *)a1 + 24LL);
    if ( v3 )
    {
      RegCloseKey(v3);
      *(_QWORD *)(*(_QWORD *)a1 + 24LL) = 0LL;
      v2 = *(_QWORD *)a1;
    }
    v4 = *(void **)(v2 + 32);
    if ( v4 )
    {
      CloseHandle(v4);
      *(_QWORD *)(*(_QWORD *)a1 + 32LL) = 0LL;
    }
  }
}
