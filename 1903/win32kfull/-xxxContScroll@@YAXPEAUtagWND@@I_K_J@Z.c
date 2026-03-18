/*
 * XREFs of ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0241420
 * Callers:
 *     <none>
 * Callees:
 *     _SetSystemTimer @ 0x1C008C7D4 (_SetSystemTimer.c)
 *     _GetMessagePos @ 0x1C0117EA0 (_GetMessagePos.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C024150C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     xxxTrackBox @ 0x1C0243620 (xxxTrackBox.c)
 */

void __fastcall xxxContScroll(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  struct tagWND *v7; // rdx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
  if ( v5 )
  {
    GetMessagePos((__int64)a1, a2, a3, a4);
    xxxTrackBox(a1);
    if ( v5 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL) && (*(_DWORD *)v5 & 1) != 0 )
    {
      v6 = SetSystemTimer((__int64)a1, 65534, *(_DWORD *)(gpsi + 4976LL) >> 3, (int)xxxContScroll, 0);
      v7 = *(struct tagWND **)(v5 + 24);
      *(_QWORD *)(v5 + 64) = v6;
      if ( v7 )
        xxxDoScroll(*(struct tagWND **)(v5 + 16), v7, *(_DWORD *)(v5 + 56), 0, (*(_DWORD *)v5 >> 1) & 1);
    }
  }
}
