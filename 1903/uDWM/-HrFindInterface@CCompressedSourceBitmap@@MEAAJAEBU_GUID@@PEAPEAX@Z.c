/*
 * XREFs of ?HrFindInterface@CCompressedSourceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800472F0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180047360 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::HrFindInterface(
        CCompressedSourceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v8; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data4;
      if ( v6 )
        return (unsigned int)CBitmap::HrFindInterface(this, a2, a3);
      v8 = (unsigned __int64)this + 240;
    }
    else
    {
      v8 = (unsigned __int64)this + 248;
    }
    *a3 = (void *)(v8 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
