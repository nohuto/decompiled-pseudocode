/*
 * XREFs of ?ApplyColorKeyToBitmap@CBitmapColorKey@@SAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x180233508
 * Callers:
 *     ?LockForRead@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180229F80 (-LockForRead@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPE.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z @ 0x1802335E0 (-ApplyColorKeyToBitmapWorker@CBitmapColorKey@@AEAAJPEAVIBitmapDest@@PEBVCColorKey@@@Z.c)
 */

__int64 __fastcall CBitmapColorKey::ApplyColorKeyToBitmap(struct IBitmapDest *a1, const struct CColorKey *a2)
{
  char *v4; // rax
  CBitmapColorKey *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x78uLL);
  v5 = (CBitmapColorKey *)v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  *((_DWORD *)v4 + 2) = 0;
  *(_QWORD *)v4 = &CBitmapColorKey::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v4 + 2) = &CBitmapColorKey::`vftable'{for `IBitmapSource'};
  *((_QWORD *)v4 + 3) = &CBitmapColorKey::`vftable'{for `IWICBitmapSource'};
  *((_QWORD *)v4 + 8) = 0LL;
  *((_QWORD *)v4 + 12) = 0LL;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *(_QWORD *)(v4 + 44) = 1LL;
  CMILCOMBase::InternalAddRef((CMILCOMBase *)v4);
  v6 = CBitmapColorKey::ApplyColorKeyToBitmapWorker(v5, a1, a2);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xD9u);
  CGdiSpriteBitmap::Release(v5);
  return v8;
}
