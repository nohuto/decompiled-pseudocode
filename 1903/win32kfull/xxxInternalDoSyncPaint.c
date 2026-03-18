/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C00AFE00
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxInternalDoSyncPaint @ 0x1C00AFE00 (xxxInternalDoSyncPaint.c)
 *     xxxDoSyncPaint @ 0x1C00B051C (xxxDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     ClearHungFlag @ 0x1C0099DDC (ClearHungFlag.c)
 *     xxxSendEraseBkgnd @ 0x1C009A728 (xxxSendEraseBkgnd.c)
 *     IsHungWindow @ 0x1C00AE860 (IsHungWindow.c)
 *     xxxInternalDoSyncPaint @ 0x1C00AFE00 (xxxInternalDoSyncPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00B03EC (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00B09D8 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall xxxInternalDoSyncPaint(__int64 *a1, unsigned int a2, _BOOL8 a3, __int64 a4)
{
  __int64 *v5; // rbx
  unsigned __int64 CurrentProcessWow64Process; // rax
  __int64 v7; // rax
  int v8; // ebp
  int v9; // esi
  int v10; // r14d
  unsigned int *v11; // rax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // esi
  void *v16; // rax
  __int64 v17; // rdx
  int v18; // edi
  HRGN NCUpdateRgn; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  HRGN v22; // rax
  _QWORD *v23; // rsi
  struct tagBWL *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rdx
  char *v31; // r14
  __int64 v32; // rcx
  unsigned __int64 i; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 *v37; // r15
  __int64 v38; // rdi
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 *v43; // rdx
  unsigned __int64 *v44; // rcx
  struct tagBWL *v45; // rcx
  __int64 v47; // [rsp+20h] [rbp-48h] BYREF
  __int64 v48; // [rsp+28h] [rbp-40h]
  __int64 v49; // [rsp+30h] [rbp-38h]

  v5 = a1;
  if ( !a1 )
  {
LABEL_4:
    v7 = v5[5];
    v8 = *(_DWORD *)(v7 + 28);
    v9 = *(_DWORD *)(v7 + 24);
    v10 = *(_DWORD *)(v7 + 232);
    *(_BYTE *)(v7 + 18) &= ~0x40u;
    if ( (unsigned int)IsWindowDesktopComposed(v5) )
    {
      v11 = (unsigned int *)v5[5];
      v12 = v11[7];
      v13 = v11[6];
      v14 = v11[58];
      if ( v8 != v12 )
        goto LABEL_9;
      if ( v9 == (_DWORD)v13 && v10 == (_DWORD)v14 )
        goto LABEL_19;
      if ( v8 != v12 )
      {
LABEL_9:
        v14 = (v8 ^ v12) & 0xB1CF0000;
        a3 = ((v8 ^ v12) & 0xB1CF0000) != 0;
        v15 = ((v8 ^ v12) & 0xB1CF0000) != 0 ? 0xFFFFFFF0 : 0;
        goto LABEL_12;
      }
      if ( v9 != (_DWORD)v13 )
      {
        v12 = v11[6];
        v14 = (v9 ^ (unsigned int)v13) & 0x4E27A9;
        a3 = ((v9 ^ (unsigned int)v13) & 0x4E27A9) != 0;
        v15 = ((v9 ^ (unsigned int)v13) & 0x4E27A9) != 0 ? 0xFFFFFFEC : 0;
LABEL_12:
        if ( !(_DWORD)v14 )
          v12 = 0;
        if ( !a3 )
          goto LABEL_19;
        goto LABEL_18;
      }
      if ( ((v10 ^ (unsigned int)v14) & 0x2E00300) != 0 )
      {
        v15 = -268435456;
        v12 = v11[58];
LABEL_18:
        v16 = (void *)ReferenceDwmApiPort(v14, v13, a3);
        DwmAsyncChildStyleChange(v16, *v5, v15, v12);
      }
    }
LABEL_19:
    v17 = v5[5];
    v18 = (*(unsigned __int8 *)(v17 + 17) >> 2) & 2 | 1;
    LOBYTE(CurrentProcessWow64Process) = *(_BYTE *)(v17 + 17) & 2;
    if ( !(_BYTE)CurrentProcessWow64Process )
      v18 = (*(unsigned __int8 *)(v17 + 17) >> 2) & 2;
    if ( v18 )
    {
      if ( (*(_BYTE *)(v17 + 31) & 0x10) != 0 )
      {
        if ( !*(_QWORD *)(v17 + 136) )
        {
          SetOrClrWF(0, (__int64)v5, 0x102u, 1);
          SetOrClrWF(0, (__int64)v5, 0x104u, 1);
          LOBYTE(v18) = v18 & 0xFE;
        }
        if ( v5[2] == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v5, 1);
          v20 = (__int64)NCUpdateRgn;
          if ( (v18 & 2) != 0 && (*(_BYTE *)(v5[5] + 17) & 8) != 0 )
            xxxSendNCPaint((struct tagWND *)v5, NCUpdateRgn);
          if ( (v18 & 1) != 0 )
          {
            v21 = v5[5];
            if ( (*(_BYTE *)(v21 + 17) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v20);
              v22 = GetNCUpdateRgn((struct tagWND *)v5, 0);
              v21 = v5[5];
              v20 = (__int64)v22;
            }
            if ( (*(_BYTE *)(v21 + 17) & 2) != 0 )
            {
              SetOrClrWF(0, (__int64)v5, 0x102u, 1);
              SetOrClrWF(0, (__int64)v5, 0x104u, 1);
              xxxSendEraseBkgnd((__int64)v5, 0LL, v20);
            }
            ClearHungFlag((struct tagWND *)v5, 0x308u);
          }
          LOBYTE(CurrentProcessWow64Process) = DeleteMaybeSpecialRgn(v20);
        }
        else
        {
          CurrentProcessWow64Process = v5[5];
          if ( (*(_BYTE *)(CurrentProcessWow64Process + 31) & 0xC0) != 0x40 )
          {
            CurrentProcessWow64Process = *(_QWORD *)(grpdeskRitInput + 8LL);
            if ( v5 != *(__int64 **)(CurrentProcessWow64Process + 24) )
            {
              LODWORD(CurrentProcessWow64Process) = IsHungWindow((__int64)v5);
              if ( (_DWORD)CurrentProcessWow64Process )
              {
                CurrentProcessWow64Process = v5[5];
                if ( (*(_BYTE *)(CurrentProcessWow64Process + 19) & 8) != 0 )
                {
                  ClearHungFlag((struct tagWND *)v5, 0x308u);
                  LOBYTE(CurrentProcessWow64Process) = xxxRedrawHungWindow((struct tagWND *)v5);
                }
              }
            }
          }
        }
      }
      else
      {
        SetOrClrWF(0, (__int64)v5, 0x108u, 1);
        SetOrClrWF(0, (__int64)v5, 0x102u, 1);
        SetOrClrWF(0, (__int64)v5, 0x680u, 1);
        SetOrClrWF(0, (__int64)v5, 0x104u, 1);
        LOBYTE(CurrentProcessWow64Process) = ClearHungFlag((struct tagWND *)v5, 0x308u);
      }
    }
    goto LABEL_42;
  }
  while ( 1 )
  {
    CurrentProcessWow64Process = a1[5];
    if ( (*(_BYTE *)(CurrentProcessWow64Process + 27) & 2) != 0 )
      break;
    a1 = (__int64 *)a1[13];
    if ( !a1 )
      goto LABEL_4;
  }
LABEL_42:
  if ( (a2 & 0x20) != 0
    || (a2 & 4) != 0 && (CurrentProcessWow64Process = v5[5], (*(_BYTE *)(CurrentProcessWow64Process + 31) & 2) != 0) )
  {
    v23 = (_QWORD *)v5[14];
    v24 = pbwlCache;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0LL;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      CurrentProcessWow64Process = Win32AllocPool(296LL, 1819767637LL);
      v24 = (struct tagBWL *)CurrentProcessWow64Process;
      if ( !CurrentProcessWow64Process )
        return CurrentProcessWow64Process;
      *(_QWORD *)(CurrentProcessWow64Process + 16) = CurrentProcessWow64Process + 280;
    }
    *((_QWORD *)v24 + 3) = 0LL;
    for ( *((_QWORD *)v24 + 1) = (char *)v24 + 32; v23; v23 = (_QWORD *)v23[11] )
    {
      v25 = *((_QWORD *)v24 + 3);
      if ( !v25 || v25 == v23[2] )
      {
        **((_QWORD **)v24 + 1) = *v23;
        *((_QWORD *)v24 + 1) += 8LL;
        v26 = *((_QWORD *)v24 + 1);
        if ( v26 == *((_QWORD *)v24 + 2) )
        {
          v27 = v26 - (_QWORD)v24;
          v28 = UserReAllocPool(v24, (unsigned int)v27 + 8LL, (unsigned int)v27 + 72LL, 1819767637LL, v47, v48, v49);
          if ( !v28 )
            break;
          v29 = v28 + v27;
          v24 = (struct tagBWL *)v28;
          *(_QWORD *)(v28 + 8) = v29;
          *(_QWORD *)(v28 + 16) = v29 + 64;
        }
      }
    }
    CurrentProcessWow64Process = *((_QWORD *)v24 + 1);
    if ( CurrentProcessWow64Process >= *((_QWORD *)v24 + 2) )
      goto LABEL_81;
    v30 = gptiCurrent;
    v31 = (char *)v24 + 32;
    *(_QWORD *)CurrentProcessWow64Process = 1LL;
    *((_QWORD *)v24 + 3) = gptiCurrent;
    v32 = gpbwlList;
    *(_QWORD *)v24 = gpbwlList;
    LOBYTE(CurrentProcessWow64Process) = gpbwlList;
    gpbwlList = v24;
    for ( i = *((_QWORD *)v24 + 4); i != 1; v31 += 8 )
    {
      if ( i )
      {
        CurrentThread = KeGetCurrentThread();
        if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v30, a3, a4) )
          PsGetThreadWin32Thread(CurrentThread);
        LOBYTE(CurrentProcessWow64Process) = gpsi;
        v30 = (unsigned __int16)i;
        v32 = gpsi;
        if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(gpsi + 8LL) )
        {
          v35 = gSharedInfo[1] + (unsigned int)(unsigned __int16)i * LODWORD(gSharedInfo[2]);
          CurrentProcessWow64Process = HMPkheFromPhe(v35);
          v36 = i >> 16;
          v37 = (__int64 *)CurrentProcessWow64Process;
          if ( ((_WORD)v36 == *(_WORD *)(v35 + 26)
             || (_WORD)v36 == 0xFFFF
             || !(_WORD)v36 && (CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v32)) != 0)
            && (*(_BYTE *)(v35 + 25) & 1) == 0
            && *(_BYTE *)(v35 + 24) == 1 )
          {
            v38 = *v37;
            if ( *v37 )
            {
              CurrentProcessWow64Process = *(_QWORD *)(v38 + 40);
              if ( (*(_BYTE *)(CurrentProcessWow64Process + 31) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v38 + 16) )
              {
                v39 = *v37;
                v47 = *(_QWORD *)(gptiCurrent + 408LL);
                *(_QWORD *)(gptiCurrent + 408LL) = &v47;
                v48 = v38;
                HMLockObject(v39);
                xxxInternalDoSyncPaint(v38, a2);
                LOBYTE(CurrentProcessWow64Process) = ThreadUnlock1(v41, v40, v42);
              }
            }
          }
        }
      }
      i = *((_QWORD *)v31 + 1);
    }
    v43 = (unsigned __int64 *)gpbwlList;
    v44 = (unsigned __int64 *)gpbwlList;
    if ( gpbwlList )
    {
      while ( v44 != (unsigned __int64 *)v24 )
      {
        CurrentProcessWow64Process = *v44;
        v43 = v44;
        v44 = (unsigned __int64 *)CurrentProcessWow64Process;
        if ( !CurrentProcessWow64Process )
          return CurrentProcessWow64Process;
      }
      CurrentProcessWow64Process = *(_QWORD *)v24;
      *v43 = *(_QWORD *)v24;
      v45 = pbwlCache;
      if ( !pbwlCache )
      {
        pbwlCache = v24;
        return CurrentProcessWow64Process;
      }
      if ( (__int64)((*((_QWORD *)v24 + 2) - (_QWORD)v24 - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) > (__int64)((*((_QWORD *)pbwlCache + 2) - (_QWORD)pbwlCache - 32LL) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        pbwlCache = v24;
LABEL_82:
        LOBYTE(CurrentProcessWow64Process) = Win32FreePool(v45);
        return CurrentProcessWow64Process;
      }
LABEL_81:
      v45 = v24;
      goto LABEL_82;
    }
  }
  return CurrentProcessWow64Process;
}
