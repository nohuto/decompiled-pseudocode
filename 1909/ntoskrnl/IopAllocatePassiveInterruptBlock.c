/*
 * XREFs of IopAllocatePassiveInterruptBlock @ 0x140860FF0
 * Callers:
 *     IopConnectInterrupt @ 0x14074338C (IopConnectInterrupt.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopFindPassiveInterruptBlock @ 0x14029E474 (IopFindPassiveInterruptBlock.c)
 *     IopInsertPassiveInterruptBlock @ 0x14029E528 (IopInsertPassiveInterruptBlock.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopAllocatePassiveInterruptBlock(_DWORD *a1, _OWORD *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  int inserted; // edi
  char *PoolWithTag; // rax
  __int64 v8; // rbx
  int v9; // eax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 == 1 && ((v4 = a1[2]) == 0 || v4 == 3) )
  {
    v5 = a1[3];
    if ( IopFindPassiveInterruptBlock(v5) )
    {
      return 0;
    }
    else
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xC8uLL, 0x6269704Bu);
      v8 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag + 16, 0, 0xB8uLL);
        *(_QWORD *)(v8 + 8) = v8;
        *(_QWORD *)v8 = v8;
        *(_DWORD *)(v8 + 16) = a1[2];
        *(_DWORD *)(v8 + 20) = v5;
        *(_DWORD *)(v8 + 32) = a1[6];
        *(_OWORD *)(v8 + 40) = *a2;
        v9 = a1[2];
        if ( v9 )
        {
          if ( v9 == 3 )
            *(_BYTE *)(v8 + 28) = 0;
        }
        else
        {
          *(_DWORD *)(v8 + 24) = a1[16];
          *(_BYTE *)(v8 + 28) = ((__int64 (__fastcall *)(_QWORD))off_1404244C0[0])(0LL);
        }
        KeInitializeEvent((PRKEVENT)(v8 + 168), SynchronizationEvent, 1u);
        KeInitializeDpc((PRKDPC)(v8 + 104), (PKDEFERRED_ROUTINE)IopPassiveInterruptDpc, (PVOID)v8);
        *(_QWORD *)(v8 + 56) = 0LL;
        *(_QWORD *)(v8 + 72) = 0LL;
        *(_QWORD *)(v8 + 88) = IopPassiveInterruptWorker;
        *(_QWORD *)(v8 + 96) = v8;
        *(_BYTE *)(v8 + 105) = 2;
        inserted = IopInsertPassiveInterruptBlock(v8, &v11);
        if ( inserted < 0 || !v11 )
          ExFreePoolWithTag((PVOID)v8, 0x6269704Bu);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return (unsigned int)inserted;
}
