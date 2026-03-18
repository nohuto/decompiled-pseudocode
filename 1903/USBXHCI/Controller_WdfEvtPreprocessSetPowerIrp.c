/*
 * XREFs of Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0013DA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     Crashdump_ProcessSystemPowerAction @ 0x1C0040924 (Crashdump_ProcessSystemPowerAction.c)
 */

__int64 __fastcall Controller_WdfEvtPreprocessSetPowerIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // [rsp+28h] [rbp-20h]

  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C00563D8);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = v4;
  v7 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)(v5 + 16) )
    goto LABEL_16;
  v8 = *(_DWORD *)(v5 + 8);
  v9 = v8 & 0xF00;
  if ( v9 == 256 )
  {
    v10 = ((v8 & 0xF0000) == 327680) + 1;
    goto LABEL_11;
  }
  if ( v9 > 0x100 )
  {
    if ( v9 <= 0x400 )
    {
      v10 = 4 - ((v8 & 0xF000) != 20480);
      goto LABEL_11;
    }
    if ( v9 == 1280 )
    {
      *(_DWORD *)(v7 + 420) = 5;
    }
    else if ( v9 == 1536 )
    {
      v10 = ((v8 & 0xF000) != 20480) + 5;
LABEL_11:
      *(_DWORD *)(v7 + 420) = v10;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 16), 4u, 4u, 0xCDu, (__int64)&Context.Logger + 4, *(_DWORD *)(v7 + 420));
  v11 = *(_QWORD *)(v7 + 424);
  if ( v11 )
    Crashdump_ProcessSystemPowerAction(v11, *(unsigned int *)(v7 + 420));
LABEL_16:
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  v12 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 272))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a1,
          a2);
  v13 = v12;
  if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v15) = v12;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 16), 2u, 4u, 0xCEu, (__int64)&Context.Logger + 4, v15);
  }
  return v13;
}
