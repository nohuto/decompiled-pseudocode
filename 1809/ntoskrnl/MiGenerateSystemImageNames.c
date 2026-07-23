/*
 * XREFs of MiGenerateSystemImageNames @ 0x140682C2C
 * Callers:
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400F5250 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGenerateSystemImageNames(
        UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        UNICODE_STRING *a4,
        UNICODE_STRING *Source,
        PUNICODE_STRING Destination)
{
  wchar_t *Buffer; // r10
  unsigned __int16 Length; // ax
  wchar_t *v11; // r9
  wchar_t *v12; // rax
  wchar_t *i; // rdx
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // cx
  wchar_t *PoolWithTag; // rax

  Buffer = a1->Buffer;
  Length = a1->Length;
  if ( *Buffer == 92 )
  {
    v11 = &Buffer[(unsigned __int64)Length >> 1];
    v12 = v11;
    for ( i = v11 - 1; ; --i )
    {
      if ( *i == 92 )
      {
        a4->Length = 2 * (v11 - v12);
        goto LABEL_7;
      }
      v12 = i;
      if ( i == Buffer )
        break;
    }
    return 3221225711LL;
  }
  else
  {
    a4->Length = Length;
    v12 = a1->Buffer;
LABEL_7:
    a4->Buffer = v12;
    a4->MaximumLength = a4->Length;
    *Source = *a1;
    Source->Length -= a4->Length;
    Source->MaximumLength = Source->Length;
    *Destination = *a1;
    if ( a2 )
    {
      v15 = Source->Length;
      Destination->MaximumLength = Source->Length;
      v16 = v15 + a2->Length;
      if ( v16 < v15 )
        return 3221225626LL;
      v17 = v15 + a2->Length;
      Destination->MaximumLength = v16;
      v18 = v16 + a4->Length;
      if ( v18 < v17 )
        return 3221225626LL;
      Destination->MaximumLength = v18;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x644C6D4Du);
      Destination->Buffer = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
      Destination->Length = 0;
      RtlAppendUnicodeStringToString(Destination, Source);
      RtlAppendUnicodeStringToString(Destination, a2);
      RtlAppendUnicodeStringToString(Destination, a4);
      a4->Buffer = &Destination->Buffer[(unsigned __int64)Source->Length >> 1];
      a4->Length += a2->Length;
      a4->MaximumLength += a2->Length;
    }
    if ( a3 )
      *a4 = *a3;
    return 0LL;
  }
}
