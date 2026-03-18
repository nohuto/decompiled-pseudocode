/*
 * XREFs of IopFreeIrpExtension @ 0x14011BE78
 * Callers:
 *     IopFreeIrp @ 0x140043ED0 (IopFreeIrp.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     IoSetActivityIdIrp @ 0x1400A7F10 (IoSetActivityIdIrp.c)
 *     IoCleanupIrp @ 0x140174A90 (IoCleanupIrp.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x14029A0D0 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x14029A120 (IoClearFsTrackOffsetState.c)
 *     IopPerfCompleteRequest @ 0x14029A608 (IopPerfCompleteRequest.c)
 * Callees:
 *     IopIrpHasExtensionType @ 0x14011C27C (IopIrpHasExtensionType.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3)
{
  char v3; // al
  __int64 v4; // r9
  char v5; // r10
  int v7; // eax

  v3 = *(_BYTE *)(a1 + 71);
  v4 = *(_QWORD *)(a1 + 200);
  v5 = a3;
  if ( v3 < 0 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_BYTE *)(a1 + 71) = v3 & 0x7F;
  }
  else if ( v4 )
  {
    if ( a2 == -1 )
    {
      if ( (unsigned __int8)IopIrpHasExtensionType(a1, 5LL) )
        *(_QWORD *)(v4 + 40) = 0LL;
      *(_WORD *)(v4 + 2) = 0;
      LOWORD(v7) = 0;
    }
    else
    {
      v7 = *(unsigned __int16 *)(v4 + 2) & ~(1 << a2);
      *(_WORD *)(v4 + 2) = v7;
      if ( a2 == 5 )
        *(_QWORD *)(v4 + 40) = 0LL;
    }
    if ( !(_WORD)v7 && (*(_BYTE *)(a1 + 71) & 0x40) != 0 )
    {
      if ( v5 )
      {
        ExFreePoolWithTag((PVOID)v4, 0x58707249u);
        *(_BYTE *)(a1 + 71) &= ~0x40u;
        *(_QWORD *)(a1 + 200) = 0LL;
      }
    }
  }
}
