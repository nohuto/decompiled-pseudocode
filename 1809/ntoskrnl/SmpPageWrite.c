/*
 * XREFs of SmpPageWrite @ 0x14014D794
 * Callers:
 *     MiStoreWriteIssue @ 0x14014D6D0 (MiStoreWriteIssue.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D8C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmpKeyedStoreReference @ 0x14014F794 (SmpKeyedStoreReference.c)
 */

__int64 __fastcall SmpPageWrite(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned int v8; // edi
  int v10; // ebx
  unsigned int v11; // r10d
  int v12; // eax
  unsigned int v13; // edi
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // [rsp+68h] [rbp+10h]

  v16 = a3;
  v8 = a3;
  v10 = -1;
  v11 = a3;
  if ( (*(_DWORD *)(a2 + 8) & 3) == 0 )
  {
    v12 = SmpKeyedStoreReference((ULONG_PTR)&qword_14055C188);
    v10 = v12;
    v11 = v8;
    if ( v12 != -1 )
    {
      v11 = v12 & 0x3FF | v8 & 0xFFFFF800;
      LODWORD(v16) = v11;
    }
  }
  if ( (v11 & 0x7FF) != 0x400 )
    goto LABEL_7;
  if ( dword_14055C1B0 != -1 )
  {
    LODWORD(v16) = dword_14055C1B0 & 0x3FF | v11 & 0xFFFFF800;
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
