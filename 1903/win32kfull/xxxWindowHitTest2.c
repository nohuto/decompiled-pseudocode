/*
 * XREFs of xxxWindowHitTest2 @ 0x1C011EC8C
 * Callers:
 *     xxxWindowFromPoint @ 0x1C010AB1C (xxxWindowFromPoint.c)
 *     xxxWindowHitTest @ 0x1C011EBCC (xxxWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02055A0 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     LayerHitTest @ 0x1C0007D84 (LayerHitTest.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C82C4 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxWindowHitTest @ 0x1C011EBCC (xxxWindowHitTest.c)
 *     SizeBoxHwnd @ 0x1C0259ABC (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(const struct tagWND *BugCheckParameter2, unsigned __int64 a2, int *a3, char a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rdx
  __int64 v23; // rax
  __int64 v24; // [rsp+50h] [rbp-38h] BYREF
  __int64 v25; // [rsp+58h] [rbp-30h]
  __int64 v26; // [rsp+60h] [rbp-28h]
  unsigned int v27; // [rsp+9Ch] [rbp+14h]

  v27 = HIDWORD(a2);
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
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
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)a2, v27) )
      return 0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 26LL) & 8) != 0 && !LayerHitTest(v7, a2) )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v7) && (a4 & 1) != 0 )
  {
    v19 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v19 + 31) & 0xC0) != 0x40 )
    {
      v20 = -2;
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow((const struct tagWND *)v7) )
  {
    v9 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), a2) )
    {
      v13 = *(_QWORD *)(v7 + 112);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
      v24 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
      v25 = v13;
      if ( v13 )
        HMLockObject(v13);
      v15 = xxxWindowHitTest(*(_QWORD *)(v7 + 112), a2, (__int64)a3);
      ThreadUnlock1(v17, v16, v18);
      if ( v15 )
        return v15;
    }
  }
  LODWORD(v19) = IsCompositionInputWindow((const struct tagWND *)v7);
  if ( (_DWORD)v19 || (LODWORD(v19) = gptiCurrent, *(_QWORD *)(v7 + 16) != gptiCurrent) )
  {
    v20 = 1;
    goto LABEL_18;
  }
  _InterlockedIncrement(&glSendMessage);
  LODWORD(v19) = xxxSendTransformableMessageTimeout(
                   (__int64 *)v7,
                   0x84u,
                   0LL,
                   (struct _LARGE_STRING *)((unsigned __int16)a2 | ((unsigned __int16)v27 << 16)),
                   0,
                   0,
                   0LL,
                   1u,
                   0);
  v20 = v19;
  if ( (_DWORD)v19 == -1 )
    return 0LL;
LABEL_18:
  if ( a3 )
    *a3 = v20;
  v21 = *(_QWORD *)(v7 + 40);
  LOBYTE(v19) = ~*(_BYTE *)(v21 + 26);
  if ( v20 == (((unsigned int)v19 >> 6) & 1 | 0x10) && (*(_BYTE *)(v21 + 30) & 4) == 0 )
  {
    v23 = SizeBoxHwnd(v7);
    if ( v23 )
      v7 = v23;
  }
  return *(_QWORD *)v7;
}
