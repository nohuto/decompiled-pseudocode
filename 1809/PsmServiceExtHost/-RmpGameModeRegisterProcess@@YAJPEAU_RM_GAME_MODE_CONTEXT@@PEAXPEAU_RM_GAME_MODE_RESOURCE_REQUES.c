/*
 * XREFs of ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18005F2C0
 * Callers:
 *     ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x18005A420 (-RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005E4E0 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18005E674 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005E8E0 (-RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE.c)
 */

__int64 __fastcall RmpGameModeRegisterProcess(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *Heap; // rax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v7; // rsi
  signed int ProcessOrCompleteInsertion; // ebx
  volatile signed __int64 *v9; // rdi
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  P = 0LL;
  Heap = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xB0uLL);
  v7 = Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  RmpGameModeInitializeRecipientProcess(a1, a3, Heap);
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 2684LL) & 2) != 0 )
  {
    ProcessOrCompleteInsertion = -1073741077;
  }
  else
  {
    ProcessOrCompleteInsertion = RmpGameModeFindProcessOrCompleteInsertion(
                                   a1,
                                   a2,
                                   v7,
                                   (struct _RM_GAME_MODE_RECIPIENT_PROCESS **)&P);
    if ( ProcessOrCompleteInsertion >= 0 )
    {
      v9 = (volatile signed __int64 *)P;
      ProcessOrCompleteInsertion = v7 != P ? 0xC0000718 : 0;
      goto LABEL_6;
    }
  }
  v9 = (volatile signed __int64 *)P;
LABEL_6:
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  if ( v9 )
    RmpGameModeDereferenceRecipientProcess(v9);
  RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v7);
  return (unsigned int)ProcessOrCompleteInsertion;
}
