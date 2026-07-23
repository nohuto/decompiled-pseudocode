/*
 * XREFs of MiDereferenceSegmentThread @ 0x1401876E0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     MiDeleteEmptySubsections @ 0x140093868 (MiDeleteEmptySubsections.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     MiProcessDereferenceList @ 0x140154150 (MiProcessDereferenceList.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     CcUnmapInactiveViews @ 0x14026AB50 (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x1402A1A54 (MiDeleteCachedSegment.c)
 *     MiDeleteControlAreaList @ 0x1402A23B8 (MiDeleteControlAreaList.c)
 *     MiProcessDeleteOnClose @ 0x1402A2B70 (MiProcessDeleteOnClose.c)
 *     MiRemoveUnusedSegments @ 0x1402A3220 (MiRemoveUnusedSegments.c)
 *     MiFreeClonePool @ 0x1402CA1D8 (MiFreeClonePool.c)
 */

ULONG_PTR *__fastcall MiDereferenceSegmentThread(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS v3; // ebx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  __int64 v10; // rdx
  ULONG_PTR *result; // rax
  PVOID Object[8]; // [rsp+40h] [rbp-1E8h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+80h] [rbp-1A8h] BYREF

  *(_BYTE *)(a1 + 1617) = 1;
  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 19);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  Object[0] = (PVOID)(a1 + 104);
  Object[2] = (PVOID)(a1 + 1456);
  Object[1] = (PVOID)(a1 + 1312);
  Object[4] = (PVOID)(a1 + 1552);
  Object[3] = (PVOID)(a1 + 1336);
  Object[5] = (PVOID)(a1 + 1688);
  Object[6] = (PVOID)(a1 + 1744);
  Object[7] = &stru_14043B5F8;
  while ( 1 )
  {
    v3 = KeWaitForMultipleObjects(
           8 - (&MiSystemPartition != (ULONG_PTR *)a1),
           Object,
           WaitAny,
           WrVirtualMemory,
           0,
           0,
           0LL,
           &WaitBlockArray);
    if ( v3 != 1 )
      MiDeleteEmptySubsections(a1);
    if ( !v3 )
      break;
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
            if ( v8 )
            {
              v9 = v8 - 1;
              if ( v9 )
              {
                if ( v9 == 1 )
                {
                  KeResetEvent(&stru_14043B5F8);
                  while ( (unsigned int)CcUnmapInactiveViews(0LL, v10, 1LL, 0LL)
                       && (unsigned __int64)qword_14043B288 <= 0x8000000 )
                    ;
                }
              }
              else
              {
                KeResetEvent((PRKEVENT)(a1 + 1744));
                MiFreeClonePool(a1);
              }
            }
            else
            {
              MiDeleteControlAreaList(a1);
            }
          }
          else
          {
            MiProcessDeleteOnClose(a1);
          }
        }
        else
        {
          KeResetEvent((PRKEVENT)(a1 + 1336));
          MiRemoveUnusedSegments(a1, 0LL);
        }
      }
      else
      {
        MiProcessDereferenceList(a1, 1);
      }
    }
    else
    {
      KeResetEvent((PRKEVENT)(a1 + 1312));
      MiDeleteEmptySubsections(a1);
    }
  }
  result = &MiSystemPartition;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    while ( *(_QWORD *)(a1 + 1640) != a1 + 1640 && (unsigned int)MiDeleteCachedSegment(a1) )
      ;
    *(_BYTE *)(a1 + 1616) = 1;
    MiProcessDeleteOnClose(a1);
    return (ULONG_PTR *)MiDeleteControlAreaList(a1);
  }
  return result;
}
