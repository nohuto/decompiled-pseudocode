/*
 * XREFs of TtmiSessionDeviceListWorker @ 0x14087E97C
 * Callers:
 *     TtmpSessionWorker @ 0x140882320 (TtmpSessionWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     TtmpCallAssignedToTerminal @ 0x14087EB8C (TtmpCallAssignedToTerminal.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x14087F0DC (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmpPublishDeviceEvent @ 0x14087F4A0 (TtmpPublishDeviceEvent.c)
 *     TtmpPushTerminalState @ 0x14087F67C (TtmpPushTerminalState.c)
 *     TtmpStartCallout @ 0x14087F840 (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x14087F92C (TtmpStopCallout.c)
 */

__int64 __fastcall TtmiSessionDeviceListWorker(__int64 a1)
{
  void **v1; // r14
  void **i; // rbx
  int v4; // ecx
  void **v5; // r15
  unsigned int v6; // ecx
  __int64 v7; // r9
  int v8; // eax
  void (__fastcall *v9)(void *); // rsi
  _QWORD *v10; // rdx
  void **v11; // rax
  _BYTE v13[48]; // [rsp+30h] [rbp-38h] BYREF

  v1 = (void **)(a1 + 96);
  for ( i = *(void ***)(a1 + 96); i != v1; i = (void **)*i )
  {
    v4 = *((_DWORD *)i + 150);
    v5 = i;
    if ( (v4 & 4) != 0 )
      goto LABEL_14;
    if ( (v4 & 1) != 0 )
    {
      v6 = v4 & 0xFFFFFFFC | 2;
      *((_DWORD *)i + 150) = v6;
      if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
      {
        *((_DWORD *)i + 149) = 0;
        v6 |= 0x40u;
        *((_DWORD *)i + 150) = v6;
      }
      v7 = 3LL;
    }
    else
    {
      if ( (v4 & 0x10) == 0 )
        goto LABEL_12;
      v6 = v4 & 0xFFFFFFEF;
      *((_DWORD *)i + 150) = v6;
      if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
      {
        *((_DWORD *)i + 149) = 0;
        v6 |= 0x40u;
        *((_DWORD *)i + 150) = v6;
      }
      v7 = 4LL;
    }
    *((_DWORD *)i + 150) = v6 | 0x20;
    TtmpPublishDeviceEvent(a1, 0LL, i, v7);
LABEL_12:
    v4 = *((_DWORD *)i + 150);
    if ( (v4 & 0x20) != 0 )
    {
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFDF;
      TtmpCallAssignedToTerminal(a1, i);
      v4 = *((_DWORD *)i + 150);
    }
LABEL_14:
    if ( (v4 & 0x44) == 0x40 )
    {
      *((_DWORD *)i + 150) = v4 & 0xFFFFFFBF;
      if ( (unsigned __int8)TtmpPushTerminalState(a1, i) )
      {
        *((_DWORD *)i + 150) |= 0x40u;
        *(_DWORD *)(a1 + 4) |= 0x1000u;
      }
    }
    v8 = *((_DWORD *)i + 150);
    if ( (v8 & 4) != 0 )
    {
      if ( (v8 & 2) != 0 )
      {
        *((_DWORD *)i + 150) = v8 | 8;
        TtmpPublishDeviceEvent(a1, 0LL, i, 5LL);
      }
      v9 = (void (__fastcall *)(void *))i[5];
      if ( v9 )
      {
        memset(v13, 0, 0x28uLL);
        TtmpStartCallout((unsigned int)v13, a1, (_DWORD)i, 2, (__int64)v9, 0);
        v9(i[3]);
        TtmpStopCallout(v13, 0LL);
      }
      v10 = *i;
      v11 = (void **)i[1];
      i = v11;
      if ( *((void ***)*v5 + 1) != v5 || *v11 != v5 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      --*(_DWORD *)(a1 + 116);
      ExFreePoolWithTag(v5, 0x446D7454u);
    }
  }
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 0LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 1LL);
  TtmpCommitTerminalDisplayStateUpdateWorker(a1, 2LL);
  return TtmpCommitTerminalDisplayStateUpdateWorker(a1, 3LL);
}
