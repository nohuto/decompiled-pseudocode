/*
 * XREFs of MiPrefetchControlArea @ 0x1406C7244
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiSetPagesModified @ 0x1402AA7EC (MiSetPagesModified.c)
 *     MiValidateSectionCreate @ 0x140652E10 (MiValidateSectionCreate.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A37C (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiPfCompletePrefetchIos @ 0x14001A020 (MiPfCompletePrefetchIos.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x14066279C (MiPfExecuteReadList.c)
 *     MiReleaseReadListResources @ 0x1406628D0 (MiReleaseReadListResources.c)
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
    P[20] = 0;
    v9 = MiPfPutPagesInTransition((__int64)P, 0LL, v8);
    if ( v9 >= 0 && *((_DWORD **)P + 12) != P + 24 )
    {
      MiPfExecuteReadList((__int64)P, a5, a6, 0LL);
      MiPfCompletePrefetchIos((_QWORD **)P + 12, 0LL, 0LL);
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
