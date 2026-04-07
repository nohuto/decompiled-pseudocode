/*
 * XREFs of ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180009EE0
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x1800078F4 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180008CA0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180021410 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ @ 0x180036FB8 (-UpdateOwnedWindowVisualTreeRootVisual@CSecondaryWindowRepresentation@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0z @ 0x180084894 (McTemplateU0z.c)
 */

void __fastcall CSecondaryWindowRepresentation::SnapshotIfStatic(
        CSecondaryWindowRepresentation *this,
        struct CResource *a2,
        struct CResource *a3,
        const struct MilPointAndSizeL *a4)
{
  CWindowData *v4; // rsi
  __int64 v7; // rdi
  CWindowData *v10; // rcx
  CBaseObject *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct tagRECT rc; // [rsp+30h] [rbp-58h] BYREF

  v4 = (CWindowData *)*((_QWORD *)this + 8);
  v7 = 0LL;
  v10 = 0LL;
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v14 = *((_QWORD *)v4 + 53);
      if ( v14 )
      {
        v10 = *(CWindowData **)(v14 + 32);
        goto LABEL_3;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_3;
      if ( !CWindowData::IsImmersiveWindow(v4) )
      {
        v10 = *(CWindowData **)(*((_QWORD *)v4 + 54) + 80LL);
        goto LABEL_3;
      }
    }
  }
  v10 = v4;
LABEL_3:
  if ( *((_DWORD *)this + 18) != 3 && ((*((_BYTE *)v10 + 600) & 4) != 0 || (*((_DWORD *)this + 10) & 0x200) != 0) )
  {
    SetRect(
      &rc,
      *(_DWORD *)a4,
      *((_DWORD *)a4 + 1),
      *(_DWORD *)a4 + *((_DWORD *)a4 + 2),
      *((_DWORD *)a4 + 1) + *((_DWORD *)a4 + 3));
    (*(void (__fastcall **)(_QWORD, _QWORD, struct tagRECT *))(**((_QWORD **)a2 + 2) + 1016LL))(
      *((_QWORD *)a2 + 2),
      *((unsigned int *)a2 + 6),
      &rc);
    v11 = (CBaseObject *)*((_QWORD *)this + 65);
    *((_OWORD *)this + 33) = *(_OWORD *)a4;
    if ( v11 )
      CBaseObject::Release(v11);
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
      McTemplateU0z(v13, v12, v7);
    }
  }
}
