/*
 * XREFs of RaidAdapterRequestComplete @ 0x1C0005DE0
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0003360 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00049A0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 *     StorTickEventQueue @ 0x1C000FFE0 (StorTickEventQueue.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C00386B0 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C003B510 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0049830 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C0005F9C (RaidLogMiniportCompletion.c)
 *     _TlgCreateWsz @ 0x1C0011B50 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1C0011BC8 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0011C70 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

char __fastcall RaidAdapterRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  char v6; // al
  PSLIST_ENTRY v7; // rax
  bool v8; // cf
  struct _PROCESSOR_NUMBER v9; // eax
  struct _KDPC *v10; // rcx
  void *v11; // rdx
  const WCHAR *v12; // rdx
  LPCWSTR v13; // r10
  TraceLoggingHProvider v14; // rcx
  LPCGUID v15; // r8
  LPCGUID v16; // r9
  char v18; // [rsp+30h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+34h] [rbp-94h] BYREF
  int v20; // [rsp+3Ch] [rbp-8Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-88h] BYREF
  __int64 v22; // [rsp+60h] [rbp-68h]
  __int64 v23; // [rsp+68h] [rbp-60h]
  int *v24; // [rsp+70h] [rbp-58h]
  __int64 v25; // [rsp+78h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-48h] BYREF
  char *v27; // [rsp+90h] [rbp-38h]
  __int64 v28; // [rsp+98h] [rbp-30h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A0h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 560) & 2) != 0 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5280));
  if ( (qword_1C00612B0 & 8) != 0 )
  {
    if ( a3 )
      goto LABEL_5;
    RaidLogMiniportCompletion(a2);
  }
  else if ( a3 )
  {
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1 + 540) & 0x10) != 0 )
  {
    LODWORD(v7) = _InterlockedExchange((volatile __int32 *)(a2 + 776), 4);
    if ( (_DWORD)v7 == 1 )
      return (char)v7;
  }
LABEL_5:
  v5 = *(_QWORD *)(a2 + 160);
  if ( v5 )
  {
    v6 = *(_BYTE *)(v5 + 141);
    v8 = v6 == -85;
    LOBYTE(v7) = v6 + 85;
    if ( v8 || (_BYTE)v7 == 1 )
    {
      if ( (unsigned int)dword_1C0061058 > 5 )
      {
        LOBYTE(v7) = TlgKeywordOn((TraceLoggingHProvider)v5, 0x400000000000uLL);
        if ( (_BYTE)v7 )
        {
          v12 = *(const WCHAR **)(a1 + 4864);
          v20 = *(_DWORD *)(a1 + 56);
          v18 = *(_BYTE *)(a1 + 4420);
          v22 = a1 + 5256;
          v24 = &v20;
          v23 = 16LL;
          v25 = 4LL;
          TlgCreateWsz(&pDesc, v12);
          v28 = 1LL;
          v27 = &v18;
          TlgCreateWsz(&v29, v13);
          LOBYTE(v7) = TlgWrite(v14, &unk_1C00570C0, v15, v16, 7u, &pData);
        }
      }
      return (char)v7;
    }
    *(_BYTE *)(v5 + 141) = -85;
  }
  *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
  v9 = *(struct _PROCESSOR_NUMBER *)(a2 + 18);
  ProcNumber = v9;
  if ( v9.Group == 0xFFFF )
    goto LABEL_18;
  if ( (*(_BYTE *)(a1 + 4515) & 2) != 0 )
  {
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    v9.Group = ProcNumber.Group;
  }
  if ( v9.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
    || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + v9.Group) )
  {
LABEL_18:
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 240), (PSLIST_ENTRY)(a2 + 32));
    v10 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
    v11 = 0LL;
    goto LABEL_16;
  }
  v7 = ExpInterlockedPushEntrySList(
         (PSLIST_HEADER)g_RaidPerProcessorState
       + 8 * (unsigned __int64)((v9.Group << 6) + (unsigned int)ProcNumber.Number)
       + 4,
         (PSLIST_ENTRY)(a2 + 32));
  if ( !v7 )
  {
    LOBYTE(v7) = ProcNumber.Number;
    v10 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                         + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
    if ( LODWORD(v10[1].ProcessorHistory) != 2 )
    {
      v11 = *(void **)(a1 + 8);
LABEL_16:
      LOBYTE(v7) = KeInsertQueueDpc(v10, v11, 0LL);
    }
  }
  return (char)v7;
}
