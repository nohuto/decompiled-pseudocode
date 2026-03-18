/*
 * XREFs of SmpPageWrite @ 0x14014B7DC
 * Callers:
 *     MiStoreWriteIssue @ 0x14014B710 (MiStoreWriteIssue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400EE3D4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014B900 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreReference @ 0x14014D29C (SmpKeyedStoreReference.c)
 */

__int64 __fastcall SmpPageWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  int v7; // ebx
  int v10; // edi
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // [rsp+68h] [rbp+10h]

  v7 = a3;
  v16 = a3;
  v10 = -1;
  if ( (*(_DWORD *)(a2 + 8) & 3) != 0
    || (v11 = SmpKeyedStoreReference((ULONG_PTR)&qword_14058C188), v10 = v11, v11 == -1) )
  {
    v12 = v16;
  }
  else
  {
    v12 = v11 & 0x3FF | v7 & 0xFFFFF800;
    LODWORD(v16) = v12;
  }
  if ( (v12 & 0x7FF) != 0x400 )
    goto LABEL_7;
  if ( dword_14058C1B0 != -1 )
  {
    LODWORD(v16) = dword_14058C1B0 & 0x3FF | v12 & 0xFFFFF800;
LABEL_7:
    v13 = SMKM_STORE_MGR<SM_TRAITS>::SmPageWrite(&SmGlobals, a1, v16, a4, a5 & 0x7FFFFFFFFFFFFFFFLL, a6, a7);
    goto LABEL_8;
  }
  v13 = -1073741285;
LABEL_8:
  if ( v10 != -1 )
  {
    v15 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v10 & 0x3FF);
    ExReleaseRundownProtection_0(v15 + 1);
  }
  return v13;
}
