/*
 * XREFs of ??$_Merge@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@PEAV12@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@000V10@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A8DCC
 * Callers:
 *     ??$_Buffered_merge_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800A7D14 (--$_Buffered_merge_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@Creativ_ea_1800A7D14.c)
 * Callees:
 *     ??4?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180075744 (--4-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAAAEAV01@$$QEAV01@.c)
 *     ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800A6D90 (--1-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 *     ??$_Move@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@YA?AV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0V10@@Z @ 0x1800A8440 (--$_Move@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$_Temp_i.c)
 */

_QWORD *__fastcall std::_Merge<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 *v8; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  char v12; // al
  char v13; // r8
  __int64 v14; // rcx
  __int64 *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-58h] BYREF
  __int128 v22; // [rsp+30h] [rbp-48h]
  __int64 v23; // [rsp+40h] [rbp-38h]
  _QWORD *v24[5]; // [rsp+48h] [rbp-30h] BYREF

  v8 = a2;
  while ( v8 != a3 )
  {
    if ( a4 == a5 )
      break;
    v10 = *a4;
    v11 = *v8;
    v12 = *(_BYTE *)(*a4 + 16);
    v13 = *(_BYTE *)(*v8 + 16);
    if ( v12 )
    {
      if ( v13 )
        v12 = *(double *)(v11 + 24) > *(double *)(v10 + 24);
    }
    else if ( !v13 )
    {
      v12 = *(_DWORD *)(v10 + 20) < *(_DWORD *)(v11 + 20);
    }
    v14 = *(_QWORD *)(a6 + 32);
    v15 = *(__int64 **)(v14 + 8);
    if ( v12 )
    {
      if ( (unsigned __int64)v15 >= *(_QWORD *)(v14 + 16) )
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        if ( v15 != a4 )
        {
          v15[1] = a4[1];
          a4[1] = 0LL;
          v16 = *v15;
          *v15 = *a4;
          *a4 = v16;
        }
        v17 = *(_QWORD *)(a6 + 32);
        *(_QWORD *)(v17 + 8) += 16LL;
        *(_QWORD *)(*(_QWORD *)(a6 + 32) + 16LL) = *(_QWORD *)(v17 + 8);
      }
      else
      {
        *(_QWORD *)(v14 + 8) = v15 + 2;
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v15, a4);
      }
      a4 += 2;
    }
    else
    {
      if ( (unsigned __int64)v15 >= *(_QWORD *)(v14 + 16) )
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        if ( v15 != v8 )
        {
          v15[1] = v8[1];
          v8[1] = 0LL;
          v18 = *v15;
          *v15 = *v8;
          *v8 = v18;
        }
        v19 = *(_QWORD *)(a6 + 32);
        *(_QWORD *)(v19 + 8) += 16LL;
        *(_QWORD *)(*(_QWORD *)(a6 + 32) + 16LL) = *(_QWORD *)(v19 + 8);
      }
      else
      {
        *(_QWORD *)(v14 + 8) = v15 + 2;
        std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::operator=(v15, v8);
      }
      v8 += 2;
    }
  }
  v23 = *(_QWORD *)(a6 + 32);
  v21 = 0LL;
  v22 = 0LL;
  *(_QWORD *)(a6 + 32) = std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
                           v24,
                           v8,
                           a3,
                           (__int64)&v21)[4];
  std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(v24);
  v23 = *(_QWORD *)(a6 + 32);
  v21 = 0LL;
  v22 = 0LL;
  std::_Move<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>>(
    a1,
    a4,
    a5,
    (__int64)&v21);
  std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>((_QWORD **)a6);
  return a1;
}
