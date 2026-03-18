/*
 * XREFs of CreateSpb @ 0x1C015D8BC
 * Callers:
 *     zzzLockWindowUpdate2 @ 0x1C00139B8 (zzzLockWindowUpdate2.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     SubtractRect @ 0x1C011219C (SubtractRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0208D70 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C020931C (SpbCheck.c)
 *     GreSaveScreenBits @ 0x1C0299198 (GreSaveScreenBits.c)
 */

char __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *i; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  int *v12; // r14
  __int64 *v13; // r13
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // ebx
  int v17; // r12d
  __int64 CompatibleBitmapInternal; // rax
  int v19; // ebx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  struct tagWND *v23; // rdx
  int v25; // [rsp+60h] [rbp-19h]
  __int128 v27; // [rsp+70h] [rbp-9h] BYREF
  __int128 v28; // [rsp+80h] [rbp+7h] BYREF

  v4 = a1;
  LODWORD(DesktopWindow) = IsWindowDesktopComposed(a1);
  if ( (_DWORD)DesktopWindow && a2 != 2 )
    return DesktopWindow;
  if ( (a2 & 2) == 0 )
  {
    v6 = *((_QWORD *)v4 + 13);
    if ( v6 )
    {
      DesktopWindow = GetDesktopWindow((__int64)v4);
      if ( v6 != DesktopWindow )
        return DesktopWindow;
    }
  }
  if ( *(_QWORD *)(gpDispInfo + 32LL) )
  {
    SpbCheck();
  }
  else
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v6, v7, v8);
    for ( i = *(_QWORD **)(gpDispInfo + 24LL); i; i = (_QWORD *)*i )
      GreGetBounds(i[1], 0LL, 1LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  DesktopWindow = Win32AllocPoolWithQuota(72LL, 1651733333LL);
  v10 = DesktopWindow;
  if ( !DesktopWindow )
    return DesktopWindow;
  v11 = Win32AllocPoolNonPaged(88LL, 1651733333LL);
  *(_QWORD *)(v10 + 64) = v11;
  if ( !v11 )
  {
LABEL_39:
    LOBYTE(DesktopWindow) = Win32FreePool(v10);
    return DesktopWindow;
  }
  v12 = (int *)(v10 + 24);
  v13 = (__int64 *)(v10 + 8);
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_OWORD *)(v10 + 24) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 88LL);
  v27 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !(unsigned int)IntersectRect((_DWORD *)(v10 + 24), (int *)(v10 + 24), (int *)&v27) )
  {
LABEL_38:
    Win32FreePool(*(_QWORD *)(v10 + 64));
    goto LABEL_39;
  }
  *(_QWORD *)(v10 + 40) = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_QWORD *)&v27 = v10 + 8;
  *((_QWORD *)&v27 + 1) = v4;
  *(_DWORD *)(v10 + 48) = a2;
  HMAssignmentLock(&v27);
  if ( (a2 & 2) == 0 )
  {
    v28 = *(_OWORD *)v12;
    if ( *(_DWORD *)(gpsi + 2220LL)
      || ((v14 = MonitorFromRect((struct tagRECT *)(v10 + 24), 1u, 0),
           v27 = 0uLL,
           !SubtractRect((__int64)&v27, (int *)(v10 + 24), (int *)(*(_QWORD *)(v14 + 40) + 28LL)))
       || !(unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 120LL), &v27))
      && (unsigned int)IntersectRect((_DWORD *)(v10 + 24), (int *)(v10 + 24), (int *)(*(_QWORD *)(v14 + 40) + 28LL))
      && v14 == *(_QWORD *)(gpDispInfo + 96LL) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL) )
      {
        v15 = GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL, &v28);
        *(_QWORD *)(v10 + 56) = v15;
        if ( v15 )
        {
          *(_DWORD *)(v10 + 48) |= 1u;
LABEL_29:
          SetOrClrWF(1, (__int64)v4, 0x80u, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
          goto LABEL_30;
        }
      }
      v16 = *v12 & 7;
      v17 = *(_DWORD *)(v10 + 32) - *v12;
      v25 = *(_DWORD *)(v10 + 36) - *(_DWORD *)(v10 + 28);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v17 + v16, v25, 0, 0LL, 0LL);
      *(_QWORD *)(v10 + 16) = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        if ( GreSelectBitmap(ghdcMem) )
        {
          v19 = NtGdiBitBltInternal(ghdcMem, v16, 0, v17, v25, a3, *v12, *(_DWORD *)(v10 + 28), 13369344, 0, 0);
          GreSelectBitmap(ghdcMem);
          if ( v19 )
          {
            GreSetBitmapOwner(*(_QWORD *)(v10 + 16), 0LL);
            goto LABEL_29;
          }
        }
      }
    }
    v22 = *(_QWORD *)(v10 + 16);
    if ( v22 )
      GreDeleteObject(v22);
    HMAssignmentUnlock(v10 + 8);
    goto LABEL_38;
  }
LABEL_30:
  *(_QWORD *)v10 = *(_QWORD *)(gpDispInfo + 32LL);
  *(_QWORD *)(gpDispInfo + 32LL) = v10;
  SetRectRgnIndirect(ghrgnSPB2, v10 + 24);
  v20 = *(_QWORD *)(*(_QWORD *)(*v13 + 40) + 168LL);
  if ( !v20 || (LODWORD(DesktopWindow) = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v20, 1LL), (_DWORD)DesktopWindow) )
  {
    LOBYTE(DesktopWindow) = IsDesktopWindow(*v13);
    if ( (_DWORD)DesktopWindow || (DesktopWindow = *(_QWORD *)(v21 + 40), (*(_BYTE *)(DesktopWindow + 26) & 8) == 0) )
    {
      v23 = *(struct tagWND **)(v21 + 104);
      if ( !v23 || (LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v10, v23, 0), (_DWORD)DesktopWindow) )
      {
        while ( v4 )
        {
          LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v10, v4, 1);
          if ( !(_DWORD)DesktopWindow )
            break;
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
        }
      }
    }
    else
    {
      LOBYTE(DesktopWindow) = SpbTransfer((struct tagSPB *)v10, (struct tagWND *)v21, 1);
    }
  }
  return DesktopWindow;
}
