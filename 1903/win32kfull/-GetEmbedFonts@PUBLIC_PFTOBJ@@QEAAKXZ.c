/*
 * XREFs of ?GetEmbedFonts@PUBLIC_PFTOBJ@@QEAAKXZ @ 0x1C026FD54
 * Callers:
 *     NtGdiGetEmbedFonts @ 0x1C02A7FB0 (NtGdiGetEmbedFonts.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::GetEmbedFonts(struct PFT **const *this)
{
  unsigned int v1; // ebx
  unsigned int v4; // esi
  unsigned int CurrentThreadId; // ebp
  __int64 v6; // r10
  __int64 *v7; // r8
  __int64 i; // rdx
  __int64 j; // rcx
  int v10; // r9d
  unsigned int v11; // eax
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( *this != gpPFTPrivate )
    return 0LL;
  v4 = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v12 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v6 = 20LL;
  v7 = (__int64 *)(*this + 5);
  do
  {
    if ( v7 )
    {
      for ( i = *v7; i; i = *(_QWORD *)(i + 8) )
      {
        for ( j = *(_QWORD *)(i + 144); j; j = *(_QWORD *)(j + 16) )
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
  SEMOBJ::vUnlock((SEMOBJ *)&v12);
  return v1;
}
