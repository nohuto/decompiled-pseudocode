/*
 * XREFs of ExReturnPoolQuota @ 0x14011F308
 * Callers:
 *     IopFreeIrp @ 0x1400B9680 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     IopFreeMiniCompletionPacket @ 0x1405E9C20 (IopFreeMiniCompletionPacket.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF990 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     PsReturnPoolQuota @ 0x14011F3A0 (PsReturnPoolQuota.c)
 *     ExpGetBilledProcess @ 0x14011F3D8 (ExpGetBilledProcess.c)
 */

void __fastcall ExReturnPoolQuota(ULONG_PTR a1)
{
  char v2; // di
  struct _KPROCESS *BilledProcess; // rsi
  unsigned __int16 v4; // cx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int16 v7; // cx

  if ( !ExpSpecialAllocations || !(unsigned int)ExIsSpecialPoolAddress(a1) )
  {
    v2 = *(_BYTE *)(a1 - 13);
    if ( (v2 & 8) != 0 )
    {
      BilledProcess = (struct _KPROCESS *)ExpGetBilledProcess(a1 - 16);
      if ( BilledProcess )
      {
        v4 = *(_WORD *)(a1 - 14);
        v5 = (unsigned __int8)v4;
        LOWORD(v6) = HIBYTE(v4);
        if ( (v2 & 4) != 0 )
        {
          v6 = a1 - 16 - 16LL * (unsigned __int8)*(_WORD *)(a1 - 16);
          v7 = *(_WORD *)(v6 + 2);
          v5 = (unsigned __int8)v7;
          *(_BYTE *)(v6 + 3) = HIBYTE(v7) & 0xF7;
          LOBYTE(v6) = *(_BYTE *)(a1 - 13);
        }
        *(_BYTE *)(a1 - 13) = v6 & 0xF7;
        PsReturnPoolQuota(BilledProcess, (POOL_TYPE)(v2 & 1), 16 * v5);
        ObDereferenceObjectDeferDeleteWithTag(BilledProcess, *(_DWORD *)(a1 - 12));
      }
    }
  }
}
