/*
 * XREFs of KiSetSystemTimeDpc @ 0x1401791F0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KeAdjustInterruptTime @ 0x140169EC4 (KeAdjustInterruptTime.c)
 *     KiUpdateSystemTime @ 0x140174EFC (KiUpdateSystemTime.c)
 *     KiSelectActiveTimerTable @ 0x1401793AC (KiSelectActiveTimerTable.c)
 *     KiAdjustTimerDueTimes @ 0x1401793DC (KiAdjustTimerDueTimes.c)
 */

__int64 __fastcall KiSetSystemTimeDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 v6; // rdi
  signed __int32 v7; // eax
  unsigned int v8; // esi
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 active; // r14
  signed __int32 v11; // eax
  unsigned int v12; // esi
  signed __int32 v13; // eax
  unsigned int v14; // edi
  int v16; // eax
  __int64 v17; // r9
  _QWORD *v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rax
  _DWORD v21[4]; // [rsp+30h] [rbp-38h] BYREF
  int v22; // [rsp+78h] [rbp+10h] BYREF
  int v23; // [rsp+88h] [rbp+20h] BYREF

  v6 = a2;
  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v22 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v22);
  }
  else
  {
    *(_DWORD *)a4 = v8 | *(_DWORD *)(a4 + 4);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  LOBYTE(a2) = 1;
  active = KiSelectActiveTimerTable(CurrentPrcb, a2);
  if ( CurrentPrcb->ClockOwner )
  {
    **(_QWORD **)(v6 + 16) = MEMORY[0xFFFFF78000000014];
    v16 = *(_DWORD *)(v6 + 4);
    v17 = **(_QWORD **)(v6 + 8);
    v18 = *(_QWORD **)(v6 + 16);
    *(_QWORD *)(v6 + 24) = v17;
    v19 = v17 - *v18;
    *(_QWORD *)(v6 + 24) = v19;
    if ( (v16 & 1) != 0 )
    {
      if ( KeAdjustInterruptTime(v19, (v16 & 2) != 0) )
      {
        v20 = -*(_QWORD *)(v6 + 24);
        *(_BYTE *)v6 = 1;
        *(_QWORD *)(v6 + 24) = v20;
      }
    }
    else
    {
      KiUpdateSystemTime(v19, 0LL, v16);
    }
  }
  v11 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v12 = ~v11 & 0x80000000;
  if ( (v11 & 0x7FFFFFFF) != 0 )
  {
    v23 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v12 )
      KeYieldProcessorEx(&v23);
  }
  else
  {
    *(_DWORD *)a4 = v12 | *(_DWORD *)(a4 + 4);
  }
  if ( *(_QWORD *)(v6 + 24) )
  {
    if ( active )
      KiAdjustTimerDueTimes(CurrentPrcb, active, v6);
    v13 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v14 = ~v13 & 0x80000000;
    if ( (v13 & 0x7FFFFFFF) != 0 )
    {
      v21[0] = 0;
      while ( (*(_DWORD *)a4 & 0x80000000) != v14 )
        KeYieldProcessorEx(v21);
    }
    else
    {
      *(_DWORD *)a4 = v14 | *(_DWORD *)(a4 + 4);
    }
  }
  _InterlockedDecrement(a3);
  return KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1u, 0, 2u);
}
