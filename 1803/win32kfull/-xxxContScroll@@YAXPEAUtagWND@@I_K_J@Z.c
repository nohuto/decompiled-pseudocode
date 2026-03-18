/*
 * XREFs of ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01FFF80
 * Callers:
 *     <none>
 * Callees:
 *     _SetSystemTimer @ 0x1C00647F0 (_SetSystemTimer.c)
 *     _GetMessagePos @ 0x1C00F5880 (_GetMessagePos.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0200084 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     xxxTrackBox @ 0x1C0202070 (xxxTrackBox.c)
 */

void __fastcall xxxContScroll(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  struct tagWND *v5; // rdx

  v3 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL);
  if ( v3 )
  {
    GetMessagePos((__int64)a1, a2);
    xxxTrackBox(a1);
    if ( v3 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL) && (*(_DWORD *)v3 & 1) != 0 )
    {
      v4 = SetSystemTimer((unsigned __int64)a1, 65534LL, *(_DWORD *)(gpsi + 4976LL) >> 3, (__int64)xxxContScroll, 0);
      v5 = *(struct tagWND **)(v3 + 24);
      *(_QWORD *)(v3 + 64) = v4;
      if ( v5 )
        xxxDoScroll(*(struct tagWND **)(v3 + 16), v5, *(_DWORD *)(v3 + 56), 0, (*(_DWORD *)v3 >> 1) & 1);
    }
  }
}
