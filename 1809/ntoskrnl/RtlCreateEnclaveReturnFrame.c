/*
 * XREFs of RtlCreateEnclaveReturnFrame @ 0x1402FB754
 * Callers:
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlCreateEnclaveReturnFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  _QWORD *v14; // [rsp+40h] [rbp+18h]
  unsigned __int64 v15; // [rsp+40h] [rbp+18h]

  v10 = PspEnclaveDispatch;
  if ( *(_WORD *)(a1 + 368) != 51 || *(_QWORD *)(a1 + 360) != PspEnclaveDispatchReturn )
  {
    v11 = *(_QWORD *)(a1 + 384) - 80LL;
    v14 = (_QWORD *)v11;
    if ( (v11 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v11 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v11 = *(_BYTE *)v11;
    *(_BYTE *)(v11 + 79) = *(_BYTE *)(v11 + 79);
    v14[5] = *(_QWORD *)(a1 + 80);
    v14[7] = *(_QWORD *)(a1 + 360);
    v14[8] = *(_QWORD *)(a1 + 344);
    *(_QWORD *)(a1 + 384) = v14;
  }
  if ( a7 )
  {
    v12 = *(_QWORD *)(a1 + 384);
    v15 = v12;
    if ( (v12 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v12 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v12 = *(_BYTE *)v12;
    *(_BYTE *)(v12 + 79) = *(_BYTE *)(v12 + 79);
    *(_QWORD *)(v15 + 64) = a8;
    *(_QWORD *)(v15 + 72) = a7;
  }
  *(_QWORD *)(a1 + 56) = a4;
  *(_QWORD *)(a1 + 64) = a5;
  *(_QWORD *)(a1 + 72) = a6;
  *(_QWORD *)(a1 + 80) = a9;
  *(_QWORD *)(a1 + 360) = v10;
  *(_WORD *)(a1 + 368) = 51;
  return 0LL;
}
