/*
 * XREFs of ?BitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_KK@Z @ 0x180081AA4
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180092954 (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002662C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z @ 0x18003F7EC (-DwmGetIdealIconicThumbnailSize@@YAH_NPEAUtagSIZE@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x18003FF50 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x18007E4FC (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     McTemplateU0qp @ 0x18007E89C (McTemplateU0qp.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x18008199C (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::BitmapReceived(
        CWindowIconic ****this,
        struct CWindowData *a2,
        int a3,
        unsigned int a4,
        LONG nNumber,
        void *a6,
        unsigned __int64 a7,
        char a8)
{
  __int64 v9; // rbp
  unsigned int v11; // ebx
  unsigned __int64 v13; // rcx
  bool v14; // r14
  HWND ShellWindowForDesktop; // rax
  LONG v16; // esi
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  LONG cx; // ebx
  unsigned int v21; // r8d
  LONG cy; // r14d
  unsigned int v23; // r9d
  int v24; // eax
  CBaseObject *v25; // rsi
  char v26; // al
  struct CBitmapSource *v27; // r8
  DWORD v29; // [rsp+30h] [rbp-38h] BYREF
  CBaseObject *v30; // [rsp+38h] [rbp-30h] BYREF
  struct tagSIZE dwProcessId; // [rsp+78h] [rbp+10h] BYREF

  v9 = a4;
  v11 = 0;
  v30 = 0LL;
  if ( GetWindowThreadProcessId(*((HWND *)a2 + 5), &v29) && a3 == v29 )
  {
    v14 = 1;
  }
  else
  {
    v14 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(
                              *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                              *((_QWORD *)a2 + 15));
    if ( ShellWindowForDesktop )
    {
      dwProcessId.cx = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, (LPDWORD)&dwProcessId);
      v14 = dwProcessId.cx == a3;
    }
  }
  if ( (*((_BYTE *)a2 + 606) & 1) != 0
    && (v16 = nNumber, v13 = (unsigned int)nNumber * v9, v13 <= 0xFFFFFFFF)
    && (v17 = 4LL * (unsigned int)v13, v17 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v17
    && v14 )
  {
    if ( CIconicBitmapRegistry::CanAcceptBitmap((CIconicBitmapRegistry *)this, a2) )
    {
      if ( (unsigned int)DwmGetIdealIconicThumbnailSize(1, &dwProcessId) )
      {
        cx = dwProcessId.cx;
        v21 = v9;
        cy = dwProcessId.cy;
        v23 = v16;
        if ( (int)v9 <= dwProcessId.cx || (int)v9 * dwProcessId.cy > v16 * dwProcessId.cx )
        {
          if ( v16 > dwProcessId.cy && (int)v9 * dwProcessId.cy > v16 * dwProcessId.cx )
          {
            v21 = MulDiv(v9, dwProcessId.cy, v16);
            v23 = cy;
          }
        }
        else
        {
          v23 = MulDiv(v16, dwProcessId.cx, v9);
          v21 = cx;
        }
        v24 = CBitmapSource::Create(v9, v16, v21, v23, a6, &v30);
        v25 = v30;
        v11 = v24;
        if ( v24 >= 0 )
        {
          v26 = a8;
          v27 = v30;
          *((_BYTE *)a2 + 606) &= ~2u;
          *((_BYTE *)a2 + 606) |= 2 * (v26 & 1);
          CIconicBitmapRegistry::AcceptBitmap(this, a2, v27);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CABB0, 1LL, v24, 0x251u);
        }
        if ( v25 )
          CBaseObject::Release(v25);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
          McTemplateU0qp(v19, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
        v11 = -2147467259;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CABB0, 1LL, -2147467259, 0x240u);
      }
    }
    else if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      McTemplateU0qp(v18, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    }
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp(v13, (int)&UdwmManageIconicThumbnail_Info, 1, *((_QWORD *)a2 + 5));
    v11 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CABB0, 1LL, -2147024809, 0x230u);
  }
  return v11;
}
