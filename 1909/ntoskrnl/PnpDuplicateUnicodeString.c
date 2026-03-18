/*
 * XREFs of PnpDuplicateUnicodeString @ 0x14014570C
 * Callers:
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406FD584 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FE080 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgBuildIndirectString @ 0x1406FE698 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x14071EE88 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140779700 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgAppendMultiSz @ 0x1408651C8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140867F88 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
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
