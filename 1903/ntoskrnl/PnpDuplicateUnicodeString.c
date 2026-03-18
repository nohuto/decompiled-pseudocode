/*
 * XREFs of PnpDuplicateUnicodeString @ 0x14014506C
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FB7A4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FC2A0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgBuildIndirectString @ 0x1406FC8B8 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDevice @ 0x140704004 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14071CFF8 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140776120 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgAppendMultiSz @ 0x140865AC8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140868888 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406D4F60 (ExpAllocateStringRoutine.c)
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
