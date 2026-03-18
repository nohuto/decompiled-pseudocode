/*
 * XREFs of PnpDuplicateUnicodeString @ 0x14015D998
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406E2E54 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F5774 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F5BD0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F6C90 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x140702094 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140750BE0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgAppendMultiSz @ 0x14082B2E8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E028 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406B2120 (ExpAllocateStringRoutine.c)
 */

char __fastcall PnpDuplicateUnicodeString(__int64 a1, __int64 a2)
{
  void *StringRoutine; // rax

  if ( *(_QWORD *)(a2 + 8) )
  {
    StringRoutine = (void *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a2 + 2));
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return (char)StringRoutine;
    memmove(StringRoutine, *(const void **)(a2 + 8), *(unsigned __int16 *)(a2 + 2));
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_WORD *)a1 = *(_WORD *)a2;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
  LOBYTE(StringRoutine) = 1;
  return (char)StringRoutine;
}
