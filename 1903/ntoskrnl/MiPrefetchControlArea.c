/*
 * XREFs of MiPrefetchControlArea @ 0x1406E6648
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x14065BE44 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     MiPfCompletePrefetchIos @ 0x1400A4774 (MiPfCompletePrefetchIos.c)
 *     MiPfPutPagesInTransition @ 0x1400A4A10 (MiPfPutPagesInTransition.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiPfPrepareSequentialReadList @ 0x140606080 (MiPfPrepareSequentialReadList.c)
 *     MiReleaseReadListResources @ 0x14066E178 (MiReleaseReadListResources.c)
 *     MiPfExecuteReadList @ 0x14066E304 (MiPfExecuteReadList.c)
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
