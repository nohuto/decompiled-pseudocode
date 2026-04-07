/*
 * XREFs of ?HrFindInterface@CBitmapLock@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B98E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapLock::HrFindInterface(CBitmapLock *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b4bd8193_43a6_4e78_a512_a823325a32f5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b4bd8193_43a6_4e78_a512_a823325a32f5.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b4bd8193_43a6_4e78_a512_a823325a32f5.Data4;
    if ( !v5 )
      goto LABEL_8;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v6 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmapLock.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmapLock.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmapLock.Data4;
      if ( v8 )
        return (unsigned int)-2147467262;
      v7 = (unsigned __int64)this + 80;
    }
    else
    {
LABEL_8:
      v7 = (unsigned __int64)this + 72;
    }
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
