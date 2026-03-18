/*
 * XREFs of ?HrFindInterface@CHwCompSwapChainTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18023E6D0
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
  char *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
  v5 = 0;
  if ( !v4 )
  {
    v6 = (char *)this - 96;
    v7 = (unsigned __int64)this + 48;
LABEL_9:
    *a3 = (void *)(v7 & -(__int64)(v6 != 0LL));
    return v5;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c1102d2e_5afc_41c9_a025_779b188b0abe.Data4;
  if ( !v8 )
  {
    v6 = (char *)this - 96;
    v7 = (unsigned __int64)this + 112;
    goto LABEL_9;
  }
  v9 = (char *)this - 96;
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
  if ( !v10 )
    goto LABEL_16;
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  if ( v11 )
    return (unsigned int)-2147467262;
  else
LABEL_16:
    *a3 = v9;
  return v5;
}
