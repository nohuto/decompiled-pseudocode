/*
 * XREFs of xxxDoPaint @ 0x1C0030450
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C0030A40 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ExchangeW32ThreadLock @ 0x1C00CFCC8 (ExchangeW32ThreadLock.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     _IsChild @ 0x1C0154384 (_IsChild.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     xxxCompositedPaint @ 0x1C02230E0 (xxxCompositedPaint.c)
 */

__int64 __fastcall xxxDoPaint(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 *v5; // rbx
  __int64 v6; // rax
  _QWORD *i; // rdi
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct tagWND *v15; // rcx
  struct tagWND *v16; // rax
  __int64 v17; // rax
  int v18; // r15d
  char v19; // cl
  int v20; // ebp
  int v21; // esi
  int v22; // r14d
  unsigned int *v23; // rax
  int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r8d
  unsigned int v28; // esi
  void *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // ebp
  int v33; // esi
  int v34; // r14d
  unsigned int *v35; // rax
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r8d
  unsigned int v40; // esi
  void *v41; // rax
  __int64 v42; // rax
  int v43; // ebp
  int v44; // esi
  int v45; // r14d
  unsigned int *v46; // rax
  int v47; // edi
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned int v50; // ebp
  bool v51; // zf
  int v52; // esi
  void *v53; // rax
  __int64 *v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  _QWORD v58[3]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v59[24]; // [rsp+38h] [rbp-40h] BYREF

  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) != 0 )
  {
    v4 = *(_QWORD *)(gptiCurrent + 616LL);
    if ( v4 )
    {
      v5 = *(__int64 **)(*(_QWORD *)(v4 + 24) + 8LL);
      v6 = v5[5];
      if ( !*(_QWORD *)(v6 + 136) && (*(_BYTE *)(v6 + 17) & 0x10) == 0 )
      {
        v5 = 0LL;
        PushW32ThreadLock(0LL, v59, UserDereferenceObject);
        for ( i = *(_QWORD **)(v4 + 16); i; i = (_QWORD *)i[4] )
        {
          ObfReferenceObject(i);
          ExchangeW32ThreadLock(i, v59);
          v5 = (__int64 *)xxxInternalDoPaint(*(struct tagWND **)(i[1] + 24LL), gptiCurrent);
          if ( v5 )
            break;
        }
        PopAndFreeW32ThreadLock(v59);
      }
      goto LABEL_23;
    }
    return 0LL;
  }
  v8 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v10 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL);
  v11 = *(_QWORD *)(v10 + 24);
  if ( !(unsigned int)IsThreadCrossSessionAttached(v10, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v8 = *ThreadWin32Thread;
  }
  v58[0] = *(_QWORD *)(v8 + 416);
  *(_QWORD *)(v8 + 416) = v58;
  v58[1] = v11;
  if ( !v11 )
    goto LABEL_22;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
  while ( 1 )
  {
    if ( *(_QWORD *)(v11 + 16) == gptiCurrent )
    {
      v13 = *(_QWORD *)(v11 + 40);
      if ( (*(_BYTE *)(v13 + 27) & 2) != 0 )
      {
        xxxCompositedPaint((struct tagWND *)v11);
        goto LABEL_21;
      }
      if ( *(_QWORD *)(v13 + 136) || (*(_BYTE *)(v13 + 17) & 0x10) != 0 )
        break;
    }
    v15 = *(struct tagWND **)(v11 + 88);
    if ( v15 )
    {
      v16 = xxxInternalDoPaint(v15, gptiCurrent);
      v5 = (__int64 *)v16;
      if ( v16 )
      {
        if ( v16 == (struct tagWND *)v11 )
          goto LABEL_22;
        goto LABEL_43;
      }
    }
LABEL_21:
    v11 = *(_QWORD *)(v11 + 64);
    ThreadLockExchange(v11, v58);
    if ( !v11 )
      goto LABEL_22;
  }
  if ( (*(_BYTE *)(v13 + 24) & 0x20) != 0 )
  {
    v5 = *(__int64 **)(v11 + 64);
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v5[2] == gptiCurrent )
        {
          v13 = v5[5];
          if ( (*(_QWORD *)(v13 + 136) || (*(_BYTE *)(v13 + 17) & 0x10) != 0) && (*(_BYTE *)(v13 + 24) & 0x20) == 0 )
            break;
        }
        v5 = (__int64 *)v5[8];
        if ( !v5 )
          goto LABEL_22;
      }
