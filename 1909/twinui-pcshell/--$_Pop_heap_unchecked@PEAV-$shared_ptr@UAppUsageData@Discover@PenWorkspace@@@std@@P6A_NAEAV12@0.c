/*
 * XREFs of ??$_Pop_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV10@1@Z@Z @ 0x1801FEB40
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x1801FEBE8 (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F6438 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??$_Pop_heap_hole_by_index@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V12@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@_J1$$QEAV10@P6A_NAEAV10@3@Z@Z @ 0x1801FEA24 (--$_Pop_heap_hole_by_index@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V12@P6A_N.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Pop_heap_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        __int64 a2,
        unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  char *v5; // rbx
  __int64 v6; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+40h] [rbp-18h]

  if ( (__int64)((a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL) >= 32 )
  {
    v5 = (char *)(a2 - 16);
    v6 = *(_QWORD *)(a2 - 16);
    v7 = *(std::_Ref_count_base **)(a2 - 16 + 8);
    *(_QWORD *)v5 = 0LL;
    *((_QWORD *)v5 + 1) = 0LL;
    std::shared_ptr<KBViewInfo>::operator=((_QWORD *)(a2 - 16), a1);
    std::_Pop_heap_hole_by_index<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,std::shared_ptr<PenWorkspace::Discover::AppUsageData>,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      (__int64)a1,
      0LL,
      (v5 - (char *)a1) >> 4,
      &v6,
      a3);
    if ( v7 )
      std::_Ref_count_base::_Decref(v7);
  }
}
