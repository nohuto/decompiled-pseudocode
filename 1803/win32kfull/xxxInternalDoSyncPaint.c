/*
 * XREFs of xxxInternalDoSyncPaint @ 0x1C0029330
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     xxxDoSyncPaint @ 0x1C0064E98 (xxxDoSyncPaint.c)
 * Callees:
 *     IsHungWindow @ 0x1C001E340 (IsHungWindow.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     ?InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z @ 0x1C0029FC0 (-InternalBuildHwndList@@YAPEAUtagBWL@@PEAU1@PEAUtagWND@@I@Z.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     ClearHungFlag @ 0x1C0037FF8 (ClearHungFlag.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     xxxSendEraseBkgnd @ 0x1C00E99D8 (xxxSendEraseBkgnd.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x1C00F0E9C (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C00F2C68 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxInternalDoSyncPaint(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // ecx
  int v5; // ebp
  int v6; // esi
  unsigned int *v7; // rax
  __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rdx
  int v14; // edi
  HRGN NCUpdateRgn; // rax
  HRGN v16; // rsi
  __int64 v17; // rcx
  HRGN v18; // rax
  __int64 result; // rax
  struct tagWND *v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rsi
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v27; // r9
  __int64 v28; // r8
  unsigned __int64 v29; // rbx
  __int64 v30; // rdi
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD v35[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v36; // [rsp+60h] [rbp+8h]
  _QWORD *v37; // [rsp+60h] [rbp+8h]
  __int64 v39; // [rsp+70h] [rbp+18h]

  v2 = a1;
  if ( a1 )
  {
    while ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 27LL) & 2) == 0 )
    {
      a1 = *(_QWORD *)(a1 + 80);
      if ( !a1 )
        goto LABEL_4;
    }
    goto LABEL_39;
  }
LABEL_4:
  v3 = *(_QWORD *)(v2 + 40);
  v4 = *(_DWORD *)(v3 + 232);
  v5 = *(_DWORD *)(v3 + 28);
  v6 = *(_DWORD *)(v3 + 24);
  *(_BYTE *)(v3 + 18) &= ~0x40u;
  v36 = v4;
  if ( !(unsigned int)IsWindowDesktopComposed(v2) )
    goto LABEL_16;
  v7 = *(unsigned int **)(v2 + 40);
  v8 = v36;
  v9 = v7[7];
  v10 = v7[6];
  v11 = v7[58];
  if ( v5 != v9 )
    goto LABEL_9;
  if ( v6 == (_DWORD)v10 && v36 == (_DWORD)v11 )
    goto LABEL_16;
  if ( v5 != v9 )
  {
LABEL_9:
    v11 = (v5 ^ v9) & 0xB9CF0000;
    v8 = ((v5 ^ v9) & 0xB9CF0000) != 0;
    goto LABEL_12;
  }
  if ( v6 != (_DWORD)v10 )
  {
    v11 = (v6 ^ (unsigned int)v10) & 0x4E27A9;
    v8 = ((v6 ^ (unsigned int)v10) & 0x4E27A9) != 0;
LABEL_12:
    if ( (_DWORD)v8 )
      goto LABEL_15;
    goto LABEL_16;
  }
  if ( ((v36 ^ (unsigned int)v11) & 0x2E00300) != 0 )
  {
LABEL_15:
    v12 = (void *)ReferenceDwmApiPort(v11, v10, v8);
    DwmAsyncChildStyleChange(v12);
  }
LABEL_16:
  v13 = *(_QWORD *)(v2 + 40);
  v14 = (*(unsigned __int8 *)(v13 + 17) >> 2) & 2 | 1;
  if ( (*(_BYTE *)(v13 + 17) & 2) == 0 )
    v14 = (*(unsigned __int8 *)(v13 + 17) >> 2) & 2;
  if ( v14 )
  {
    if ( (*(_BYTE *)(v13 + 31) & 0x10) != 0 )
    {
      if ( !*(_QWORD *)(v13 + 136) )
      {
        SetOrClrWF(0LL, v2, 258LL, 1LL);
        SetOrClrWF(0LL, v2, 260LL, 1LL);
        LOBYTE(v14) = v14 & 0xFE;
      }
      if ( *(_QWORD *)(v2 + 16) == gptiCurrent )
      {
        NCUpdateRgn = GetNCUpdateRgn((struct tagWND *)v2, 1);
        v16 = NCUpdateRgn;
        if ( (v14 & 2) != 0 && (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 17LL) & 8) != 0 )
          xxxSendNCPaint((struct tagWND *)v2, NCUpdateRgn);
        if ( (v14 & 1) != 0 )
        {
          v17 = *(_QWORD *)(v2 + 40);
          if ( (*(_BYTE *)(v17 + 17) & 8) != 0 )
          {
            DeleteMaybeSpecialRgn(v16);
            v18 = GetNCUpdateRgn((struct tagWND *)v2, 0);
            v17 = *(_QWORD *)(v2 + 40);
            v16 = v18;
          }
          if ( (*(_BYTE *)(v17 + 17) & 2) != 0 )
          {
            SetOrClrWF(0LL, v2, 258LL, 1LL);
            SetOrClrWF(0LL, v2, 260LL, 1LL);
            xxxSendEraseBkgnd(v2, 0LL, v16);
          }
          ClearHungFlag((struct tagWND *)v2);
        }
        DeleteMaybeSpecialRgn(v16);
      }
      else if ( (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL) & 0xC0) != 0x40
             && v2 != *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL)
             && (unsigned int)IsHungWindow(v2)
             && (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 19LL) & 8) != 0 )
      {
        ClearHungFlag((struct tagWND *)v2);
        xxxRedrawHungWindow((struct tagWND *)v2);
      }
    }
    else
    {
      SetOrClrWF(0LL, v2, 264LL, 1LL);
      SetOrClrWF(0LL, v2, 258LL, 1LL);
      SetOrClrWF(0LL, v2, 1664LL, 1LL);
      SetOrClrWF(0LL, v2, 260LL, 1LL);
      ClearHungFlag((struct tagWND *)v2);
    }
  }
LABEL_39:
  result = a2;
  if ( (a2 & 0x20) == 0 )
  {
    if ( (a2 & 4) == 0 )
      return result;
    result = *(_QWORD *)(v2 + 40);
    if ( (*(_BYTE *)(result + 31) & 2) == 0 )
      return result;
  }
  result = (__int64)pbwlCache;
  v20 = *(struct tagWND **)(v2 + 88);
  if ( pbwlCache )
  {
    pbwlCache = 0LL;
  }
  else
  {
    result = Win32AllocPool(296LL, 1819767637LL);
    if ( !result )
      return result;
    *(_QWORD *)(result + 16) = result + 280;
  }
  *(_QWORD *)(result + 24) = 0LL;
  *(_QWORD *)(result + 8) = result + 32;
  v21 = (__int64)InternalBuildHwndList((struct tagBWL *)result, v20, 2u);
  v39 = v21;
  v22 = *(_QWORD **)(v21 + 8);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(v21 + 16) )
    return Win32FreePool(v21);
  *v22 = 1LL;
  v23 = v21 + 32;
  *(_QWORD *)(v21 + 24) = gptiCurrent;
  v24 = (_QWORD *)gpbwlList;
  *(_QWORD *)v21 = gpbwlList;
  gpbwlList = v21;
  v25 = *(_QWORD *)(v21 + 32);
  if ( v25 == 1 )
    return FreeHwndList(v21);
  do
  {
    if ( v25 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v21) )
        PsGetThreadWin32Thread(CurrentThread);
      v28 = (unsigned __int16)v25;
      v24 = (_QWORD *)gpsi;
      if ( (unsigned __int64)(unsigned __int16)v25 < *(_QWORD *)(gpsi + 8LL) )
      {
        v29 = v25 >> 16;
        v30 = gSharedInfo[1] + (unsigned int)(v28 * LODWORD(gSharedInfo[2]));
        v21 = 3 * ((__int64)(unsigned int)(v28 * LODWORD(gSharedInfo[2])) >> 5);
        v24 = (_QWORD *)(gpKernelHandleTable + 24 * ((__int64)(unsigned int)(v28 * LODWORD(gSharedInfo[2])) >> 5));
        v37 = v24;
        if ( (_WORD)v29 != *(_WORD *)(v30 + 26) && (_WORD)v29 != 0xFFFF )
        {
          if ( (_WORD)v29 || !PsGetCurrentProcessWow64Process(v24, v21, v28, v27) )
            goto LABEL_64;
          v24 = v37;
        }
        if ( (*(_BYTE *)(v30 + 25) & 1) == 0 && *(_BYTE *)(v30 + 24) == 1 )
        {
          v31 = *v24;
          if ( *v24 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v31 + 40) + 31LL) & 0x40) == 0 || gptiCurrent == *(_QWORD *)(v31 + 16) )
            {
              v35[0] = *(_QWORD *)(gptiCurrent + 408LL);
              *(_QWORD *)(gptiCurrent + 408LL) = v35;
              v35[1] = v31;
              _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
              xxxInternalDoSyncPaint(v31, a2);
              ThreadUnlock1(v33, v32, v34);
            }
          }
        }
      }
    }
LABEL_64:
    v25 = *(_QWORD *)(v23 + 8);
    v23 += 8LL;
  }
  while ( v25 != 1 );
  v21 = v39;
  return FreeHwndList(v21);
}
