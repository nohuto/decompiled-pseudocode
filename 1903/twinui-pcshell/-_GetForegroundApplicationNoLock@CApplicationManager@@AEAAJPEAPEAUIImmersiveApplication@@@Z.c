/*
 * XREFs of ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18011C57C
 * Callers:
 *     _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x18010EA64 (_lambda_20045b0b3bc9a0c8c612018082f6611c_--operator().c)
 *     ?GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180112350 (-GetForegroundApplication@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::_GetForegroundApplicationNoLock(
        CApplicationManager *this,
        struct IImmersiveApplication **a2)
{
  unsigned int i; // esi
  __int64 v5; // rdi
  int (__fastcall *v6)(__int64, _QWORD, GUID *, __int64 *); // rbx
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, __int64 *); // rdi
  unsigned int v10; // [rsp+70h] [rbp+30h] BYREF
  __int64 v11; // [rsp+78h] [rbp+38h] BYREF
  __int64 v12; // [rsp+80h] [rbp+40h] BYREF

  *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 72) + 24LL))(*((_QWORD *)this + 72), &v10);
  for ( i = 0; i < v10; ++i )
  {
    v12 = 0LL;
    v5 = *((_QWORD *)this + 72);
    v6 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v5 + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    if ( v6(v5, i, &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee, &v12) >= 0 )
    {
      v11 = 0LL;
      v7 = v12;
      v8 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 32LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
      if ( v8(v7, &v11) >= 0 && ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 280LL))(v11) & 2) != 0 )
      {
        (**(void (__fastcall ***)(__int64, GUID *, struct IImmersiveApplication **))v11)(
          v11,
          &GUID_8b14e88b_5663_4caf_b196_c31479262831,
          a2);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
        return *a2 == 0LL ? 0x8002802B : 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  return *a2 == 0LL ? 0x8002802B : 0;
}
