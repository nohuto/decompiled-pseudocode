/*
 * XREFs of RaidAdapterRequestComplete @ 0x1C00057F0
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0004630 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00046A0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C00052A0 (StorPortNotification.c)
 *     StorTickEventQueue @ 0x1C000F0F0 (StorTickEventQueue.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C0035680 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C0038910 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0048350 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C00059C0 (RaidLogMiniportCompletion.c)
 *     _TlgCreateWsz @ 0x1C000E4E0 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C000E558 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C000E600 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 */

char __fastcall RaidAdapterRequestComplete(__int64 a1, __int64 a2, char a3)
{
  bool v4; // zf
  __int64 v6; // rcx
  char v7; // al
  PSLIST_ENTRY v8; // rax
  bool v9; // cf
  struct _PROCESSOR_NUMBER v10; // eax
  struct _KDPC *v11; // rcx
  void *v12; // rdx
  const WCHAR *v13; // rdx
  LPCWSTR v14; // r10
  TraceLoggingHProvider v15; // rcx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  char v19; // [rsp+30h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-94h] BYREF
  int v21; // [rsp+3Ch] [rbp-8Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-88h] BYREF
  __int64 v23; // [rsp+60h] [rbp-68h]
  __int64 v24; // [rsp+68h] [rbp-60h]
  int *v25; // [rsp+70h] [rbp-58h]
  __int64 v26; // [rsp+78h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-48h] BYREF
  char *v28; // [rsp+90h] [rbp-38h]
  __int64 v29; // [rsp+98h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+A0h] [rbp-28h] BYREF

  v4 = (*(_BYTE *)(a1 + 544) & 2) == 0;
  ProcNumber = 0;
  if ( !v4 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5144));
  if ( a3 )
    goto LABEL_6;
  if ( (((unsigned __int64)qword_1C00622B0 >> 3) & 1) != 0 )
    RaidLogMiniportCompletion(a2);
  if ( (*(_BYTE *)(a1 + 524) & 0x10) == 0
    || (LODWORD(v8) = _InterlockedExchange((volatile __int32 *)(a2 + 776), 4), (_DWORD)v8 != 1) )
  {
LABEL_6:
    v6 = *(_QWORD *)(a2 + 160);
    if ( v6 )
    {
      v7 = *(_BYTE *)(v6 + 141);
      v9 = v7 == -85;
      LOBYTE(v8) = v7 + 85;
      if ( v9 || (_BYTE)v8 == 1 )
      {
        if ( (unsigned int)dword_1C0062058 > 5 )
        {
          LOBYTE(v8) = TlgKeywordOn((TraceLoggingHProvider)v6, 0x400000000000uLL);
          if ( (_BYTE)v8 )
          {
            v13 = *(const WCHAR **)(a1 + 4800);
            v21 = *(_DWORD *)(a1 + 56);
            v19 = *(_BYTE *)(a1 + 4356);
            v23 = a1 + 5128;
            v25 = &v21;
            v24 = 16LL;
            v26 = 4LL;
            TlgCreateWsz(&pDesc, v13);
            v29 = 1LL;
            v28 = &v19;
            TlgCreateWsz(&v30, v14);
            LOBYTE(v8) = TlgWrite(v15, &unk_1C0056CA8, v16, v17, 7u, &pData);
          }
        }
        return (char)v8;
      }
      *(_BYTE *)(v6 + 141) = -85;
    }
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    v10 = *(struct _PROCESSOR_NUMBER *)(a2 + 18);
    ProcNumber = v10;
    if ( v10.Group == 0xFFFF )
      goto LABEL_19;
    if ( (*(_BYTE *)(a1 + 4451) & 2) != 0 )
    {
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      v10.Group = ProcNumber.Group;
    }
    if ( v10.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
      || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + v10.Group) )
    {
LABEL_19:
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 224), (PSLIST_ENTRY)(a2 + 32));
      v11 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
      v12 = 0LL;
      goto LABEL_17;
    }
    v8 = ExpInterlockedPushEntrySList(
           (PSLIST_HEADER)g_RaidPerProcessorState + 8 * (unsigned __int64)(ProcNumber.Number + (v10.Group << 6)) + 4,
           (PSLIST_ENTRY)(a2 + 32));
    if ( !v8 )
    {
      LOBYTE(v8) = ProcNumber.Number;
      v11 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                           + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
      if ( LODWORD(v11[1].ProcessorHistory) != 2 )
      {
        v12 = *(void **)(a1 + 8);
LABEL_17:
        LOBYTE(v8) = KeInsertQueueDpc(v11, v12, 0LL);
      }
    }
  }
  return (char)v8;
}
