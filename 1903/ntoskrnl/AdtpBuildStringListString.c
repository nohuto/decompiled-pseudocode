/*
 * XREFs of AdtpBuildStringListString @ 0x14092D6A8
 * Callers:
 *     AdtpPackageParameters @ 0x140132AB8 (AdtpPackageParameters.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildStringListString(
        unsigned int *a1,
        __int64 a2,
        wchar_t **a3,
        __int64 a4,
        _DWORD *a5,
        char *a6)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  unsigned __int16 *v10; // rcx
  unsigned int v12; // edi
  __int64 v13; // rax
  wchar_t *PoolWithTag; // rbp
  char v15; // cl
  unsigned int v16; // r14d
  __int64 v17; // rdi
  const UNICODE_STRING *v18; // rdi
  unsigned int v19; // eax
  UNICODE_STRING Destination; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  v8 = 2;
  if ( a1 && *a1 )
  {
    v9 = *a1;
    v10 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 8LL);
    do
    {
      v8 += *v10 + 8;
      v10 += 12;
      --v9;
    }
    while ( v9 );
    if ( v8 > 0xFFFF )
      return 3221225485LL;
    v12 = v8 >> 1;
    v13 = (unsigned int)*a5;
    if ( (unsigned int)v13 + v12 >= 0x400 )
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v12, 0x6B416553u);
      if ( !PoolWithTag )
        return 3221225495LL;
      v15 = 1;
    }
    else
    {
      *a5 = v13 + v12;
      PoolWithTag = (wchar_t *)(a4 + 2 * v13);
      v15 = 0;
    }
    v16 = 0;
    *a6 = v15;
    Destination.MaximumLength = 2 * v12;
    v17 = *((_QWORD *)a1 + 1);
    Destination.Buffer = PoolWithTag;
    if ( *a1 )
    {
      v18 = (const UNICODE_STRING *)(v17 + 8);
      do
      {
        RtlAppendUnicodeToString(&Destination, L"\r\n\t\t");
        RtlAppendUnicodeStringToString(&Destination, v18);
        ++v16;
        v18 = (const UNICODE_STRING *)((char *)v18 + 24);
      }
      while ( v16 < *a1 );
    }
    if ( a3 )
    {
      v19 = Destination.Length + 2;
      *a3 = PoolWithTag;
      a3[1] = (wchar_t *)v19;
    }
    else
    {
      MEMORY[0] = Destination;
    }
  }
  else if ( a3 )
  {
    a3[1] = (wchar_t *)4;
    *a3 = (wchar_t *)"-";
  }
  return 0LL;
}
