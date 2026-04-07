/*
 * XREFs of ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180081A00
 * Callers:
 *     ?SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBITMAP@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x1800924BC (-SetIconicLivePreviewBitmap@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICLIVEPREVIEWBI.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012C64 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003FA00 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x18007E19C (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     McTemplateU0qp @ 0x18007E53C (McTemplateU0qp.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x1800909C8 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180090D3C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800935C8 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::LivePreviewBitmapReceived(
        unsigned __int64 this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINT *a6,
        void *a7,
        unsigned __int64 a8,
        char a9)
{
  CBaseObject *v9; // r14
  CIconicBitmapRegistry *v13; // rsi
  unsigned __int64 v14; // rax
  struct CWindowData *MDIOwner; // rbx
  int WindowRestoreRect; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned int v21; // r9d
  _DWORD *v22; // rdx
  unsigned int v23; // ecx
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  int v27; // eax
  const struct tagPOINT *v28; // rax
  char v29; // bl
  char v30; // r8
  __int64 v31; // rcx
  unsigned int v33; // [rsp+20h] [rbp-58h]
  CBaseObject *v34; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v35; // [rsp+38h] [rbp-40h] BYREF
  DWORD v36; // [rsp+88h] [rbp+10h] BYREF

  v9 = 0LL;
  v34 = 0LL;
  v13 = (CIconicBitmapRegistry *)this;
  if ( (*((_BYTE *)a2 + 606) & 1) == 0
    || (this = a5 * (unsigned __int64)a4, this > 0xFFFFFFFF)
    || (v14 = 4LL * (unsigned int)this, v14 > 0xFFFFFFFF)
    || a8 < (unsigned int)v14
    || !GetWindowThreadProcessId(*((HWND *)a2 + 5), &v36)
    || a3 != v36 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(this, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v33 = 640;
    goto LABEL_47;
  }
  MDIOwner = CWindowData::GetMDIOwner(a2);
  if ( !MDIOwner )
    MDIOwner = a2;
  WindowRestoreRect = CWindowData::GetWindowRestoreRect(MDIOwner, &v35, 0);
  v18 = WindowRestoreRect;
  if ( WindowRestoreRect < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CABB0, 1LL, WindowRestoreRect, 0x28Bu);
    return v18;
  }
  v19 = v35.right - v35.left;
  v20 = *((_QWORD *)MDIOwner + 54);
  if ( v35.right - v35.left < 0 )
    v19 = 0;
  v21 = v35.bottom - v35.top;
  if ( v35.bottom - v35.top < 0 )
    v21 = 0;
  if ( v20 )
  {
    v22 = *(_DWORD **)(v20 + 32);
    v23 = 0;
    if ( v22[14] - v22[12] >= 0 )
      v23 = v22[14] - v22[12];
    if ( v19 > v23 )
      v23 = v19;
    v24 = v22[15] - v22[13];
    v19 = v23;
    v17 = 0LL;
    if ( v24 >= 0 )
      v17 = (unsigned int)v24;
    if ( v21 <= (unsigned int)v17 )
      v21 = v17;
  }
  if ( a4 > v19 || a5 > v21 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(v17, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v33 = 662;
LABEL_47:
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CABB0, 1LL, -2147024809, v33);
    return v18;
  }
  v25 = *((_QWORD *)v13 + 12);
  if ( v25 && *(struct CWindowData **)(v25 + 72) == a2 )
  {
    v26 = CBitmapSource::Create(a4, a5, a4, a5, a7, &v34);
    v18 = v26;
    if ( v26 >= 0 )
    {
      if ( *((_BYTE *)v13 + 89) )
      {
        v27 = CIconicBitmapRegistry::RequestBitmap(v13, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 0);
        v18 = v27;
        if ( v27 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CABB0, 1LL, v27, 0x2A7u);
      }
      v28 = a6;
      v29 = *((_BYTE *)v13 + 88);
      v9 = v34;
      v30 = a9 & 1;
      *(_WORD *)((char *)v13 + 89) = 0;
      *((_BYTE *)v13 + 88) = 1;
      *((struct tagPOINT *)v13 + 13) = *v28;
      CWindowIconic::SetBitmap(*((CWindowIconic **)v13 + 12), v9, v30, 1);
      if ( !v29 )
        CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v13 + 12));
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0qp(v31, (int)&UdwmManageIconicThumbnail_Info, 0, *((_QWORD *)a2 + 5));
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CABB0, 1LL, v26, 0x2A2u);
      v9 = v34;
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) == 0 )
      return v18;
    McTemplateU0qp(v17, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
  }
  if ( v9 )
    CBaseObject::Release(v9);
  return v18;
}
