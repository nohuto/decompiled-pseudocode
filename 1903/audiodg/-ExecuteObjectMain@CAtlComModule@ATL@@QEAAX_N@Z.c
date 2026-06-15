/*
 * XREFs of ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14002A770
 * Callers:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14001561C (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14002995C (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x140029B14 (--1-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::ExecuteObjectMain(ATL::CAtlComModule *this, char a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax

  v2 = qword_1400870C0;
  v4 = qword_1400870C8;
  while ( v2 < v4 )
  {
    if ( *(_QWORD *)v2 )
    {
      LOBYTE(this) = a2;
      (*(void (__fastcall **)(ATL::CAtlComModule *))(*(_QWORD *)v2 + 64LL))(this);
      v4 = qword_1400870C8;
    }
    v2 += 8LL;
  }
}
