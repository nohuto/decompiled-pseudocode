/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C0256734
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x1C02923E0 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(struct PFT **const *this)
{
  unsigned int v1; // ebx
  unsigned int v4; // esi
  unsigned int CurrentThreadId; // ebp
  __int64 v6; // r10
  struct PFF **v7; // rdx
  struct PFF *i; // rcx
  __int64 j; // rcx
  int v10; // r9d
  unsigned int v11; // eax
  struct PFF *v12; // rax
  struct PFF *v13; // r8
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v14 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v6 = 20LL;
  v7 = *this + 5;
  do
  {
    if ( v7 )
    {
      for ( i = *v7; ; i = (struct PFF *)*((_QWORD *)v13 + 1) )
      {
        v12 = SkipInvalidPff(i);
        v13 = v12;
        if ( !v12 )
          break;
        for ( j = *((_QWORD *)v12 + 18); j; j = *(_QWORD *)(j + 16) )
        {
          v10 = *(_DWORD *)(j + 12);
          if ( (*(_DWORD *)(j + 8) & 4) != 0 )
          {
            v11 = v1 + 1;
            if ( v10 != CurrentThreadId )
              v11 = v1;
            v1 = v11;
          }
          else if ( v10 == v4 )
          {
            ++v1;
          }
        }
      }
    }
    ++v7;
    --v6;
  }
  while ( v6 );
  SEMOBJ::vUnlock((SEMOBJ *)&v14);
  return v1;
}
