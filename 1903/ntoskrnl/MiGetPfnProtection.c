/*
 * XREFs of MiGetPfnProtection @ 0x14008DC70
 * Callers:
 *     MiRevokeExecutePte @ 0x14008D910 (MiRevokeExecutePte.c)
 *     MiGetWorkingSetInfoList @ 0x140101184 (MiGetWorkingSetInfoList.c)
 *     MiQueryLeafPte @ 0x1402D8A10 (MiQueryLeafPte.c)
 * Callees:
 *     MiGetWsleProtection @ 0x14005A5D0 (MiGetWsleProtection.c)
 *     MiGetWsleContents @ 0x14008DDD0 (MiGetWsleContents.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateCloneAddress @ 0x1400DFC38 (MiLocateCloneAddress.c)
 */

__int64 __fastcall MiGetPfnProtection(__int64 a1, __int64 a2)
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
        if ( MiLocateCloneAddress(Process, v8 | 0x8000000000000000uLL) )
          LODWORD(v9) = MmMakeProtectNotWriteCopy[(unsigned int)v9];
      }
      return (unsigned int)v9;
    }
  }
  return result;
}
