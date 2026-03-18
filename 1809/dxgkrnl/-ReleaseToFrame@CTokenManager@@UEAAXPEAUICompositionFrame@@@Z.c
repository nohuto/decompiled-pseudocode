/*
 * XREFs of ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00148E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000D988 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C000DC9C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@@@Z @ 0x1C0014C4C (-ReleaseTokensToFrame@CTokenQueue@@QEAA_NPEAVCCompositionFrame@@@Z.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C0014D70 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C00537CC (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C0053904 (-PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentPr.c)
 *     ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C0057788 (-IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z.c)
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0059088 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4Flip.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C00593E0 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 */

void __fastcall CTokenManager::ReleaseToFrame(CTokenManager *this, struct ICompositionFrame *a2)
{
  char v3; // r15
  __int64 v4; // rcx
  bool v6; // r8
  ULONG v7; // edi
  CTokenQueue **i; // r13
  char *v9; // rdi
  CTokenManager **v10; // rsi
  CTokenManager *v11; // rax
  char *v12; // rax
  CTokenManager *v13; // rdi
  CTokenManager *v14; // rsi
  char v15; // r15
  __int64 v16; // rdi
  _QWORD *v17; // rdx
  _QWORD *j; // rcx
  __int64 v19; // rax
  char *v20; // rcx
  struct ICompositionFrame **v21; // rcx
  CTokenManager *v22; // rax
  CTokenManager ***v23; // rax
  __int64 *v24; // rcx
  char **v25; // rcx
  __int64 v26; // rcx
  CTokenManager *v27; // r12
  _QWORD *v28; // r13
  int IsEndpointConnected; // eax
  char v30; // dl
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  struct _LIST_ENTRY *Flink; // r13
  struct _LIST_ENTRY *v34; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct ICompositionFrame **v36; // rcx
  struct FlipManagerObject *v37; // r13
  CTokenManager *v38; // rax
  CTokenManager **v39; // rcx
  __int64 *v40; // [rsp+20h] [rbp-38h] BYREF
  CTokenManager **v41; // [rsp+28h] [rbp-30h]
  struct _LIST_ENTRY v42; // [rsp+30h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v43; // [rsp+90h] [rbp+38h] BYREF
  char v44; // [rsp+98h] [rbp+40h] BYREF
  int v45; // [rsp+A0h] [rbp+48h] BYREF
  struct FlipManagerObject *p_Blink; // [rsp+A8h] [rbp+50h] BYREF

  v3 = 0;
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    v6 = 0;
    if ( *(_QWORD *)(v4 + 2088) == v4 + 16 )
      v6 = *(_DWORD *)(v4 + 32) == 0;
    if ( !v6 )
    {
      *((_QWORD *)a2 + 13) = v4;
      *(_QWORD *)(v4 + 2088) = v4 + 16;
      *(_BYTE *)(v4 + 2108) = 1;
      *((_BYTE *)a2 + 112) = 1;
      *((_QWORD *)this + 23) = 0LL;
    }
  }
  if ( *((_DWORD *)this + 20) )
  {
    v7 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 192)) - 1;
    for ( i = (CTokenQueue **)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), v7);
          i;
          i = (CTokenQueue **)RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), v7) )
    {
      v3 |= CTokenQueue::ReleaseTokensToFrame(i[1], a2);
      if ( *((_DWORD *)i[1] + 6) >= 0x20u )
        CTokenManager::RemoveTokenQueueTableEntry(this, (struct CTokenManager::TokenQueueTableEntry *)i);
      --v7;
    }
  }
  else
  {
    v3 = 1;
  }
  v9 = (char *)this + 264;
  v10 = (CTokenManager **)*((_QWORD *)this + 33);
  v41 = (CTokenManager **)&v40;
  v40 = (__int64 *)&v40;
  if ( v10[1] != (CTokenManager *)((char *)this + 264) )
    goto LABEL_45;
  v11 = *v10;
  if ( *((CTokenManager ***)*v10 + 1) != v10 )
    goto LABEL_45;
  *(_QWORD *)v9 = v11;
  for ( *((_QWORD *)v11 + 1) = v9; v10 != (CTokenManager **)v9; *((_QWORD *)v22 + 1) = v9 )
  {
    if ( (*((int (__fastcall **)(CTokenManager **, struct ICompositionFrame *, struct _LIST_ENTRY **))*(v10 - 1) + 4))(
           v10 - 1,
           a2,
           &v43) < 0 )
    {
      (*((void (__fastcall **)(CTokenManager **))*(v10 - 1) + 7))(v10 - 1);
      ObfDereferenceObject(v10 - 6);
    }
    else if ( (_BYTE)v43 )
    {
      v21 = (struct ICompositionFrame **)*((_QWORD *)a2 + 21);
      if ( *v21 != (struct ICompositionFrame *)((char *)a2 + 160) )
        goto LABEL_45;
      *v10 = (struct ICompositionFrame *)((char *)a2 + 160);
      v10[1] = (CTokenManager *)v21;
      *v21 = (struct ICompositionFrame *)v10;
      *((_QWORD *)a2 + 21) = v10;
    }
    else
    {
      v23 = (CTokenManager ***)v41;
      if ( *v41 != (CTokenManager *)&v40 )
        goto LABEL_45;
      v10[1] = (CTokenManager *)v41;
      *v10 = (CTokenManager *)&v40;
      *v23 = v10;
      v41 = v10;
    }
    v10 = *(CTokenManager ***)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_45;
    v22 = *v10;
    if ( *((CTokenManager ***)*v10 + 1) != v10 )
      goto LABEL_45;
    *(_QWORD *)v9 = v22;
  }
  v12 = (char *)v40;
  if ( v40 == (__int64 *)&v40 )
    goto LABEL_12;
  v24 = (__int64 *)*v40;
  if ( (__int64 **)v40[1] != &v40 || (__int64 *)v24[1] != v40 )
