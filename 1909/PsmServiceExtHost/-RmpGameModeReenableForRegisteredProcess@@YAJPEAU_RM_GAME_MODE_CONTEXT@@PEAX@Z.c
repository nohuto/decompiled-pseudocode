/*
 * XREFs of ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18006BF78
 * Callers:
 *     ?RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180066D20 (-RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006B48C (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18006B780 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18006BD40 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 */

__int64 __fastcall RmpGameModeReenableForRegisteredProcess(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE Process)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v4; // rdi
  unsigned int v5; // ebx
  DWORD ProcessId; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  char v8; // al

  v4 = 0LL;
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 2616LL) & 1) != 0 )
  {
    v5 = -1073741077;
  }
  else
  {
    ProcessId = GetProcessId(Process);
    RecipientProcessById = RmpGameModeFindRecipientProcessById(a1, ProcessId);
    v4 = RecipientProcessById;
    if ( RecipientProcessById )
    {
      v8 = *((_BYTE *)RecipientProcessById + 170);
      if ( (v8 & 4) != 0 )
      {
        *((_BYTE *)v4 + 170) = v8 & 0xFB;
        RmpGameModeQueuePolicyWorkerWithLock(a1);
        v5 = 0;
      }
      else
      {
        v5 = -1073741584;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  if ( v4 )
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v4);
  return v5;
}
