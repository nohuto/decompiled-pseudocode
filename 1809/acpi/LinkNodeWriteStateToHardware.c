/*
 * XREFs of LinkNodeWriteStateToHardware @ 0x1C0093664
 * Callers:
 *     IrqArbCommitAllocation @ 0x1C0091240 (IrqArbCommitAllocation.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     LinkNodepRunSrsAsync @ 0x1C0069C0C (LinkNodepRunSrsAsync.c)
 */

__int64 LinkNodeWriteStateToHardware()
{
  __int64 v0; // rsi
  __int64 *i; // rax
  int v2; // eax
  __int64 result; // rax
  int v4; // ebx
  __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 v7; // rbx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v9; // [rsp+48h] [rbp-10h]

  v0 = LinkNodeListHead - 56;
  for ( i = (__int64 *)LinkNodeListHead; &LinkNodeListHead != i; v0 = (__int64)(i - 7) )
  {
    v2 = *(_DWORD *)(v0 + 24);
    if ( *(_DWORD *)(v0 + 28) )
    {
      if ( !v2 || *(_DWORD *)(v0 + 36) != *(_DWORD *)(v0 + 32) )
      {
        v4 = *(_DWORD *)(v0 + 36);
        v5 = *(_QWORD *)(v0 + 552);
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v9 = -1073741275;
        result = LinkNodepRunSrsAsync(v5, v4, (__int64)AmlisuppCompletePassive, (__int64)&Event);
        if ( (_DWORD)result == 259 )
        {
          KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          result = v9;
        }
        if ( (int)result < 0 )
          return result;
      }
    }
    else if ( v2 )
    {
      v6 = AMLIGetNamedChild(*(__int64 **)(v0 + 552), 1397310559);
      v7 = (__int64)v6;
      if ( v6 )
      {
        AMLIEvalNameSpaceObject((unsigned __int64 *)v6, 0LL, 0, 0LL);
        AMLIDereferenceHandleEx(v7);
      }
    }
    i = *(__int64 **)(v0 + 56);
  }
  return 0LL;
}
