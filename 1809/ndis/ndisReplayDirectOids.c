/*
 * XREFs of ndisReplayDirectOids @ 0x1C0075190
 * Callers:
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0072D4C (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisSelectiveSuspendResumeOperations @ 0x1C0075A74 (ndisSelectiveSuspendResumeOperations.c)
 * Callees:
 *     ndisMDoDirectOidRequest @ 0x1C00458A0 (ndisMDoDirectOidRequest.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0045B94 (ndisMOidRequestCompleteInternal.c)
 */

_QWORD *__fastcall ndisReplayDirectOids(__int64 a1, _QWORD **a2, char a3)
{
  _QWORD *result; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rsi
  int v9; // eax

  while ( 1 )
  {
    result = *a2;
    if ( *a2 == a2 )
      break;
    if ( (_QWORD **)result[1] != a2 || (v7 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *a2 = v7;
    v8 = (__int64)(result - 9);
    v7[1] = a2;
    v9 = ndisMDoDirectOidRequest(a1, (_DWORD *)result - 18, a3);
    if ( v9 != 259 )
      ndisMOidRequestCompleteInternal(a1, v8, v9, 0LL);
  }
  return result;
}
