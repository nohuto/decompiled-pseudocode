/*
 * XREFs of CAsyncCallbackWithLambda__lambda_d242ae40d5210e292c90d057b5b2868e___::Invoke @ 0x180352570
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifySizeChanged@EyeControlApp@@QEAAXIIII@Z @ 0x1804354C8 (-NotifySizeChanged@EyeControlApp@@QEAAXIIII@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_d242ae40d5210e292c90d057b5b2868e___::Invoke(__int64 a1)
{
  __int64 v1; // rdx
  EyeControlApp *v2; // rcx

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(EyeControlApp **)(v1 + 416);
  if ( v2 )
    EyeControlApp::NotifySizeChanged(
      v2,
      *(_DWORD *)(v1 + 456),
      *(_DWORD *)(v1 + 464),
      *(_DWORD *)(v1 + 460),
      *(_DWORD *)(v1 + 468));
  return 0LL;
}
