/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C0256A28
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C0260960 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01B8390 (--1SEMOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(struct PFT **const *this, struct PFF *a2)
{
  unsigned int v5; // r8d
  struct PFF **v6; // rdx
  unsigned int v7; // ebx
  struct PFF *i; // rcx
  struct PFF *v9; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( *this != gpPFTPrivate )
    return 0LL;
  v10 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v5 = 0;
  v6 = *this + 5;
  v7 = 1;
  do
  {
    if ( v6 )
    {
      for ( i = *v6; ; i = (struct PFF *)*((_QWORD *)v9 + 1) )
      {
        v9 = SkipInvalidPff(i);
        if ( !v9 )
          break;
        if ( a2 == v9 )
          goto LABEL_11;
      }
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 0x14 );
  v7 = 0;
LABEL_11:
  SEMOBJ::~SEMOBJ((SEMOBJ *)&v10);
  return v7;
}
