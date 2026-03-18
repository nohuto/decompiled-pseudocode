/*
 * XREFs of ExHandleLogBadReference @ 0x140338B98
 * Callers:
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     ObpCloseHandle @ 0x14060F2BC (ObpCloseHandle.c)
 *     ExMapHandleToPointerEx @ 0x140610768 (ExMapHandleToPointerEx.c)
 *     ObReferenceFileObjectForWrite @ 0x1406299E0 (ObReferenceFileObjectForWrite.c)
 * Callees:
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1402A70B0 (KeRaiseUserException.c)
 *     ExpUpdateDebugInfo @ 0x14090B9AC (ExpUpdateDebugInfo.c)
 */

struct _KTHREAD *__fastcall ExHandleLogBadReference(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        char a3)
{
  struct _KTHREAD *result; // rax

  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      result = (struct _KTHREAD *)ExpUpdateDebugInfo(BugCheckParameter2, KeGetCurrentThread(), BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      result = KeGetCurrentThread();
      if ( result->ApcStateIndex != 1 )
      {
        result = KeGetCurrentThread();
        if ( BugCheckParameter2 == result->ApcState.Process[1].ActiveProcessors.Bitmap[4] )
        {
          if ( (NtGlobalFlag & 0x100) != 0 )
            DbgPrintEx(
              0x5Du,
              0,
              "AVRF: Invalid handle %p in process %p \n",
              (const void *)BugCheckParameter1,
              KeGetCurrentThread()->ApcState.Process);
          return (struct _KTHREAD *)KeRaiseUserException(0xC0000008);
        }
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
  return result;
}
