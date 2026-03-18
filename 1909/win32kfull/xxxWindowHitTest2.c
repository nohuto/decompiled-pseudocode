/*
 * XREFs of xxxWindowHitTest2 @ 0x1C00F9960
 * Callers:
 *     xxxWindowFromPoint @ 0x1C00E50BC (xxxWindowFromPoint.c)
 *     xxxWindowHitTest @ 0x1C00F98A0 (xxxWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C02052F0 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     LayerHitTest @ 0x1C0007D84 (LayerHitTest.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0069994 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A350 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxWindowHitTest @ 0x1C00F98A0 (xxxWindowHitTest.c)
 *     SizeBoxHwnd @ 0x1C025937C (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(const struct tagWND *BugCheckParameter2, unsigned __int64 a2, int *a3, char a4)
{
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // ecx
  __int64 v20; // rdx
  __int64 v22; // rax
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF
  __int64 v24; // [rsp+58h] [rbp-30h]
  __int64 v25; // [rsp+60h] [rbp-28h]
  unsigned int v26; // [rsp+9Ch] [rbp+14h]

  v26 = HIDWORD(a2);
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
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
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)a2, v26) )
      return 0LL;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 26LL) & 8) != 0 && !LayerHitTest(v7, a2) )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v7) && (a4 & 1) != 0 )
  {
    v18 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v18 + 31) & 0xC0) != 0x40 )
    {
      v19 = -2;
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow((const struct tagWND *)v7) )
  {
    v9 = *(_QWORD *)(v7 + 40);
    if ( (*(_BYTE *)(v9 + 31) & 0x20) == 0 && PtInRect((_DWORD *)(v9 + 104), a2) )
    {
      v12 = *(_QWORD *)(v7 + 112);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11);
      v23 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
      v24 = v12;
      if ( v12 )
        HMLockObject(v12);
      v14 = xxxWindowHitTest(*(_QWORD *)(v7 + 112), a2, (__int64)a3);
      ThreadUnlock1(v16, v15, v17);
      if ( v14 )
        return v14;
    }
  }
  LODWORD(v18) = IsCompositionInputWindow((const struct tagWND *)v7);
  if ( (_DWORD)v18 || (LODWORD(v18) = gptiCurrent, *(_QWORD *)(v7 + 16) != gptiCurrent) )
  {
    v19 = 1;
    goto LABEL_18;
  }
  _InterlockedIncrement(&glSendMessage);
  LODWORD(v18) = xxxSendTransformableMessageTimeout(
                   (__int64 *)v7,
                   0x84u,
                   0LL,
                   (struct _LARGE_STRING *)((unsigned __int16)a2 | ((unsigned __int16)v26 << 16)),
                   0,
                   0,
                   0LL,
                   1u,
                   0);
  v19 = v18;
  if ( (_DWORD)v18 == -1 )
    return 0LL;
LABEL_18:
  if ( a3 )
    *a3 = v19;
  v20 = *(_QWORD *)(v7 + 40);
  LOBYTE(v18) = ~*(_BYTE *)(v20 + 26);
  if ( v19 == (((unsigned int)v18 >> 6) & 1 | 0x10) && (*(_BYTE *)(v20 + 30) & 4) == 0 )
  {
    v22 = SizeBoxHwnd(v7);
    if ( v22 )
      v7 = v22;
  }
  return *(_QWORD *)v7;
}
