/*
 * XREFs of CcCopyWriteWontFlush @ 0x14010F590
 * Callers:
 *     FsRtlCopyWrite @ 0x1408152D0 (FsRtlCopyWrite.c)
 * Callees:
 *     CcCanIWriteStream @ 0x1400213FC (CcCanIWriteStream.c)
 */

BOOLEAN __stdcall CcCopyWriteWontFlush(PFILE_OBJECT FileObject, PLARGE_INTEGER FileOffset, ULONG Length)
{
  ULONG Flags; // r9d
  struct _KTHREAD *CurrentThread; // r11
  unsigned int v5; // eax

  if ( Length >= 0x1000000 )
    return 0;
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  v5 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v5 = 0;
  }
  else if ( v5 >= 2 )
  {
    goto LABEL_5;
  }
  if ( CurrentThread != KeGetCurrentThread() || !CurrentThread[1].Timer.DueTime.LowPart )
  {
LABEL_5:
    if ( !v5 )
      return 0;
  }
  return (Flags & 0x1000000) == 0
      || CcCanIWriteStream(*((KSPIN_LOCK **)PspSystemPartition + 1), (__int64)FileObject, Length, 0, 0);
}
