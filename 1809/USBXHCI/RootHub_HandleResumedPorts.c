/*
 * XREFs of RootHub_HandleResumedPorts @ 0x1C001E648
 * Callers:
 *     RootHub_D0Exit @ 0x1C001D69C (RootHub_D0Exit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     RootHub_ForceU3 @ 0x1C001E2A0 (RootHub_ForceU3.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C0022CB0 (RootHub_WaitForResumeCompletion.c)
 */

void __fastcall RootHub_HandleResumedPorts(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rsi
  char v4; // al
  unsigned int v5; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 1; i <= *(_DWORD *)(a1 + 16); ++i )
  {
    v3 = *(_QWORD *)(a1 + 48) + 80LL * (i - 1);
    v4 = *(_BYTE *)(v3 + 13);
    if ( v4 == 2 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WPP_MAIN_CB.Dpc.ProcessorHistory,
              *(_QWORD *)(v3 + 32),
              0LL) )
      {
        LODWORD(v6) = i;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          0xE9u,
          (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
          v6);
LABEL_7:
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
      LODWORD(v6) = i;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        0xBu,
        0xE8u,
        (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
        v6);
    }
    else if ( v4 == 3 )
    {
      goto LABEL_7;
    }
  }
}
