/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02005C8
 * Callers:
 *     xxxSBTrackInit @ 0x1C020117C (xxxSBTrackInit.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C0023E5C (xxxDispatchMessage.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     xxxTranslateMessage @ 0x1C00F4EDC (xxxTranslateMessage.c)
 *     xxxCallMsgFilter @ 0x1C0129564 (xxxCallMsgFilter.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // rbp
  struct tagWND *v8; // rdx
  int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  void (__fastcall *v13)(struct tagWND *, __int64, _QWORD, _QWORD, struct tagSBCALC *); // rax
  __int64 v14; // rdx
  _QWORD v15[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v15, 0, sizeof(v15));
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v6 + 48);
    if ( v7 )
    {
      if ( (*(_DWORD *)v6 & 2) != 0 )
        SetOrClrWF(1, (__int64)a1, 1568, 1);
      if ( gpqForeground )
      {
        v8 = *(struct tagWND **)(gpqForeground + 112LL);
        if ( v8 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
          {
            v9 = 33;
            if ( *((_QWORD *)v8 + 2) == gptiCurrent )
              v8 = a1;
            else
              v9 = 49;
            xxxWindowEvent(0x80000004, (__int64)v8, 0, 3, v9);
          }
        }
      }
      if ( (*(_DWORD *)v6 & 4) != 0 )
        v10 = -4;
      else
        v10 = ((*(_DWORD *)v6 & 2) != 0) | 0xFFFFFFFA;
      xxxWindowEvent(0x12u, (__int64)a1, v10, 0, 0);
      v7(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) == a1
           && (unsigned int)xxxInternalGetMessage((int)v15, 0, 0, 0, 1, 1) )
      {
        if ( !(unsigned int)xxxCallMsgFilter((__int64)v15, 5) )
        {
          v11 = LODWORD(v15[1]);
          if ( v15[0] == *(_QWORD *)a1
            && ((unsigned int)(LODWORD(v15[1]) - 512) <= 0xE || (unsigned int)(LODWORD(v15[1]) - 256) <= 9) )
          {
            if ( (unsigned int)(LODWORD(v15[1]) - 260) <= 3 && (v15[3] & 0x20000000LL) == 0 )
              v11 = (unsigned int)(LODWORD(v15[1]) - 4);
            v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL);
            if ( !v12 )
              return;
            v13 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, _QWORD, struct tagSBCALC *))(v12 + 48);
            if ( !v13 )
              return;
            v13(a1, v11, v15[2], v15[3], a3);
          }
          else
          {
            xxxTranslateMessage((__int64)v15, 0LL);
            xxxDispatchMessage((__int64)v15, v14);
          }
        }
      }
    }
  }
}
