/*
 * XREFs of ??1?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@QEAA@XZ @ 0x1800D7C0C
 * Callers:
 *     _dynamic_atexit_destructor_for__CGlobalManipulationManager::s_InputQueue__ @ 0x1800EDD90 (_dynamic_atexit_destructor_for__CGlobalManipulationManager--s_InputQueue__.c)
 * Callees:
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x1800D7C58 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::~CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  bool v3; // bl
  __int64 v4; // rax
  _QWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  do
  {
    LOBYTE(a3) = 1;
    CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(a1, &v5, a3, 0LL);
    a1 = v5;
    v3 = v5 != 0LL;
    if ( v5 )
    {
      v4 = *v5;
      v5 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(v4 + 8))(a1);
    }
  }
  while ( v3 );
  DeleteCriticalSection(&stru_1803404C8);
}
