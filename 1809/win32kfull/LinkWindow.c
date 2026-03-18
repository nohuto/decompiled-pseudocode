/*
 * XREFs of LinkWindow @ 0x1C0043240
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetWindowGroupBand @ 0x1C000EF18 (SetWindowGroupBand.c)
 *     ImeSetTopmost @ 0x1C001C474 (ImeSetTopmost.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 * Callees:
 *     HWInsertAfter @ 0x1C0007CEC (HWInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C000FEA0 (GetLastTopMostWindow.c)
 *     GetBandOrdinal @ 0x1C004379C (GetBandOrdinal.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0043A64 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0043A8C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@P.c)
 *     TrackLayeredZorder @ 0x1C0079E4C (TrackLayeredZorder.c)
 *     DwmAsyncChildLink @ 0x1C00C7D04 (DwmAsyncChildLink.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C01FAAC0 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // rdi
  _QWORD *LastTopMostWindow; // rsi
  unsigned int BandOrdinal; // ebx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  _QWORD *v12; // r8
  __int128 *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // r8
  __int64 v16; // rdx
  __int128 *v17; // rax
  int v18; // ecx
  __int64 i; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagWND *v22; // rax
  int v23; // r15d
  _QWORD *v24; // r12
  __int64 v25; // rdi
  __int64 v26; // rsi
  void *v27; // rbx
  _QWORD *j; // rsi
  __int64 v29; // rcx
  int v30; // eax
  __int64 DesktopWindow; // rax
  __int64 v32; // rdx
  _QWORD *v33; // r8
  unsigned int v34; // edx
  int v35; // ecx
  _DWORD *v36; // rax
  int v37; // edi
  __int64 v38; // rdx
  __int64 v39; // rcx
  void *v40; // rax
  __int128 v41; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v42[20]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v43; // [rsp+90h] [rbp-70h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v45; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v46; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v47; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-20h] BYREF
  char v49[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v50[16]; // [rsp+100h] [rbp+0h] BYREF
  char v51[16]; // [rsp+110h] [rbp+10h] BYREF
  char v52[16]; // [rsp+120h] [rbp+20h] BYREF
  char v53[16]; // [rsp+130h] [rbp+30h] BYREF
  char v54[16]; // [rsp+140h] [rbp+40h] BYREF

  v3 = a3 + 11;
  LastTopMostWindow = a2;
  BandOrdinal = 0;
  if ( (struct tagWND *)a3[11] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( DesktopWindow != v32 )
    {
      if ( a3 == (__int64 *)GetDesktopWindow(a1) )
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow((__int64)a1);
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
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 )
      v9 = *(__int64 **)(v10 + 24);
  }
  if ( a3 == v9 )
    BandOrdinal = GetBandOrdinal(*(unsigned int *)(*((_QWORD *)a1 + 5) + 236LL));
  else
    v11 = 0;
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
        if ( !v33 || v11 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v33[5] + 236LL)) < BandOrdinal )
          break;
        if ( (*(_BYTE *)(v33[5] + 20LL) & 0x20) != 0 )
          break;
        LastTopMostWindow = v33;
      }
      if ( v11 && (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL)) < BandOrdinal )
        goto LABEL_11;
    }
    else if ( v11 )
    {
      if ( BandOrdinal > (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL)) )
      {
        while ( 1 )
        {
          LastTopMostWindow = (_QWORD *)LastTopMostWindow[9];
          if ( !LastTopMostWindow )
            goto LABEL_11;
          if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL)) )
            goto LABEL_22;
        }
      }
      while ( 1 )
      {
        v14 = LastTopMostWindow[8];
        if ( !v14 || (unsigned int)GetBandOrdinal(*(unsigned int *)(*(_QWORD *)(v14 + 40) + 236LL)) <= BandOrdinal )
          break;
        LastTopMostWindow = v15;
      }
    }
LABEL_22:
    v16 = LastTopMostWindow[8];
    if ( v16 )
    {
      v41 = *(_OWORD *)LockPointer(v49, v16 + 72, a1);
      HMAssignmentLock(&v41);
      v43 = *(_OWORD *)LockPointer(v50, (char *)a1 + 64, LastTopMostWindow[8]);
      HMAssignmentLock(&v43);
    }
    v44 = *(_OWORD *)LockPointer(v51, (char *)a1 + 72, LastTopMostWindow);
    HMAssignmentLock(&v44);
    v17 = (__int128 *)LockPointer(v52, LastTopMostWindow + 8, a1);
    v13 = &v45;
    v45 = *v17;
    goto LABEL_25;
  }
LABEL_11:
  v12 = (_QWORD *)*v3;
  if ( *v3 )
  {
    if ( v11 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v12[5] + 236LL)) > BandOrdinal )
    {
      do
      {
        LastTopMostWindow = v12;
        v12 = (_QWORD *)v12[8];
        if ( !v12 )
          break;
        v34 = 0;
        v35 = *(_DWORD *)(v12[5] + 236LL);
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
    v46 = *(_OWORD *)LockPointer(v53, v12 + 9, a1);
    HMAssignmentLock(&v46);
    v47 = *(_OWORD *)LockPointer(v54, (char *)a1 + 64, *v3);
    HMAssignmentLock(&v47);
  }
  if ( a1 )
    *(_QWORD *)(*(v3 - 6) + 56LL) = *((_QWORD *)a1 + 6);
  else
    *(_QWORD *)(*(v3 - 6) + 56LL) = 0LL;
  *(_QWORD *)&v41 = v3;
  v13 = &v48;
  *((_QWORD *)&v41 + 1) = a1;
  v48 = v41;
LABEL_25:
  HMAssignmentLock(v13);
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
    v21 = *((_QWORD *)a1 + 3);
    v22 = 0LL;
    if ( v21 )
      v22 = *(struct tagWND **)(v21 + 104);
    if ( a1 != v22 && a3 != *((__int64 **)&gTermIO + 1) )
    {
      v23 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
      if ( ((unsigned __int64)LastTopMostWindow < 2 || (unsigned __int64)LastTopMostWindow >= 0xFFFFFFFFFFFFFFFEuLL)
        && ((unsigned __int64)LastTopMostWindow <= 1 || (unsigned __int64)LastTopMostWindow + 2 <= 1) )
      {
        v24 = LastTopMostWindow;
      }
      else
      {
        v24 = (_QWORD *)*LastTopMostWindow;
      }
      v25 = *a3;
      v26 = *(_QWORD *)a1;
      v27 = (void *)ReferenceDwmApiPort(v21, v20);
      _InterlockedIncrement64(&g_cDWMWindowUniqueness);
      if ( v27 )
      {
        memset(v42, 0, 0x48uLL);
        v42[0] = 4718624;
        LOWORD(v42[1]) = 0x8000;
        v42[10] = 1073741842;
        *(_QWORD *)&v42[11] = v26;
        *(_QWORD *)&v42[13] = v25;
        *(_QWORD *)&v42[15] = v24;
        v42[17] = v23;
        LpcRequestPort(v27, v42);
        ObfDereferenceObject(v27);
      }
      for ( j = (_QWORD *)*((_QWORD *)a1 + 8); j; j = (_QWORD *)j[8] )
      {
        v29 = j[5];
        v30 = *(_DWORD *)(v29 + 232);
        if ( (v30 & 0x10) == 0 )
        {
          *(_DWORD *)(v29 + 232) = v30 | 0x10;
          v37 = *(_DWORD *)(j[5] + 236LL);
          HWInsertAfter(j[9]);
          v40 = (void *)ReferenceDwmApiPort(v39, v38);
          DwmAsyncChildLink(v40, v37);
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, a1, 0LL, 0LL);
}
