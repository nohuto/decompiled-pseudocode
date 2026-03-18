/*
 * XREFs of ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C000E840
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C000ECE0 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C000F948 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0011C50 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0011CC0 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     _CTokenManager::ReleaseFlipManagerTokensToFrame_::_2_::TokentokenEventTracker::_TokentokenEventTracker @ 0x1C0059CF0 (_CTokenManager--ReleaseFlipManagerTokensToFrame_--_2_--TokentokenEventTracker--_TokentokenEventT.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x1C005A15C (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ?GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z @ 0x1C005A1B4 (-GetPresentId@FlipManagerTokenObject@@QEAAJPEA_K@Z.c)
 *     ?PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentProcessResult@@@Z @ 0x1C005A294 (-PostFlipManagerDiscardSummary@CTokenManager@@IEAAJPEAUFlipManagerTokenObject@@_KW4FlipPresentPr.c)
 *     ?IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z @ 0x1C005E840 (-IsEndpointConnected@FlipManagerObject@@QEAAJ_NPEA_N@Z.c)
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060138 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4Flip.c)
 *     ?IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z @ 0x1C0060490 (-IsDwmBound@FlipManagerObject@@QEAAJPEA_N@Z.c)
 */

void __fastcall CTokenManager::ReleaseToFrame(CTokenManager *this, struct ICompositionFrame *a2)
{
  char v3; // r12
  __int64 v4; // rcx
  bool v6; // r8
  ULONG v7; // ebx
  struct CTokenManager::TokenQueueTableEntry *i; // r15
  char *v9; // rbx
  CTokenManager **v10; // rsi
  CTokenManager *v11; // rax
  char *v12; // rax
  CTokenManager *v13; // rsi
  CTokenManager *v14; // r15
  char v15; // r12
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  _QWORD *j; // rcx
  __int64 v19; // rax
  char *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r13
  _QWORD *v23; // rcx
  bool v24; // zf
  CompositionSurfaceObject **v25; // rcx
  struct ICompositionFrame **v26; // rcx
  _QWORD *v27; // rcx
  struct ICompositionFrame **v28; // rcx
  CTokenManager *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rcx
  CTokenManager ***v32; // rax
  char *v33; // rcx
  char **v34; // rcx
  char *v35; // rcx
  struct FlipManagerObject *v36; // r13
  CTokenManager *v37; // r13
  unsigned __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v42; // rbx
  int IsEndpointConnected; // eax
  char v44; // dl
  unsigned __int64 v45; // rcx
  __int64 v46; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v48; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct ICompositionFrame **v50; // rcx
  struct FlipManagerObject *v51; // rbx
  CTokenManager *v52; // rax
  CTokenManager **v53; // rcx
  char *v54; // [rsp+20h] [rbp-58h] BYREF
  CTokenManager **v55; // [rsp+28h] [rbp-50h]
  struct _LIST_ENTRY v56; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v57; // [rsp+40h] [rbp-38h] BYREF
  int v58; // [rsp+48h] [rbp-30h]
  unsigned __int64 v59; // [rsp+A0h] [rbp+28h] BYREF
  char v60; // [rsp+A8h] [rbp+30h] BYREF
  __int64 v61; // [rsp+B0h] [rbp+38h] BYREF
  struct FlipManagerObject *p_Blink; // [rsp+B8h] [rbp+40h] BYREF

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
    for ( i = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                              (PRTL_GENERIC_TABLE)((char *)this + 192),
                                                              v7);
          i;
          i = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                              (PRTL_GENERIC_TABLE)((char *)this + 192),
                                                              v7) )
    {
      v21 = *((_QWORD *)i + 1);
      v61 = v21;
      LOBYTE(v59) = 0;
      if ( *(_QWORD *)v21 != v21 )
      {
        v22 = *(_QWORD *)(v21 + 8);
        if ( *(_QWORD *)v22 != v21 )
          goto LABEL_65;
        v23 = *(_QWORD **)(v22 + 8);
        if ( *v23 != v22 )
          goto LABEL_65;
        *(_QWORD *)(v21 + 8) = v23;
        *v23 = v21;
        if ( v22 == v21 )
          goto LABEL_48;
        while ( 1 )
        {
          v24 = *(_QWORD *)(v21 + 16) == 0LL;
          v25 = (CompositionSurfaceObject **)(v22 - 8);
          p_Blink = (struct FlipManagerObject *)(v22 - 8);
          if ( !v24 )
          {
            CompositionSurfaceObject::SetSyncRefreshCount(v25[4], 0);
            v25 = (CompositionSurfaceObject **)(v22 - 8);
            if ( *(_QWORD *)(v61 + 16) == v22 - 8 )
              *(_QWORD *)(v61 + 16) = 0LL;
          }
          if ( (*((int (__fastcall **)(CompositionSurfaceObject **, struct ICompositionFrame *, char *))*v25 + 4))(
                 v25,
                 a2,
                 &v60) < 0 )
          {
            v36 = p_Blink;
            (*(void (__fastcall **)(struct FlipManagerObject *))(*(_QWORD *)p_Blink + 56LL))(p_Blink);
            (**(void (__fastcall ***)(struct FlipManagerObject *, __int64))v36)(v36, 1LL);
          }
          else
          {
            if ( !v60 )
            {
              if ( *(_DWORD *)(v22 + 16) == 2 )
                LOBYTE(v59) = 1;
              v30 = v61;
              v31 = *(_QWORD **)(v61 + 8);
              if ( *v31 == v61 )
              {
                *(_QWORD *)v22 = v61;
                *(_QWORD *)(v22 + 8) = v31;
                *v31 = v22;
                *(_QWORD *)(v30 + 8) = v22;
                goto LABEL_48;
              }
LABEL_65:
              __fastfail(3u);
            }
            v26 = (struct ICompositionFrame **)*((_QWORD *)a2 + 19);
            if ( *v26 != (struct ICompositionFrame *)((char *)a2 + 144) )
              goto LABEL_65;
            *(_QWORD *)v22 = (char *)a2 + 144;
            *(_QWORD *)(v22 + 8) = v26;
            *v26 = (struct ICompositionFrame *)v22;
            *((_QWORD *)a2 + 19) = v22;
          }
          v21 = v61;
          v22 = *(_QWORD *)(v61 + 8);
          if ( *(_QWORD *)v22 != v61 )
            goto LABEL_65;
          v27 = *(_QWORD **)(v22 + 8);
          if ( *v27 != v22 )
            goto LABEL_65;
          *(_QWORD *)(v61 + 8) = v27;
          *v27 = v21;
          if ( v22 == v21 )
            goto LABEL_48;
        }
      }
      ++*(_DWORD *)(v21 + 24);
LABEL_48:
      v3 |= v59;
      if ( *(_DWORD *)(*((_QWORD *)i + 1) + 24LL) >= 0x20u )
        CTokenManager::RemoveTokenQueueTableEntry(this, i);
      --v7;
    }
  }
  else
  {
    v3 = 1;
  }
  v9 = (char *)this + 264;
  v10 = (CTokenManager **)*((_QWORD *)this + 33);
  v55 = (CTokenManager **)&v54;
  v54 = (char *)&v54;
  if ( v10[1] != (CTokenManager *)((char *)this + 264) )
    goto LABEL_65;
  v11 = *v10;
  if ( *((CTokenManager ***)*v10 + 1) != v10 )
    goto LABEL_65;
  *(_QWORD *)v9 = v11;
  for ( *((_QWORD *)v11 + 1) = v9; v10 != (CTokenManager **)v9; *((_QWORD *)v29 + 1) = v9 )
  {
    if ( (*((int (__fastcall **)(CTokenManager **, struct ICompositionFrame *, unsigned __int64 *))*(v10 - 1) + 4))(
           v10 - 1,
           a2,
           &v59) < 0 )
    {
      (*((void (__fastcall **)(CTokenManager **))*(v10 - 1) + 7))(v10 - 1);
      ObfDereferenceObject(v10 - 6);
    }
    else if ( (_BYTE)v59 )
    {
      v28 = (struct ICompositionFrame **)*((_QWORD *)a2 + 21);
      if ( *v28 != (struct ICompositionFrame *)((char *)a2 + 160) )
        goto LABEL_65;
      *v10 = (struct ICompositionFrame *)((char *)a2 + 160);
      v10[1] = (CTokenManager *)v28;
      *v28 = (struct ICompositionFrame *)v10;
      *((_QWORD *)a2 + 21) = v10;
    }
    else
    {
      v32 = (CTokenManager ***)v55;
      if ( *v55 != (CTokenManager *)&v54 )
        goto LABEL_65;
      v10[1] = (CTokenManager *)v55;
      *v10 = (CTokenManager *)&v54;
      *v32 = v10;
      v55 = v10;
    }
    v10 = *(CTokenManager ***)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 )
      goto LABEL_65;
    v29 = *v10;
    if ( *((CTokenManager ***)*v10 + 1) != v10 )
      goto LABEL_65;
    *(_QWORD *)v9 = v29;
  }
  v12 = v54;
  if ( v54 != (char *)&v54 )
  {
    v33 = *(char **)v54;
    if ( *((char ***)v54 + 1) != &v54 || *((char **)v33 + 1) != v54 )
      goto LABEL_65;
    v54 = *(char **)v54;
    for ( *((_QWORD *)v33 + 1) = &v54; v12 != (char *)&v54; *((_QWORD *)v35 + 1) = &v54 )
    {
      v34 = (char **)*((_QWORD *)this + 34);
      if ( *v34 != v9 )
        goto LABEL_65;
      *((_QWORD *)v12 + 1) = v34;
      *(_QWORD *)v12 = v9;
      *v34 = v12;
      *((_QWORD *)this + 34) = v12;
      v12 = v54;
      if ( *((char ***)v54 + 1) != &v54 )
        goto LABEL_65;
      v35 = *(char **)v54;
      if ( *(char **)(*(_QWORD *)v54 + 8LL) != v54 )
        goto LABEL_65;
      v54 = *(char **)v54;
    }
  }
  v13 = (CTokenManager *)((char *)this + 280);
  v14 = (CTokenManager *)*((_QWORD *)this + 35);
  if ( v14 != (CTokenManager *)((char *)this + 280) )
  {
    do
    {
      v37 = v14;
      v59 = 0LL;
      v14 = *(CTokenManager **)v14;
      FlipManagerTokenObject::GetPresentId((CTokenManager *)((char *)v37 - 96), &v59);
      v38 = v59;
      v57 = v59;
      v58 = -1;
      Global = DXGGLOBAL::GetGlobal(v40, v39);
      (*(void (__fastcall **)(unsigned __int64))(*((_QWORD *)Global + 38000) + 88LL))(v38);
      v42 = (_QWORD *)((char *)v37 - 96);
      p_Blink = 0LL;
      LOBYTE(v59) = 0;
      if ( (int)FlipManagerTokenObject::GetFlipManagerObjectNoRef((CTokenManager *)((char *)v37 - 96), &p_Blink) < 0 )
        goto LABEL_92;
      IsEndpointConnected = FlipManagerObject::IsEndpointConnected(p_Blink, 1, (bool *)&v59);
      if ( IsEndpointConnected < 0 )
        goto LABEL_92;
      v44 = v59;
      if ( (_BYTE)v59 )
      {
        IsEndpointConnected = FlipManagerObject::IsDwmBound(p_Blink, (bool *)&v59);
        v44 = v59;
      }
      if ( IsEndpointConnected >= 0 && v44 )
      {
        v59 = 0LL;
        if ( (int)CPushLock::AcquireLockShared((CPushLock *)(v42 + 9)) >= 0 )
        {
          v59 = v42[17];
          CPushLock::ReleaseLock((CPushLock *)(v42 + 9));
        }
        v45 = *((_QWORD *)a2 + 5);
        v56.Blink = &v56;
        v56.Flink = &v56;
        if ( (int)FlipManagerApplyDwmConsumerUpdates(
                    v45,
                    (CTokenManager *)((char *)v37 - 96),
                    &v56,
                    (enum FlipPresentProcessResult *)&v61) < 0 )
          goto LABEL_95;
        v58 = v61;
        if ( (_DWORD)v61 == 1 )
          goto LABEL_95;
        if ( (unsigned int)(v61 - 2) > 1 )
        {
          while ( 1 )
          {
            Flink = v56.Flink;
            if ( v56.Flink == &v56 )
              break;
            if ( v56.Flink->Blink != &v56 )
              goto LABEL_65;
            v48 = v56.Flink->Flink;
            if ( v56.Flink->Flink->Blink != v56.Flink )
              goto LABEL_65;
            v56.Flink = v56.Flink->Flink;
            v48->Blink = &v56;
            Flink[6].Blink = (struct _LIST_ENTRY *)v59;
            Blink = Flink[-1].Blink;
            p_Blink = (struct FlipManagerObject *)&Flink[-1].Blink;
            if ( ((int (__fastcall *)(struct _LIST_ENTRY **, struct ICompositionFrame *, char *))Blink[2].Flink)(
                   &Flink[-1].Blink,
                   a2,
                   &v60) < 0 )
            {
              v51 = p_Blink;
              (*(void (__fastcall **)(struct FlipManagerObject *))(*(_QWORD *)p_Blink + 56LL))(p_Blink);
              (**(void (__fastcall ***)(struct FlipManagerObject *, __int64))v51)(v51, 1LL);
            }
            else
            {
              v50 = (struct ICompositionFrame **)*((_QWORD *)a2 + 19);
              if ( *v50 != (struct ICompositionFrame *)((char *)a2 + 144) )
                goto LABEL_65;
              Flink->Flink = (struct _LIST_ENTRY *)((char *)a2 + 144);
              Flink->Blink = (struct _LIST_ENTRY *)v50;
              *v50 = (struct ICompositionFrame *)Flink;
              *((_QWORD *)a2 + 19) = Flink;
            }
          }
          v42 = (_QWORD *)((char *)v37 - 96);
        }
        else
        {
          CTokenManager::PostFlipManagerDiscardSummary(v46, (char *)v37 - 96, v59);
        }
        v52 = *(CTokenManager **)v37;
        if ( *(CTokenManager **)(*(_QWORD *)v37 + 8LL) != v37 )
          goto LABEL_65;
        v53 = (CTokenManager **)*((_QWORD *)v37 + 1);
        if ( *v53 != v37 )
          goto LABEL_65;
      }
      else
      {
LABEL_92:
        v52 = *(CTokenManager **)v37;
        if ( *(CTokenManager **)(*(_QWORD *)v37 + 8LL) != v37 )
          goto LABEL_65;
        v53 = (CTokenManager **)*((_QWORD *)v37 + 1);
        if ( *v53 != v37 )
          goto LABEL_65;
      }
      *v53 = v52;
      *((_QWORD *)v52 + 1) = v53;
      ObfDereferenceObject(v42);
LABEL_95:
      CTokenManager::ReleaseFlipManagerTokensToFrame_::_2_::TokentokenEventTracker::_TokentokenEventTracker(&v57);
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
