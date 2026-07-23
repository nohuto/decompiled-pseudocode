/*
 * XREFs of EtwpCoverageFlushPending @ 0x1406859D0
 * Callers:
 *     EtwpCoverageFlushWorkItemCallback @ 0x140685900 (EtwpCoverageFlushWorkItemCallback.c)
 *     EtwpCoverageRecord @ 0x1406B547C (EtwpCoverageRecord.c)
 *     EtwpFlushCoverage @ 0x1406DE5F0 (EtwpFlushCoverage.c)
 *     EtwpCoverageReset @ 0x1408B7CE8 (EtwpCoverageReset.c)
 *     EtwpCoverageResetCP @ 0x1408B7EC8 (EtwpCoverageResetCP.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     KeCancelTimer2 @ 0x1400FAFF0 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

int *__fastcall EtwpCoverageFlushPending(int **a1)
{
  int *result; // rax
  int *v3; // rsi
  unsigned __int64 v4; // rdi
  int *v5; // rcx
  __int64 v6; // rdx
  int v7; // eax
  int *v8; // rcx
  __int16 v9; // [rsp+38h] [rbp-59h] BYREF
  int v10; // [rsp+3Ch] [rbp-55h] BYREF
  int v11; // [rsp+40h] [rbp-51h] BYREF
  int v12; // [rsp+44h] [rbp-4Dh] BYREF
  int v13; // [rsp+48h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-39h] BYREF
  int *v15; // [rsp+78h] [rbp-19h]
  int v16; // [rsp+80h] [rbp-11h]
  int v17; // [rsp+84h] [rbp-Dh]
  int *v18; // [rsp+88h] [rbp-9h]
  int v19; // [rsp+90h] [rbp-1h]
  int v20; // [rsp+94h] [rbp+3h]
  int *v21; // [rsp+98h] [rbp+7h]
  int v22; // [rsp+A0h] [rbp+Fh]
  int v23; // [rsp+A4h] [rbp+13h]
  int *v24; // [rsp+A8h] [rbp+17h]
  int v25; // [rsp+B0h] [rbp+1Fh]
  int v26; // [rsp+B4h] [rbp+23h]
  __int16 *v27; // [rsp+B8h] [rbp+27h]
  int v28; // [rsp+C0h] [rbp+2Fh]
  int v29; // [rsp+C4h] [rbp+33h]
  __int64 v30; // [rsp+C8h] [rbp+37h]
  int v31; // [rsp+D0h] [rbp+3Fh]
  int v32; // [rsp+D4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = (int *)&retaddr;
  if ( *((_DWORD *)a1 + 16) )
  {
    v3 = a1[5];
    v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v9 = *((_WORD *)a1 + 32);
    if ( stru_140401340.LevelPlus1 > 5 )
    {
      if ( TlgKeywordOn(&stru_140401340, 0x400000000000uLL) )
      {
        v5 = *a1;
        v6 = *((_QWORD *)v3 + 4);
        v10 = **a1;
        v11 = v5[1];
        v12 = v4 - v5[4];
        v7 = v4 - v5[5];
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v13 = v7;
        v15 = &v10;
        v18 = &v11;
        v21 = &v12;
        v24 = &v13;
        v27 = &v9;
        LOWORD(v7) = *((_WORD *)v3 + 12) - v6;
        v16 = 4;
        v32 = 0;
        v31 = (unsigned __int16)v7;
        v19 = 4;
        v22 = 4;
        v25 = 4;
        v28 = 2;
        v30 = v6;
        TlgWrite(&stru_140401340, &unk_140373CC5, 0LL, 0LL, 8u, &pData);
      }
    }
    *((_QWORD *)v3 + 4) = *((_QWORD *)v3 + 3);
    v8 = *a1;
    *((_DWORD *)a1 + 16) = 0;
    KeCancelTimer2((__int64)(v8 + 60));
    result = *a1;
    (*a1)[4] = v4;
  }
  return result;
}
