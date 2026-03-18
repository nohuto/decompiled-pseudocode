/*
 * XREFs of ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C001BAC0
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C001B950 (xxxDW_SendDestroyMessages.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     zzzDestroyCaret @ 0x1C00DD7F0 (zzzDestroyCaret.c)
 */

void __fastcall xxxMoveFocusAway(const struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      v3 = *((_QWORD *)a1 + 10);
      v6[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v6;
      v6[1] = v3;
      if ( v3 )
        _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
      xxxSetFocus(*((struct tagWND **)a1 + 10));
      ThreadUnlock1(v5, v4);
    }
    else
    {
      xxxSetFocus(0LL);
    }
  }
  if ( a1 == *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 296LL) )
    zzzDestroyCaret(a1, a2);
}
