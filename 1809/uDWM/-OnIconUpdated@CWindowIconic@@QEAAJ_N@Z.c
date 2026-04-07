/*
 * XREFs of ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E264
 * Callers:
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180011378 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RenderRecursive@CVisual@@UEAAJXZ @ 0x180027500 (-RenderRecursive@CVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18008DF2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18008E80C (-UpdateClientArea@CWindowIconic@@AEAAJXZ.c)
 */

__int64 __fastcall CWindowIconic::OnIconUpdated(CWindowIconic *this, char a2)
{
  unsigned int v2; // ebx
  int CentralImage; // eax
  int updated; // eax
  int v7; // eax
  int v8; // eax

  v2 = 0;
  *(_QWORD *)(*((_QWORD *)this + 10) + 136LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 136LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 144LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 144LL);
  if ( a2 && !*((_DWORD *)this + 4) )
  {
    CentralImage = CWindowIconic::LoadCentralImage(this);
    v2 = CentralImage;
    if ( CentralImage < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, 0x233u);
      return v2;
    }
    updated = CWindowIconic::UpdateClientArea(this);
    v2 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x236u);
      return v2;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
    v2 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x237u);
      return v2;
    }
  }
  CVisual::SetDirtyFlags(*((CVisual **)this + 11), 0x20000);
  if ( a2 )
  {
    v8 = CVisual::RenderRecursive(*((CVisual **)this + 11));
    v2 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x23Eu);
  }
  return v2;
}
