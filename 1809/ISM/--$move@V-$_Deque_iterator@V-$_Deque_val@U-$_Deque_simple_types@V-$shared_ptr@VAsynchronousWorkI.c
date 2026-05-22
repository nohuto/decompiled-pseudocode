/*
 * XREFs of ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800B5E60
 * Callers:
 *     ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1800B5368 (-erase@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 **__fastcall std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 ***v4; // rdi
  __int64 **v5; // rbx
  __int64 ****v6; // rax
  __int64 *v7; // rax
  __int64 v8; // r8
  __int64 **v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 **v12; // rax
  __int64 v13; // r13
  __int64 *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rbx
  _QWORD *v17; // r8
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  volatile signed __int32 *v21; // rsi

  v4 = 0LL;
  v5 = a1;
  if ( *(_QWORD *)a4 )
  {
    v6 = **(__int64 ******)a4;
    if ( v6 )
      v4 = *v6;
  }
  v7 = 0LL;
  v8 = *(_QWORD *)(a3 + 16);
  if ( *(_QWORD *)a2 )
  {
    v9 = **(__int64 ****)a2;
    if ( v9 )
      v7 = *v9;
  }
  v10 = *(_QWORD *)(a2 + 16);
  if ( v7 )
    v11 = *v7;
  else
    v11 = 0LL;
  if ( v4 && (v12 = *v4) != 0LL && *v12 )
    v13 = **v12;
  else
    v13 = 0LL;
  v14 = *(__int64 **)(a4 + 16);
  if ( v10 != v8 )
  {
    v15 = v10;
    v16 = v8;
    do
    {
      v17 = *(_QWORD **)(*(_QWORD *)(v13 + 8) + 8 * ((unsigned __int64)v14 & (*(_QWORD *)(v13 + 16) - 1LL)));
      v18 = *(__int64 **)(*(_QWORD *)(v11 + 8) + 8 * (v15 & (*(_QWORD *)(v11 + 16) - 1LL)));
      v19 = v18[1];
      v18[1] = 0LL;
      v20 = *v18;
      *v18 = 0LL;
      *v17 = v20;
      v21 = (volatile signed __int32 *)v17[1];
      v17[1] = v19;
      if ( v21 )
      {
        if ( _InterlockedExchangeAdd(v21 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v21)(v21);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v21 + 8LL))(v21);
        }
      }
      v14 = (__int64 *)((char *)v14 + 1);
      ++v15;
    }
    while ( v15 != v16 );
    v5 = a1;
  }
  *v5 = 0LL;
  v5[1] = 0LL;
  if ( v4 && *v4 )
    *v5 = **v4;
  v5[2] = v14;
  return v5;
}
