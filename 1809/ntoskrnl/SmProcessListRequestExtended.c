/*
 * XREFs of SmProcessListRequestExtended @ 0x1408AC358
 * Callers:
 *     SmProcessListRequest @ 0x1408AC188 (SmProcessListRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReference @ 0x1400E1134 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     SmKmFileInfoGetPath @ 0x1408ADDC8 (SmKmFileInfoGetPath.c)
 */

__int64 __fastcall SmProcessListRequestExtended(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rbx
  unsigned int v5; // esi
  unsigned int v6; // r14d
  __int64 v7; // r12
  __int64 v8; // rax
  int Path; // ebp
  struct _EX_RUNDOWN_REF *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rax

  v4 = 0LL;
  v5 = 0;
  if ( *(_BYTE *)(a2 + 1) )
  {
    v6 = 1;
    do
    {
      v7 = a2 + 4LL * v5;
      v4 = SmKmStoreReference(a1, *(_DWORD *)(v7 + 4));
      if ( v4 )
      {
        v8 = a2 + ((unsigned __int64)v5 << 7);
        if ( *(_BYTE *)(v4 + 6020) == 1 )
        {
          Path = SmKmFileInfoGetPath(v4 + 6216, v8 + 132, 128LL);
          if ( Path < 0 )
            goto LABEL_12;
        }
        else
        {
          *(_WORD *)(v8 + 132) = 0;
        }
        v10 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v4 + 6016) & 0x3FF);
        ExReleaseRundownProtection_0(v10 + 1);
        v4 = 0LL;
      }
      else
      {
        memmove((void *)(v7 + 4), (const void *)(a2 + 4 * (v6-- + 1LL)), 4 * (*(unsigned __int8 *)(a2 + 1) - v5--) - 4);
        --*(_BYTE *)(a2 + 1);
      }
      ++v5;
      ++v6;
    }
    while ( v5 < *(unsigned __int8 *)(a2 + 1) );
  }
  Path = 0;
LABEL_12:
  if ( v4 )
  {
    v11 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v4 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v11 + 1);
  }
  return (unsigned int)Path;
}
