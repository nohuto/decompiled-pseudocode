/*
 * XREFs of MiDereferenceSegmentThread @ 0x140187580
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     MiDeleteEmptySubsections @ 0x140093928 (MiDeleteEmptySubsections.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     KeSetPriorityThread @ 0x1400CD850 (KeSetPriorityThread.c)
 *     MiProcessDereferenceList @ 0x140154030 (MiProcessDereferenceList.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     CcUnmapInactiveViews @ 0x14026A860 (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x1402A1764 (MiDeleteCachedSegment.c)
 *     MiDeleteControlAreaList @ 0x1402A20C8 (MiDeleteControlAreaList.c)
 *     MiProcessDeleteOnClose @ 0x1402A2880 (MiProcessDeleteOnClose.c)
 *     MiRemoveUnusedSegments @ 0x1402A2F30 (MiRemoveUnusedSegments.c)
 *     MiFreeClonePool @ 0x1402C9EE8 (MiFreeClonePool.c)
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
  Object[7] = &stru_14043A538;
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
                  KeResetEvent(&stru_14043A538);
                  while ( (unsigned int)CcUnmapInactiveViews(0LL, v10, 1LL, 0LL)
                       && (unsigned __int64)qword_14043A1C8 <= 0x8000000 )
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
