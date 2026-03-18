/*
 * XREFs of ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0007910
 * Callers:
 *     ?DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0007FC4 (-DxgkQuerySwapChainBindingStatus@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0012460 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FC9E0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall NotifyPendingCompositionBuffersPresent(int a1, struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  void *FenceValue; // rbp
  NTSTATUS v5; // edi
  int v6; // eax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v8; // rsi
  int v9; // ebx
  _QWORD **v10; // rbx
  NTSTATUS v11; // eax
  _QWORD **v12; // rsi
  bool v13; // sf
  _QWORD **v14; // rcx
  char v15; // bp
  struct _KPROCESS *v16; // rsi
  _QWORD *v17; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  void *Handle; // [rsp+40h] [rbp-78h] BYREF
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  _KAPC_STATE ApcState; // [rsp+50h] [rbp-68h] BYREF

  FenceValue = (void *)a2->Token.Flip.FenceValue;
  Handle = 0LL;
  v5 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v19 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v19 + 24) = 2201LL;
    WdLogEvent5_WdAssertion(v19);
  }
  (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 208LL))();
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v20 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v20 + 24) = 2201LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v6 = (*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 240LL))();
  if ( !a1 || v6 )
    goto LABEL_59;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v21 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v21 + 24) = 2201LL;
    WdLogEvent5_WdAssertion(v21);
  }
  SessionData = DXGGLOBAL::GetSessionData((DXGGLOBAL *)DXGGLOBAL::m_pGlobal);
  if ( !SessionData )
    goto LABEL_59;
  v8 = *((_QWORD *)SessionData + 2339);
  if ( !v8 )
    goto LABEL_59;
  (**(void (__fastcall ***)(_QWORD))v8)(*((_QWORD *)SessionData + 2339));
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 176LL))(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  if ( !v9 )
    goto LABEL_59;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v22 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v22 + 24) = 2201LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 224LL))() )
LABEL_59:
    v5 = -1071775730;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v23 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v23 + 24) = 2201LL;
    WdLogEvent5_WdAssertion(v23);
  }
  (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 256LL))();
  if ( v5 < 0 )
    return (unsigned int)v5;
  v10 = 0LL;
  v11 = ObReferenceObjectByHandle(FenceValue, 2u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v12 = (_QWORD **)Object;
  v5 = v11;
  if ( v11 < 0 )
    goto LABEL_63;
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD *))(*v12[2] + 16LL))(v12[2]) == 2 )
      v10 = v12;
    else
      v5 = -1073741788;
  }
  else
  {
    v5 = -1073741816;
  }
  v13 = v5 < 0;
  if ( v5 < 0 )
  {
    ObfDereferenceObject(v12);
LABEL_63:
    v13 = v5 < 0;
  }
  if ( v13 )
    v10 = 0LL;
  if ( v5 >= 0 )
  {
    v5 = 0;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v10[9])(v10 + 9) )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v10 + 10, 0LL);
      if ( ((unsigned __int8 (__fastcall *)(_QWORD **))*v10[9])(v10 + 9) )
        goto LABEL_28;
      CPushLock::ReleaseLock((CPushLock *)(v10 + 9));
    }
    v5 = -1073741816;
LABEL_28:
    if ( v5 >= 0 )
    {
      if ( *((_DWORD *)v10 + 16) )
        v5 = -1073741823;
      else
        ((void (__fastcall *)(_QWORD **))v10[5][2])(v10 + 5);
      v14 = v10 + 10;
      if ( KeGetCurrentThread() == (struct _KTHREAD *)v10[11] )
      {
        v10[11] = 0LL;
        ExReleasePushLockExclusiveEx(v14, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v14, 0LL);
      }
      KeLeaveCriticalRegion();
      if ( v5 >= 0 )
      {
        Handle = (void *)-1LL;
        v15 = 0;
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v24 = WdLogNewEntry5_WdAssertion();
          *(_QWORD *)(v24 + 24) = 2201LL;
          WdLogEvent5_WdAssertion(v24);
        }
        if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 232LL))() )
        {
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v25 = WdLogNewEntry5_WdAssertion();
            *(_QWORD *)(v25 + 24) = 2201LL;
            WdLogEvent5_WdAssertion(v25);
          }
          if ( !(*(unsigned int (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 136LL))() )
          {
            if ( !DXGGLOBAL::m_pGlobal )
            {
              v26 = WdLogNewEntry5_WdAssertion();
              *(_QWORD *)(v26 + 24) = 2201LL;
              WdLogEvent5_WdAssertion(v26);
            }
            (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 144LL))();
            v15 = 1;
          }
        }
        if ( !DXGGLOBAL::m_pGlobal )
        {
          v27 = WdLogNewEntry5_WdAssertion();
          *(_QWORD *)(v27 + 24) = 2201LL;
          WdLogEvent5_WdAssertion(v27);
        }
        v16 = (struct _KPROCESS *)(*(__int64 (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 272LL))();
        if ( v16 )
        {
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(v16, &ApcState);
          v5 = ObOpenObjectByPointer(v10, 0x40u, 0LL, 3u, g_pDxgkCompositionObjectType, 0, &Handle);
          KeUnstackDetachProcess(&ApcState);
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v28 = WdLogNewEntry5_WdAssertion();
            *(_QWORD *)(v28 + 24) = 2201LL;
            WdLogEvent5_WdAssertion(v28);
          }
          (*(void (__fastcall **)(struct _KPROCESS *))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 200LL))(v16);
        }
        else
        {
          v5 = -1073741823;
        }
        if ( v15 )
        {
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v29 = WdLogNewEntry5_WdAssertion();
            *(_QWORD *)(v29 + 24) = 2201LL;
            WdLogEvent5_WdAssertion(v29);
          }
          (*(void (**)(void))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 184LL))();
        }
        if ( v5 >= 0 )
        {
          v17 = v10[15];
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v30 = WdLogNewEntry5_WdAssertion();
            *(_QWORD *)(v30 + 24) = 2201LL;
            WdLogEvent5_WdAssertion(v30);
          }
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*((_QWORD *)DXGGLOBAL::m_pGlobal + 38000) + 32LL))(v17, 0LL);
          a2->Token.Flip.FenceValue = (UINT64)Handle;
        }
      }
    }
    ObfDereferenceObject(v10);
  }
  return (unsigned int)v5;
}
