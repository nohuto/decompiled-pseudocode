/*
 * XREFs of ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AF080
 * Callers:
 *     ?OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AEFB0 (-OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     _lambda_46e712f1d4a8bfe7f662a31e53621789_::operator() @ 0x1800B35CC (_lambda_46e712f1d4a8bfe7f662a31e53621789_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@Z @ 0x1800ABE5C (-SpatialInputController_Removed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKQEB_W@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800AFC34 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1800B5368 (-erase@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800B6A40 (-erase@-$_Tree@V-$_Tmap_traits@_JV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractio.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval(
        __int64 a1,
        RTL_SRWLOCK **a2,
        unsigned int a3,
        char a4,
        __int64 a5)
{
  RTL_SRWLOCK *v7; // rdi
  RTL_SRWLOCK *v8; // rbx
  RTL_SRWLOCK *v9; // rcx
  bool v10; // r15
  RTL_SRWLOCK *v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  RTL_SRWLOCK *v16; // r13
  __int64 v17; // rdx
  _QWORD ****v18; // rbx
  _QWORD ***v19; // rax
  _QWORD *v20; // rcx
  _QWORD **v22; // rcx
  _QWORD **v23; // rax
  _QWORD *v24; // rax
  __int64 *v25; // rdi
  __int64 *v26; // rbx
  _QWORD *v27; // r15
  __int64 v28; // r9
  int v29; // eax
  __int64 **v30; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  int v33; // eax
  const WCHAR *v34; // rbx
  _DWORD *v35; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v36; // rcx
  __int64 *v37; // rdx
  __int64 *v38; // rcx
  __int64 *v39; // r8
  int v41[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v42; // [rsp+30h] [rbp-D0h]
  __int128 v43; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-B0h]
  __int128 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h]
  __int64 v47; // [rsp+70h] [rbp-90h]
  __int64 v48; // [rsp+78h] [rbp-88h]
  char v49[8]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v50[8]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v51[8]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v52[8]; // [rsp+108h] [rbp+8h] BYREF
  __int128 v53; // [rsp+148h] [rbp+48h]
  __int128 v54; // [rsp+158h] [rbp+58h]
  char v55; // [rsp+168h] [rbp+68h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]
  char v57; // [rsp+1C0h] [rbp+C0h]
  unsigned int Ptr; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int v59; // [rsp+1D0h] [rbp+D0h] BYREF
  char v60; // [rsp+1D8h] [rbp+D8h]

  v60 = a4;
  v59 = a3;
  v47 = -2LL;
  v7 = *a2;
  v8 = *a2 + 10;
  v9 = (RTL_SRWLOCK *)((unsigned __int64)v8 & -(__int64)(TryAcquireSRWLockShared(v8) != 0));
  v10 = v9 && v7[11].Ptr;
  if ( v9 )
    ReleaseSRWLockShared(v9);
  v57 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *))(*a2)->Ptr + 5))(*a2);
  v11 = *a2;
  Ptr = (unsigned int)(*a2)[1].Ptr;
  LOBYTE(v11[13].Ptr) = 1;
  (*((void (__fastcall **)(RTL_SRWLOCK *))v11->Ptr + 15))(v11);
  *(_QWORD *)v41 = &Ptr;
  *(_QWORD *)&v41[2] = a2;
  *(_QWORD *)&v42 = a1;
  *((_QWORD *)&v42 + 1) = &v59;
  v53 = *(_OWORD *)v41;
  v54 = v42;
  v55 = 1;
  v12 = a5;
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11D,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v13);
  v50[0] = off_18013E4C8;
  v50[1] = a1;
  v50[7] = v50;
  v14 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
          a1,
          a2,
          v50,
          0LL);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x131,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v14);
  v15 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, __int64, __int64))(*a2)->Ptr + 19))(*a2, 5LL, v12);
  if ( v15 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v15);
  v16 = *a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  v17 = *(_QWORD *)(a1 + 568);
  v18 = *(_QWORD *****)(a1 + 544);
  while ( v17 != *(_QWORD *)(a1 + 568) + *(_QWORD *)(a1 + 576) )
  {
    if ( v18 )
      v19 = *v18;
    else
      v19 = 0LL;
    v20 = v19[1][v17 & ((unsigned __int64)v19[2] - 1)];
    if ( *(RTL_SRWLOCK **)*v20 == v16 && *(_BYTE *)(*v20 + 80LL) )
    {
      v22 = 0LL;
      if ( v18 && *v18 )
        v22 = **v18;
      v23 = 0LL;
      if ( v22 && *v22 )
        v23 = (_QWORD **)**v22;
      v43 = 0LL;
      if ( v23 )
      {
        v24 = *v23;
        if ( v24 )
          *(_QWORD *)&v43 = *v24;
      }
      v44 = v17 + 1;
      v45 = 0LL;
      if ( v22 && *v22 )
        *(_QWORD *)&v45 = **v22;
      v46 = v17;
      std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::erase(
        a1 + 544,
        v41,
        &v45,
        &v43);
      if ( v18 != *(_QWORD *****)v41 && *(_QWORD *)v41 )
      {
        if ( **(_QWORD **)v41 )
          v18 = ***(_QWORD *******)v41;
      }
      v17 = v42;
    }
    else
    {
      ++v17;
    }
  }
  if ( a1 != -496 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  if ( v60 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 440));
    v48 = a1 + 440;
    if ( v10 )
    {
      v25 = *(__int64 **)(a1 + 480);
      v26 = (__int64 *)*v25;
      while ( v26 != v25 )
      {
        v27 = v26 + 5;
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v26[5] + 72LL))(v26[5]) )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v27 + 32LL))(*v27) )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v27 + 40LL))(*v27) )
            {
              v51[0] = off_18013E180;
              v51[1] = a1;
              v51[7] = v51;
              LOBYTE(v28) = 1;
              v29 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                      a1,
                      v26 + 5,
                      v51,
                      v28);
              if ( v29 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x150,
                  (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevi"
                           "cecollection.cpp",
                  (const char *)(unsigned int)v29);
            }
          }
        }
        if ( !*((_BYTE *)v26 + 25) )
        {
          v30 = (__int64 **)v26[2];
          if ( *((_BYTE *)v30 + 25) )
          {
            for ( i = (__int64 *)v26[1]; !*((_BYTE *)i + 25) && v26 == (__int64 *)i[2]; i = (__int64 *)i[1] )
              v26 = i;
            v26 = i;
          }
          else
          {
            v26 = (__int64 *)v26[2];
            for ( j = *v30; !*((_BYTE *)j + 25); j = (__int64 *)*j )
              v26 = j;
          }
        }
      }
    }
    if ( v57 )
    {
      v52[0] = off_18013E318;
      v52[1] = a1;
      v52[7] = v52;
      v33 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
              a1,
              a2,
              v52,
              0LL);
      if ( v33 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15D,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v33);
    }
    if ( a1 != -440 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 440));
  }
  v34 = (const WCHAR *)(*(__int64 (__fastcall **)(RTL_SRWLOCK *))(*a2)->Ptr)(*a2);
  v35 = (_DWORD *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
  if ( v35 && *v35 )
  {
    SpatialInteractionDevices::SpatialInteractionTrace::Instance();
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialInputController_Removed_(v36, Ptr, v34);
  }
  a5 = __PAIR64__(Ptr, v59);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 440));
  v37 = *(__int64 **)(a1 + 480);
  v38 = (__int64 *)v37[1];
  v39 = v37;
  if ( *((_BYTE *)v38 + 25) )
    goto LABEL_77;
  do
  {
    if ( v38[4] >= a5 )
    {
      v39 = v38;
      v38 = (__int64 *)*v38;
    }
    else
    {
      v38 = (__int64 *)v38[2];
    }
  }
  while ( !*((_BYTE *)v38 + 25) );
  if ( v39 == v37 || a5 < v39[4] )
LABEL_77:
    v39 = *(__int64 **)(a1 + 480);
  if ( v39 == v37 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C0,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
    if ( a1 != -440 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 440));
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x11A,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::erase(
      a1 + 480,
      v49);
    if ( a1 != -440 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 440));
  }
  return 0LL;
}
