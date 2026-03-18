/*
 * XREFs of ?PointerDelegateGetClient@@YAHGKPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01F21EC
 * Callers:
 *     ValidateDelegatePointerList @ 0x1C01F09CC (ValidateDelegatePointerList.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0116D7C (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall PointerDelegateGetClient(unsigned __int16 a1, unsigned int a2, struct tagDELEGATEPOINTERMAP *a3)
{
  __int64 v6; // rdi
  _DWORD *v7; // rax
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm4
  __int128 v11; // xmm5
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  __int128 v14; // xmm8
  __int64 v15; // xmm0_8
  __int64 result; // rax
  _DWORD v17[32]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE v18[80]; // [rsp+B0h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+100h] [rbp-88h]
  int v20; // [rsp+10Ch] [rbp-7Ch]

  CTouchProcessor::DelegateCapture(gpTouchProcessor, v18, a1, a2, 0);
  v6 = 0LL;
  if ( v20 == 2 )
    v6 = v19;
  if ( !v6 || *(_QWORD *)(v6 + 16) == gptiCurrent )
    return 0LL;
  *(_WORD *)a3 = a1;
  *((_DWORD *)a3 + 1) = a2;
  memset((char *)a3 + 8, 0, 0x78uLL);
  v7 = INPUTDEST_FROM_PWND(v17, v6);
  v8 = *(_OWORD *)v7;
  v9 = *((_OWORD *)v7 + 1);
  v10 = *((_OWORD *)v7 + 2);
  v11 = *((_OWORD *)v7 + 3);
  v12 = *((_OWORD *)v7 + 4);
  v13 = *((_OWORD *)v7 + 5);
  v14 = *((_OWORD *)v7 + 6);
  v15 = *((_QWORD *)v7 + 14);
  result = 1LL;
  *(_OWORD *)((char *)a3 + 8) = v8;
  *((_DWORD *)a3 + 32) = 1;
  *(_OWORD *)((char *)a3 + 24) = v9;
  *(_OWORD *)((char *)a3 + 40) = v10;
  *(_OWORD *)((char *)a3 + 56) = v11;
  *(_OWORD *)((char *)a3 + 72) = v12;
  *(_OWORD *)((char *)a3 + 88) = v13;
  *(_OWORD *)((char *)a3 + 104) = v14;
  *((_QWORD *)a3 + 15) = v15;
  return result;
}
