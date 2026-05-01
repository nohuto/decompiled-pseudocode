/*
 * XREFs of ?GetDefaultApplication@CImmersiveWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1800FF530
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _lambda_5ad3673c6eb74b2ca3979c012125fa9b_::operator() @ 0x1800FF1EC (_lambda_5ad3673c6eb74b2ca3979c012125fa9b_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveWindowManager::GetDefaultApplication(
        CImmersiveWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveApplication **a3)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  unsigned int v7; // ebx
  _QWORD v9[4]; // [rsp+28h] [rbp-20h] BYREF
  void (__fastcall ***v10)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v10 = 0LL;
  v9[0] = a3;
  v9[1] = a2;
  v9[2] = &v10;
  v5 = *((_QWORD *)this + 10);
  v6 = 0LL;
  if ( v5 )
  {
    do
    {
      if ( !lambda_5ad3673c6eb74b2ca3979c012125fa9b_::operator()(
              (__int64)v9,
              *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v6)) )
        break;
      ++v6;
    }
    while ( v6 < v5 );
    if ( v10 )
      (**v10)(v10, &GUID_8b14e88b_5663_4caf_b196_c31479262831, a3);
  }
  v7 = *a3 == 0LL ? 0x8002802B : 0;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v10);
  return v7;
}
