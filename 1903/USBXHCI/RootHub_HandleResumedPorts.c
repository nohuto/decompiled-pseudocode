/*
 * XREFs of RootHub_HandleResumedPorts @ 0x1C0022124
 * Callers:
 *     RootHub_D0Exit @ 0x1C0021074 (RootHub_D0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     RootHub_ForceU3 @ 0x1C0021D18 (RootHub_ForceU3.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C0027218 (RootHub_WaitForResumeCompletion.c)
 */

void __fastcall RootHub_HandleResumedPorts(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rsi
  char v4; // al
  unsigned int v5; // eax
  __int64 v6; // [rsp+28h] [rbp-20h]
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  for ( i = 1; i <= *(_DWORD *)(a1 + 16); ++i )
  {
    v3 = *(_QWORD *)(a1 + 48) + 88LL * (i - 1);
    v4 = *(_BYTE *)(v3 + 13);
    if ( v4 == 2 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(v3 + 32),
              0LL) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v6) = i;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            4u,
            0xBu,
            0xE9u,
            (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
            v6);
        }
LABEL_9:
        RootHub_WaitForResumeCompletion(a1, i, &v7);
        if ( v7 != -1 && (v7 & 0x200) != 0 && (v7 & 1) != 0 && (v7 & 2) != 0 && (v7 & 0x20000) == 0 )
        {
          v5 = (v7 >> 5) & 0xF;
          if ( v5 == 8 || v5 <= 2 )
            RootHub_ForceU3((_QWORD *)a1, i);
        }
        continue;
      }
      *(_BYTE *)(v3 + 18) = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v6) = i;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          0xE8u,
          (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
          v6);
      }
    }
    else if ( v4 == 3 )
    {
      goto LABEL_9;
    }
  }
}
