/*
 * XREFs of FsRtlpOplockKeysEqual @ 0x1400199A0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x140018CB0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockBreakToII @ 0x140130800 (FsRtlpOplockBreakToII.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140133360 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToNone @ 0x14013AC0C (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E20C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168EA0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlOplockKeysEqual @ 0x14016A2D0 (FsRtlOplockKeysEqual.c)
 * Callees:
 *     IoGetOplockKeyContextEx @ 0x140019C10 (IoGetOplockKeyContextEx.c)
 */

char __fastcall FsRtlpOplockKeysEqual(__int64 a1, __int64 a2, char a3)
{
  __int64 OplockKeyContext; // rbx
  __int64 v7; // rax
  __int16 v8; // cx
  int v9; // edi
  int v11; // ecx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r8

  if ( (a3 & 0x40) == 0
    || a1
    && (v13 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 88LL)) != 0
    && *(_QWORD *)(v13 + 136)
    && (v14 = IoGetOplockKeyContextEx(a1)) != 0
    && (*(_BYTE *)(v14 + 2) & 1) != 0
    && (v15 = *(_QWORD *)(v13 + 136), *(_DWORD *)(v14 + 4) == *(_DWORD *)v15)
    && *(_WORD *)(v14 + 8) == *(_WORD *)(v15 + 4)
    && *(_WORD *)(v14 + 10) == *(_WORD *)(v15 + 6)
    && *(_BYTE *)(v14 + 12) == *(_BYTE *)(v15 + 8)
    && *(_BYTE *)(v14 + 13) == *(_BYTE *)(v15 + 9)
    && *(_BYTE *)(v14 + 14) == *(_BYTE *)(v15 + 10)
    && *(_BYTE *)(v14 + 15) == *(_BYTE *)(v15 + 11)
    && *(_BYTE *)(v14 + 16) == *(_BYTE *)(v15 + 12)
    && *(_BYTE *)(v14 + 17) == *(_BYTE *)(v15 + 13)
    && *(_BYTE *)(v14 + 18) == *(_BYTE *)(v15 + 14)
    && *(_BYTE *)(v14 + 19) == *(_BYTE *)(v15 + 15) )
  {
    if ( a1 && a2 )
    {
      if ( a1 == a2 )
        return 1;
      OplockKeyContext = IoGetOplockKeyContextEx(a1);
      v7 = IoGetOplockKeyContextEx(a2);
      if ( OplockKeyContext && v7 && (*(_BYTE *)(v7 + 2) & 2) != 0 )
      {
        v8 = *(_WORD *)(OplockKeyContext + 2);
        v9 = a3 & 0x10;
        if ( !(v9 ? (v8 & 1) == 0 : (v8 & 2) == 0) )
        {
          v11 = *(_DWORD *)(v7 + 20);
          if ( v9 )
          {
            if ( *(_DWORD *)(OplockKeyContext + 4) == v11
              && *(_WORD *)(OplockKeyContext + 8) == *(_WORD *)(v7 + 24)
              && *(_WORD *)(OplockKeyContext + 10) == *(_WORD *)(v7 + 26)
              && *(_BYTE *)(OplockKeyContext + 12) == *(_BYTE *)(v7 + 28)
              && *(_BYTE *)(OplockKeyContext + 13) == *(_BYTE *)(v7 + 29)
              && *(_BYTE *)(OplockKeyContext + 14) == *(_BYTE *)(v7 + 30)
              && *(_BYTE *)(OplockKeyContext + 15) == *(_BYTE *)(v7 + 31)
              && *(_BYTE *)(OplockKeyContext + 16) == *(_BYTE *)(v7 + 32)
              && *(_BYTE *)(OplockKeyContext + 17) == *(_BYTE *)(v7 + 33)
              && *(_BYTE *)(OplockKeyContext + 18) == *(_BYTE *)(v7 + 34)
              && *(_BYTE *)(OplockKeyContext + 19) == *(_BYTE *)(v7 + 35) )
            {
              return 1;
            }
          }
          else if ( *(_DWORD *)(OplockKeyContext + 20) == v11
                 && *(_WORD *)(OplockKeyContext + 24) == *(_WORD *)(v7 + 24)
                 && *(_WORD *)(OplockKeyContext + 26) == *(_WORD *)(v7 + 26)
                 && *(_BYTE *)(OplockKeyContext + 28) == *(_BYTE *)(v7 + 28)
                 && *(_BYTE *)(OplockKeyContext + 29) == *(_BYTE *)(v7 + 29)
                 && *(_BYTE *)(OplockKeyContext + 30) == *(_BYTE *)(v7 + 30)
                 && *(_BYTE *)(OplockKeyContext + 31) == *(_BYTE *)(v7 + 31)
                 && *(_BYTE *)(OplockKeyContext + 32) == *(_BYTE *)(v7 + 32)
                 && *(_BYTE *)(OplockKeyContext + 33) == *(_BYTE *)(v7 + 33)
                 && *(_BYTE *)(OplockKeyContext + 34) == *(_BYTE *)(v7 + 34)
                 && *(_BYTE *)(OplockKeyContext + 35) == *(_BYTE *)(v7 + 35) )
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
