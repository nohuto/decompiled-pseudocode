/*
 * XREFs of ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00224EC
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00223F0 (McGenControlCallbackV2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0qxq @ 0x1C00407EC (McTemplateK0qxq.c)
 *     ?CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ @ 0x1C0241648 (-CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DxgkDisableStablePowerState@@YAXXZ @ 0x1C0241FCC (-DxgkDisableStablePowerState@@YAXXZ.c)
 *     ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C0241FE8 (-DxgkEnableClockCalibration@@YAXE@Z.c)
 *     ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C024200C (-DxgkEnableFormattingBuffer@@YAXH@Z.c)
 *     ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C0242030 (-DxgkEnableStablePowerState@@YAXXZ.c)
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C024204C (-DxgkReportGlobalState@@YAXXZ.c)
 *     DpiControlEtwLogging @ 0x1C029C548 (DpiControlEtwLogging.c)
 */

void __fastcall DxgkEtwEnableCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  char v4; // di
  char v5; // bl
  bool v6; // cl
  __int64 v7; // rcx
  __int64 v8; // r8
  DXGGLOBAL *Global; // rax
  unsigned __int8 v10; // cl

  v4 = a2;
  v5 = 1;
  if ( (_DWORD)a1 != 2 || !bTracingEnabled )
  {
    if ( *(&DxgkControlGuid_Context + 2) == g_OldAnyKeywords )
      goto LABEL_11;
    v6 = (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x1000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0;
    if ( (g_OldAnyKeywords & 0x1000) != 0 )
    {
      if ( (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x1000) == 0 )
        DxgkDisableStablePowerState();
    }
    else if ( (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x1000) != 0 && v6 )
    {
      DxgkEnableStablePowerState();
    }
    v7 = *(&DxgkControlGuid_Context + 2);
    v8 = 1024LL;
    if ( (g_OldAnyKeywords & 0x400) != 0 )
    {
      if ( (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x400) != 0 )
        goto LABEL_9;
      v7 = 0LL;
    }
    else
    {
      if ( (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x400) == 0 )
        goto LABEL_9;
      LOBYTE(v7) = 1;
    }
    LOBYTE(v8) = v4;
    DpiControlEtwLogging(v7, *(_WORD *)(&DxgkControlGuid_Context + 2) & 0x3000, v8);
LABEL_9:
    if ( (g_OldAnyKeywords & 0x4000) != 0 )
    {
      if ( (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x4000) != 0 )
        goto LABEL_11;
      DxgkEnableFormattingBuffer(0);
      v10 = 0;
    }
    else
    {
      if ( (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x4000) == 0 )
        goto LABEL_11;
      DxgkEnableFormattingBuffer(1);
      v10 = 1;
    }
    DxgkEnableClockCalibration(v10);
    goto LABEL_11;
  }
  if ( a3 == 0x4000000 )
  {
    Global = DXGGLOBAL::GetGlobal(a1, a2);
    DXGGLOBAL::CaptureSchedulerLogs(Global);
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qxq(2, a2, a3, a4, *((char *)&DxgkControlGuid_Context + 16), a2);
    DxgkReportGlobalState();
  }
LABEL_11:
  if ( (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x61C8ED7) == 0
    || (*(&DxgkControlGuid_Context + 3) & 0xFFFFFFFFF9E37128uLL) != 0 )
  {
    v5 = 0;
  }
  bTracingEnabled = v5;
  g_OldAnyKeywords = *(&DxgkControlGuid_Context + 2);
}
