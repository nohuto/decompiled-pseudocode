/*
 * XREFs of ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0240E00
 * Callers:
 *     <none>
 * Callees:
 *     _SetSystemTimer @ 0x1C00EA334 (_SetSystemTimer.c)
 *     _GetMessagePos @ 0x1C00F1E60 (_GetMessagePos.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240EEC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     xxxTrackBox @ 0x1C0242EE0 (xxxTrackBox.c)
 */

void __fastcall xxxContScroll(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  struct tagWND *v6; // rdx

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
  if ( v4 )
  {
    GetMessagePos((__int64)a1, a2, a3);
    xxxTrackBox(a1);
    if ( v4 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL) && (*(_DWORD *)v4 & 1) != 0 )
    {
      v5 = SetSystemTimer((unsigned __int64)a1, 65534LL, *(_DWORD *)(gpsi + 4976LL) >> 3, (__int64)xxxContScroll, 0);
      v6 = *(struct tagWND **)(v4 + 24);
      *(_QWORD *)(v4 + 64) = v5;
      if ( v6 )
        xxxDoScroll(*(struct tagWND **)(v4 + 16), v6, *(_DWORD *)(v4 + 56), 0, (*(_DWORD *)v4 >> 1) & 1);
    }
  }
}
