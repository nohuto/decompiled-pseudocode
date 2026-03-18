/*
 * XREFs of ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x18025FA9C
 * Callers:
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802565B0 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x18025FB8C (-ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBitmap(struct IBitmapDest *a1, const struct CColorKey *a2)
{
  char *v4; // rax
  __int64 v5; // rcx
  CMILCOMBase *v6; // rbx
  unsigned int v7; // edi
  signed int v8; // eax
  __int64 v9; // rcx

  v4 = (char *)operator new(0x78uLL);
  v6 = (CMILCOMBase *)v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    *(_QWORD *)v4 = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v4 + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
    *((_QWORD *)v4 + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
    *((_QWORD *)v4 + 8) = 0LL;
    *((_QWORD *)v4 + 12) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_DWORD *)v4 + 10) = 0;
    *(_QWORD *)(v4 + 44) = 1LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    CMILCOMBase::InternalAddRef(v6);
    v8 = CBitmapColorKey::ApplyColorKeyToBitmapWorker(v6, a1, a2);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xD6u, 0LL);
    CGdiSpriteBitmap::Release(v6);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, 0xD2u, 0LL);
  }
  return v7;
}
