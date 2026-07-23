/*
 * XREFs of RtlPrepareEnclaveCall @ 0x1402FB880
 * Callers:
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlPrepareEnclaveCall(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 *v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx

  v7 = PspEnclaveDispatchReturn;
  v8 = PspCallEnclaveReturn;
  v9 = *(__int64 **)(a1 + 384);
  v10 = (__int64)v9;
  if ( (unsigned __int64)v9 >= 0x7FFFFFFF0000LL )
    v10 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v10 = *(_QWORD *)v10;
  v11 = *v9;
  if ( *(_WORD *)(a1 + 368) != 51 || v11 != v8 && v11 != v7 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 384) = v9 + 1;
  *(_QWORD *)(a1 + 360) = v11;
  *(_QWORD *)(a1 + 80) = a2;
  *a5 = v11;
  *a6 = *(_QWORD *)(a1 + 344);
  return 0LL;
}
