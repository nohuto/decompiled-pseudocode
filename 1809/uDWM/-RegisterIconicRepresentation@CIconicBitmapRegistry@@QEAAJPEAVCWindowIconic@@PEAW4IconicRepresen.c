/*
 * XREFs of ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18007BC7C
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18008DBC8 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18008E350 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 * Callees:
 *     ?CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z @ 0x18007B6F4 (-CanAcceptBitmap@CIconicBitmapRegistry@@AEAA_NPEAVCWindowData@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x18007BAA0 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 *     ?_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PEAW4IconicRepresentationType@@@Z @ 0x18007BEA8 (-_RegisterIconicRepresentation@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@PEAUHWND__@@_N2222PE.c)
 */

__int64 __fastcall CIconicBitmapRegistry::RegisterIconicRepresentation(
        CIconicBitmapRegistry *this,
        struct CWindowIconic *a2,
        enum IconicRepresentationType *a3)
{
  __int64 v4; // rsi
  bool v6; // r14
  HWND v8; // r15
  struct CWindowIconic *v9; // rax
  struct CWindowIconic *v10; // rcx
  char v11; // dl
  char CanAcceptBitmap; // al
  char v13; // r8
  char v14; // cl
  char v15; // dl

  v4 = *((_QWORD *)a2 + 9);
  v6 = *((_DWORD *)a2 + 4) == 2;
  v8 = *(HWND *)(v4 + 40);
  if ( *((_BYTE *)a2 + 20) )
  {
    v9 = (struct CWindowIconic *)*((_QWORD *)this + 12);
    v10 = v9;
    if ( v9 && v9 != a2 )
    {
      CIconicBitmapRegistry::OnLivePreviewDismissed(this);
      v10 = (struct CWindowIconic *)*((_QWORD *)this + 12);
    }
    if ( !v10 )
    {
      *((_QWORD *)this + 12) = a2;
      _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    }
    v11 = *((_BYTE *)this + 90);
    CanAcceptBitmap = *(_BYTE *)(v4 + 598) & 1;
    v13 = *((_BYTE *)this + 88);
    v4 = -1LL;
    v14 = *((_BYTE *)this + 89);
  }
  else
  {
    CanAcceptBitmap = CIconicBitmapRegistry::CanAcceptBitmap(this, *((struct CWindowData **)a2 + 9));
    v15 = *(_BYTE *)(v4 + 598);
    v14 = (v15 & 4) != 0;
    v11 = (v15 & 8) != 0;
    v13 = *(_QWORD *)(v4 + 384) != 0LL;
  }
  return CIconicBitmapRegistry::_RegisterIconicRepresentation(
           this,
           (struct CWindowData *)v4,
           v8,
           CanAcceptBitmap,
           v11,
           v13,
           v14,
           v6,
           a3);
}
