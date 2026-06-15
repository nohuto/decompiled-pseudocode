/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x14002BB40
 * Callers:
 *     ??1CAtlComModule@ATL@@QEAA@XZ @ 0x1400154A4 (--1CAtlComModule@ATL@@QEAA@XZ.c)
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14001561C (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x140029B14 (--1-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( ATL::_AtlComModule )
  {
    v1 = (__int64 *)qword_1400870C0;
    v2 = qword_1400870C8;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        *(_QWORD *)(v3 + 32) = 0LL;
        v2 = qword_1400870C8;
      }
      ++v1;
    }
    DeleteCriticalSection(&stru_1400870D0);
    ATL::_AtlComModule = 0;
  }
}
