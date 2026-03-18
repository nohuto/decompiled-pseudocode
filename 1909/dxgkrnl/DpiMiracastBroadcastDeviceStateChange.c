/*
 * XREFs of DpiMiracastBroadcastDeviceStateChange @ 0x1C02A44E8
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C004D1E0 (DpiMiracastStopMiracastSessionSync.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C004D7C0 (DpiMiracastTargetDeviceChange.c)
 *     DpiMiracastTearDownAssociation @ 0x1C004DCB0 (DpiMiracastTearDownAssociation.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004E6D8 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C02A50B8 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     McTemplateK0xqq @ 0x1C004FA6C (McTemplateK0xqq.c)
 */

__int64 __fastcall DpiMiracastBroadcastDeviceStateChange(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rcx
  _DWORD *PoolWithTag; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rbx
  int updated; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+28h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
  {
    v19 = *(_DWORD *)(a1 + 416);
    v18 = *(_DWORD *)(a1 + 408);
    McTemplateK0xqq(a1, a2, a3, *(_QWORD *)(a1 + 96), v18, v19);
  }
  v4 = *(_QWORD *)(a1 + 592);
  if ( !v4 )
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x214uLL, 0x74727044u);
    *(_QWORD *)(a1 + 592) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = WdLogNewEntry5_WdLowResource(v7, v6, v8, v9);
      LODWORD(v11) = -1073741801;
      *(_QWORD *)(v10 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v10);
      return (unsigned int)v11;
    }
    *PoolWithTag = 1;
    memset((void *)(*(_QWORD *)(a1 + 592) + 4LL), 0, 0x208uLL);
    DestinationString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 592) + 4LL);
    DestinationString.MaximumLength = 518;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(a1 + 160));
    v4 = *(_QWORD *)(a1 + 592);
  }
  *(_DWORD *)(v4 + 524) = *(_DWORD *)(a1 + 408);
  *(_DWORD *)(*(_QWORD *)(a1 + 592) + 528LL) = *(_DWORD *)(a1 + 416);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
              *(_QWORD *)(a1 + 592),
              532LL,
              0LL,
              a1 + 420,
              0,
              0);
  v11 = updated;
  if ( updated < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v16 + 24) = v11;
    WdLogEvent5_WdError(v16);
  }
  return (unsigned int)v11;
}
