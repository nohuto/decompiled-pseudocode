/*
 * XREFs of ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022900C
 * Callers:
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDispatchMessage @ 0x1C002DDC0 (xxxDispatchMessage.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     xxxCallMsgFilter @ 0x1C00D2880 (xxxCallMsgFilter.c)
 *     SystoChar @ 0x1C0107800 (SystoChar.c)
 *     xxxTranslateMessage @ 0x1C0110150 (xxxTranslateMessage.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall xxxSBTrackLoop(struct tagWND *a1, __int64 a2, struct tagSBCALC *a3)
{
  __int64 v6; // rdi
  void (__fastcall *v7)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *); // rbp
  struct tagWND *v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r9
  void (__fastcall *v14)(struct tagWND *, _QWORD, _QWORD, __int64, struct tagSBCALC *); // r10
  __int64 v15; // rdx
  _QWORD v16[6]; // [rsp+30h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
  if ( v6 )
  {
    v7 = *(void (__fastcall **)(struct tagWND *, __int64, _QWORD, __int64, struct tagSBCALC *))(v6 + 48);
    if ( v7 )
    {
      if ( (*(_DWORD *)v6 & 2) != 0 )
        SetOrClrWF(1, (__int64)a1, 0x620u, 1);
      if ( gpqForeground )
      {
        v8 = *(struct tagWND **)(gpqForeground + 112LL);
        if ( v8 )
        {
          if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
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
      while ( *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL) == a1
           && (unsigned int)xxxInternalGetMessage((__int64)v16, 0LL, 0, 0, 1, 1u) )
      {
        if ( !(unsigned int)xxxCallMsgFilter((__int64)v16, 5) )
        {
          if ( v16[0] == *(_QWORD *)a1
            && ((unsigned int)(LODWORD(v16[1]) - 512) <= 0xE || (unsigned int)(LODWORD(v16[1]) - 256) <= 9) )
          {
            v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL);
            if ( !v11 || !*(_QWORD *)(v11 + 48) )
              return;
            v12 = SystoChar(v16[1], v16[3]);
            v14(a1, v12, v16[2], v13, a3);
          }
          else
          {
            xxxTranslateMessage((__int64)v16, 0LL);
            xxxDispatchMessage((__int64)v16, v15);
          }
        }
      }
    }
  }
}
