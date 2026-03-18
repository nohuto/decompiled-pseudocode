/*
 * XREFs of LinkWindow @ 0x1C00CA850
 * Callers:
 *     SetWindowGroupBand @ 0x1C0089E90 (SetWindowGroupBand.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ImeSetTopmost @ 0x1C00957F8 (ImeSetTopmost.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 * Callees:
 *     TrackLayeredZorder @ 0x1C00270F4 (TrackLayeredZorder.c)
 *     GetLastTopMostWindow @ 0x1C00895E4 (GetLastTopMostWindow.c)
 *     GetBandOrdinal @ 0x1C00CADC0 (GetBandOrdinal.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00CAE00 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndNext@UtagWND@@@tagWND@@P.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00CAE28 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndPrev@UtagWND@@@tagWND@@P.c)
 *     DwmAsyncChildLink @ 0x1C00D97B0 (DwmAsyncChildLink.c)
 *     HWInsertAfter @ 0x1C01D41C8 (HWInsertAfter.c)
 *     ?_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z @ 0x1C0211720 (-_LogLinkWindow@@YAXW4LogBeforeOrAfter@@PEAUtagWND@@11@Z.c)
 */

void __fastcall LinkWindow(struct tagWND *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // rdi
  _QWORD *LastTopMostWindow; // r12
  unsigned int BandOrdinal; // ebx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // rdx
  int v11; // r9d
  __int64 v12; // r8
  _QWORD *v13; // r8
  __int64 v14; // rdx
  __int128 *v15; // rax
  __int128 *v16; // rcx
  int v17; // ecx
  __int64 i; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  struct tagWND *v22; // rax
  int v23; // r15d
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  void *v27; // rbx
  _QWORD *j; // rsi
  __int64 v29; // rcx
  int v30; // eax
  _QWORD *v31; // r8
  __int64 DesktopWindow; // rax
  __int64 v33; // rdx
  _QWORD *v34; // r8
  unsigned int v35; // ecx
  int v36; // edx
  _DWORD *v37; // rax
  int v38; // edi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  void *v42; // rax
  int v43; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v44; // [rsp+34h] [rbp-CCh]
  __int64 v45; // [rsp+36h] [rbp-CAh]
  __int64 v46; // [rsp+3Eh] [rbp-C2h]
  __int64 v47; // [rsp+46h] [rbp-BAh]
  __int64 v48; // [rsp+4Eh] [rbp-B2h]
  __int16 v49; // [rsp+56h] [rbp-AAh]
  int v50; // [rsp+58h] [rbp-A8h]
  __int64 v51; // [rsp+5Ch] [rbp-A4h]
  __int64 v52; // [rsp+64h] [rbp-9Ch]
  _QWORD *v53; // [rsp+6Ch] [rbp-94h]
  int v54; // [rsp+74h] [rbp-8Ch]
  __int128 v55; // [rsp+80h] [rbp-80h]
  __int128 v56; // [rsp+90h] [rbp-70h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v60; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v62; // [rsp+F0h] [rbp-10h] BYREF
  char v63[16]; // [rsp+100h] [rbp+0h] BYREF
  char v64[16]; // [rsp+110h] [rbp+10h] BYREF
  char v65[16]; // [rsp+120h] [rbp+20h] BYREF
  char v66[16]; // [rsp+130h] [rbp+30h] BYREF
  char v67[16]; // [rsp+140h] [rbp+40h] BYREF
  char v68[16]; // [rsp+150h] [rbp+50h] BYREF

  v3 = a3 + 14;
  LastTopMostWindow = a2;
  BandOrdinal = 0;
  if ( (struct tagWND *)a3[14] == a1 )
    return;
  if ( (unsigned __int64)a2 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    GetDesktopWindow(a1);
    DesktopWindow = GetDesktopWindow(LastTopMostWindow);
    if ( DesktopWindow != v33 )
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
      if ( *v3 && (*(_BYTE *)(LastTopMostWindow[5] + 20LL) & 0x20) == 0 )
      {
        while ( 1 )
        {
          v34 = (_QWORD *)LastTopMostWindow[11];
          if ( !v34 || v11 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v34[5] + 236LL)) < BandOrdinal )
            break;
          if ( (*(_BYTE *)(v34[5] + 20LL) & 0x20) != 0 )
            break;
          LastTopMostWindow = v34;
        }
        if ( !v11 || (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL)) >= BandOrdinal )
          goto LABEL_16;
      }
    }
    else
    {
      if ( !v11 )
      {
LABEL_16:
        v14 = LastTopMostWindow[11];
        if ( v14 )
        {
          v56 = *(_OWORD *)LockPointer(v63, v14 + 96, a1);
          HMAssignmentLock(&v56);
          v57 = *(_OWORD *)LockPointer(v64, (char *)a1 + 88, LastTopMostWindow[11]);
          HMAssignmentLock(&v57);
        }
        v58 = *(_OWORD *)LockPointer(v65, (char *)a1 + 96, LastTopMostWindow);
        HMAssignmentLock(&v58);
        v15 = (__int128 *)LockPointer(v66, LastTopMostWindow + 11, a1);
        v16 = &v59;
        v59 = *v15;
        goto LABEL_19;
      }
      if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL)) )
      {
        while ( 1 )
        {
          v12 = LastTopMostWindow[11];
          if ( !v12 || (unsigned int)GetBandOrdinal(*(unsigned int *)(*(_QWORD *)(v12 + 40) + 236LL)) <= BandOrdinal )
            break;
          LastTopMostWindow = v13;
        }
        goto LABEL_16;
      }
      while ( 1 )
      {
        LastTopMostWindow = (_QWORD *)LastTopMostWindow[12];
        if ( !LastTopMostWindow )
          break;
        if ( BandOrdinal <= (unsigned int)GetBandOrdinal(*(unsigned int *)(LastTopMostWindow[5] + 236LL)) )
          goto LABEL_16;
      }
    }
  }
  v31 = (_QWORD *)*v3;
  if ( *v3 )
  {
    if ( v11 && (unsigned int)GetBandOrdinal(*(unsigned int *)(v31[5] + 236LL)) > BandOrdinal )
    {
      do
      {
        LastTopMostWindow = v31;
        v31 = (_QWORD *)v31[11];
        if ( !v31 )
          break;
        v35 = 0;
        v36 = *(_DWORD *)(v31[5] + 236LL);
        v37 = &gazbidOrder;
        while ( *v37 != v36 )
        {
          if ( v37[1] == v36 )
          {
            ++v35;
            break;
          }
          if ( v37[2] == v36 )
          {
            v35 += 2;
            break;
          }
          if ( v37[3] == v36 )
          {
            v35 += 3;
            break;
          }
          if ( v37[4] == v36 )
          {
            v35 += 4;
            break;
          }
          if ( v37[5] == v36 )
          {
            v35 += 5;
            break;
          }
          v37 += 6;
          v35 += 6;
          if ( v35 >= 0x12 )
            break;
        }
      }
      while ( v35 > BandOrdinal );
      goto LABEL_16;
    }
    v60 = *(_OWORD *)LockPointer(v67, v31 + 12, a1);
    HMAssignmentLock(&v60);
    v61 = *(_OWORD *)LockPointer(v68, (char *)a1 + 88, *v3);
    HMAssignmentLock(&v61);
  }
  if ( a1 )
    *(_QWORD *)(*(v3 - 9) + 56LL) = *((_QWORD *)a1 + 6);
  else
    *(_QWORD *)(*(v3 - 9) + 56LL) = 0LL;
  *(_QWORD *)&v55 = v3;
  v16 = &v62;
  *((_QWORD *)&v55 + 1) = a1;
  v62 = v55;
