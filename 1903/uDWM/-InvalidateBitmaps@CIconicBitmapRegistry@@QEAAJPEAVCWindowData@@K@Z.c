/*
 * XREFs of ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x1800039A0
 * Callers:
 *     ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800038EC (-InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x180012ADC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180012B50 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x18003FF50 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CIconicBitmapRegistry::InvalidateBitmaps(CIconicBitmapRegistry *this, HWND *a2, int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  struct CWindowData *v9; // rdx
  CIconicBitmapRegistry *v10; // rcx
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // [rsp+20h] [rbp-18h]
  void *v14; // [rsp+28h] [rbp-10h]
  DWORD v15; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0;
  if ( !GetWindowThreadProcessId(a2[5], &v15) || a3 != v15 )
  {
    v6 = -2147024809;
    v13 = 729;
    v12 = -2147024809;
    goto LABEL_17;
  }
  if ( a2[49] && CIconicBitmapRegistry::CanAcceptBitmap(this, (struct CWindowData *)a2) )
  {
    *((_BYTE *)a2 + 606) &= 0xF5u;
    if ( a2[55] )
    {
      v11 = CIconicBitmapRegistry::RequestBitmap(v10, v9, 1);
      v6 = v11;
      if ( v11 < 0 )
      {
        v13 = 740;
LABEL_10:
        v12 = v11;
LABEL_17:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, (const int *const)"W", 1u, v12, v13, v14);
        return v6;
      }
    }
    else
    {
      CIconicBitmapRegistry::ClearBitmap(v10, v9);
    }
  }
  v7 = *((_QWORD *)this + 12);
  if ( v7 )
  {
    if ( *(HWND **)(v7 + 72) == a2 && !*((_BYTE *)this + 89) )
    {
      *((_BYTE *)this + 90) = 0;
      v11 = CIconicBitmapRegistry::RequestBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 1);
      v6 = v11;
      if ( v11 < 0 )
      {
        v13 = 752;
        goto LABEL_10;
      }
    }
  }
  return v6;
}
