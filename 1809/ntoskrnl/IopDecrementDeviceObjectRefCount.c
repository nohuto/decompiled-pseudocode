/*
 * XREFs of IopDecrementDeviceObjectRefCount @ 0x1400DC9E0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1400DA8EC (IopCompleteUnloadOrDelete.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     IoUnregisterFileSystem @ 0x140706BC0 (IoUnregisterFileSystem.c)
 * Callees:
 *     IopInterlockedDecrementUlong @ 0x14016A130 (IopInterlockedDecrementUlong.c)
 *     IoAddTriageDumpDataBlock @ 0x140191CCC (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopDecrementDeviceObjectRefCount(ULONG_PTR BugCheckParameter2, char a2)
{
  int *v2; // rbx
  __int64 result; // rax
  __int64 v5; // rcx

  v2 = (int *)(BugCheckParameter2 + 4);
  if ( a2 )
    result = IopInterlockedDecrementUlong(0xAuLL);
  else
    result = (unsigned int)--*v2;
  if ( (int)result < 0 )
  {
    v5 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, 336LL);
      IoAddTriageDumpDataBlock(
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
        *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
    }
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 6uLL, *v2);
  }
  return result;
}
