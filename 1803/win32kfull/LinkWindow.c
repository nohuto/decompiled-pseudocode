/*
 * XREFs of LinkWindow @ 0x1C002E120
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     SetWindowGroupBand @ 0x1C006EDD0 (SetWindowGroupBand.c)
 *     ImeSetTopmost @ 0x1C0071AA8 (ImeSetTopmost.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C000983C (DwmAsyncChildLink.c)
 *     GetBandOrdinal @ 0x1C002E63C (GetBandOrdinal.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C002E67C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAX@Z @ 0x1C002E6A4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@P.c)
 *     GetLastTopMostWindow @ 0x1C006E748 (GetLastTopMostWindow.c)
 *     TrackLayeredZorder @ 0x1C0074B68 (TrackLayeredZorder.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     HWInsertAfter @ 0x1C019EEC0 (HWInsertAfter.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01D5E88 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // rsi
  _QWORD *LastTopMostWindow; // rdi
  unsigned int BandOrdinal; // ebx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // r9
  _QWORD *v11; // r8
  __int128 *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  _QWORD *v15; // r8
  __int64 v16; // rdx
  __int128 *v17; // rax
  int v18; // ecx
  __int64 i; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  struct tagWND *v23; // rax
  int v24; // r15d
  _QWORD *v25; // r12
  __int64 v26; // rdi
  __int64 v27; // rsi
  void *v28; // rbx
  __int64 *j; // rsi
  __int64 v30; // rcx
  int v31; // eax
  __int64 DesktopWindow; // rax
  _QWORD *v33; // r8
  unsigned int v34; // edx
  int v35; // ecx
  _DWORD *v36; // rax
  __int64 v37; // rax
  int v38; // edi
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  void *v43; // rax
  __int128 v44; // [rsp+30h] [rbp-D0h]
  _DWORD v45[20]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v46; // [rsp+90h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v49; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v50; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v51; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v52; // [rsp+F0h] [rbp-10h] BYREF
  char v53[16]; // [rsp+100h] [rbp+0h] BYREF
  char v54[16]; // [rsp+110h] [rbp+10h] BYREF
  char v55[16]; // [rsp+120h] [rbp+20h] BYREF
  char v56[16]; // [rsp+130h] [rbp+30h] BYREF
  char v57[16]; // [rsp+140h] [rbp+40h] BYREF
  char v58[16]; // [rsp+150h] [rbp+50h] BYREF

  v3 = a3 + 11;
  LastTopMostWindow = a2;
  BandOrdinal = 0;
  if ( (struct tagWND *)a3[11] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( (_QWORD *)DesktopWindow != a2 )
    {
      v37 = GetDesktopWindow(a1);
      if ( a3 == (__int64 *)v37 )
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(a1);
      else
        LastTopMostWindow = 0LL;
    }
  }
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(0LL, a1, LastTopMostWindow, a3);
  v8 = a3[3];
  v9 = 0LL;
  if ( v8 )
  {
    a2 = *(_QWORD **)(v8 + 8);
    if ( a2 )
      v9 = (__int64 *)a2[3];
  }
  if ( a3 == v9 )
    BandOrdinal = GetBandOrdinal(*(unsigned int *)(*((_QWORD *)a1 + 5) + 236LL), a2, a3, 1LL);
  else
    v10 = 0LL;
  if ( LastTopMostWindow )
  {
    if ( LastTopMostWindow == (_QWORD *)1 )
    {
      LastTopMostWindow = (_QWORD *)*v3;
      if ( !*v3 || (*(_BYTE *)(LastTopMostWindow[5] + 20LL) & 0x20) != 0 )
        goto LABEL_11;
      while ( 1 )
      {
        v33 = (_QWORD *)LastTopMostWindow[8];
        if ( !v33
          || (_DWORD)v10 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v33[5] + 236LL), a2, v33, v10) < BandOrdinal )
        {
          break;
        }
        if ( (*(_BYTE *)(v33[5] + 20LL) & 0x20) != 0 )
          break;
        LastTopMostWindow = v33;
      }
      if ( (_DWORD)v10
        && (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL), a2, v33, v10) < BandOrdinal )
      {
        goto LABEL_11;
      }
    }
    else if ( (_DWORD)v10 )
    {
      if ( BandOrdinal > (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL), a2, a3, v10) )
      {
        while ( 1 )
        {
          LastTopMostWindow = (_QWORD *)LastTopMostWindow[9];
          if ( !LastTopMostWindow )
            goto LABEL_11;
          if ( BandOrdinal <= (unsigned int)GetBandOrdinal(
                                              *(unsigned int *)(LastTopMostWindow[5] + 236LL),
                                              a2,
                                              v13,
                                              v10) )
            goto LABEL_22;
        }
      }
      while ( 1 )
      {
        v14 = LastTopMostWindow[8];
        if ( !v14
          || (unsigned int)GetBandOrdinal(*(unsigned int *)(*(_QWORD *)(v14 + 40) + 236LL), a2, v14, v10) <= BandOrdinal )
        {
          break;
        }
        LastTopMostWindow = v15;
      }
    }
LABEL_22:
    v16 = LastTopMostWindow[8];
    if ( v16 )
    {
      v46 = *(_OWORD *)LockPointer(v53, v16 + 72, a1);
      HMAssignmentLock(&v46);
      v47 = *(_OWORD *)LockPointer(v54, (char *)a1 + 64, LastTopMostWindow[8]);
      HMAssignmentLock(&v47);
    }
    v48 = *(_OWORD *)LockPointer(v55, (char *)a1 + 72, LastTopMostWindow);
    HMAssignmentLock(&v48);
    v17 = (__int128 *)LockPointer(v56, LastTopMostWindow + 8, a1);
    v12 = &v49;
    v49 = *v17;
    goto LABEL_25;
  }
LABEL_11:
  v11 = (_QWORD *)*v3;
  if ( *v3 )
  {
    if ( (_DWORD)v10 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v11[5] + 236LL), a2, v11, v10) > BandOrdinal )
    {
      do
      {
        LastTopMostWindow = v11;
        v11 = (_QWORD *)v11[8];
        if ( !v11 )
          break;
        v34 = 0;
        v35 = *(_DWORD *)(v11[5] + 236LL);
        v36 = &gazbidOrder;
        while ( *v36 != v35 )
        {
          if ( v36[1] == v35 )
          {
            ++v34;
            break;
          }
          if ( v36[2] == v35 )
          {
            v34 += 2;
            break;
          }
          if ( v36[3] == v35 )
          {
            v34 += 3;
            break;
          }
          if ( v36[4] == v35 )
          {
            v34 += 4;
            break;
          }
          if ( v36[5] == v35 )
          {
            v34 += 5;
            break;
          }
          v36 += 6;
          v34 += 6;
          if ( v34 >= 0x12 )
            break;
        }
      }
      while ( v34 > BandOrdinal );
      goto LABEL_22;
    }
    v50 = *(_OWORD *)LockPointer(v57, v11 + 9, a1);
    HMAssignmentLock(&v50);
    v51 = *(_OWORD *)LockPointer(v58, (char *)a1 + 64, *v3);
    HMAssignmentLock(&v51);
  }
  if ( a1 )
    *(_QWORD *)(*(v3 - 6) + 56LL) = *((_QWORD *)a1 + 6);
  else
    *(_QWORD *)(*(v3 - 6) + 56LL) = 0LL;
  *(_QWORD *)&v44 = v3;
  v12 = &v52;
  *((_QWORD *)&v44 + 1) = a1;
  v52 = v44;
LABEL_25:
  HMAssignmentLock(v12);
  v18 = 0;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 8u;
  for ( i = *v3; i; i = *(_QWORD *)(i + 64) )
  {
    if ( (struct tagWND *)i == a1 )
      v18 = 1;
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^= (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^ (16 * v18)) & 0x10;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && a1 != (struct tagWND *)GetDesktopWindow(a1) )
  {
    v22 = *((_QWORD *)a1 + 3);
    v23 = 0LL;
    if ( v22 )
      v23 = *(struct tagWND **)(v22 + 104);
    if ( a1 != v23 && a3 != *((__int64 **)&gTermIO + 1) )
    {
      v24 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
      if ( ((unsigned __int64)LastTopMostWindow < 2 || (unsigned __int64)LastTopMostWindow >= 0xFFFFFFFFFFFFFFFEuLL)
        && ((unsigned __int64)LastTopMostWindow <= 1 || (unsigned __int64)LastTopMostWindow + 2 <= 1) )
      {
        v25 = LastTopMostWindow;
      }
      else
      {
        v25 = (_QWORD *)*LastTopMostWindow;
      }
      v26 = *a3;
      v27 = *(_QWORD *)a1;
      v28 = (void *)ReferenceDwmApiPort(v22, v20, v21);
      _InterlockedIncrement64(&g_cDWMWindowUniqueness);
      if ( v28 )
      {
        memset(v45, 0, 0x48uLL);
        v45[0] = 4718624;
        LOWORD(v45[1]) = 0x8000;
        v45[10] = 1073741842;
        *(_QWORD *)&v45[11] = v27;
        *(_QWORD *)&v45[13] = v26;
        *(_QWORD *)&v45[15] = v25;
        v45[17] = v24;
        LpcRequestPort(v28, v45);
        ObfDereferenceObject(v28);
      }
      for ( j = (__int64 *)*((_QWORD *)a1 + 8); j; j = (__int64 *)j[8] )
      {
        v30 = j[5];
        v31 = *(_DWORD *)(v30 + 232);
        if ( (v31 & 0x10) == 0 )
        {
          *(_DWORD *)(v30 + 232) = v31 | 0x10;
          v38 = *(_DWORD *)(j[5] + 236);
          v39 = HWInsertAfter(j[9]);
          v43 = (void *)ReferenceDwmApiPort(v41, v40, v42);
          DwmAsyncChildLink(v43, *j, *a3, v39, v38);
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, a1, 0LL, 0LL);
}
