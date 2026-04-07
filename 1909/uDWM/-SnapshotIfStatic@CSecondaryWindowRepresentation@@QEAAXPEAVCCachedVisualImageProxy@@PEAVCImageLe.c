/*
 * XREFs of ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCCachedVisualImageProxy@@PEAVCImageLegacyMilBrushProxy@@PEBUMilPointAndSizeL@@@Z @ 0x180032538
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000FFB0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180031DF0 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x1800147A0 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x180032754 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     ?Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z @ 0x1800329F4 (-Snapshot@CCachedVisualImageProxy@@QEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     McTemplateU0z @ 0x18008B194 (McTemplateU0z.c)
 */

void __fastcall CSecondaryWindowRepresentation::SnapshotIfStatic(
        CSecondaryWindowRepresentation *this,
        struct CCachedVisualImageProxy *a2,
        struct CImageLegacyMilBrushProxy *a3,
        const struct MilPointAndSizeL *a4)
{
  CWindowData *v4; // rsi
  __int64 v7; // rdi
  CWindowData *v10; // rcx
  __int64 v11; // rcx
  CBaseObject *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct tagRECT rc; // [rsp+30h] [rbp-58h] BYREF

  v4 = (CWindowData *)*((_QWORD *)this + 8);
  v7 = 0LL;
  v10 = 0LL;
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_9;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_5;
    if ( !CWindowData::IsImmersiveWindow(v4) )
    {
      v10 = *(CWindowData **)(*((_QWORD *)v4 + 55) + 80LL);
      goto LABEL_5;
    }
    goto LABEL_9;
  }
  v11 = *((_QWORD *)v4 + 54);
  if ( !v11 )
  {
LABEL_9:
    v10 = v4;
    goto LABEL_5;
  }
  v10 = *(CWindowData **)(v11 + 32);
LABEL_5:
  if ( *((_DWORD *)this + 18) != 3 && ((*((_BYTE *)v10 + 608) & 4) != 0 || (*((_DWORD *)this + 10) & 0x200) != 0) )
  {
    SetRect(
      &rc,
      *(_DWORD *)a4,
      *((_DWORD *)a4 + 1),
      *(_DWORD *)a4 + *((_DWORD *)a4 + 2),
      *((_DWORD *)a4 + 1) + *((_DWORD *)a4 + 3));
    CCachedVisualImageProxy::Snapshot(a2, &rc);
    v12 = (CBaseObject *)*((_QWORD *)this + 65);
    *((_OWORD *)this + 33) = *(_OWORD *)a4;
    if ( v12 )
      CBaseObject::Release(v12);
    *((_QWORD *)this + 65) = a3;
    if ( a3 )
      _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    CSecondaryWindowRepresentation::UpdateOwnedWindowVisualTreeRootVisual(this);
    *((_BYTE *)this + 160) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    {
      v15 = *((_QWORD *)this + 4);
      if ( v15 )
        v7 = *(_QWORD *)(v15 + 16);
      McTemplateU0z(v14, v13, v7);
    }
  }
}
