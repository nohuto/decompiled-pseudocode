/*
 * XREFs of ?HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z @ 0x180014E9C
 * Callers:
 *     ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18001475C (-HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180014A00 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampStateSummaryGetUpdateMask(
        union _HAM_EXTERNAL_STATE_SUMMARY *a1,
        union _HAM_EXTERNAL_STATE_SUMMARY *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *(_DWORD *)a1;
  v3 = ((*(_BYTE *)a2 ^ *(_BYTE *)a1) & 0xE0) != 0;
  if ( ((*(_BYTE *)a2 ^ (unsigned __int8)v2) & 7) != 0
    || ((*(_BYTE *)a2 ^ (unsigned __int8)v2) & 0x18) != 0
    || ((*(_DWORD *)a2 ^ v2) & 0x100) != 0 )
  {
    v3 |= 2u;
  }
  return v3;
}
