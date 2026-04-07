/*
 * XREFs of ?RegisterIndirectSwapChainRenderTarget@CTopLevelWindow@@QEAAJPEAX_NU_LUID@@@Z @ 0x18008DA50
 * Callers:
 *     ?RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@@Z @ 0x1800919A0 (-RegisterIndirectSwapchainRenderTargetForWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEAX_NU_LUID@@.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ @ 0x18008D05C (-GetCanvasRootCompositionNodeHandle@CTopLevelWindow@@QEAAIXZ.c)
 *     ?SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ @ 0x18008DC4C (-SendBoundsToSwapchainTarget@CTopLevelWindow@@AEAAJXZ.c)
 *     ??$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800B59A0 (--$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchai.c)
 *     ?Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ @ 0x1800B633C (-Unregister@CIndirectSwapchainRenderTargetProxy@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::RegisterIndirectSwapChainRenderTarget(
        CTopLevelWindow *this,
        HANDLE hObject,
        char a3,
        struct _LUID a4)
{
  volatile signed __int32 *v4; // rbx
  int v9; // esi
  int CanvasRootCompositionNodeHandle; // r14d
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v17 = 0LL;
  if ( *((_QWORD *)this + 97) )
  {
    v9 = -2147024891;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024891, 0x15A2u);
LABEL_14:
    if ( hObject )
      CloseHandle(hObject);
    goto LABEL_23;
  }
  if ( a3 )
  {
    CanvasRootCompositionNodeHandle = CTopLevelWindow::GetCanvasRootCompositionNodeHandle(this);
  }
  else
  {
    v11 = *((_QWORD *)this + 67);
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 16);
      if ( !v12 )
      {
LABEL_11:
        v9 = -2147024890;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024890, 0x15B3u);
        goto LABEL_14;
      }
      CanvasRootCompositionNodeHandle = *(_DWORD *)(*(_QWORD *)(v12 + 16) + 24LL);
    }
    else
    {
      CanvasRootCompositionNodeHandle = 0;
    }
  }
  if ( !CanvasRootCompositionNodeHandle )
    goto LABEL_11;
  v13 = CCompositor::CreateProxy<CIndirectSwapchainRenderTargetProxy>(
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          &v17);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x15B9u);
    v4 = (volatile signed __int32 *)v17;
    goto LABEL_14;
  }
  v4 = (volatile signed __int32 *)v17;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HANDLE, struct _LUID, int))(**(_QWORD **)(*(_QWORD *)(v17 + 16) + 16LL)
                                                                             + 768LL))(
          *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL),
          *(unsigned int *)(*(_QWORD *)(v17 + 16) + 24LL),
          hObject,
          a4,
          CanvasRootCompositionNodeHandle);
  v9 = v14;
  if ( v14 >= 0 )
  {
    *((_BYTE *)this + 768) = a3;
    *((_QWORD *)this + 97) = v4;
    _InterlockedIncrement(v4 + 2);
    v15 = CTopLevelWindow::SendBoundsToSwapchainTarget(this);
    v9 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x15FAu);
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x15C9u);
    v4 = (volatile signed __int32 *)v17;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x15C4u);
  }
LABEL_23:
  if ( v4 )
  {
    if ( v9 < 0 )
      CIndirectSwapchainRenderTargetProxy::Unregister((CIndirectSwapchainRenderTargetProxy *)v4);
    CBaseObject::Release((CBaseObject *)v4);
  }
  return (unsigned int)v9;
}
