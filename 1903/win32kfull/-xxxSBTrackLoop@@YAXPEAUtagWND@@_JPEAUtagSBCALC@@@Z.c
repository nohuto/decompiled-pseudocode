/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241AB8
 * Callers:
 *     xxxSBTrackInit @ 0x1C0242698 (xxxSBTrackInit.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     xxxTranslateMessage @ 0x1C00136B0 (xxxTranslateMessage.c)
 *     xxxDispatchMessage @ 0x1C0024958 (xxxDispatchMessage.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxCallMsgFilter @ 0x1C0101B80 (xxxCallMsgFilter.c)
 *     SystoChar @ 0x1C0110D78 (SystoChar.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // rbp
  struct tagWND *v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  void (__fastcall *v14)(struct tagWND *, _QWORD, __int64, __int64, struct tagSBCALC *); // r10
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v18, 0, sizeof(v18));
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
            xxxWindowEvent(0x80000004, v8, 0LL, 3LL, v9);
          }
        }
      }
      if ( (*(_DWORD *)v6 & 4) != 0 )
        v10 = 4294967292LL;
      else
        v10 = ((*(_DWORD *)v6 & 2) != 0) | 0xFFFFFFFA;
      xxxWindowEvent(0x12u, a1, v10, 0LL, 0);
      v7(a1, 513LL, 0LL, a2, a3);
      while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL) == a1
           && (unsigned int)xxxInternalGetMessage((int)v18, 0, 0, 0, 1, 1) )
      {
        if ( !(unsigned int)xxxCallMsgFilter((__int64)v18, 5) )
        {
          if ( v18[0] == *(_QWORD *)a1
            && ((unsigned int)(LODWORD(v18[1]) - 512) <= 0xE || (unsigned int)(LODWORD(v18[1]) - 256) <= 9) )
          {
            v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 712LL);
            if ( !v11 || !*(_QWORD *)(v11 + 48) )
              return;
            v12 = SystoChar(v18[1], v18[3]);
            v14(a1, v12, v18[2], v13, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)v18, 0);
            xxxDispatchMessage((__int64)v18, v15, v16, v17);
          }
        }
      }
    }
  }
}
