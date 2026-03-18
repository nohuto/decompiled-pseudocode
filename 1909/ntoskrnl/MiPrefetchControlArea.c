/*
 * XREFs of MiPrefetchControlArea @ 0x1406E7830
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x1406423A4 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140893FA8 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x140092240 (MiPfPutPagesInTransition.c)
 *     MiPfCompletePrefetchIos @ 0x1400954A4 (MiPfCompletePrefetchIos.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiPfPrepareSequentialReadList @ 0x140607B90 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x140647BD8 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x140647D64 (MiPfExecuteReadList.c)
 */

__int64 __fastcall MiPrefetchControlArea(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6)
{
  struct _KTHREAD *CurrentThread; // rdi
  int List; // esi
  int v8; // r8d
  int v9; // ebp
  _DWORD *P; // [rsp+40h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  List = MiPfPrepareSequentialReadList(0LL, a1, a2);
  if ( List >= 0 && P )
  {
    ++BYTE6(CurrentThread[1].Queue);
    P[26] = 0;
    v9 = MiPfPutPagesInTransition((__int64)P, 0LL, v8);
    if ( v9 >= 0 && *((_DWORD **)P + 15) != P + 30 )
    {
      MiPfExecuteReadList((__int64)P, a5, a6, 0LL);
      MiPfCompletePrefetchIos((_QWORD **)P + 15, 0LL, 0LL);
    }
    MiReleaseReadListResources((__int64)P);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    --BYTE6(CurrentThread[1].Queue);
    ExFreePoolWithTag(P, 0);
    return (unsigned int)v9;
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return (unsigned int)List;
  }
}
