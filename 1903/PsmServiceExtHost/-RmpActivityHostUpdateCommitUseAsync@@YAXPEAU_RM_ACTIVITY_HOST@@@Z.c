/*
 * XREFs of ?RmpActivityHostUpdateCommitUseAsync@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002EA30
 * Callers:
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18002DE70 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostUpdateCommitUseAsync(struct _RM_ACTIVITY_HOST *a1)
{
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 6) + 2616LL) & 1) == 0 && (*((_BYTE *)a1 + 1472) & 1) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)a1 + 2) <= 1 )
      __fastfail(0xEu);
    *((_DWORD *)a1 + 368) |= 1u;
    TpPostWork(*((_QWORD *)a1 + 173));
  }
}
