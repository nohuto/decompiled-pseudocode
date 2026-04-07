/*
 * XREFs of ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008E588
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180020430 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18003BFFC (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18007B338 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x18007B788 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18008DF2C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E460 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18008EA40 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowIconic::SetBitmap(CWindowIconic *this, struct CBitmapSource *a2, char a3, char a4)
{
  unsigned int v5; // ebx
  CBaseObject *v6; // rcx
  char v10; // si
  int CentralImage; // eax
  int v12; // eax
  int updated; // eax
  int v14; // eax

  v5 = 0;
  v6 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v10 = *((_BYTE *)this + 21);
  *((_BYTE *)this + 21) = a3;
  if ( a4 && *((_DWORD *)this + 4) == 2 )
  {
    CentralImage = CWindowIconic::LoadCentralImage(this);
    v5 = CentralImage;
    if ( CentralImage >= 0 )
    {
      if ( v10 == a3 || (v12 = CWindowIconic::OnWindowStyleUpdated(this, 0), v5 = v12, v12 >= 0) )
      {
        updated = CWindowIconic::UpdateSizeOrMargins(this, 1);
        v5 = updated;
        if ( updated >= 0 )
        {
          v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
          v5 = v14;
          if ( v14 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x25Eu);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x25Du);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x258u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, 0x254u);
    }
  }
  return v5;
}
