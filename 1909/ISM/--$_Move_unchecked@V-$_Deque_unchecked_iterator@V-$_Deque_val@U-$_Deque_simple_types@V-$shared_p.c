/*
 * XREFs of ??$_Move_unchecked@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800DFFC8
 * Callers:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800E0164 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_ptr@VAsynchronousWorkI.c)
 * Callees:
 *     ??4?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180093E4C (--4-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAAEAV01@.c)
 */

_OWORD *__fastcall std::_Move_unchecked<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>(
        _OWORD *a1,
        __int64 *a2,
        __int128 *a3,
        __int128 *a4)
{
  __int64 v5; // rsi
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // rdi
  _OWORD *result; // rax
  __int128 v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+40h] [rbp-18h]

  v10 = *a4;
  v5 = *((_QWORD *)a4 + 1);
  v6 = *(_QWORD *)a4;
  v8 = a2[1];
  v7 = *a2;
  v11 = *a3;
  while ( v8 != *((_QWORD *)&v11 + 1) )
    std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::operator=(
      *(_QWORD **)(*(_QWORD *)(v6 + 8) + 8 * (v5++ & (*(_QWORD *)(v6 + 16) - 1LL))),
      *(__int64 **)(*(_QWORD *)(v7 + 8) + 8 * (v8++ & (*(_QWORD *)(v7 + 16) - 1LL))));
  result = a1;
  *((_QWORD *)&v10 + 1) = v5;
  *a1 = v10;
  return result;
}
