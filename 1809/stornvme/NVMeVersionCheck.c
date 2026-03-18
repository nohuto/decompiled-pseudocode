/*
 * XREFs of NVMeVersionCheck @ 0x1C0017C84
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006BD0 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 *     NVMeNameSpaceIdentify @ 0x1C0016438 (NVMeNameSpaceIdentify.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeVersionCheck(__int64 a1)
{
  unsigned __int16 v1; // dx
  bool v2; // cc

  v1 = *(_WORD *)(a1 + 146);
  v2 = v1 <= 1u;
  if ( v1 == 1 )
  {
    if ( *(_BYTE *)(a1 + 145) )
      return 1;
    v2 = 1;
  }
  return !v2;
}
