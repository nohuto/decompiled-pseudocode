/*
 * XREFs of SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x14031E290
 * Callers:
 *     SeTokenCanImpersonate @ 0x1405DE8C0 (SeTokenCanImpersonate.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x14069118C (EtwpQueryProcessCommandLine.c)
 */

void __fastcall SepLogUnmatchedSessionFlagImpersonationAttempt(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdi
  _KPROCESS *Process; // rcx
  PVOID v6; // rbx
  __int64 v7; // rax
  int v8; // ecx
  int v9; // [rsp+38h] [rbp-79h] BYREF
  int v10; // [rsp+3Ch] [rbp-75h] BYREF
  _QWORD v11[2]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v12; // [rsp+50h] [rbp-61h] BYREF
  PVOID P; // [rsp+58h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  int *v15; // [rsp+88h] [rbp-29h]
  __int64 v16; // [rsp+90h] [rbp-21h]
  int *v17; // [rsp+98h] [rbp-19h]
  __int64 v18; // [rsp+A0h] [rbp-11h]
  _DWORD *v19; // [rsp+A8h] [rbp-9h]
  __int64 v20; // [rsp+B0h] [rbp-1h]
  __int64 v21; // [rsp+B8h] [rbp+7h]
  _DWORD v22[2]; // [rsp+C0h] [rbp+Fh] BYREF
  _DWORD *v23; // [rsp+C8h] [rbp+17h]
  __int64 v24; // [rsp+D0h] [rbp+1Fh]
  PVOID v25; // [rsp+D8h] [rbp+27h]
  _DWORD v26[2]; // [rsp+E0h] [rbp+2Fh] BYREF

  v11[0] = 0x20000LL;
  v12 = 0LL;
  v2 = (unsigned __int16 *)v11;
  P = 0LL;
  v11[1] = &pwsz;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ActiveProcessors.Bitmap[14] )
    v2 = (unsigned __int16 *)Process[1].ActiveProcessors.Bitmap[14];
  EtwpQueryProcessCommandLine(Process, &v12);
  v6 = P;
  if ( stru_1404265D0.LevelPlus1 > 5 && TlgKeywordOn(&stru_1404265D0, 0x400000000000uLL) )
  {
    v7 = *(_QWORD *)(a2 + 216);
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 32LL);
    v8 = *(_DWORD *)(v7 + 32);
    v15 = &v9;
    v17 = &v10;
    v19 = v22;
    v21 = *((_QWORD *)v2 + 1);
    v22[0] = *v2;
    v23 = v26;
    v26[0] = (unsigned __int16)v12;
    v10 = v8;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 2LL;
    v22[1] = 0;
    v24 = 2LL;
    v25 = v6;
    v26[1] = 0;
    TlgWrite(&stru_1404265D0, &unk_140393472, 0LL, 0LL, 8u, &pData);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
