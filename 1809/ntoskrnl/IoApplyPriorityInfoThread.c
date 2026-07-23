/*
 * XREFs of IoApplyPriorityInfoThread @ 0x1400DEEE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     PsSetPagePriorityThread @ 0x1400DEF80 (PsSetPagePriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1400DEFD8 (PsSetIoPriorityThread.c)
 */

NTSTATUS __stdcall IoApplyPriorityInfoThread(
        PIO_PRIORITY_INFO InputPriorityInfo,
        PIO_PRIORITY_INFO OutputPriorityInfo,
        PETHREAD Thread)
{
  _IO_PRIORITY_HINT v6; // eax
  __int64 v7; // r8
  __int64 PagePriority; // rdx
  __int64 ThreadPriority; // rdx
  struct _IO_PRIORITY_INFO v11; // [rsp+20h] [rbp-18h]

  if ( InputPriorityInfo->ThreadPriority == 0xFFFF )
    return -1073741585;
  v6 = (unsigned int)PsSetIoPriorityThread(Thread, (unsigned int)InputPriorityInfo->IoPriority);
  PagePriority = InputPriorityInfo->PagePriority;
  v11.IoPriority = v6;
  if ( (_DWORD)PagePriority == -1 )
    v11.PagePriority = -1;
  else
    v11.PagePriority = PsSetPagePriorityThread(Thread, PagePriority);
  ThreadPriority = InputPriorityInfo->ThreadPriority;
  if ( (_DWORD)ThreadPriority == -1 )
  {
    v11.ThreadPriority = -1;
  }
  else
  {
    v11.ThreadPriority = Thread->BasePriority;
    KeSetActualBasePriorityThread((__int64)Thread, ThreadPriority, v7);
  }
  if ( OutputPriorityInfo )
  {
    v11.Size = 16;
    *OutputPriorityInfo = v11;
  }
  return 0;
}
