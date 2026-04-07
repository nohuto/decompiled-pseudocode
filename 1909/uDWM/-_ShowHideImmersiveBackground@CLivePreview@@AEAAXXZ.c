/*
 * XREFs of ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x18007CCA8
 * Callers:
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x18007CDE4 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?_GetCoverageStateOfWindow@CLivePreview@@AEAA?AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z @ 0x18007C268 (-_GetCoverageStateOfWindow@CLivePreview@@AEAA-AW4COVERAGESTATE@@PEAVCWindowData@@PEAUtagRECT@@@Z.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x18007DE04 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18008DEC8 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 */

void __fastcall CLivePreview::_ShowHideImmersiveBackground(CLivePreview *this)
{
  unsigned int i; // edi
  char v3; // bp
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF

  for ( i = 0; i < *((_DWORD *)this + 106); ++i )
  {
    v3 = 1;
    v4 = *((_QWORD *)this + 67);
    v5 = *(_QWORD *)(*((_QWORD *)this + 50) + 16LL * i);
    v6 = *(_QWORD *)(v5 + 720);
    if ( !v4 || *(_DWORD *)(v4 + 112) == 1 )
    {
      if ( v6 && (unsigned int)CLivePreview::_GetCoverageStateOfWindow((__int64)this, *(_QWORD *)(v5 + 720)) )
      {
LABEL_10:
        v3 = 0;
LABEL_11:
        if ( !v3 )
        {
          if ( *(_BYTE *)(*((_QWORD *)this + 50) + 16LL * i + 8) )
          {
            CTopLevelWindow::StartLivePreviewAnimation(v5, 3LL);
            *(_BYTE *)(*((_QWORD *)this + 50) + 16LL * i + 8) = 0;
          }
        }
        continue;
      }
    }
    else
    {
      v7[0] = 0LL;
      v7[1] = 0LL;
      if ( v6 && (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(v6 + 48, v4 + 48, v7) == 1 )
        goto LABEL_10;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 50) + 16LL * i + 8) )
      goto LABEL_11;
    CTopLevelWindow::StartLivePreviewAnimation(v5, 4LL);
    *(_BYTE *)(*((_QWORD *)this + 50) + 16LL * i + 8) = 1;
  }
}
