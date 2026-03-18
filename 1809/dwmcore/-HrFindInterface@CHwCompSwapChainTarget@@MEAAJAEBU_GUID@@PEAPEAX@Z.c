/*
 * XREFs of ?HrFindInterface@CHwCompSwapChainTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180200A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCompSwapChainTarget::HrFindInterface(
        CHwCompSwapChainTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  char *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
  v5 = 0;
  if ( !v4 )
  {
    v6 = (unsigned __int64)this + 48;
LABEL_9:
    v8 = (char *)(v6 & -(__int64)(this != (CHwCompSwapChainTarget *)160));
    goto LABEL_16;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
  if ( !v7 )
  {
    v6 = (unsigned __int64)this + 112;
    goto LABEL_9;
  }
  v8 = (char *)this - 160;
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
  if ( v9 )
  {
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v10 )
      return (unsigned int)-2147467262;
  }
LABEL_16:
  *a3 = v8;
  return v5;
}
