/*
 * XREFs of ?HrFindInterface@CHwDisplayRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180059990
 * Callers:
 *     ?HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180165260 (-HrFindInterface@CHwStereoFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::HrFindInterface(
        CHwDisplayRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ebx

  if ( !a3 )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0xBEu, 0LL);
    return v7;
  }
  *a3 = 0LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d96ea0e9_6207_4781_b3d6_49c499730deb.Data4;
  if ( !v3 )
  {
    *a3 = (void *)(((unsigned __int64)this + 48) & -(__int64)(this != (CHwDisplayRenderTarget *)96));
    return 0;
  }
  v4 = (char *)this - 96;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
  if ( !v5 )
    goto LABEL_15;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  if ( !v6 )
  {
LABEL_15:
    *a3 = v4;
    return 0;
  }
  return (unsigned int)-2147467262;
}
