/*
 * XREFs of ExpQueryProcessorInformationCounters @ 0x1405C9504
 * Callers:
 *     ExProcessorCounterSetCallback @ 0x1405C8BC0 (ExProcessorCounterSetCallback.c)
 * Callees:
 *     PoGetIdleTimes @ 0x140004908 (PoGetIdleTimes.c)
 *     PoGetPerfStateAndParkingInfo @ 0x140131B00 (PoGetPerfStateAndParkingInfo.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall ExpQueryProcessorInformationCounters(__int64 a1, char a2, char a3, char a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  __int64 result; // rax
  _PROCESSOR_NUMBER ProcNumber; // [rsp+28h] [rbp-51h] BYREF
  _DWORD v20[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v21; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h]
  _QWORD v23[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v24[6]; // [rsp+80h] [rbp+7h] BYREF

  memset(v24, 0, sizeof(v24));
  ProcNumber.Reserved = 0;
  v21 = 0LL;
  v22 = 0LL;
  ProcNumber.Group = *(unsigned __int8 *)(a1 + 208);
  ProcNumber.Number = *(_BYTE *)(a1 + 209);
  if ( a2 )
  {
    PoGetIdleTimes(&ProcNumber, (__int64)v24, (__int64)&v21);
    v9 = (unsigned int)v21;
    v10 = HIDWORD(v21);
    *(_QWORD *)(a5 + 72) = v24[1];
    *(_QWORD *)(a5 + 96) = LODWORD(v24[4]);
    *(_QWORD *)(a5 + 80) = v24[2];
    *(_QWORD *)(a5 + 104) = HIDWORD(v24[4]);
    *(_QWORD *)(a5 + 88) = v24[3];
    *(_QWORD *)(a5 + 112) = LODWORD(v24[5]);
    *(_QWORD *)(a5 + 120) = v22;
    v11 = KeMaximumIncrement;
    v12 = KeMaximumIncrement * v9;
    v13 = KeMaximumIncrement * v10;
    *(_QWORD *)a5 = v12;
    v14 = v13 - v12;
    v15 = v12 + v11 * *(unsigned int *)(a1 + 23468);
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v14 = 0LL;
    *(_QWORD *)(a5 + 72) = 0LL;
    *(_QWORD *)(a5 + 80) = 0LL;
    *(_QWORD *)(a5 + 88) = 0LL;
    *(_QWORD *)(a5 + 96) = 0LL;
    *(_QWORD *)(a5 + 104) = 0LL;
    *(_QWORD *)(a5 + 112) = 0LL;
    *(_QWORD *)(a5 + 120) = 0LL;
    v15 = 0LL;
  }
  *(_QWORD *)(a5 + 8) = v15;
  *(_QWORD *)(a5 + 24) = v14;
  v16 = KeMaximumIncrement;
  *(_QWORD *)(a5 + 16) = KeMaximumIncrement * (unsigned __int64)*(unsigned int *)(a1 + 23432);
  *(_DWORD *)(a5 + 32) = *(_DWORD *)(a1 + 23424);
  *(_QWORD *)(a5 + 48) = v16 * *(unsigned int *)(a1 + 23440);
  *(_DWORD *)(a5 + 60) = *(_DWORD *)(a1 + 11804);
  *(_DWORD *)(a5 + 64) = *(_DWORD *)(a1 + 11868);
  *(_QWORD *)(a5 + 40) = v16 * *(unsigned int *)(a1 + 23436);
  *(_DWORD *)(a5 + 56) = *(_DWORD *)(a1 + 11896);
  *(_QWORD *)(a5 + 168) = *(_QWORD *)(a5 + 72) + *(_QWORD *)(a5 + 80) + *(_QWORD *)(a5 + 88);
  *(_QWORD *)(a5 + 176) = *(_QWORD *)(a5 + 96) + *(_QWORD *)(a5 + 104) + *(_QWORD *)(a5 + 112);
  memset(v20, 0, sizeof(v20));
  memset(v23, 0, sizeof(v23));
  v17 = (unsigned __int64)v23 & -(__int64)(a4 != 0);
  if ( a3 || v17 )
    PoGetPerfStateAndParkingInfo(&ProcNumber, v20, v17, 0LL);
  *(_DWORD *)(a5 + 128) = BYTE1(v20[7]);
  *(_DWORD *)(a5 + 132) = v20[1];
  *(_DWORD *)(a5 + 136) = v20[2];
  *(_DWORD *)(a5 + 140) = v20[0];
  *(_DWORD *)(a5 + 184) = v20[5];
  *(_DWORD *)(a5 + 188) = v20[6];
  *(_QWORD *)(a5 + 144) = v23[0];
  *(_QWORD *)(a5 + 152) = v23[1];
  *(_QWORD *)(a5 + 160) = v23[2];
  result = v23[3];
  *(_QWORD *)(a5 + 192) = v23[3];
  return result;
}
