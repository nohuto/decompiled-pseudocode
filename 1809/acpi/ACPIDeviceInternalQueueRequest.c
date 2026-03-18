/*
 * XREFs of ACPIDeviceInternalQueueRequest @ 0x1C004E94C
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x1C004EE28 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C001C68C (ACPIPowerScheduleDpc.c)
 */

char __fastcall ACPIDeviceInternalQueueRequest(__int64 a1, _QWORD *a2, __int16 a3)
{
  char v3; // r9
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // r8
  _QWORD *v7; // rdx

  v3 = a3;
  if ( (a3 & 0x100) != 0 )
  {
    v4 = (_QWORD *)AcpiPowerSynchronizeList;
    if ( *(__int64 **)(AcpiPowerSynchronizeList + 8) == &AcpiPowerSynchronizeList )
    {
      *a2 = AcpiPowerSynchronizeList;
      a2[1] = &AcpiPowerSynchronizeList;
      v4[1] = a2;
      AcpiPowerSynchronizeList = (__int64)a2;
      goto LABEL_14;
    }
LABEL_12:
    __fastfail(3u);
  }
  v4 = (_QWORD *)(a1 + 536);
  v5 = a2 + 2;
  if ( (_QWORD *)*v4 == v4 )
  {
    v6 = (_QWORD *)v4[1];
    if ( (_QWORD *)*v6 != v4 )
      goto LABEL_12;
    *v5 = v4;
    a2[3] = v6;
    *v6 = v5;
    v4[1] = v5;
    if ( (v3 & 1) != 0 )
    {
      v4 = (_QWORD *)qword_1C00800D8;
      if ( *(__int64 **)qword_1C00800D8 != &AcpiPowerDelayedQueueList )
        goto LABEL_12;
      *a2 = &AcpiPowerDelayedQueueList;
      a2[1] = v4;
      *v4 = a2;
      qword_1C00800D8 = (__int64)a2;
    }
    else
    {
      v4 = (_QWORD *)qword_1C00800E8;
      if ( *(__int64 **)qword_1C00800E8 != &AcpiPowerQueueList )
        goto LABEL_12;
      *a2 = &AcpiPowerQueueList;
      a2[1] = v4;
      *v4 = a2;
      qword_1C00800E8 = (__int64)a2;
    }
  }
  else
  {
    v7 = (_QWORD *)v4[1];
    if ( (_QWORD *)*v7 != v4 )
      goto LABEL_12;
    *v5 = v4;
    v5[1] = v7;
    *v7 = v5;
    v4[1] = v5;
  }
LABEL_14:
  AcpiPowerDpcFlags |= 2u;
  if ( (v3 & 1) == 0 )
    LOBYTE(v4) = ACPIPowerScheduleDpc();
  return (char)v4;
}
