/*
 * XREFs of ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01B9998
 * Callers:
 *     ValidateDelegatePointerList @ 0x1C01B87BC (ValidateDelegatePointerList.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall PointerDelegateGetClient(unsigned __int16 a1, unsigned int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  __int64 v6; // rdi
  __int64 result; // rax
  _OWORD *v8; // rax
  __int128 v9; // xmm1
  __int128 v10; // [rsp+50h] [rbp-218h]
  __int128 v11; // [rsp+60h] [rbp-208h]
  __int128 v12; // [rsp+70h] [rbp-1F8h]
  __int128 v13; // [rsp+80h] [rbp-1E8h]
  __int128 v14; // [rsp+90h] [rbp-1D8h]
  __int128 v15; // [rsp+A0h] [rbp-1C8h]
  __int128 v16; // [rsp+B0h] [rbp-1B8h]
  __int128 v17; // [rsp+C0h] [rbp-1A8h]
  __int128 v18; // [rsp+D0h] [rbp-198h]
  _DWORD v19[44]; // [rsp+E0h] [rbp-188h] BYREF
  _BYTE v20[72]; // [rsp+190h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+1D8h] [rbp-90h]
  int v22; // [rsp+1E4h] [rbp-84h]

  CTouchProcessor::DelegateCapture(gpTouchProcessor, v20, a1, a2, 0);
  v6 = 0LL;
  if ( v22 == 2 )
    v6 = v21;
  if ( !v6 || *(_QWORD *)(v6 + 16) == gptiCurrent )
    return 0LL;
  *(_WORD *)a3 = a1;
  *((_DWORD *)a3 + 1) = a2;
  memset((char *)a3 + 8, 0, 0xB0uLL);
  v8 = INPUTDEST_FROM_PWND(v19, v6);
  v10 = v8[2];
  v11 = v8[3];
  v12 = v8[4];
  v13 = v8[5];
  v14 = v8[6];
  v15 = v8[7];
  v16 = v8[8];
  v17 = v8[9];
  v18 = v8[10];
  v9 = v8[1];
  *(_OWORD *)((char *)a3 + 8) = *v8;
  *(_OWORD *)((char *)a3 + 24) = v9;
  *(_OWORD *)((char *)a3 + 40) = v10;
  *(_OWORD *)((char *)a3 + 56) = v11;
  *(_OWORD *)((char *)a3 + 72) = v12;
  *(_OWORD *)((char *)a3 + 88) = v13;
  *(_OWORD *)((char *)a3 + 104) = v14;
  *(_OWORD *)((char *)a3 + 120) = v15;
  *(_OWORD *)((char *)a3 + 136) = v16;
  result = 1LL;
  *(_OWORD *)((char *)a3 + 152) = v17;
  *((_DWORD *)a3 + 46) = 1;
  *(_OWORD *)((char *)a3 + 168) = v18;
  return result;
}
