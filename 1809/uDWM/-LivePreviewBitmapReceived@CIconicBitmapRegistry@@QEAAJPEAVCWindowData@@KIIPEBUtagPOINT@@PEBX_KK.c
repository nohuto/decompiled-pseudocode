/*
 * XREFs of ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x18007B788
 * Callers:
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18008C7D8 (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180020DC4 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180077BDC (-Create@CBitmapSource@@SAJIIIIPEBXPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     McTemplateU0qp @ 0x18007826C (McTemplateU0qp.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x18008A980 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18008AE8C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18008E350 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008E588 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::LivePreviewBitmapReceived(
        __int64 this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINT *a6,
        void *a7,
        unsigned __int64 a8,
        char a9)
{
  struct CBitmapSource *v9; // r14
  CIconicBitmapRegistry *v13; // rsi
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  struct CWindowData *MDIOwner; // rbx
  int WindowRestoreRect; // eax
  __int64 v18; // rcx
  unsigned int v19; // edi
  unsigned int v20; // r8d
  __int64 v21; // rdx
  unsigned int v22; // r9d
  _DWORD *v23; // rdx
  unsigned int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  const struct tagPOINT *v29; // rax
  char v30; // bl
  bool v31; // r8
  __int64 v32; // rcx
  unsigned int v34; // [rsp+20h] [rbp-68h]
  CBaseObject *v35; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v36; // [rsp+48h] [rbp-40h] BYREF
  DWORD v37; // [rsp+98h] [rbp+10h] BYREF

  v9 = 0LL;
  v35 = 0LL;
  v13 = (CIconicBitmapRegistry *)this;
  if ( (*((_BYTE *)a2 + 598) & 1) == 0
    || (v14 = a5 * (unsigned __int64)a4, v14 > 0xFFFFFFFF)
    || (v15 = 4LL * (unsigned int)v14, this = 0xFFFFFFFFLL, v15 > 0xFFFFFFFF)
    || (this = (unsigned int)v15, a8 < (unsigned int)v15)
    || !GetWindowThreadProcessId(*((HWND *)a2 + 5), &v37)
    || a3 != v37 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(this, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v34 = 640;
    goto LABEL_47;
  }
  MDIOwner = CWindowData::GetMDIOwner(a2);
  if ( !MDIOwner )
    MDIOwner = a2;
  WindowRestoreRect = CWindowData::GetWindowRestoreRect(MDIOwner, &v36, 0);
  v19 = WindowRestoreRect;
  if ( WindowRestoreRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C46C0, 1LL, WindowRestoreRect, 0x28Bu);
    return v19;
  }
  v20 = v36.right - v36.left;
  v21 = *((_QWORD *)MDIOwner + 53);
  if ( v36.right - v36.left < 0 )
    v20 = 0;
  v22 = v36.bottom - v36.top;
  if ( v36.bottom - v36.top < 0 )
    v22 = 0;
  if ( v21 )
  {
    v23 = *(_DWORD **)(v21 + 32);
    v24 = 0;
    if ( v23[14] - v23[12] >= 0 )
      v24 = v23[14] - v23[12];
    if ( v20 > v24 )
      v24 = v20;
    v25 = v23[15] - v23[13];
    v20 = v24;
    v18 = 0LL;
    if ( v25 >= 0 )
      v18 = (unsigned int)v25;
    if ( v22 <= (unsigned int)v18 )
      v22 = v18;
  }
  if ( a4 > v20 || a5 > v22 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(v18, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v34 = 662;
LABEL_47:
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C46C0, 1LL, -2147024809, v34);
    return v19;
  }
  v26 = *((_QWORD *)v13 + 12);
  if ( v26 && *(struct CWindowData **)(v26 + 72) == a2 )
  {
    v27 = CBitmapSource::Create(
            a4,
            a5,
            a4,
            a5,
            a7,
            *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5),
            &v35);
    v19 = v27;
    if ( v27 >= 0 )
    {
      if ( *((_BYTE *)v13 + 89) )
      {
        v28 = CIconicBitmapRegistry::RequestBitmap(v13, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 0);
        v19 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C46C0, 1LL, v28, 0x2A7u);
      }
      v29 = a6;
      v30 = *((_BYTE *)v13 + 88);
      v9 = v35;
      v31 = a9 & 1;
      *(_WORD *)((char *)v13 + 89) = 0;
      *((_BYTE *)v13 + 88) = 1;
      *((struct tagPOINT *)v13 + 13) = *v29;
      CWindowIconic::SetBitmap(*((CWindowIconic **)v13 + 12), v9, v31, 1);
      if ( !v30 )
        CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v13 + 12));
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp(v32, (int)&UdwmManageIconicThumbnail_Info, 0, *((_QWORD *)a2 + 5));
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800C46C0, 1LL, v27, 0x2A2u);
      v9 = v35;
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      return v19;
    McTemplateU0qp(v18, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
  }
  if ( v9 )
    CBaseObject::Release(v9);
  return v19;
}
