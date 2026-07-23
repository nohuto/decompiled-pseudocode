/*
 * XREFs of SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x14030024C
 * Callers:
 *     SeTokenCanImpersonate @ 0x140639100 (SeTokenCanImpersonate.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpQueryProcessCommandLine @ 0x14066DA18 (EtwpQueryProcessCommandLine.c)
 */

void __fastcall SepLogUnmatchedSessionFlagImpersonationAttempt(__int64 a1, __int64 a2)
{
  int *v2; // rdi
  _KPROCESS *Process; // rcx
  PVOID v6; // rbx
  __int64 v7; // rax
  int v8; // ecx
  int v9; // [rsp+38h] [rbp-79h] BYREF
  int v10; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v11; // [rsp+40h] [rbp-71h] BYREF
  PVOID P; // [rsp+48h] [rbp-69h]
  int v13; // [rsp+50h] [rbp-61h] BYREF
  const size_t *v14; // [rsp+58h] [rbp-59h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  int *v16; // [rsp+88h] [rbp-29h]
  __int64 v17; // [rsp+90h] [rbp-21h]
  int *v18; // [rsp+98h] [rbp-19h]
  __int64 v19; // [rsp+A0h] [rbp-11h]
  _DWORD *v20; // [rsp+A8h] [rbp-9h]
  __int64 v21; // [rsp+B0h] [rbp-1h]
  __int64 v22; // [rsp+B8h] [rbp+7h]
  _DWORD v23[2]; // [rsp+C0h] [rbp+Fh] BYREF
  _DWORD *v24; // [rsp+C8h] [rbp+17h]
  __int64 v25; // [rsp+D0h] [rbp+1Fh]
  PVOID v26; // [rsp+D8h] [rbp+27h]
  _DWORD v27[2]; // [rsp+E0h] [rbp+2Fh] BYREF

  v13 = 0x20000;
  v11 = 0LL;
  v2 = &v13;
  P = 0LL;
  v14 = &pwsz;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ActiveProcessors.Bitmap[15] )
    v2 = (int *)Process[1].ActiveProcessors.Bitmap[15];
  EtwpQueryProcessCommandLine(Process, &v11);
  v6 = P;
  if ( stru_140401278.LevelPlus1 > 5 && TlgKeywordOn(&stru_140401278, 0x400000000000uLL) )
  {
    v7 = *(_QWORD *)(a2 + 216);
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 216) + 32LL);
    v8 = *(_DWORD *)(v7 + 32);
    v16 = &v9;
    v18 = &v10;
    v20 = v23;
    v22 = *((_QWORD *)v2 + 1);
    v23[0] = *(unsigned __int16 *)v2;
    v24 = v27;
    v27[0] = (unsigned __int16)v11;
    v10 = v8;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 2LL;
    v23[1] = 0;
    v25 = 2LL;
    v26 = v6;
    v27[1] = 0;
    TlgWrite(&stru_140401278, &unk_140373C2D, 0LL, 0LL, 8u, &pData);
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
}
