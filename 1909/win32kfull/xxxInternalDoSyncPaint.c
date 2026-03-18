/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C0050C60
 * Callers:
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 *     xxxDoSyncPaint @ 0x1C005137C (xxxDoSyncPaint.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 * Callees:
 *     ClearHungFlag @ 0x1C003ABAC (ClearHungFlag.c)
 *     xxxSendEraseBkgnd @ 0x1C003B4F8 (xxxSendEraseBkgnd.c)
 *     IsHungWindow @ 0x1C004F680 (IsHungWindow.c)
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C005124C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0051838 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall xxxInternalDoSyncPaint(__int64 a1, unsigned int a2, _BOOL8 a3)
{
  __int64 v4; // rbx
  unsigned __int64 CurrentProcessWow64Process; // rax
  __int64 v6; // rax
  int v7; // ebp
  int v8; // esi
  int v9; // r14d
  unsigned int *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rdx
  __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // rdx
  int v16; // edi
  HRGN NCUpdateRgn; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  HRGN v20; // rax
  _QWORD *v21; // rsi
  struct tagBWL *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rdx
  char *v29; // r14
  __int64 v30; // rcx
  unsigned __int64 i; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v33; // rsi
  unsigned __int64 v34; // rdi
  __int64 *v35; // r15
  __int64 v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 *v41; // rdx
  unsigned __int64 *v42; // rcx
  struct tagBWL *v43; // rcx
  __int64 v45; // [rsp+20h] [rbp-48h] BYREF
  __int64 v46; // [rsp+28h] [rbp-40h]
  __int64 v47; // [rsp+30h] [rbp-38h]

  v4 = a1;
  if ( !a1 )
  {
LABEL_4:
    v6 = *(_QWORD *)(v4 + 40);
    v7 = *(_DWORD *)(v6 + 28);
    v8 = *(_DWORD *)(v6 + 24);
    v9 = *(_DWORD *)(v6 + 232);
    *(_BYTE *)(v6 + 18) &= ~0x40u;
    if ( !(unsigned int)IsWindowDesktopComposed(v4) )
      goto LABEL_16;
    v10 = *(unsigned int **)(v4 + 40);
    v11 = v10[7];
    v12 = v10[6];
    v13 = v10[58];
    if ( v7 != v11 )
      goto LABEL_9;
    if ( v8 == (_DWORD)v12 && v9 == (_DWORD)v13 )
      goto LABEL_16;
    if ( v7 == v11 )
    {
      if ( v8 == (_DWORD)v12 )
      {
        if ( ((v9 ^ (unsigned int)v13) & 0x2E00300) != 0 )
        {
LABEL_15:
          v14 = (void *)ReferenceDwmApiPort(v13, v12, a3);
          DwmAsyncChildStyleChange(v14);
        }
LABEL_16:
        v15 = *(_QWORD *)(v4 + 40);
        v16 = (*(unsigned __int8 *)(v15 + 17) >> 2) & 2 | 1;
        LOBYTE(CurrentProcessWow64Process) = *(_BYTE *)(v15 + 17) & 2;
        if ( !(_BYTE)CurrentProcessWow64Process )
          v16 = (*(unsigned __int8 *)(v15 + 17) >> 2) & 2;
        if ( v16 )
        {
          if ( (*(_BYTE *)(v15 + 31) & 0x10) != 0 )
          {
            if ( !*(_QWORD *)(v15 + 136) )
            {
              SetOrClrWF(0LL, v4, 258LL, 1LL);
              SetOrClrWF(0LL, v4, 260LL, 1LL);
              LOBYTE(v16) = v16 & 0xFE;
            }
            if ( *(_QWORD *)(v4 + 16) == gptiCurrent )
            {
              NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v4, 1);
              v18 = (__int64)NCUpdateRgn;
              if ( (v16 & 2) != 0 && (*(_BYTE *)(*(_QWORD *)(v4 + 40) + 17LL) & 8) != 0 )
                xxxSendNCPaint((struct tagWND *)v4, NCUpdateRgn);
              if ( (v16 & 1) != 0 )
              {
                v19 = *(_QWORD *)(v4 + 40);
                if ( (*(_BYTE *)(v19 + 17) & 8) != 0 )
                {
                  DeleteMaybeSpecialRgn(v18);
                  v20 = GetNCUpdateRgn((struct tagWND *)v4, 0);
                  v19 = *(_QWORD *)(v4 + 40);
                  v18 = (__int64)v20;
                }
                if ( (*(_BYTE *)(v19 + 17) & 2) != 0 )
                {
                  SetOrClrWF(0LL, v4, 258LL, 1LL);
                  SetOrClrWF(0LL, v4, 260LL, 1LL);
                  xxxSendEraseBkgnd(v4, 0LL, v18);
                }
                ClearHungFlag((struct tagWND *)v4, 0x308u);
              }
              LOBYTE(CurrentProcessWow64Process) = DeleteMaybeSpecialRgn(v18);
            }
            else
            {
              CurrentProcessWow64Process = *(_QWORD *)(v4 + 40);
              if ( (*(_BYTE *)(CurrentProcessWow64Process + 31) & 0xC0) != 0x40 )
              {
                CurrentProcessWow64Process = *(_QWORD *)(grpdeskRitInput + 8LL);
                if ( v4 != *(_QWORD *)(CurrentProcessWow64Process + 24) )
                {
                  LODWORD(CurrentProcessWow64Process) = IsHungWindow(v4);
                  if ( (_DWORD)CurrentProcessWow64Process )
                  {
                    CurrentProcessWow64Process = *(_QWORD *)(v4 + 40);
                    if ( (*(_BYTE *)(CurrentProcessWow64Process + 19) & 8) != 0 )
                    {
                      ClearHungFlag((struct tagWND *)v4, 0x308u);
                      LOBYTE(CurrentProcessWow64Process) = xxxRedrawHungWindow((struct tagWND *)v4);
                    }
                  }
                }
              }
            }
          }
          else
          {
            SetOrClrWF(0LL, v4, 264LL, 1LL);
            SetOrClrWF(0LL, v4, 258LL, 1LL);
            SetOrClrWF(0LL, v4, 1664LL, 1LL);
            SetOrClrWF(0LL, v4, 260LL, 1LL);
            LOBYTE(CurrentProcessWow64Process) = ClearHungFlag((struct tagWND *)v4, 0x308u);
          }
        }
        goto LABEL_39;
      }
      v13 = (v8 ^ (unsigned int)v12) & 0x4E27A9;
      a3 = ((v8 ^ (unsigned int)v12) & 0x4E27A9) != 0;
    }
    else
    {
LABEL_9:
      v13 = (v7 ^ v11) & 0xB1CF0000;
      a3 = ((v7 ^ v11) & 0xB1CF0000) != 0;
    }
    if ( a3 )
      goto LABEL_15;
    goto LABEL_16;
  }
  while ( 1 )
  {
    CurrentProcessWow64Process = *(_QWORD *)(a1 + 40);
    if ( (*(_BYTE *)(CurrentProcessWow64Process + 27) & 2) != 0 )
      break;
    a1 = *(_QWORD *)(a1 + 104);
    if ( !a1 )
      goto LABEL_4;
  }
LABEL_39:
  if ( (a2 & 0x20) != 0
    || (a2 & 4) != 0
    && (CurrentProcessWow64Process = *(_QWORD *)(v4 + 40), (*(_BYTE *)(CurrentProcessWow64Process + 31) & 2) != 0) )
  {
    v21 = *(_QWORD **)(v4 + 112);
    v22 = pbwlCache;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 0LL;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      CurrentProcessWow64Process = Win32AllocPool(296LL, 1819767637LL);
      v22 = (struct tagBWL *)CurrentProcessWow64Process;
      if ( !CurrentProcessWow64Process )
        return CurrentProcessWow64Process;
      *(_QWORD *)(CurrentProcessWow64Process + 16) = CurrentProcessWow64Process + 280;
    }
    *((_QWORD *)v22 + 3) = 0LL;
    for ( *((_QWORD *)v22 + 1) = (char *)v22 + 32; v21; v21 = (_QWORD *)v21[11] )
    {
      v23 = *((_QWORD *)v22 + 3);
      if ( !v23 || v23 == v21[2] )
      {
        **((_QWORD **)v22 + 1) = *v21;
        *((_QWORD *)v22 + 1) += 8LL;
        v24 = *((_QWORD *)v22 + 1);
        if ( v24 == *((_QWORD *)v22 + 2) )
        {
          v25 = v24 - (_QWORD)v22;
          v26 = UserReAllocPool(v22, (unsigned int)v25 + 8LL, (unsigned int)v25 + 72LL, 1819767637LL, v45, v46, v47);
          if ( !v26 )
            break;
          v27 = v26 + v25;
          v22 = (struct tagBWL *)v26;
          *(_QWORD *)(v26 + 8) = v27;
          *(_QWORD *)(v26 + 16) = v27 + 64;
        }
      }
    }
    CurrentProcessWow64Process = *((_QWORD *)v22 + 1);
    if ( CurrentProcessWow64Process >= *((_QWORD *)v22 + 2) )
      goto LABEL_78;
    v28 = gptiCurrent;
    v29 = (char *)v22 + 32;
    *(_QWORD *)CurrentProcessWow64Process = 1LL;
    *((_QWORD *)v22 + 3) = gptiCurrent;
    v30 = gpbwlList;
    *(_QWORD *)v22 = gpbwlList;
    LOBYTE(CurrentProcessWow64Process) = gpbwlList;
    gpbwlList = v22;
    for ( i = *((_QWORD *)v22 + 4); i != 1; v29 += 8 )
    {
      if ( i )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v30, v28, a3) )
          PsGetThreadWin32Thread(CurrentThread);
        LOBYTE(CurrentProcessWow64Process) = gpsi;
        v28 = (unsigned __int16)i;
        v30 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(gpsi + 8LL) )
        {
          v33 = gSharedInfo[1] + (unsigned int)(unsigned __int16)i * LODWORD(gSharedInfo[2]);
          CurrentProcessWow64Process = HMPkheFromPhe(v33);
          v34 = i >> 16;
          v35 = (__int64 *)CurrentProcessWow64Process;
          if ( ((_WORD)v34 == *(_WORD *)(v33 + 26)
             || (_WORD)v34 == 0xFFFF
             || !(_WORD)v34 && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v30)) != 0)
            && (*(_BYTE *)(v33 + 25) & 1) == 0
            && *(_BYTE *)(v33 + 24) == 1 )
          {
            v36 = *v35;
            if ( *v35 )
            {
              CurrentProcessWow64Process = *(_QWORD *)(v36 + 40);
              if ( (*(_BYTE *)(CurrentProcessWow64Process + 31) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v36 + 16) )
              {
                v37 = *v35;
                v45 = *(_QWORD *)(gptiCurrent + 408LL);
                *(_QWORD *)(gptiCurrent + 408LL) = &v45;
                v46 = v36;
                HMLockObject(v37);
                xxxInternalDoSyncPaint(v36, a2);
                LOBYTE(CurrentProcessWow64Process) = ThreadUnlock1(v39, v38, v40);
              }
            }
          }
        }
      }
      i = *((_QWORD *)v29 + 1);
    }
    v41 = (unsigned __int64 *)gpbwlList;
    v42 = (unsigned __int64 *)gpbwlList;
    if ( gpbwlList )
    {
      while ( v42 != (unsigned __int64 *)v22 )
      {
        CurrentProcessWow64Process = *v42;
        v41 = v42;
        v42 = (unsigned __int64 *)CurrentProcessWow64Process;
        if ( !CurrentProcessWow64Process )
          return CurrentProcessWow64Process;
      }
      CurrentProcessWow64Process = *(_QWORD *)v22;
      *v41 = *(_QWORD *)v22;
      v43 = pbwlCache;
      if ( !pbwlCache )
      {
        pbwlCache = v22;
        return CurrentProcessWow64Process;
      }
      if ( (__int64)((*((_QWORD *)v22 + 2) - (_QWORD)v22 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        pbwlCache = v22;
LABEL_79:
        LOBYTE(CurrentProcessWow64Process) = Win32FreePool(v43);
        return CurrentProcessWow64Process;
      }
LABEL_78:
      v43 = v22;
      goto LABEL_79;
    }
  }
  return CurrentProcessWow64Process;
}
