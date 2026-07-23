/*
 * XREFs of MiLogOutswappedProcessCommitRelease @ 0x1402A4380
 * Callers:
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall MiLogOutswappedProcessCommitRelease(__int64 a1, __int64 a2)
{
  __int64 v3; // r10
  __int64 v4; // r11
  ULONG64 v5; // r8
  TraceLoggingHProvider v6; // r9
  const GUID *v7; // [rsp+20h] [rbp-59h]
  const GUID *v8; // [rsp+28h] [rbp-51h]
  int v9; // [rsp+40h] [rbp-39h] BYREF
  __int64 v10; // [rsp+48h] [rbp-31h] BYREF
  __int64 v11; // [rsp+50h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp+7h] BYREF
  int *v14; // [rsp+90h] [rbp+17h]
  int v15; // [rsp+98h] [rbp+1Fh]
  int v16; // [rsp+9Ch] [rbp+23h]
  __int64 *v17; // [rsp+A0h] [rbp+27h]
  int v18; // [rsp+A8h] [rbp+2Fh]
  int v19; // [rsp+ACh] [rbp+33h]
  __int64 *v20; // [rsp+B0h] [rbp+37h]
  int v21; // [rsp+B8h] [rbp+3Fh]
  int v22; // [rsp+BCh] [rbp+43h]

  if ( hProvider && hProvider->LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(hProvider, 4uLL) )
    {
      v9 = *(_DWORD *)(v3 + 736);
      v10 = a2;
      v11 = v4;
      TlgCreateSz(&pDesc, (LPCSTR)(v3 + 1104));
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v17 = &v10;
      v14 = &v9;
      v20 = &v11;
      v15 = 4;
      v18 = 8;
      v21 = 8;
      TlgWriteEx(v6, &unk_14036EAF6, v5, (ULONG)v6, v7, v8, 6u, &pData);
    }
  }
}
