/*
 * XREFs of DpiMiracastCbSendUserModeMessage @ 0x1C02A4670
 * Callers:
 *     <none>
 * Callees:
 *     DpiMiracastAddRefMiracastDeviceContext @ 0x1C004C270 (DpiMiracastAddRefMiracastDeviceContext.c)
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C004CF90 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     McTemplateK0xqqppq @ 0x1C004FAF0 (McTemplateK0xqqppq.c)
 *     DpiMiracastSendAsyncUserModeRequest @ 0x1C02A5658 (DpiMiracastSendAsyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastCbSendUserModeMessage(
        int *P,
        size_t Size,
        const GUID *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v8; // edi
  int v9; // r15d
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v20; // rax
  size_t Sizea; // [rsp+20h] [rbp-58h]
  int Sizec; // [rsp+20h] [rbp-58h]
  size_t Sizeb; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+28h] [rbp-50h]
  int v26; // [rsp+40h] [rbp-38h]
  __int64 v27; // [rsp+40h] [rbp-38h]

  v8 = (int)a3;
  v9 = Size;
  if ( P && P[4] == 1953656900 && P[5] == 14 && *((_QWORD *)P + 54) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      v26 = 0;
      Sizec = Size;
      McTemplateK0xqqppq(
        (__int64)P,
        &EventEnterDxgkCbSendUserModeMessage,
        a3,
        *((_QWORD *)P + 12),
        Sizec,
        a4,
        a6,
        a7,
        v26);
    }
    DpiMiracastAddRefMiracastDeviceContext((__int64)P, (unsigned int)DpiMiracastCbSendUserModeMessage);
    LODWORD(Sizea) = v9;
    v13 = DpiMiracastSendAsyncUserModeRequest(v12, v11, 2295820, v8, Sizea, a5, a4, a6, a7, 0LL, 0LL);
    v17 = v13;
    if ( v13 < 0 )
    {
      v18 = WdLogNewEntry5_WdError(v15, v14, v16);
      *(_QWORD *)(v18 + 24) = v17;
      WdLogEvent5_WdError(v18);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v27) = v17;
      LODWORD(v25) = a4;
      LODWORD(Sizeb) = v9;
      McTemplateK0xqqppq(v15, &EventLeaveDxgkCbSendUserModeMessage, v16, *((_QWORD *)P + 12), Sizeb, v25, a6, a7, v27);
    }
    DpiMiracastReleaseMiracastDeviceContext(P, (__int64)DpiMiracastCbSendUserModeMessage, (__int64)v16);
    return (unsigned int)v17;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(P, Size, a3);
    *(_QWORD *)(v20 + 24) = P;
    *(_QWORD *)(v20 + 32) = -1073741585LL;
    WdLogEvent5_WdError(v20);
    return 3221225711LL;
  }
}
