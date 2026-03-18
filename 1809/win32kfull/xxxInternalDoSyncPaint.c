/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C0070780
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxDoSyncPaint @ 0x1C006E41C (xxxDoSyncPaint.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     IsHungWindow @ 0x1C0017040 (IsHungWindow.c)
 *     xxxSendEraseBkgnd @ 0x1C001C804 (xxxSendEraseBkgnd.c)
 *     ClearHungFlag @ 0x1C001F610 (ClearHungFlag.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C0072AE4 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0073424 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C01354AC (xxxRedrawHungWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall xxxInternalDoSyncPaint(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  int v6; // ebp
  int v7; // esi
  int v8; // r14d
  unsigned int *v9; // rax
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int v14; // esi
  void *v15; // rax
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
  _QWORD *v28; // rax
  char *v29; // r14
  __int64 v30; // rcx
  unsigned __int64 i; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  int v33; // r8d
  unsigned __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 *v36; // r15
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  _QWORD v41[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  v3 = a1;
  if ( !a1 )
  {
LABEL_4:
    v5 = v3[5];
    v6 = *(_DWORD *)(v5 + 28);
    v7 = *(_DWORD *)(v5 + 24);
    v8 = *(_DWORD *)(v5 + 232);
    *(_BYTE *)(v5 + 18) &= ~0x40u;
    if ( (unsigned int)IsWindowDesktopComposed(v3) )
    {
      v9 = (unsigned int *)v3[5];
      v10 = v9[7];
      v11 = v9[6];
      v12 = v9[58];
      if ( v6 != v10 )
        goto LABEL_9;
      if ( v7 == (_DWORD)v11 && v8 == (_DWORD)v12 )
        goto LABEL_19;
      if ( v6 != v10 )
      {
LABEL_9:
        v12 = (v6 ^ v10) & 0xB9CF0000;
        v13 = ((v6 ^ v10) & 0xB9CF0000) != 0;
        v14 = -v13 & 0xFFFFFFF0;
        goto LABEL_12;
      }
      if ( v7 != (_DWORD)v11 )
      {
        v10 = v9[6];
        v12 = (v7 ^ (unsigned int)v11) & 0x4E27A9;
        v13 = ((v7 ^ (unsigned int)v11) & 0x4E27A9) != 0;
        v14 = -v13 & 0xFFFFFFEC;
LABEL_12:
        if ( !(_DWORD)v12 )
          v10 = 0;
        if ( !v13 )
          goto LABEL_19;
        goto LABEL_18;
      }
      if ( ((v8 ^ (unsigned int)v12) & 0x2E00300) != 0 )
      {
        v14 = -268435456;
        v10 = v9[58];
LABEL_18:
        v15 = (void *)ReferenceDwmApiPort(v12, v11);
        DwmAsyncChildStyleChange(v15, *v3, v14, v10);
      }
    }
LABEL_19:
    a2 = v3[5];
    v16 = (*(unsigned __int8 *)(a2 + 17) >> 2) & 2 | 1;
    LOBYTE(v4) = *(_BYTE *)(a2 + 17) & 2;
    if ( !(_BYTE)v4 )
      v16 = (*(unsigned __int8 *)(a2 + 17) >> 2) & 2;
    if ( v16 )
    {
      if ( (*(_BYTE *)(a2 + 31) & 0x10) != 0 )
      {
        if ( !*(_QWORD *)(a2 + 136) )
        {
          SetOrClrWF(0, (__int64)v3, 0x102u, 1);
          SetOrClrWF(0, (__int64)v3, 0x104u, 1);
          LOBYTE(v16) = v16 & 0xFE;
        }
        if ( v3[2] == gptiCurrent )
        {
          NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v3, 1);
          v18 = (__int64)NCUpdateRgn;
          if ( (v16 & 2) != 0 && (*(_BYTE *)(v3[5] + 17) & 8) != 0 )
            xxxSendNCPaint((struct tagWND *)v3, NCUpdateRgn);
          if ( (v16 & 1) != 0 )
          {
            v19 = v3[5];
            if ( (*(_BYTE *)(v19 + 17) & 8) != 0 )
            {
              DeleteMaybeSpecialRgn(v18);
              v20 = GetNCUpdateRgn((struct tagWND *)v3, 0);
              v19 = v3[5];
              v18 = (__int64)v20;
            }
            if ( (*(_BYTE *)(v19 + 17) & 2) != 0 )
            {
              SetOrClrWF(0, (__int64)v3, 0x102u, 1);
              SetOrClrWF(0, (__int64)v3, 0x104u, 1);
              xxxSendEraseBkgnd((__int64)v3, 0LL, v18);
            }
            ClearHungFlag((struct tagWND *)v3, 0x308u);
          }
          LOBYTE(v4) = DeleteMaybeSpecialRgn(v18);
        }
        else
        {
          v4 = v3[5];
          if ( (*(_BYTE *)(v4 + 31) & 0xC0) != 0x40 )
          {
            v4 = *(_QWORD *)(grpdeskRitInput + 8LL);
            if ( v3 != *(__int64 **)(v4 + 24) )
            {
              LODWORD(v4) = IsHungWindow((__int64)v3);
              if ( (_DWORD)v4 )
              {
                v4 = v3[5];
                if ( (*(_BYTE *)(v4 + 19) & 8) != 0 )
                {
                  ClearHungFlag((struct tagWND *)v3, 0x308u);
                  LOBYTE(v4) = xxxRedrawHungWindow((struct tagWND *)v3);
                }
              }
            }
          }
        }
      }
      else
      {
        SetOrClrWF(0, (__int64)v3, 0x108u, 1);
        SetOrClrWF(0, (__int64)v3, 0x102u, 1);
        SetOrClrWF(0, (__int64)v3, 0x680u, 1);
        SetOrClrWF(0, (__int64)v3, 0x104u, 1);
        LOBYTE(v4) = ClearHungFlag((struct tagWND *)v3, 0x308u);
      }
    }
    goto LABEL_42;
  }
  while ( 1 )
  {
    v4 = a1[5];
    if ( (*(_BYTE *)(v4 + 27) & 2) != 0 )
      break;
    a1 = (__int64 *)a1[10];
    if ( !a1 )
      goto LABEL_4;
  }
LABEL_42:
  if ( (v2 & 0x20) != 0 || (v2 & 4) != 0 && (v4 = v3[5], (*(_BYTE *)(v4 + 31) & 2) != 0) )
  {
    v21 = (_QWORD *)v3[11];
    v22 = pbwlCache;
    if ( pbwlCache )
    {
      pbwlCache = 0LL;
    }
    else
    {
      v4 = Win32AllocPool(296LL, 1819767637LL);
      v22 = (struct tagBWL *)v4;
      if ( !v4 )
        return v4;
      *(_QWORD *)(v4 + 16) = v4 + 280;
    }
    *((_QWORD *)v22 + 3) = 0LL;
    for ( *((_QWORD *)v22 + 1) = (char *)v22 + 32; v21; v21 = (_QWORD *)v21[8] )
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
          v26 = UserReAllocPool(v22, (unsigned int)v25 + 8LL, (unsigned int)v25 + 72LL, 1819767637LL);
          if ( !v26 )
            break;
          v27 = v26 + v25;
          v22 = (struct tagBWL *)v26;
          *(_QWORD *)(v26 + 8) = v27;
          *(_QWORD *)(v26 + 16) = v27 + 64;
        }
      }
    }
    v28 = (_QWORD *)*((_QWORD *)v22 + 1);
    if ( (unsigned __int64)v28 < *((_QWORD *)v22 + 2) )
    {
      *v28 = 1LL;
      v29 = (char *)v22 + 32;
      *((_QWORD *)v22 + 3) = gptiCurrent;
      v30 = gpbwlList;
      *(_QWORD *)v22 = gpbwlList;
      gpbwlList = v22;
      for ( i = *((_QWORD *)v22 + 4); i != 1; v29 += 8 )
      {
        if ( i )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !(unsigned int)IsThreadCrossSessionAttached(v30, a2) )
            PsGetThreadWin32Thread(CurrentThread);
          v33 = (unsigned __int16)i;
          v30 = gpsi;
          if ( (unsigned __int64)(unsigned __int16)i < *(_QWORD *)(gpsi + 8LL) )
          {
            v34 = i >> 16;
            v35 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(v33 * *((_DWORD *)&gSharedInfo + 4));
            a2 = 3 * ((__int64)(unsigned int)(v33 * *((_DWORD *)&gSharedInfo + 4)) >> 5);
            v30 = gpKernelHandleTable;
            v36 = (__int64 *)(gpKernelHandleTable
                            + 24 * ((__int64)(unsigned int)(v33 * *((_DWORD *)&gSharedInfo + 4)) >> 5));
            if ( ((_WORD)v34 == *(_WORD *)(v35 + 26)
               || (_WORD)v34 == 0xFFFF
               || !(_WORD)v34 && PsGetCurrentProcessWow64Process(gpKernelHandleTable))
              && (*(_BYTE *)(v35 + 25) & 1) == 0
              && *(_BYTE *)(v35 + 24) == 1 )
            {
              v37 = *v36;
              if ( *v36 )
              {
                if ( (*(_BYTE *)(*(_QWORD *)(v37 + 40) + 31LL) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v37 + 16) )
                {
                  v41[0] = *(_QWORD *)(gptiCurrent + 416LL);
                  *(_QWORD *)(gptiCurrent + 416LL) = v41;
                  v41[1] = v37;
                  _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
                  xxxInternalDoSyncPaint(v37, v2);
                  ThreadUnlock1(v39, v38);
                }
              }
            }
          }
        }
        i = *((_QWORD *)v29 + 1);
      }
      LOBYTE(v4) = FreeHwndList(v22);
    }
    else
    {
      LOBYTE(v4) = Win32FreePool(v22);
    }
  }
  return v4;
}
