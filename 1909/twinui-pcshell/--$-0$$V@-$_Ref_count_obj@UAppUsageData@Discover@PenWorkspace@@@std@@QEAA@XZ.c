/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@XZ @ 0x180081EE8
 * Callers:
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x180081EAC (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 * Callees:
 *     memset_0 @ 0x18008A73A (memset_0.c)
 */

__int64 __fastcall std::_Ref_count_obj<PenWorkspace::Discover::AppUsageData>::_Ref_count_obj<PenWorkspace::Discover::AppUsageData>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<PenWorkspace::Discover::AppUsageData>::`vftable';
  memset_0((void *)(a1 + 16), 0, 0x38uLL);
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_WORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_BYTE *)(a1 + 60) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 64));
  return a1;
}
