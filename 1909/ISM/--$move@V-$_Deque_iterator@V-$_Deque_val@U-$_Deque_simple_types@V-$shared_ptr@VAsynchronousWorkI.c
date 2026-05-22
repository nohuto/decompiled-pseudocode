/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800E0164
 * Callers:
 *     ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1800E6BF8 (-erase@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 * Callees:
 *     ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800DFFC8 (--$_Move_unchecked@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_p.c)
 */

_QWORD *__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _OWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD **v11; // rax
  _QWORD *v12; // rax
  _QWORD *result; // rax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v17; // [rsp+50h] [rbp-10h] BYREF

  v4 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
    v4 = (_QWORD *)*v4;
  v16[0] = (__int64)v4;
  v16[1] = *(_QWORD *)(a2 + 16);
  v7 = *(_QWORD **)a3;
  if ( *(_QWORD *)a3 )
    v7 = (_QWORD *)*v7;
  *(_QWORD *)&v15 = v7;
  *((_QWORD *)&v15 + 1) = *(_QWORD *)(a3 + 16);
  v8 = *(_QWORD **)a4;
  if ( *(_QWORD *)a4 )
    v8 = (_QWORD *)*v8;
  *(_QWORD *)&v14 = v8;
  *((_QWORD *)&v14 + 1) = *(_QWORD *)(a4 + 16);
  v9 = std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>(
         &v17,
         v16,
         &v15,
         &v14);
  *a1 = 0LL;
  a1[1] = 0LL;
  v10 = *((_QWORD *)v9 + 1);
  v11 = *(_QWORD ***)a4;
  *(_QWORD *)(a4 + 16) = v10;
  if ( v11 )
  {
    v12 = *v11;
    if ( v12 )
      *a1 = *v12;
  }
  result = a1;
  a1[2] = v10;
  return result;
}
