/*
 * XREFs of MiInsertProcessVads @ 0x14067AD24
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140761810 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiGetWsAndInsertVad @ 0x140063E10 (MiGetWsAndInsertVad.c)
 *     MiInsertVadCharges @ 0x1405F2E60 (MiInsertVadCharges.c)
 */

__int64 __fastcall MiInsertProcessVads(struct _KPROCESS *a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned int v3; // edi
  _QWORD *v6; // rbp
  __int64 result; // rax
  __int64 v8; // rdx

  v2 = *a2;
  v3 = 0;
  if ( *a2 )
  {
    while ( 1 )
    {
      v6 = (_QWORD *)*v2;
      result = MiInsertVadCharges((__int64)v2, a1);
      v3 = result;
      if ( (int)result < 0 )
        break;
      MiGetWsAndInsertVad((unsigned __int64)v2, v8);
      v2 = v6;
      if ( !v6 )
        goto LABEL_4;
    }
    *a2 = v2;
  }
  else
  {
LABEL_4:
    *a2 = 0LL;
    return v3;
  }
  return result;
}
