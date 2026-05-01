/*
 * XREFs of ??$_TlgCreateDesc@E@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@AEBE@Z @ 0x180059248
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180049B20 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall _TlgCreateDesc<unsigned char>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = 1;
}
