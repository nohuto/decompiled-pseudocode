/*
 * XREFs of CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke @ 0x1802D1FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z @ 0x1803B3660 (-NotifyTransparencyApplied@EyeControlApp@@QEAAXH@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_152c77e1cbccb2a599dea1ca043f273b___::Invoke(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 48);
  if ( *(_QWORD *)(v1 + 416) )
    EyeControlApp::NotifyTransparencyApplied(*(EyeControlApp **)(v1 + 416), *(unsigned __int8 *)(a1 + 56));
  return 0LL;
}
