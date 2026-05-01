/*
 * XREFs of ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@PEAV10@QEAV10@P6A_NAEAV10@2@Z@Z @ 0x180198368
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x180198A2C (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180190528 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::_Insertion_sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int8 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 *i; // rbx
  __int64 *v7; // r14
  __int64 *v8; // rsi
  __int64 v10; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v11; // [rsp+30h] [rbp-28h]

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v7 = i;
      v10 = *i;
      v11 = (std::_Ref_count_base *)i[1];
      *i = 0LL;
      i[1] = 0LL;
      v8 = i;
      if ( a3(&v10, a1) )
      {
        if ( i != a1 )
        {
          do
          {
            v8 -= 2;
            std::shared_ptr<KBViewInfo>::operator=(v8 + 2, v8);
          }
          while ( v8 != a1 );
        }
        v7 = a1;
      }
      else
      {
        while ( 1 )
        {
          v8 -= 2;
          if ( !a3(&v10, v8) )
            break;
          std::shared_ptr<KBViewInfo>::operator=(v7, v8);
          v7 = v8;
        }
      }
      std::shared_ptr<KBViewInfo>::operator=(v7, &v10);
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
    }
  }
  return a2;
}
