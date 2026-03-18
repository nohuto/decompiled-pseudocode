/*
 * XREFs of ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004BF50
 * Callers:
 *     ?HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D4910 (-HrFindInterface@CSectionBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180262920 (-HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDxHandleYUVBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802644B0 (-HrFindInterface@CDxHandleYUVBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::HrFindInterface(CBitmapRealization *this, const struct _GUID *a2, void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // edx
  char *v8; // rax
  char *v10; // rax
  char *v11; // rax

  if ( !a3 )
    return 2147942487LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  if ( v3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
    if ( v4 )
    {
      v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
        v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
      if ( v5 )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
        if ( v6 )
        {
          v7 = -2147467263;
          v8 = 0LL;
        }
        else
        {
          v8 = (char *)this + 16;
          v7 = 0;
          if ( !this )
            v8 = 0LL;
        }
        *a3 = v8;
        return v7;
      }
      if ( this )
      {
        v10 = (char *)this + 88;
LABEL_18:
        *a3 = v10;
        return 0LL;
      }
    }
    else if ( this )
    {
      *a3 = (char *)this + 144;
      return 0LL;
    }
    v10 = 0LL;
    goto LABEL_18;
  }
  v11 = (char *)this + 144;
  if ( !this )
    v11 = 0LL;
  *a3 = v11;
  return 0LL;
}
