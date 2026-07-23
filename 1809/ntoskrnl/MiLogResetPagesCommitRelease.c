/*
 * XREFs of MiLogResetPagesCommitRelease @ 0x1402A4470
 * Callers:
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void MiLogResetPagesCommitRelease()
{
  __int64 v0; // r10
  __int64 v1; // r11
  ULONG64 v2; // r8
  TraceLoggingHProvider v3; // r9
  const GUID *v4; // [rsp+20h] [rbp-59h]
  const GUID *v5; // [rsp+28h] [rbp-51h]
  int v6; // [rsp+40h] [rbp-39h] BYREF
  __int64 v7; // [rsp+48h] [rbp-31h] BYREF
  __int64 v8; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  int *v11; // [rsp+90h] [rbp+17h]
  int v12; // [rsp+98h] [rbp+1Fh]
  int v13; // [rsp+9Ch] [rbp+23h]
  __int64 *v14; // [rsp+A0h] [rbp+27h]
  int v15; // [rsp+A8h] [rbp+2Fh]
  int v16; // [rsp+ACh] [rbp+33h]
  __int64 *v17; // [rsp+B0h] [rbp+37h]
  int v18; // [rsp+B8h] [rbp+3Fh]
  int v19; // [rsp+BCh] [rbp+43h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 4uLL) )
    {
      v6 = *(_DWORD *)(v0 + 736);
      v8 = *(_QWORD *)(v0 + 1480);
      v7 = v1;
      TlgCreateSz(&pDesc, (LPCSTR)(v0 + 1104));
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v14 = &v7;
      v11 = &v6;
      v17 = &v8;
      v12 = 4;
      v15 = 8;
      v18 = 8;
      TlgWriteEx(v3, &unk_14036EA40, v2, (ULONG)v3, v4, v5, 6u, &pData);
    }
  }
}
