/*
 * XREFs of CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58___::Invoke @ 0x180332CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifySizeApplied@EyeControlApp@@QEAAXIIII@Z @ 0x180415DC0 (-NotifySizeApplied@EyeControlApp@@QEAAXIIII@Z.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_bf65030659e9ce755ba66a91d341de58___::Invoke(__int64 a1)
{
  EyeControlApp *v1; // r10

  v1 = *(EyeControlApp **)(*(_QWORD *)(a1 + 48) + 416LL);
  if ( v1 )
    EyeControlApp::NotifySizeApplied(
      v1,
      *(_DWORD *)(a1 + 56),
      *(_DWORD *)(a1 + 60),
      *(_DWORD *)(a1 + 64),
      *(_DWORD *)(a1 + 68));
  return 0LL;
}
