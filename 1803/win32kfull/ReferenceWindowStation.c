/*
 * XREFs of ReferenceWindowStation @ 0x1C00B6A10
 * Callers:
 *     CheckClipboardAccess @ 0x1C00B69B0 (CheckClipboardAccess.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

NTSTATUS __fastcall ReferenceWindowStation(struct _KTHREAD *a1, void *a2, ACCESS_MASK a3, _QWORD *a4, int a5)
{
  PVOID v9; // rbx
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rsi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  NTSTATUS result; // eax
  __int64 v19; // rax
  PVOID Object; // [rsp+30h] [rbp-28h] BYREF

  v9 = 0LL;
  ThreadProcess = PsGetThreadProcess(a1);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v12 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(a1);
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
  }
  if ( ProcessWin32Process )
  {
    if ( !a5
      || !v12
      || (v16 = *(_QWORD *)(v12 + 448)) == 0
      || *(_QWORD *)(ProcessWin32Process + 664) == *(_QWORD *)(v16 + 40) )
    {
      v9 = *(PVOID *)(ProcessWin32Process + 664);
      if ( v9 )
      {
        if ( !RtlAreAllAccessesGranted(*(_DWORD *)(ProcessWin32Process + 680), a3) )
        {
          UserSetLastError(5LL, v17);
          return -1073741790;
        }
LABEL_20:
        *a4 = v9;
        return 0;
      }
    }
    if ( v12 )
    {
      v19 = *(_QWORD *)(v12 + 448);
      if ( v19 )
      {
        v9 = *(PVOID *)(v19 + 40);
        if ( !(unsigned int)AccessCheckObject(v9, a3, 0LL, WinStaMapping) )
          return -1073741790;
      }
    }
    if ( v9 )
      goto LABEL_20;
  }
  if ( a2 )
  {
    result = ObReferenceObjectByHandle(a2, a3, ExWindowStationObjectType, 0, &Object, 0LL);
    v9 = Object;
    if ( result < 0 )
      return result;
    ObfDereferenceObject(Object);
    goto LABEL_20;
  }
  return -1073741275;
}
