/*
 * XREFs of ExpQueryProcessorInformationCounters @ 0x1405CEF74
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1405CE7B0 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     PoGetIdleTimes @ 0x1400A7260 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131D74 (PoGetPerfStateAndParkingInfo.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall ExpQueryProcessorInformationCounters(__int64 a1, char a2, char a3, char a4, __int64 a5)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+20h] [rbp-51h] BYREF
  _DWORD v22[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v23; // [rsp+48h] [rbp-29h] BYREF
  __int64 v24; // [rsp+50h] [rbp-21h]
  __int64 v25; // [rsp+58h] [rbp-19h]
  _DWORD v26[2]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v27; // [rsp+68h] [rbp-9h]
  _BYTE v28[8]; // [rsp+70h] [rbp-1h] BYREF
  __int64 v29; // [rsp+78h] [rbp+7h]
  __int64 v30; // [rsp+80h] [rbp+Fh]
  __int64 v31; // [rsp+88h] [rbp+17h]
  unsigned int v32; // [rsp+90h] [rbp+1Fh]
  unsigned int v33; // [rsp+94h] [rbp+23h]
  unsigned int v34; // [rsp+98h] [rbp+27h]

  ProcNumber.Group = *(unsigned __int8 *)(a1 + 208);
  ProcNumber.Number = *(_BYTE *)(a1 + 209);
  ProcNumber.Reserved = 0;
  if ( a2 )
  {
    PoGetIdleTimes(&ProcNumber, (__int64)v28, (__int64)v26);
    v8 = v26[0];
    v9 = v26[1];
    *(_QWORD *)(a5 + 72) = v29;
    *(_QWORD *)(a5 + 96) = v32;
    *(_QWORD *)(a5 + 80) = v30;
    *(_QWORD *)(a5 + 104) = v33;
    *(_QWORD *)(a5 + 88) = v31;
    *(_QWORD *)(a5 + 112) = v34;
    *(_QWORD *)(a5 + 120) = v27;
    v10 = KeMaximumIncrement;
    v11 = KeMaximumIncrement * v8;
    v12 = KeMaximumIncrement * v9;
    *(_QWORD *)a5 = v11;
    v13 = v12 - v11;
    v14 = v11 + v10 * *(unsigned int *)(a1 + 23468);
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v13 = 0LL;
    *(_QWORD *)(a5 + 72) = 0LL;
    *(_QWORD *)(a5 + 80) = 0LL;
    *(_QWORD *)(a5 + 88) = 0LL;
    *(_QWORD *)(a5 + 96) = 0LL;
    *(_QWORD *)(a5 + 104) = 0LL;
    *(_QWORD *)(a5 + 112) = 0LL;
    *(_QWORD *)(a5 + 120) = 0LL;
    v14 = 0LL;
  }
  *(_QWORD *)(a5 + 8) = v14;
  *(_QWORD *)(a5 + 24) = v13;
  v15 = KeMaximumIncrement;
  *(_QWORD *)(a5 + 16) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(a1 + 23432);
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(a1 + 23424);
  *(_QWORD *)(a5 + 48) = v15 * *(unsigned int *)(a1 + 23440);
  *(_DWORD *)(a5 + 60) = *(_DWORD *)(a1 + 11804);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(a1 + 11868);
  *(_QWORD *)(a5 + 40) = v15 * *(unsigned int *)(a1 + 23436);
  *(_DWORD *)(a5 + 56) = *(_DWORD *)(a1 + 11896);
  *(_QWORD *)(a5 + 168) = *(_QWORD *)(a5 + 72) + *(_QWORD *)(a5 + 80) + *(_QWORD *)(a5 + 88);
  *(_QWORD *)(a5 + 176) = *(_QWORD *)(a5 + 96) + *(_QWORD *)(a5 + 104) + *(_QWORD *)(a5 + 112);
  memset(v22, 0, sizeof(v22));
  v16 = 0;
  v23 = 0LL;
  v17 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v18 = (unsigned __int64)&v23 & -(__int64)(a4 != 0);
  v19 = 0LL;
  if ( a3 || v18 )
  {
    PoGetPerfStateAndParkingInfo(&ProcNumber, v22, v18, 0LL);
    v19 = v25;
    v17 = v24;
    v16 = v23;
  }
  *(_DWORD *)(a5 + 128) = BYTE1(v22[7]);
  *(_DWORD *)(a5 + 132) = v22[1];
  *(_DWORD *)(a5 + 136) = v22[2];
  *(_DWORD *)(a5 + 140) = v22[0];
  *(_DWORD *)(a5 + 184) = v22[5];
  *(_DWORD *)(a5 + 188) = v22[6];
  result = HIDWORD(v23);
  *(_DWORD *)(a5 + 148) = HIDWORD(v23);
  *(_DWORD *)(a5 + 144) = v16;
  *(_QWORD *)(a5 + 152) = v17;
  *(_QWORD *)(a5 + 160) = v19;
  return result;
}
