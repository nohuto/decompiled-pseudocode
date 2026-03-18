/*
 * XREFs of MmCreateSection @ 0x140650DB0
 * Callers:
 *     AlpcpCreateSection @ 0x140650B08 (AlpcpCreateSection.c)
 *     EtwpCoverageEnsureContext @ 0x1407844F8 (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x1408C4728 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C57F4 (PspSiloInitializeUserSharedData.c)
 *     MiInitializeApiSets @ 0x1409F1568 (MiInitializeApiSets.c)
 *     MiInitializeCfg @ 0x140A21434 (MiInitializeCfg.c)
 * Callees:
 *     MmCreateSectionEx @ 0x140650E38 (MmCreateSectionEx.c)
 */

__int64 __fastcall MmCreateSection(int a1, __int64 a2, int a3, _QWORD *a4, int a5, int a6, __int64 a7, __int64 a8)
{
  unsigned int v8; // edx
  int v9; // r10d
  __int64 *Address; // r11
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+58h] [rbp-10h]

  v8 = a6;
  v12 = 0LL;
  v9 = 0;
  v13 = 0LL;
  Address = 0LL;
  if ( (a6 & 0x7F) != 0 )
  {
    Address = &v12;
    v8 = a6 & 0xFFFFFF80;
    v12 = 2LL;
    v9 = 1;
    v13 = (a6 & 0x7Fu) - 1;
  }
  return MmCreateSectionEx(a1, a3, *a4, a5, v8, a7, a8, 0, Address, v9);
}
