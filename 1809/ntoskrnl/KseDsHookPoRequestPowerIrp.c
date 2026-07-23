/*
 * XREFs of KseDsHookPoRequestPowerIrp @ 0x1402A0890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KsepDsEventRequestPowerIrp @ 0x1402A1570 (KsepDsEventRequestPowerIrp.c)
 */

__int64 __fastcall KseDsHookPoRequestPowerIrp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  int v7; // edi
  char v8; // bl
  unsigned int v9; // ebp
  __int64 v11; // [rsp+50h] [rbp+8h]

  v7 = (unsigned __int8)a2;
  v8 = a3;
  v9 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))qword_140402298)(a1, a2, a3);
  KsepDsEventRequestPowerIrp(*(_QWORD *)(a1 + 8), a1, v11, v7, v8, v9);
  if ( a6 )
    *a6 = v11;
  return v9;
}
