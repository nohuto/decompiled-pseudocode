/*
 * XREFs of CreateSpb @ 0x1C015E86C
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C0134CFC (zzzLockWindowUpdate2.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     SubtractRect @ 0x1C00ECF64 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C0208AC0 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     SpbCheck @ 0x1C020906C (SpbCheck.c)
 *     GreSaveScreenBits @ 0x1C0298BE8 (GreSaveScreenBits.c)
 */

char __fastcall CreateSpb(struct tagWND *a1, int a2, HDC a3)
{
  struct tagWND *v4; // rsi
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  _QWORD *i; // rbx
  __int64 v8; // rdi
  __int64 v9; // rax
  int *v10; // r14
  __int64 *v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  int v14; // ebx
  int v15; // r12d
  __int64 CompatibleBitmapInternal; // rax
  __int64 v17; // r15
  int v18; // ebx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  struct tagWND *v22; // rdx
  int v24; // [rsp+60h] [rbp-19h]
  __int128 v26; // [rsp+70h] [rbp-9h] BYREF
  __int128 v27; // [rsp+80h] [rbp+7h] BYREF

  v4 = a1;
  LODWORD(DesktopWindow) = IsWindowDesktopComposed(a1);
  if ( (_DWORD)DesktopWindow && a2 != 2 )
    return DesktopWindow;
  if ( (a2 & 2) == 0 )
  {
    if ( *((_QWORD *)v4 + 13) )
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
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    for ( i = *(_QWORD **)(gpDispInfo + 24LL); i; i = (_QWORD *)*i )
      GreGetBounds(i[1], 0LL, 1LL);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  }
  DesktopWindow = Win32AllocPoolWithQuota(72LL, 1651733333LL);
  v8 = DesktopWindow;
  if ( !DesktopWindow )
    return DesktopWindow;
  v9 = Win32AllocPoolNonPaged(88LL, 1651733333LL);
  *(_QWORD *)(v8 + 64) = v9;
  if ( !v9 )
  {
LABEL_39:
    LOBYTE(DesktopWindow) = Win32FreePool(v8);
    return DesktopWindow;
  }
  v10 = (int *)(v8 + 24);
  v11 = (__int64 *)(v8 + 8);
  *(_QWORD *)(v8 + 8) = 0LL;
  *(_OWORD *)(v8 + 24) = *(_OWORD *)(*((_QWORD *)v4 + 5) + 88LL);
  v26 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !(unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)&v26) )
  {
LABEL_38:
    Win32FreePool(*(_QWORD *)(v8 + 64));
    goto LABEL_39;
  }
  *(_QWORD *)(v8 + 40) = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_QWORD *)&v26 = v8 + 8;
  *((_QWORD *)&v26 + 1) = v4;
  *(_DWORD *)(v8 + 48) = a2;
  HMAssignmentLock(&v26);
  if ( (a2 & 2) == 0 )
  {
    v27 = *(_OWORD *)v10;
    if ( *(_DWORD *)(gpsi + 2220LL)
      || ((v12 = MonitorFromRect((struct tagRECT *)(v8 + 24), 1u, 0),
           v26 = 0uLL,
           !SubtractRect((__int64)&v26, (int *)(v8 + 24), (int *)(*(_QWORD *)(v12 + 40) + 28LL)))
       || !(unsigned int)GreRectInRegion(*(_QWORD *)(gpDispInfo + 120LL), &v26))
      && (unsigned int)IntersectRect((_DWORD *)(v8 + 24), (int *)(v8 + 24), (int *)(*(_QWORD *)(v12 + 40) + 28LL))
      && v12 == *(_QWORD *)(gpDispInfo + 96LL) )
    {
      if ( !*(_QWORD *)(*((_QWORD *)v4 + 5) + 168LL) )
      {
        v13 = GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), 0LL, 0LL, &v27);
        *(_QWORD *)(v8 + 56) = v13;
        if ( v13 )
        {
          *(_DWORD *)(v8 + 48) |= 1u;
LABEL_29:
          SetOrClrWF(1, (__int64)v4, 0x80u, 1);
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
          goto LABEL_30;
        }
      }
      v14 = *v10 & 7;
      v15 = *(_DWORD *)(v8 + 32) - *v10;
      v24 = *(_DWORD *)(v8 + 36) - *(_DWORD *)(v8 + 28);
      CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(a3, v15 + v14, v24, 0, 0LL, 0LL);
      *(_QWORD *)(v8 + 16) = CompatibleBitmapInternal;
      if ( CompatibleBitmapInternal )
      {
        v17 = GreSelectBitmap(ghdcMem, CompatibleBitmapInternal);
        if ( v17 )
        {
          v18 = NtGdiBitBltInternal(ghdcMem, v14, 0, v15, v24, a3, *v10, *(_DWORD *)(v8 + 28), 13369344, 0, 0);
          GreSelectBitmap(ghdcMem, v17);
          if ( v18 )
          {
            GreSetBitmapOwner(*(_QWORD *)(v8 + 16), 0LL);
            goto LABEL_29;
          }
        }
      }
    }
    v21 = *(_QWORD *)(v8 + 16);
    if ( v21 )
      GreDeleteObject(v21);
    HMAssignmentUnlock(v8 + 8);
    goto LABEL_38;
  }
LABEL_30:
  *(_QWORD *)v8 = *(_QWORD *)(gpDispInfo + 32LL);
  *(_QWORD *)(gpDispInfo + 32LL) = v8;
  SetRectRgnIndirect(ghrgnSPB2, v8 + 24);
  v19 = *(_QWORD *)(*(_QWORD *)(*v11 + 40) + 168LL);
  if ( !v19 || (LODWORD(DesktopWindow) = GreCombineRgn(ghrgnSPB2, ghrgnSPB2, v19, 1LL), (_DWORD)DesktopWindow) )
  {
    LOBYTE(DesktopWindow) = IsDesktopWindow(*v11);
    if ( (_DWORD)DesktopWindow || (DesktopWindow = *(_QWORD *)(v20 + 40), (*(_BYTE *)(DesktopWindow + 26) & 8) == 0) )
    {
      v22 = *(struct tagWND **)(v20 + 104);
      if ( !v22 || (LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, v22, 0), (_DWORD)DesktopWindow) )
      {
        while ( v4 )
        {
          LODWORD(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, v4, 1);
          if ( !(_DWORD)DesktopWindow )
            break;
          v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
        }
      }
    }
    else
    {
      LOBYTE(DesktopWindow) = SpbTransfer((struct tagSPB *)v8, (struct tagWND *)v20, 1);
    }
  }
  return DesktopWindow;
}
