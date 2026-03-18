/*
 * XREFs of xxxWindowHitTest2 @ 0x1C00DEEE8
 * Callers:
 *     xxxWindowFromPoint @ 0x1C0067DF0 (xxxWindowFromPoint.c)
 *     xxxWindowHitTest @ 0x1C00DEE34 (xxxWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01EF1DC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     LayerHitTest @ 0x1C0005498 (LayerHitTest.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C002E5D4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072410 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxWindowHitTest @ 0x1C00DEE34 (xxxWindowHitTest.c)
 *     SizeBoxHwnd @ 0x1C0240DA0 (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(const struct tagWND *BugCheckParameter2, unsigned __int64 a2, int *a3, char a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ecx
  __int64 v18; // rdx
  __int64 v20; // rax
  _QWORD v21[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+9Ch] [rbp+14h]

  v22 = HIDWORD(a2);
  v7 = (__int64)BugCheckParameter2;
  if ( !BugCheckParameter2
    || !(unsigned int)IsCompositionInputWindow(BugCheckParameter2)
    && (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 31LL) & 0x10) == 0 )
  {
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow((const struct tagWND *)v7)
    && !PtInRect((_DWORD *)(*(_QWORD *)(v7 + 40) + 88LL), a2) )
  {
    return 0LL;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 168LL);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)a2, v22) )
      return 0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 26LL) & 8) != 0 && !LayerHitTest(v7, a2) )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v7) && (a4 & 1) != 0 )
  {
    v16 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v16 + 31) & 0xC0) != 0x40 )
    {
      v17 = -2;
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow((const struct tagWND *)v7) )
  {
    v9 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), a2) )
    {
      v11 = *(_QWORD *)(v7 + 88);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
      v21[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v21;
      v21[1] = v11;
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v13 = xxxWindowHitTest(*(_QWORD *)(v7 + 88));
      ThreadUnlock1(v15, v14);
      if ( v13 )
        return v13;
    }
  }
  LODWORD(v16) = IsCompositionInputWindow((const struct tagWND *)v7);
  if ( (_DWORD)v16 || (LODWORD(v16) = gptiCurrent, *(_QWORD *)(v7 + 16) != gptiCurrent) )
  {
    v17 = 1;
    goto LABEL_18;
  }
  _InterlockedIncrement(&glSendMessage);
  LODWORD(v16) = xxxSendTransformableMessageTimeout(
                   (__int64 *)v7,
                   0x84u,
                   0LL,
                   (unsigned __int16)a2 | ((unsigned __int16)v22 << 16),
                   0,
                   0,
                   0LL,
                   1,
                   0);
  v17 = v16;
  if ( (_DWORD)v16 == -1 )
    return 0LL;
LABEL_18:
  if ( a3 )
    *a3 = v17;
  v18 = *(_QWORD *)(v7 + 40);
  LOBYTE(v16) = ~*(_BYTE *)(v18 + 26);
  if ( v17 == (((unsigned int)v16 >> 6) & 1 | 0x10) && (*(_BYTE *)(v18 + 30) & 4) == 0 )
  {
    v20 = SizeBoxHwnd(v7);
    if ( v20 )
      v7 = v20;
  }
  return *(_QWORD *)v7;
}