LABEL_45:
    __fastfail(3u);
  v40 = (__int64 *)*v40;
  for ( v24[1] = (__int64)&v40; v12 != (char *)&v40; *(_QWORD *)(v26 + 8) = &v40 )
  {
    v25 = (char **)*((_QWORD *)this + 34);
    if ( *v25 != v9 )
      goto LABEL_45;
    *((_QWORD *)v12 + 1) = v25;
    *(_QWORD *)v12 = v9;
    *v25 = v12;
    *((_QWORD *)this + 34) = v12;
    v12 = (char *)v40;
    if ( (__int64 **)v40[1] != &v40 )
      goto LABEL_45;
    v26 = *v40;
    if ( *(__int64 **)(*v40 + 8) != v40 )
      goto LABEL_45;
    v40 = (__int64 *)*v40;
  }
LABEL_12:
  v13 = (CTokenManager *)((char *)this + 280);
  v14 = (CTokenManager *)*((_QWORD *)this + 35);
  if ( v14 != (CTokenManager *)((char *)this + 280) )
  {
    do
    {
      v27 = v14;
      p_Blink = 0LL;
      v14 = *(CTokenManager **)v14;
      LOBYTE(v43) = 0;
      v28 = (_QWORD *)((char *)v27 - 96);
      if ( (int)FlipManagerTokenObject::GetFlipManagerObjectNoRef((CTokenManager *)((char *)v27 - 96), &p_Blink) < 0 )
        goto LABEL_71;
      IsEndpointConnected = FlipManagerObject::IsEndpointConnected(p_Blink, 1, (bool *)&v43);
      if ( IsEndpointConnected < 0 )
        goto LABEL_71;
      v30 = (char)v43;
      if ( (_BYTE)v43 )
      {
        IsEndpointConnected = FlipManagerObject::IsDwmBound(p_Blink, (bool *)&v43);
        v30 = (char)v43;
      }
      if ( IsEndpointConnected >= 0 && v30 )
      {
        v43 = 0LL;
        if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v28 + 9)) >= 0 )
        {
          v43 = (struct _LIST_ENTRY *)v28[17];
          CPushLock::ReleaseLock((CPushLock *)(v28 + 9));
        }
        v31 = *((_QWORD *)a2 + 5);
        v42.Blink = &v42;
        v42.Flink = &v42;
        if ( (int)FlipManagerApplyDwmConsumerUpdates(
                    v31,
                    (CTokenManager *)((char *)v27 - 96),
                    &v42,
                    (enum FlipPresentProcessResult *)&v45) < 0
          || v45 == 1 )
        {
          continue;
        }
        if ( (unsigned int)(v45 - 2) > 1 )
        {
          while ( 1 )
          {
            Flink = v42.Flink;
            if ( v42.Flink == &v42 )
              break;
            if ( v42.Flink->Blink != &v42 )
              goto LABEL_45;
            v34 = v42.Flink->Flink;
            if ( v42.Flink->Flink->Blink != v42.Flink )
              goto LABEL_45;
            v42.Flink = v42.Flink->Flink;
            v34->Blink = &v42;
            Flink[6].Blink = v43;
            Blink = Flink[-1].Blink;
            p_Blink = (struct FlipManagerObject *)&Flink[-1].Blink;
            if ( ((int (__fastcall *)(struct _LIST_ENTRY **, struct ICompositionFrame *, char *))Blink[2].Flink)(
                   &Flink[-1].Blink,
                   a2,
                   &v44) < 0 )
            {
              v37 = p_Blink;
              (*(void (__fastcall **)(struct FlipManagerObject *))(*(_QWORD *)p_Blink + 56LL))(p_Blink);
              (**(void (__fastcall ***)(struct FlipManagerObject *, __int64))v37)(v37, 1LL);
            }
            else
            {
              v36 = (struct ICompositionFrame **)*((_QWORD *)a2 + 19);
              if ( *v36 != (struct ICompositionFrame *)((char *)a2 + 144) )
                goto LABEL_45;
              Flink->Flink = (struct _LIST_ENTRY *)((char *)a2 + 144);
              Flink->Blink = (struct _LIST_ENTRY *)v36;
              *v36 = (struct ICompositionFrame *)Flink;
              *((_QWORD *)a2 + 19) = Flink;
            }
          }
          v28 = (_QWORD *)((char *)v27 - 96);
        }
        else
        {
          CTokenManager::PostFlipManagerDiscardSummary(v32, (char *)v27 - 96, v43);
        }
        v38 = *(CTokenManager **)v27;
        if ( *(CTokenManager **)(*(_QWORD *)v27 + 8LL) != v27 )
          goto LABEL_45;
        v39 = (CTokenManager **)*((_QWORD *)v27 + 1);
        if ( *v39 != v27 )
          goto LABEL_45;
      }
      else
      {
LABEL_71:
        v38 = *(CTokenManager **)v27;
        if ( *(CTokenManager **)(*(_QWORD *)v27 + 8LL) != v27 )
          goto LABEL_45;
        v39 = (CTokenManager **)*((_QWORD *)v27 + 1);
        if ( *v39 != v27 )
          goto LABEL_45;
      }
      *v39 = v38;
      *((_QWORD *)v38 + 1) = v39;
      ObfDereferenceObject(v28);
    }
    while ( v14 != v13 );
  }
  v15 = (*(_QWORD *)v13 != (_QWORD)v13) | v3;
  v16 = (*(__int64 (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_BYTE *)this + 152) = 1;
  v17 = (_QWORD *)((char *)this + 128);
  *((_QWORD *)this + 15) = v16;
  if ( (_QWORD *)*v17 != v17 )
  {
    for ( j = (_QWORD *)*((_QWORD *)this + 17); j != v17; j = (_QWORD *)j[1] )
    {
      if ( j )
        v19 = (__int64)(j + 9);
      else
        v19 = 80LL;
      *(_QWORD *)v19 = v16;
    }
  }
  v20 = (char *)this + 144;
  if ( *((_BYTE *)this + 152) )
    ExReleasePushLockExclusiveEx(v20, 0LL);
  else
    ExReleasePushLockSharedEx(v20, 0LL);
  if ( !v15 )
    ZwClearEvent(*((HANDLE *)this + 7));
}
