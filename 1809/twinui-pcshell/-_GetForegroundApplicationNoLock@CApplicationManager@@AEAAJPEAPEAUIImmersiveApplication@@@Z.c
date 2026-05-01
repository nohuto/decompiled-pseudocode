/*
 * XREFs of ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1800F71D4
 * Callers:
 *     _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x1800EBD40 (_lambda_20045b0b3bc9a0c8c612018082f6611c_--operator().c)
 *     ?GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x1800EE8E0 (-GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetForegroundApplicationNoLock(
        CApplicationManager *this,
        struct IImmersiveApplication **a2)
{
  unsigned int i; // edi
  __int64 v5; // rbx
  __int64 v6; // rbx
  unsigned int v8; // [rsp+70h] [rbp+30h] BYREF
  __int64 v9; // [rsp+78h] [rbp+38h] BYREF
  __int64 v10; // [rsp+80h] [rbp+40h] BYREF

  *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 72) + 24LL))(*((_QWORD *)this + 72), &v8);
  for ( i = 0; i < v8; ++i )
  {
    v10 = 0LL;
    v5 = *((_QWORD *)this + 72);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 32LL))(
           v5,
           i,
           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
           &v10) >= 0 )
    {
      v9 = 0LL;
      v6 = v10;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, &v9) >= 0
        && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 280LL))(v9) & 2) != 0 )
      {
        (**(void (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v9)(
          v9,
          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
          a2);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
        return *a2 == 0LL ? 0x8002802B : 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v9);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  }
  return *a2 == 0LL ? 0x8002802B : 0;
}
