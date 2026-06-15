/*
 * XREFs of ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x14001A3E8
 * Callers:
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x14001A310 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x14001B7D4 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??1?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ @ 0x140031614 (--1-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CAtlComModule::ExecuteObjectMain(ATL::CAtlComModule *this, char a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v4; // rax

  v2 = qword_1400890B0;
  v4 = qword_1400890B8;
  while ( v2 < v4 )
  {
    if ( *(_QWORD *)v2 )
    {
      LOBYTE(this) = a2;
      (*(void (__fastcall **)(ATL::CAtlComModule *))(*(_QWORD *)v2 + 64LL))(this);
      v4 = qword_1400890B8;
    }
    v2 += 8LL;
  }
}
