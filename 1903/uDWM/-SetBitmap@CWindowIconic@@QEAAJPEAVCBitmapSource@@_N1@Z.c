/*
 * XREFs of ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003FB40
 * Callers:
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180012B50 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003EF5C (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18008199C (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180081D60 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F1F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003F8D0 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003FA74 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::SetBitmap(CWindowIconic *this, struct CBitmapSource *a2, char a3, char a4)
{
  unsigned int v5; // ebx
  CBaseObject *v6; // rcx
  char v10; // si
  int CentralImage; // eax
  int v13; // eax
  int updated; // eax
  int v15; // eax
  void *v16; // [rsp+28h] [rbp-10h]

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
      if ( v10 == a3 || (v13 = CWindowIconic::OnWindowStyleUpdated(this, 0LL), v5 = v13, v13 >= 0) )
      {
        updated = CWindowIconic::UpdateSizeOrMargins(this, 1);
        v5 = updated;
        if ( updated >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
          v5 = v15;
          if ( v15 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x25Eu, v16);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x25Du, v16);
        }
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x258u, v16);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, CentralImage, 0x254u, v16);
    }
  }
  return v5;
}
