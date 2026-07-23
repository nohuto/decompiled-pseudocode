/*
 * XREFs of AhcCacheQueryHwId @ 0x140906508
 * Callers:
 *     NtApphelpCacheControl @ 0x140662EB0 (NtApphelpCacheControl.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     ExGetPreviousMode @ 0x1400DDCF0 (ExGetPreviousMode.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KseLookupHardwareId @ 0x140849C94 (KseLookupHardwareId.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AhcCacheQueryHwId(unsigned __int64 a1)
{
  wchar_t *Buffer; // rdi
  unsigned int v3; // esi
  __int64 v4; // rax
  char *v5; // rcx
  __int64 v6; // rdx
  unsigned __int16 Length; // si
  wchar_t *v8; // r14
  wchar_t *PoolWithTag; // rax
  unsigned __int64 v10; // rcx
  bool v11; // cl
  __int64 v12; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-1A8h] BYREF
  char v15; // [rsp+30h] [rbp-198h] BYREF
  UNICODE_STRING SourceString; // [rsp+168h] [rbp-60h] BYREF

  Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( ExGetPreviousMode() == 1 )
  {
    v4 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v4 = a1;
    v5 = &v15;
    v6 = 2LL;
    do
    {
      *(_OWORD *)v5 = *(_OWORD *)v4;
      *((_OWORD *)v5 + 1) = *(_OWORD *)(v4 + 16);
      *((_OWORD *)v5 + 2) = *(_OWORD *)(v4 + 32);
      *((_OWORD *)v5 + 3) = *(_OWORD *)(v4 + 48);
      *((_OWORD *)v5 + 4) = *(_OWORD *)(v4 + 64);
      *((_OWORD *)v5 + 5) = *(_OWORD *)(v4 + 80);
      *((_OWORD *)v5 + 6) = *(_OWORD *)(v4 + 96);
      v5 += 128;
      *((_OWORD *)v5 - 1) = *(_OWORD *)(v4 + 112);
      v4 += 128LL;
      --v6;
    }
    while ( v6 );
    *(_OWORD *)v5 = *(_OWORD *)v4;
    *((_OWORD *)v5 + 1) = *(_OWORD *)(v4 + 16);
    *((_OWORD *)v5 + 2) = *(_OWORD *)(v4 + 32);
    *((_OWORD *)v5 + 3) = *(_OWORD *)(v4 + 48);
    *((_OWORD *)v5 + 4) = *(_OWORD *)(v4 + 64);
    *((_OWORD *)v5 + 5) = *(_OWORD *)(v4 + 80);
    *((_OWORD *)v5 + 6) = *(_OWORD *)(v4 + 96);
    *((_QWORD *)v5 + 14) = *(_QWORD *)(v4 + 112);
    if ( SourceString.MaximumLength
      && (Length = SourceString.Length) != 0
      && (v8 = SourceString.Buffer) != 0LL
      && ((SourceString.MaximumLength | SourceString.Length) & 1) == 0
      && SourceString.Length <= SourceString.MaximumLength
      && SourceString.Length <= 0xFFFCu )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, SourceString.Length + 2LL, 0x6F637061u);
      Buffer = PoolWithTag;
      DestinationString.Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        DestinationString.MaximumLength = Length + 2;
        DestinationString.Length = 0;
        memset(PoolWithTag, 0, (unsigned __int16)(Length + 2));
        if ( ((unsigned __int8)v8 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v10 = (unsigned __int64)v8 + SourceString.MaximumLength;
        if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)v8 )
          MEMORY[0x7FFFFFFF0000] = 0;
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        Buffer = DestinationString.Buffer;
        v11 = (unsigned int)KseLookupHardwareId(DestinationString.Buffer) == 0;
        v12 = a1 + 304;
        if ( a1 + 304 >= 0x7FFFFFFF0000LL )
          v12 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v12 = v11;
        v3 = 0;
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else
    {
      v3 = -1073741811;
    }
  }
  else
  {
    v3 = -1073741822;
  }
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x6F637061u);
  return v3;
}
