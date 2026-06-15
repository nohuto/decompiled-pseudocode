/*
 * XREFs of ?Term@CAtlComModule@ATL@@QEAAXXZ @ 0x1800C1844
 * Callers:
 *     ??1CAtlComModule@ATL@@QEAA@XZ @ 0x1800634C4 (--1CAtlComModule@ATL@@QEAA@XZ.c)
 *     ??_GCAudioServiceModule@@UEAAPEAXI@Z @ 0x1800BE920 (--_GCAudioServiceModule@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::Term(ATL::CAtlComModule *this)
{
  __int64 *v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx

  if ( ATL::_AtlComModule )
  {
    v1 = (__int64 *)qword_1801B9540;
    v2 = qword_1801B9548;
    while ( (unsigned __int64)v1 < v2 )
    {
      v3 = *v1;
      if ( *v1 )
      {
        v4 = *(_QWORD *)(v3 + 32);
        if ( v4 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        *(_QWORD *)(v3 + 32) = 0LL;
        v2 = qword_1801B9548;
      }
      ++v1;
    }
    DeleteCriticalSection(&stru_1801B9550);
    ATL::_AtlComModule = 0;
  }
}
