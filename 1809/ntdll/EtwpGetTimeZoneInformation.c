/*
 * XREFs of EtwpGetTimeZoneInformation @ 0x180052BC4
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180052E00 (RtlpQueryTimeZoneInformationWorker.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall EtwpGetTimeZoneInformation(char *a1)
{
  int TimeZoneInformationWorker; // edi
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int64 v9; // rax
  __int128 v10; // xmm0
  _OWORD v12[4]; // [rsp+20h] [rbp-69h] BYREF
  __int128 v13; // [rsp+60h] [rbp-29h]
  __int128 v14; // [rsp+70h] [rbp-19h]
  __int128 v15; // [rsp+80h] [rbp-9h]
  __int128 v16; // [rsp+90h] [rbp+7h]
  __int128 v17; // [rsp+A0h] [rbp+17h]
  __int128 v18; // [rsp+B0h] [rbp+27h]
  __int64 v19; // [rsp+C0h] [rbp+37h]
  int v20; // [rsp+C8h] [rbp+3Fh]

  TimeZoneInformationWorker = RtlpQueryTimeZoneInformationWorker(v12, 0xACuLL);
  if ( TimeZoneInformationWorker < 0 )
  {
    memset(a1, 0, 0xACuLL);
  }
  else
  {
    v3 = v12[1];
    *(_OWORD *)a1 = v12[0];
    v4 = v12[2];
    *((_OWORD *)a1 + 1) = v3;
    v5 = v12[3];
    *((_OWORD *)a1 + 2) = v4;
    v6 = v13;
    *((_OWORD *)a1 + 3) = v5;
    v7 = v14;
    *((_OWORD *)a1 + 4) = v6;
    v8 = v15;
    *((_OWORD *)a1 + 5) = v7;
    *((_OWORD *)a1 + 6) = v8;
    *((_OWORD *)a1 + 7) = v16;
    v9 = v19;
    v10 = v18;
    *((_OWORD *)a1 + 8) = v17;
    *((_OWORD *)a1 + 9) = v10;
    *((_QWORD *)a1 + 20) = v9;
    *((_DWORD *)a1 + 42) = v20;
    *((_DWORD *)a1 + 17) = DWORD1(v13);
    *((_WORD *)a1 + 37) = WORD4(v13);
    *((_WORD *)a1 + 36) = WORD1(v14);
    *((_DWORD *)a1 + 19) = *(_DWORD *)((char *)&v13 + 10);
    *((_WORD *)a1 + 40) = HIWORD(v13);
    *((_WORD *)a1 + 41) = v14;
    *((_DWORD *)a1 + 38) = DWORD2(v18);
    *((_WORD *)a1 + 79) = WORD6(v18);
    *((_WORD *)a1 + 78) = HIWORD(v19);
    *((_WORD *)a1 + 80) = HIWORD(v18);
    *(_DWORD *)(a1 + 162) = v19;
    *((_WORD *)a1 + 83) = WORD2(v19);
  }
  return (unsigned int)TimeZoneInformationWorker;
}
