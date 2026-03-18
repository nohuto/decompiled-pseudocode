/*
 * XREFs of PiSwQueuedCreateInfoCreate @ 0x140870788
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x14071EF0C (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1405BC774 (PnpAllocatePWSTR.c)
 *     PnpCopyDevPropertyArray @ 0x14071F6A0 (PnpCopyDevPropertyArray.c)
 *     PiSwPnPInfoInit @ 0x140720280 (PiSwPnPInfoInit.c)
 *     PiSwQueuedCreateInfoFree @ 0x14087089C (PiSwQueuedCreateInfoFree.c)
 */

__int64 __fastcall PiSwQueuedCreateInfoCreate(PVOID **a1, __int64 a2)
{
  PVOID *PoolWithTag; // rax
  int PWSTR; // ebx
  __int64 v6; // r8
  PVOID v7; // rcx

  PoolWithTag = (PVOID *)ExAllocatePoolWithTag(PagedPool, 0x58uLL, 0x57706E50u);
  *a1 = PoolWithTag;
  if ( !PoolWithTag )
  {
    PWSTR = -1073741670;
    goto LABEL_10;
  }
  memset(PoolWithTag, 0, 0x58uLL);
  PWSTR = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 8), 0xC8uLL, 0x57706E50u, *a1);
  if ( PWSTR >= 0 )
  {
    PWSTR = PiSwPnPInfoInit((__int64)(*a1 + 1), a2);
    if ( PWSTR >= 0 )
    {
      if ( *(_QWORD *)(a2 + 96) )
      {
        *((_DWORD *)*a1 + 16) = *(_DWORD *)(a2 + 88);
        (*a1)[7] = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a2 + 88), 0x57706E50u);
        v7 = (*a1)[7];
        if ( !v7 )
        {
          PWSTR = -1073741670;
          goto LABEL_11;
        }
        memmove(v7, *(const void **)(a2 + 96), *(unsigned int *)(a2 + 88));
      }
      PWSTR = PnpCopyDevPropertyArray(*(_DWORD *)(a2 + 104), *(_QWORD *)(a2 + 112), v6, (_DWORD *)*a1 + 20, *a1 + 9);
LABEL_10:
      if ( PWSTR >= 0 )
        return (unsigned int)PWSTR;
    }
  }
LABEL_11:
  if ( *a1 )
  {
    PiSwQueuedCreateInfoFree(*a1);
    *a1 = 0LL;
  }
  return (unsigned int)PWSTR;
}
