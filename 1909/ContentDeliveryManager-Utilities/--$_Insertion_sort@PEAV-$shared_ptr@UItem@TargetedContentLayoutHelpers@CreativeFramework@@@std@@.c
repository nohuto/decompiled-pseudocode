/*
 * XREFs of ??$_Insertion_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A7494
 * Callers:
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A7158 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV.c)
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A7600 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180075744 (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Insertion_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *i; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  double v8; // xmm0_8
  double v9; // xmm1_8
  __int64 *k; // r14
  double v11; // xmm0_8
  double v12; // xmm1_8
  __int64 *j; // rbx
  __int64 v14; // rbx
  __int128 v15; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v5 = i;
      v15 = 0LL;
      if ( &v15 == (__int128 *)i )
      {
        v7 = v15;
      }
      else
      {
        v6 = i[1];
        i[1] = 0LL;
        v7 = *i;
        *i = 0LL;
        *(_QWORD *)&v15 = v7;
        *((_QWORD *)&v15 + 1) = v6;
      }
      v8 = *(double *)(v7 + 32);
      v9 = *(double *)(*a1 + 32);
      if ( v9 > v8 || v8 == v9 && *(double *)(*a1 + 40) > *(double *)(v7 + 40) )
      {
        for ( j = i; j != a1; std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(
                                j + 2,
                                j) )
          j -= 2;
        v5 = a1;
      }
      else
      {
        for ( k = i; ; v5 = k )
        {
          v11 = *(double *)(v7 + 32);
          k -= 2;
          v12 = *(double *)(*k + 32);
          if ( v12 <= v11 && (v11 != v12 || *(double *)(*k + 40) <= *(double *)(v7 + 40)) )
            break;
          std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v5, k);
        }
      }
      std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v5, (__int64 *)&v15);
      if ( *((_QWORD *)&v15 + 1)
        && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v14 = *((_QWORD *)&v15 + 1);
        (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
      }
    }
  }
}
