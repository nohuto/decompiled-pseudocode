/*
 * XREFs of xxxWindowHitTest2 @ 0x1C00DAAF0
 * Callers:
 *     xxxWindowFromPoint @ 0x1C00D6160 (xxxWindowFromPoint.c)
 *     xxxWindowHitTest @ 0x1C00DAA44 (xxxWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01CAE78 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     LayerHitTest @ 0x1C00065BC (LayerHitTest.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     xxxWindowHitTest @ 0x1C00DAA44 (xxxWindowHitTest.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00DAD58 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     SizeBoxHwnd @ 0x1C022AE24 (SizeBoxHwnd.c)
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
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v21; // rax
  _QWORD v22[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+9Ch] [rbp+14h]

  v23 = HIDWORD(a2);
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
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)a2, v23) )
      return 0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 26LL) & 8) != 0 && !LayerHitTest(v7, a2) )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v7) && (a4 & 1) != 0 )
  {
    v17 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v17 + 31) & 0xC0) != 0x40 )
    {
      v18 = -2;
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
      v22[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v22;
      v22[1] = v11;
      if ( v11 )
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v13 = xxxWindowHitTest(*(_QWORD *)(v7 + 88), a2, (__int64)a3);
      ThreadUnlock1(v15, v14, v16);
      if ( v13 )
        return v13;
    }
  }
  LODWORD(v17) = IsCompositionInputWindow((const struct tagWND *)v7);
  if ( (_DWORD)v17 || (LODWORD(v17) = gptiCurrent, *(_QWORD *)(v7 + 16) != gptiCurrent) )
  {
    v18 = 1;
    goto LABEL_18;
  }
  _InterlockedIncrement(&glSendMessage);
  LODWORD(v17) = xxxSendTransformableMessageTimeout(
                   (__int64 *)v7,
                   0x84u,
                   0LL,
                   (unsigned __int16)a2 | ((unsigned __int16)v23 << 16),
                   0,
                   0,
                   0LL,
                   1,
                   0);
  v18 = v17;
  if ( (_DWORD)v17 == -1 )
    return 0LL;
LABEL_18:
  if ( a3 )
    *a3 = v18;
  v19 = *(_QWORD *)(v7 + 40);
  LOBYTE(v17) = ~*(_BYTE *)(v19 + 26);
  if ( v18 == (((unsigned int)v17 >> 6) & 1 | 0x10) && (*(_BYTE *)(v19 + 30) & 4) == 0 )
  {
    v21 = SizeBoxHwnd(v7);
    if ( v21 )
      v7 = v21;
  }
  return *(_QWORD *)v7;
}
