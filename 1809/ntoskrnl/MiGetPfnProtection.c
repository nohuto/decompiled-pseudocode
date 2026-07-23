/*
 * XREFs of MiGetPfnProtection @ 0x14011FE00
 * Callers:
 *     MiRevokeExecutePte @ 0x14011FD50 (MiRevokeExecutePte.c)
 *     MiQueryLeafPte @ 0x1402BF260 (MiQueryLeafPte.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetWsleContents @ 0x140085F30 (MiGetWsleContents.c)
 *     MiLocateCloneAddress @ 0x1400946C8 (MiLocateCloneAddress.c)
 *     MiGetWsleProtection @ 0x1400B5B60 (MiGetWsleProtection.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 WsleContents; // al
  unsigned __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r10
  unsigned __int64 v6; // rax
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v9; // r9
  _KPROCESS *Process; // rcx

  WsleContents = MiGetWsleContents(a1, a2);
  result = MiGetWsleProtection(v3, WsleContents);
  if ( !(_DWORD)result )
  {
    v6 = MI_READ_PTE_LOCK_FREE(v5 + 16);
    v8 = *(_QWORD *)(v7 + 8);
    v9 = (v6 >> 5) & 0x1F;
    if ( v8 >= 0 )
    {
      return (unsigned int)MmMakeProtectNotWriteCopy[(v6 >> 5) & 0x1F];
    }
    else
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[1].Affinity.Bitmap[12] )
      {
        if ( MiLocateCloneAddress((__int64)Process, v8 | 0x8000000000000000uLL) )
          LODWORD(v9) = MmMakeProtectNotWriteCopy[(unsigned int)v9];
      }
      return (unsigned int)v9;
    }
  }
  return result;
}
