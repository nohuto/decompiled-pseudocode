/*
 * XREFs of ?VerifyPFF@PUBLIC_PFTOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C0270034
 * Callers:
 *     NtGdiAddEmbFontToDC @ 0x1C027A000 (NtGdiAddEmbFontToDC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::VerifyPFF(struct PFT **const *this, struct PFF *a2)
{
  unsigned int v5; // edx
  __int64 *v6; // rcx
  unsigned int v7; // ebx
  __int64 i; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  if ( *this != gpPFTPrivate )
    return 0LL;
  v9 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v5 = 0;
  v6 = (__int64 *)(*this + 5);
  v7 = 1;
  do
  {
    if ( v6 )
    {
      for ( i = *v6; i; i = *(_QWORD *)(i + 8) )
      {
        if ( a2 == (struct PFF *)i )
          goto LABEL_11;
      }
    }
    ++v5;
    ++v6;
  }
  while ( v5 < 0x14 );
  v7 = 0;
LABEL_11:
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v7;
}
