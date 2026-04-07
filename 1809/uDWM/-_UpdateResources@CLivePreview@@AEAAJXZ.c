/*
 * XREFs of ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x180076F20
 * Callers:
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x18001F520 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180075684 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180076FEC (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 */

__int64 __fastcall CLivePreview::_UpdateResources(CLivePreview *this)
{
  unsigned int v1; // ebx
  signed int LastError; // eax
  int v4; // r9d
  unsigned int v5; // edi
  int updated; // eax
  unsigned int v8; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_DWORD *)this + 98) )
  {
    v5 = 0;
    while ( 1 )
    {
      updated = CLivePreview::_UpdateResourcesForMonitor(
                  this,
                  (struct LivePreviewResource *)(*((_QWORD *)this + 46) + 136LL * v5));
      v1 = updated;
      if ( updated < 0 )
        break;
      if ( ++v5 >= *((_DWORD *)this + 98) )
        return v1;
    }
    v8 = 1455;
    v4 = updated;
    goto LABEL_13;
  }
  SetLastError(0);
  if ( !EnumDisplayMonitors(0LL, 0LL, CLivePreview::s_UpdateResourcesForMonitor, (LPARAM)this) )
  {
    LastError = GetLastError();
    v1 = LastError;
    if ( LastError > 0 )
      v1 = (unsigned __int16)LastError | 0x80070000;
    v8 = 1449;
    if ( (v1 & 0x80000000) == 0 )
      v1 = -2003304445;
    v4 = v1;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, v8);
  }
  return v1;
}
