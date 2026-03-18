/*
 * XREFs of Controller_WdfEvtPreprocessSetPowerIrp @ 0x1C0011180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     Crashdump_ProcessSystemPowerAction @ 0x1C003B1A4 (Crashdump_ProcessSystemPowerAction.c)
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
  __int64 v15; // [rsp+28h] [rbp-10h]

  v4 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a1,
         off_1C004F3B0);
  v5 = *(_QWORD *)(a2 + 184);
  v6 = v4;
  v7 = *(_QWORD *)(v4 + 8);
  if ( *(_DWORD *)(v5 + 16) )
    goto LABEL_14;
  v8 = *(_DWORD *)(v5 + 8);
  v9 = v8 & 0xF00;
  if ( v9 == 256 )
  {
    v10 = ((v8 & 0xF0000) == 327680) + 1;
  }
  else
  {
    if ( v9 <= 0x100 )
      goto LABEL_12;
    if ( v9 <= 0x400 )
    {
      v10 = 4 - ((v8 & 0xF000) != 20480);
    }
    else
    {
      if ( v9 == 1280 )
      {
        *(_DWORD *)(v7 + 352) = 5;
        goto LABEL_12;
      }
      if ( v9 != 1536 )
        goto LABEL_12;
      v10 = ((v8 & 0xF000) != 20480) + 5;
    }
  }
  *(_DWORD *)(v7 + 352) = v10;
LABEL_12:
  WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 16), 4u, 4u, 0xCAu, (__int64)&Context.Logger + 4, *(_DWORD *)(v7 + 352));
  v11 = *(_QWORD *)(v7 + 360);
  if ( v11 )
    Crashdump_ProcessSystemPowerAction(v11, *(unsigned int *)(v7 + 352));
LABEL_14:
  ++*(_BYTE *)(a2 + 67);
  *(_QWORD *)(a2 + 184) += 72LL;
  v12 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(WdfFunctions_01023 + 272))(
          WPP_MAIN_CB.Dpc.ProcessorHistory,
          a1,
          a2);
  v13 = v12;
  if ( v12 < 0 )
  {
    LODWORD(v15) = v12;
    WPP_RECORDER_SF_d(*(_QWORD *)(v6 + 16), 2u, 4u, 0xCBu, (__int64)&Context.Logger + 4, v15);
  }
  return v13;
}