LABEL_43:
      ThreadUnlock1(v13, v12);
      goto LABEL_23;
    }
  }
LABEL_22:
  v5 = (__int64 *)ThreadUnlock1(v13, v12);
LABEL_23:
  if ( !v5 || a1 && a1 != v5 && !(unsigned int)IsChild(a1, v5) )
    return 0LL;
  v17 = v5[5];
  v18 = -268435456;
  v19 = *(_BYTE *)(v17 + 17);
  if ( (v19 & 0x10) != 0 )
  {
    v20 = *(_DWORD *)(v17 + 28);
    v21 = *(_DWORD *)(v17 + 24);
    v22 = *(_DWORD *)(v17 + 232);
    *(_BYTE *)(v17 + 17) = v19 & 0xEF;
    if ( (unsigned int)IsWindowDesktopComposed(v5) )
    {
      v23 = (unsigned int *)v5[5];
      v24 = v23[7];
      v25 = v23[6];
      v26 = v23[58];
      if ( v20 != v24 )
        goto LABEL_33;
      if ( v21 != (_DWORD)v25 || v22 != (_DWORD)v26 )
      {
        if ( v20 != v24 )
        {
LABEL_33:
          v26 = (v20 ^ v24) & 0xB9CF0000;
          v27 = ((v20 ^ v24) & 0xB9CF0000) != 0;
          v28 = -v27 & 0xFFFFFFF0;
          goto LABEL_46;
        }
        if ( v21 == (_DWORD)v25 )
        {
          if ( ((v22 ^ (unsigned int)v26) & 0x2E00300) != 0 )
          {
            v28 = -268435456;
            v24 = v23[58];
            goto LABEL_52;
          }
        }
        else
        {
          v24 = v23[6];
          v26 = (v21 ^ (unsigned int)v25) & 0x4E27A9;
          v27 = ((v21 ^ (unsigned int)v25) & 0x4E27A9) != 0;
          v28 = -v27 & 0xFFFFFFEC;
LABEL_46:
          if ( !(_DWORD)v26 )
            v24 = 0;
          if ( v27 )
          {
LABEL_52:
            v29 = (void *)ReferenceDwmApiPort(v26, v25);
            DwmAsyncChildStyleChange(v29, *v5, v28, v24);
          }
        }
      }
    }
    if ( !*(_QWORD *)(v5[5] + 136) )
    {
      v30 = v5[2];
      v51 = (*(_DWORD *)(v30 + 600))-- == 1;
      if ( v51 )
      {
        *(_WORD *)(*(_QWORD *)(v30 + 448) + 6LL) &= ~0x20u;
        *(_WORD *)(*(_QWORD *)(v30 + 448) + 4LL) &= ~0x20u;
      }
    }
  }
  v31 = v5[5];
  v32 = *(_DWORD *)(v31 + 28);
  v33 = *(_DWORD *)(v31 + 24);
  v34 = *(_DWORD *)(v31 + 232);
  *(_BYTE *)(v31 + 20) &= ~4u;
  if ( (unsigned int)IsWindowDesktopComposed(v5) )
  {
    v35 = (unsigned int *)v5[5];
    v36 = v35[7];
    v37 = v35[6];
    v38 = v35[58];
    if ( v32 != v36 )
      goto LABEL_61;
    if ( v33 != (_DWORD)v37 || v34 != (_DWORD)v38 )
    {
      if ( v32 != v36 )
      {
LABEL_61:
        v38 = (v32 ^ v36) & 0xB9CF0000;
        v39 = ((v32 ^ v36) & 0xB9CF0000) != 0;
        v40 = -v39 & 0xFFFFFFF0;
        goto LABEL_64;
      }
      if ( v33 == (_DWORD)v37 )
      {
        if ( ((v34 ^ (unsigned int)v38) & 0x2E00300) != 0 )
        {
          v40 = -268435456;
          v36 = v35[58];
          goto LABEL_70;
        }
      }
      else
      {
        v36 = v35[6];
        v38 = (v33 ^ (unsigned int)v37) & 0x4E27A9;
        v39 = ((v33 ^ (unsigned int)v37) & 0x4E27A9) != 0;
        v40 = -v39 & 0xFFFFFFEC;
LABEL_64:
        if ( !(_DWORD)v38 )
          v36 = 0;
        if ( v39 )
        {
LABEL_70:
          v41 = (void *)ReferenceDwmApiPort(v38, v37);
          DwmAsyncChildStyleChange(v41, *v5, v40, v36);
        }
      }
    }
  }
  v42 = v5[5];
  v43 = *(_DWORD *)(v42 + 28);
  v44 = *(_DWORD *)(v42 + 24);
  v45 = *(_DWORD *)(v42 + 232);
  *(_BYTE *)(v42 + 17) &= ~0x20u;
  if ( (unsigned int)IsWindowDesktopComposed(v5) )
  {
    v46 = (unsigned int *)v5[5];
    v47 = v46[7];
    v48 = v46[6];
    v49 = v46[58];
    if ( v43 != v47 )
      goto LABEL_76;
    if ( v44 != (_DWORD)v48 || v45 != (_DWORD)v49 )
    {
      if ( v43 != v47 )
      {
LABEL_76:
        v50 = (v47 ^ v43) & 0xB9CF0000;
        v49 = v50 != 0;
        v18 = v50 != 0 ? 0xFFFFFFF0 : 0;
        v51 = v50 == 0;
        goto LABEL_79;
      }
      if ( v44 == (_DWORD)v48 )
      {
        if ( (((unsigned int)v49 ^ v45) & 0x2E00300) != 0 )
        {
          v47 = v46[58];
          goto LABEL_85;
        }
      }
      else
      {
        v52 = (v48 ^ v44) & 0x4E27A9;
        v47 = v46[6];
        v49 = v52 != 0;
        v18 = v52 != 0 ? 0xFFFFFFEC : 0;
        v51 = v52 == 0;
LABEL_79:
        if ( v51 )
          v47 = 0;
        if ( (_DWORD)v49 )
        {
LABEL_85:
          v53 = (void *)ReferenceDwmApiPort(v49, v48);
          DwmAsyncChildStyleChange(v53, *v5, v18, v47);
        }
      }
    }
  }
  v54 = v5;
  while ( (*(_WORD *)(v54[5] + 42) & 0x2FFF) != 0x29D )
  {
    v54 = (__int64 *)v54[10];
    if ( (*(_BYTE *)(v54[5] + 31) & 2) == 0 )
    {
      SetOrClrWF(1, (__int64)v5, 0x401u, 1);
      break;
    }
    if ( !v54 )
      break;
  }
  *(_QWORD *)a2 = *v5;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_DWORD *)(a2 + 32) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_QWORD *)(a2 + 36) = LogicalCursorPosFromDpiAwarenessContext(*(unsigned int *)(v5[5] + 288));
  v55 = v5[5];
  if ( (*(_BYTE *)(v55 + 21) & 2) == 0 && (*(_BYTE *)(v55 + 31) & 0x20) != 0 && *(_QWORD *)(v5[14] + 80) )
  {
    *(_QWORD *)(a2 + 16) = 1LL;
    v56 = 38;
  }
  else
  {
    v56 = 15;
  }
  *(_DWORD *)(a2 + 8) = v56;
  EtwTraceRetrievePseudoMessage(0LL, a2, 1LL);
  return 1LL;
}
