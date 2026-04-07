/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014254
 * Callers:
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180003E40 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180006170 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E820 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180010F28 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011E80 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180012D6C (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014254 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800399D0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180014254 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180014EB4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x1800166A4 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  CBaseObject *v7; // rcx
  __int64 i; // r8
  __int64 v9; // rdx
  __int64 j; // rdi
  CWindowData *v11; // rcx

  if ( (*((int *)this + 28) >= 8 && *((int *)this + 28) <= 11 || CWindowData::IsShellManaged(this))
    && *((char *)this + 607) < 0
    && a4 )
  {
    *((_BYTE *)this + 608) |= 8u;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 146); *(_BYTE *)(v9 + 608) |= 8u )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 70) + 8 * i);
      i = (unsigned int)(i + 1);
    }
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 54);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 54) = 0LL;
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 146); j = (unsigned int)(j + 1) )
    {
      v11 = *(CWindowData **)(*((_QWORD *)this + 70) + 8 * j);
      if ( (*((_DWORD *)v11 + 25) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v11, a2, 0, a4);
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
