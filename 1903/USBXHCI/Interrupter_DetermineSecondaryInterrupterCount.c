/*
 * XREFs of Interrupter_DetermineSecondaryInterrupterCount @ 0x1C0065E58
 * Callers:
 *     Interrupter_FilterRemoveResourceRequirements @ 0x1C0066494 (Interrupter_FilterRemoveResourceRequirements.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C000B478 (WPP_RECORDER_SF_ddL.c)
 *     Interrupter_SetSecondaryInterrupterCount @ 0x1C001F318 (Interrupter_SetSecondaryInterrupterCount.c)
 */

void __fastcall Interrupter_DetermineSecondaryInterrupterCount(__int64 a1, int a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // r10
  unsigned int v6; // ebx
  ULONG v7; // r11d
  int v8; // eax
  ULONG v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  unsigned int v11; // [rsp+38h] [rbp-10h]

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = 0;
  v7 = ActiveProcessorCount;
  if ( (*(_QWORD *)(v5 + 336) & 0x1000LL) == 0 )
  {
    v8 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 628LL) == 1) + 1;
    if ( a2 != v8 )
    {
      v6 = a2 - v8;
      if ( (unsigned int)(a2 - v8) > 0x10 )
        v6 = 16;
      if ( v7 <= v6 )
        v6 = v7;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = v6;
    v10 = a2;
    v9 = v7;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 72),
      4u,
      9u,
      0x36u,
      (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
      v9,
      v10,
      v11);
  }
  Interrupter_SetSecondaryInterrupterCount(a1, v6);
}
