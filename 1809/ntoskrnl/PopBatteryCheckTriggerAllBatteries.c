/*
 * XREFs of PopBatteryCheckTriggerAllBatteries @ 0x14086CD54
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14071A148 (PopBatteryApplyCompositeState.c)
 *     PopBatteryCheckTrigger @ 0x14071A490 (PopBatteryCheckTrigger.c)
 * Callees:
 *     <none>
 */

char __fastcall PopBatteryCheckTriggerAllBatteries(__int64 a1, int a2)
{
  __int64 v2; // r8
  char v4; // r9
  unsigned int v5; // r10d
  unsigned int v6; // ecx

  v2 = qword_140417930;
  v4 = 1;
  while ( (__int64 *)v2 != &qword_140417930 )
  {
    v5 = *(_DWORD *)(v2 + 64);
    if ( v5 - 1 <= 0xFFFFFFFD )
    {
      v6 = *(_DWORD *)(v2 + 68);
      if ( v6 <= v5 * *(_DWORD *)(a1 + 16) / 0x64 + v5 / 0xC8 )
        v6 = v5 * *(_DWORD *)(a1 + 16) / 0x64 + v5 / 0xC8;
      if ( *(_DWORD *)(v2 + 88) > a2 * v5 / 0x64 + v6 )
        return 0;
    }
    v2 = *(_QWORD *)v2;
  }
  return v4;
}
