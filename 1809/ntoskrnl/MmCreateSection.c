/*
 * XREFs of MmCreateSection @ 0x14061C2D0
 * Callers:
 *     AlpcpCreateSection @ 0x14061BF74 (AlpcpCreateSection.c)
 *     EtwpCoverageEnsureContext @ 0x14075C234 (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x140887CF8 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140888D98 (PspSiloInitializeUserSharedData.c)
 *     MiInitializeCfg @ 0x1409BB28C (MiInitializeCfg.c)
 *     MiInitializeApiSets @ 0x1409BDEBC (MiInitializeApiSets.c)
 * Callees:
 *     MmCreateSectionEx @ 0x14061C34C (MmCreateSectionEx.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, _QWORD *a4, int a5, int a6, __int64 a7, __int64 a8)
{
  unsigned int v8; // edx
  int v9; // r10d
  _QWORD *Address; // r11
  _QWORD v12[3]; // [rsp+50h] [rbp-18h] BYREF

  v8 = a6;
  v9 = 0;
  Address = 0LL;
  if ( (a6 & 0x7F) != 0 )
  {
    v12[0] = 2LL;
    v8 = a6 & 0xFFFFFF80;
    Address = v12;
    v12[1] = (a6 & 0x7Fu) - 1;
    v9 = 1;
  }
  return MmCreateSectionEx(a1, a3, *a4, a5, v8, a7, a8, 0, Address, v9);
}
