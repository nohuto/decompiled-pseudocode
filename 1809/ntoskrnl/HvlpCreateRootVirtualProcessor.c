/*
 * XREFs of HvlpCreateRootVirtualProcessor @ 0x140818AD0
 * Callers:
 *     HvlpEnableRootVirtualProcessor @ 0x140818BE0 (HvlpEnableRootVirtualProcessor.c)
 * Callees:
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpDepositPages @ 0x140271D90 (HvlpDepositPages.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 *     HvcallInitInputControl @ 0x140322724 (HvcallInitInputControl.c)
 *     HvcallInitiateHypercall @ 0x140322740 (HvcallInitiateHypercall.c)
 */

__int64 __fastcall HvlpCreateRootVirtualProcessor(__int64 a1, int a2)
{
  int v4; // ebp
  __int64 v5; // rdx
  __int64 result; // rax
  _QWORD *v7; // rax
  __int16 v8; // bx
  PHYSICAL_ADDRESS v9[3]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(KeNodeBlock[*(unsigned __int16 *)(a1 + 12)] + 160);
  HvcallInitInputControl(78, &v10);
  while ( 1 )
  {
    result = HvlpDepositPages(*(_WORD *)(a1 + 12), v5, 0);
    if ( (_DWORD)result )
      break;
    v7 = HvlpAcquireHypercallPage(v9, 1, 0LL, 32LL);
    *v7 = HvlPartitionId;
    *((_DWORD *)v7 + 2) = a2;
    *((_DWORD *)v7 + 4) = v4;
    *((_DWORD *)v7 + 5) = -2147483647;
    v7[3] = *(unsigned int *)(a1 + 4);
    v8 = HvcallInitiateHypercall();
    HvlpReleaseHypercallPage((unsigned int *)v9);
    if ( v8 != 11 )
      return v8 != 0 ? 0xC0000001 : 0;
  }
  return result;
}
