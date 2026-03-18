/*
 * XREFs of SdbpGetProcessHostGuestArchitectures @ 0x1408E8D48
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x140323D80 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x140323F00 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x1408E8A70 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathSystem @ 0x1408E8CA0 (SdbpGetPathSystem.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 *     AslImageFileToArchitecture @ 0x140722318 (AslImageFileToArchitecture.c)
 *     AslEnvGetProcessWowInfo @ 0x140722344 (AslEnvGetProcessWowInfo.c)
 */

__int64 __fastcall SdbpGetProcessHostGuestArchitectures(__int16 *a1, _WORD *a2, __int16 *a3)
{
  int ProcessWowInfo; // ebx
  __int16 v7; // cx
  __int16 v9[20]; // [rsp+30h] [rbp-28h] BYREF
  __int16 v10; // [rsp+78h] [rbp+20h] BYREF

  v10 = -1;
  v9[0] = -1;
  ProcessWowInfo = AslEnvGetProcessWowInfo(v9, &v10);
  if ( ProcessWowInfo >= 0 )
  {
    if ( !a3 || (v7 = AslImageFileToArchitecture(*a3), v7 == -1) )
      v7 = v10;
    ProcessWowInfo = 0;
    *a1 = v9[0];
    *a2 = v7;
  }
  else
  {
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)ProcessWowInfo;
}
