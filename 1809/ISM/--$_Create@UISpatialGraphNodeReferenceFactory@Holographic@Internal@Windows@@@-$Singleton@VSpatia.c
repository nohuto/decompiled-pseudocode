/*
 * XREFs of ??$_Create@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@@?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@CAJPEAPEAUISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@W4Behavior@012@@Z @ 0x18011CB50
 * Callers:
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800B0708 (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ??$MakeAndInitialize@V?$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@V1234@@WRL@Microsoft@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@012@@Z @ 0x18011D718 (--$MakeAndInitialize@V-$Singleton@VSpatialGraphNodeReferenceFactory@Holographic@Internal@Windows.c)
 *     ??$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z @ 0x18011D810 (--$AsWeak@UIInspectable@@@WRL@Microsoft@@YAJPEAUIInspectable@@PEAVWeakRef@01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::_Create<Windows::Internal::Holographic::ISpatialGraphNodeReferenceFactory>(
        _QWORD *a1)
{
  int (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v3; // edi
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rcx
  int (__fastcall ***v5)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  volatile signed __int32 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rcx
  __int128 v15; // [rsp+38h] [rbp-18h]
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+40h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+50h] BYREF
  RTL_SRWLOCK *v18; // [rsp+A8h] [rbp+58h]

  *a1 = 0LL;
  v16 = 0LL;
  AcquireSRWLockShared(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
  v2 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v2)[2])(v2);
  }
  v16 = 0LL;
  if ( Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton )
    v3 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton
                                                            + 24LL))(
           Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v16);
  else
    v3 = 0;
  ReleaseSRWLockShared(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
  v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v16;
  if ( v3 >= 0 )
  {
    if ( v16 )
    {
LABEL_47:
      if ( v3 >= 0 && v4 )
      {
        v3 = (**v4)(v4, &GUID_537f320e_1d62_448c_aa6c_a47a3cf3285a, a1);
        v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v16;
      }
      goto LABEL_50;
    }
    AcquireSRWLockExclusive(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
    v18 = &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton;
    v5 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v5)[2])(v5);
    }
    v16 = 0LL;
    if ( Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, GUID *, _QWORD))(*(_QWORD *)Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton
                                                              + 24LL))(
             Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton,
             &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
             &v16);
      if ( v3 < 0 || v16 )
      {
LABEL_46:
        ReleaseSRWLockExclusive(&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_lockSingleton);
        v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))v16;
        goto LABEL_47;
      }
    }
    v15 = 0LL;
    v6 = *((_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
         + 1);
    if ( *((_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
         + 1) )
    {
      while ( 1 )
      {
        v7 = *(_DWORD *)(v6 + 8);
        if ( !v7 )
          break;
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7) )
        {
          v15 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent;
          break;
        }
      }
    }
    if ( (_QWORD)v15 )
    {
      WaitForSingleObject(*(HANDLE *)(v15 + 8), 0xFFFFFFFF);
      v8 = (volatile signed __int32 *)*((_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
                                      + 1);
      Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent = 0uLL;
      if ( v8 )
      {
        if ( !_InterlockedDecrement(v8 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v3 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>,IInspectable,>(&v16);
    v9 = Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton;
    Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton = 0LL;
    if ( v3 < 0 )
    {
      if ( !v9 )
      {
LABEL_42:
        if ( *((_QWORD *)&v15 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (***((void (__fastcall ****)(_QWORD))&v15 + 1))(*((_QWORD *)&v15 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v15 + 1) + 12LL), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v15 + 1) + 8LL))(*((_QWORD *)&v15 + 1));
          }
        }
        goto LABEL_46;
      }
    }
    else
    {
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v3 = Microsoft::WRL::AsWeak<IInspectable>(
             v16,
             &Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::s_wpSingleton);
      v17 = 0LL;
      if ( (**v16)(v16, &GUID_9082dcb1_33fd_45f0_93e1_9152c2118ee8, &v17) >= 0 )
      {
        v10 = v17;
        v11 = *(volatile signed __int32 **)(v17 + 16);
        if ( v11 )
        {
          _InterlockedIncrement(v11 + 2);
          v11 = *(volatile signed __int32 **)(v10 + 16);
        }
        v12 = *(_QWORD *)(v10 + 8);
        if ( v11 )
          _InterlockedIncrement(v11 + 3);
        *(_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent = v12;
        v13 = (volatile signed __int32 *)*((_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
                                         + 1);
        *((_QWORD *)&Microsoft::WRL::Singleton<Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory,Windows::Internal::Holographic::SpatialGraphNodeReferenceFactory>::m_wpDestructorFinishedEvent
        + 1) = v11;
        if ( v13 && _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
        if ( v11 )
        {
          if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
            if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
          }
        }
      }
      v9 = v17;
      if ( !v17 )
        goto LABEL_42;
      v17 = 0LL;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_42;
  }
LABEL_50:
  if ( v4 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  }
  return (unsigned int)v3;
}
