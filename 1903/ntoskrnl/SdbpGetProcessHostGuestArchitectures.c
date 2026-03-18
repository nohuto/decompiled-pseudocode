/*
 * XREFs of SdbpGetProcessHostGuestArchitectures @ 0x140925488
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x140345630 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x1403457B0 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathAppraiser @ 0x1409251B0 (SdbpGetPathAppraiser.c)
 *     SdbpGetPathSystem @ 0x1409253E0 (SdbpGetPathSystem.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslImageFileToArchitecture @ 0x14074C388 (AslImageFileToArchitecture.c)
 *     AslEnvGetProcessWowInfo @ 0x14074C3B4 (AslEnvGetProcessWowInfo.c)
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
