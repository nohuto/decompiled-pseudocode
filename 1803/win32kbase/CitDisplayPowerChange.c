/*
 * XREFs of CitDisplayPowerChange @ 0x1C0164BB4
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A2E78 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1C00A31F8 (-UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 * Callees:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C003FDE0 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C0040A70 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C01605AC (-CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 */

void __fastcall CitDisplayPowerChange(__int64 a1)
{
  struct _CIT_IMPACT_CONTEXT *v1; // rbx
  int v3; // ecx
  int v4; // eax
  unsigned __int64 v5; // rsi
  struct _CIT_IMPACT_CONTEXT *v6; // rcx
  struct tagPROCESSINFO *v7; // r8

  v1 = qword_1C01A16B0;
  if ( qword_1C01A16B0 )
  {
    v3 = *(_DWORD *)(a1 + 64);
    if ( (*((_DWORD *)qword_1C01A16B0 + 46) == 0) == (v3 == 0) )
    {
      *((_DWORD *)qword_1C01A16B0 + 46) = v3;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 64);
      v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      if ( !v4 )
      {
        CitpSetForegroundProcess(qword_1C01A16B0, v5, 0LL, 0LL, 0LL, 0LL);
        CitpContextFlush(v1, v5);
        v4 = *(_DWORD *)(a1 + 64);
      }
      *((_DWORD *)v1 + 46) = v4;
      if ( *(_DWORD *)(a1 + 64) && CitpAllowForegroundProcess(v1) )
      {
        v7 = (struct tagPROCESSINFO *)*((_QWORD *)v1 + 16);
        if ( v7 )
          CitpSetForegroundProcess(v6, v5, v7, 0LL, 0LL, 0LL);
      }
    }
  }
}
