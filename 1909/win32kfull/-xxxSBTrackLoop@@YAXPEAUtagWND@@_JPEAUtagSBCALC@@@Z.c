/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241498
 * Callers:
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     xxxDispatchMessage @ 0x1C002ADC8 (xxxDispatchMessage.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     xxxCallMsgFilter @ 0x1C00DD700 (xxxCallMsgFilter.c)
 *     SystoChar @ 0x1C00EBCB8 (SystoChar.c)
 *     xxxTranslateMessage @ 0x1C0134F10 (xxxTranslateMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // rbp
  struct tagWND *v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // r9
  void (__fastcall *v15)(struct tagWND *, _QWORD, __int64, __int64, struct tagSBCALC *); // r10
  __int64 v16[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v6 + 48);
    if ( v7 )
    {
      if ( (*(_DWORD *)v6 & 2) != 0 )
        SetOrClrWF(1, (__int64)a1, 0x620u, 1);
      if ( gpqForeground )
      {
        v8 = *(struct tagWND **)(gpqForeground + 120LL);
        if ( v8 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
          {
            v9 = 33;
            if ( *((_QWORD *)v8 + 2) == gptiCurrent )
              v8 = a1;
            else
              v9 = 49;
            xxxWindowEvent(0x80000004, v8, 0LL, 3, v9);
          }
        }
      }
      if ( (*(_DWORD *)v6 & 4) != 0 )
        v10 = 4294967292LL;
      else
        v10 = ((*(_DWORD *)v6 & 2) != 0) | 0xFFFFFFFA;
      xxxWindowEvent(0x12u, a1, v10, 0, 0);
      v7(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) == a1
           && (unsigned int)xxxInternalGetMessage((int)v16, 0, 0, 0, 1, 1) )
      {
        if ( !(unsigned int)xxxCallMsgFilter((__int64)v16, 5) )
        {
          if ( v16[0] == *(_QWORD *)a1
            && ((unsigned int)(LODWORD(v16[1]) - 512) <= 0xE || (unsigned int)(LODWORD(v16[1]) - 256) <= 9) )
          {
            v12 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
            if ( !v12 || !*(_QWORD *)(v12 + 48) )
              return;
            v13 = SystoChar(v16[1], v16[3]);
            v15(a1, v13, v16[2], v14, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)v16, 0LL, v11);
            xxxDispatchMessage((__int64)v16);
          }
        }
      }
    }
  }
}
