/*
 * XREFs of ndisMRestoreOpenHandlers @ 0x1C00145B4
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisMResetCompleteStage2 @ 0x1C009BB24 (ndisMResetCompleteStage2.c)
 *     ndisWdfDevicePowerOn @ 0x1C00A5A10 (ndisWdfDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisMiniportXStateClearFlag @ 0x1C001C54C (ndisMiniportXStateClearFlag.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 */

char __fastcall ndisMRestoreOpenHandlers(__int64 a1, int a2)
{
  __int64 (__fastcall *v3)(); // rdx
  int v4; // ecx
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rax
  _QWORD *v7; // rcx
  char v9; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      97,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v9);
  }
  if ( (unsigned __int8)ndisMiniportXStateClearFlag(a1) )
  {
    v6 = *(_QWORD *)(a1 + 2048);
    if ( v6 && !*(_BYTE *)(v6 + 376) )
      *(_QWORD *)(v6 + 632) = ndisFilterIndicateReceiveNetBufferLists;
    v7 = *(_QWORD **)(a1 + 56);
    *(_DWORD *)(a1 + 2668) = *(_DWORD *)(a1 + 2672);
    *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 680);
    v5 = ndisOpenCancelSendNetBufferLists;
    *(_QWORD *)(a1 + 184) = ndisOpenCancelSendNetBufferLists;
    if ( v7 )
    {
      v3 = ndisLegacyRequest;
      do
      {
        v7[12] = v7[72];
        v7[21] = v7[70];
        v7[37] = v7[71];
        v5 = (__int64 (__fastcall *)())ndisMReset;
        v7[22] = ndisMReset;
        v7[23] = ndisLegacyRequest;
        v7[24] = ndisMOidRequest;
        v7[91] = ndisMDirectOidRequest;
        v7 = (_QWORD *)v7[49];
      }
      while ( v7 );
    }
  }
  else
  {
    LOBYTE(v5) = Microsoft_Windows_NDISEnableBits;
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      LOBYTE(v5) = McTemplateK0jqxq(
                     v4,
                     (unsigned int)&KeptMiniportFakeHandlers,
                     (int)a1 + 4008,
                     (int)a1 + 4008,
                     *(_DWORD *)(a1 + 4056),
                     *(_QWORD *)(a1 + 4024),
                     *(_BYTE *)(a1 + 930));
    if ( (*(_BYTE *)(a1 + 930) & 2) != 0 )
    {
      v5 = *(__int64 (__fastcall **)())(a1 + 56);
      if ( v5 )
      {
        v3 = ndisLegacyRequest;
        do
        {
          *((_QWORD *)v5 + 23) = ndisLegacyRequest;
          *((_QWORD *)v5 + 24) = ndisMOidRequest;
          *((_QWORD *)v5 + 91) = ndisMDirectOidRequest;
          v5 = (__int64 (__fastcall *)())*((_QWORD *)v5 + 49);
        }
        while ( v5 );
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    LOBYTE(v5) = WPP_RECORDER_SF_q(
                   *((_QWORD *)WPP_GLOBAL_Control + 8),
                   (int)v3,
                   13,
                   98,
                   (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                   a1);
  }
  return (char)v5;
}