LABEL_19:
  HMAssignmentLock(v16);
  v17 = 0;
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 8u;
  for ( i = *v3; i; i = *(_QWORD *)(i + 88) )
  {
    if ( (struct tagWND *)i == a1 )
      v17 = 1;
  }
  *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^= (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) ^ (16 * v17)) & 0x10;
  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 0x10) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && a1 != (struct tagWND *)GetDesktopWindow(a1) )
  {
    v21 = *((_QWORD *)a1 + 3);
    v22 = 0LL;
    if ( v21 )
      v22 = *(struct tagWND **)(v21 + 104);
    if ( a1 != v22 && a3 != (__int64 *)gTermIO[1] )
    {
      v23 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL);
      if ( (unsigned __int64)LastTopMostWindow >= 2 && (unsigned __int64)LastTopMostWindow < 0xFFFFFFFFFFFFFFFEuLL
        || (unsigned __int64)LastTopMostWindow > 1 && (unsigned __int64)LastTopMostWindow + 2 > 1 )
      {
        LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
      }
      v24 = *a3;
      v25 = *(_QWORD *)a1;
      v26 = ReferenceDwmApiPort(v21, v19, v20);
      v27 = (void *)v26;
      _InterlockedIncrement64(&g_cDWMWindowUniqueness);
      if ( v26 )
      {
        v43 = 4718624;
        v45 = 0LL;
        v46 = 0LL;
        v47 = 0LL;
        v48 = 0LL;
        v49 = 0;
        v44 = 0x8000;
        v50 = 1073741842;
        v51 = v25;
        v52 = v24;
        v53 = LastTopMostWindow;
        v54 = v23;
        LpcRequestPort(v26, &v43);
        ObfDereferenceObject(v27);
      }
      for ( j = (_QWORD *)*((_QWORD *)a1 + 11); j; j = (_QWORD *)j[11] )
      {
        v29 = j[5];
        v30 = *(_DWORD *)(v29 + 232);
        if ( (v30 & 0x10) == 0 )
        {
          *(_DWORD *)(v29 + 232) = v30 | 0x10;
          v38 = *(_DWORD *)(j[5] + 236LL);
          HWInsertAfter(j[12]);
          v42 = (void *)ReferenceDwmApiPort(v40, v39, v41);
          DwmAsyncChildLink(v42, v38);
        }
      }
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
    TrackLayeredZorder(a1);
  if ( (gdwPostMortemLogging & 4) != 0 )
    _LogLinkWindow(1LL, a1, 0LL, 0LL);
}
