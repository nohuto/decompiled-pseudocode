/*
 * XREFs of NVMeVersionCheck @ 0x1C0018BB8
 * Callers:
 *     NVMeNameSpaceIdentify @ 0x1C0016B28 (NVMeNameSpaceIdentify.c)
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0017540 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 * Callees:
 *     <none>
 */

bool __fastcall NVMeVersionCheck(__int64 a1)
{
  unsigned __int16 v1; // dx
  bool v2; // cc

  v1 = *(_WORD *)(a1 + 154);
  v2 = v1 <= 1u;
  if ( v1 == 1 )
  {
    if ( *(_BYTE *)(a1 + 153) )
      return 1;
    v2 = 1;
  }
  return !v2;
}
