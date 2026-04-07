/*
 * XREFs of ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180016070
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000E820 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011AF0 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011E80 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012070 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012890 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800137F0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x180014470 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800188B4 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180018E90 (-GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001DFD0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001F4E0 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18002957C (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18002F090 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180036F50 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180016488 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180016560 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::SyncWindowData(CWindowList *this, struct IDwmWindow *a2, struct CWindowData *a3)
{
  char v6; // al
  __int64 v7; // rax
  char v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  HWND v22; // rcx
  unsigned int PropW; // eax
  char v24; // al
  _BYTE v26[16]; // [rsp+20h] [rbp-38h] BYREF

  *((_QWORD *)a3 + 4) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 88LL))(a2, (char *)a3 + 180);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 96LL))(a2, (char *)a3 + 196);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 104LL))(a2, (char *)a3 + 212);
  (*(void (__fastcall **)(struct IDwmWindow *, char *))(*(_QWORD *)a2 + 112LL))(a2, (char *)a3 + 228);
  *((_DWORD *)a3 + 25) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 32LL))(a2);
  *((_DWORD *)a3 + 26) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 40LL))(a2);
  *((_DWORD *)a3 + 27) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 48LL))(a2);
  *((_DWORD *)a3 + 28) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 56LL))(a2);
  v6 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 72LL))(a2);
  *((_BYTE *)a3 + 604) &= ~1u;
  *((_BYTE *)a3 + 604) |= v6 & 1;
  *((_QWORD *)a3 + 15) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2);
  v7 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
  *(_OWORD *)((char *)a3 + 312) = *(_OWORD *)v7;
  *(_OWORD *)((char *)a3 + 328) = *(_OWORD *)(v7 + 16);
  *((_QWORD *)a3 + 43) = *(_QWORD *)(v7 + 32);
  *((_QWORD *)a3 + 37) = *((_QWORD *)a3 + 39);
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
  *((_BYTE *)a3 + 604) &= ~2u;
  *((_BYTE *)a3 + 604) |= 2 * (v8 & 1);
  *((_BYTE *)a3 + 352) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 208LL))(a2);
  *((_BYTE *)a3 + 605) &= ~1u;
  *((_BYTE *)a3 + 605) |= v9 & 1;
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
  *((_BYTE *)a3 + 608) &= ~4u;
  *((_BYTE *)a3 + 608) |= 4 * (v10 & 1);
  *(_OWORD *)((char *)a3 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, _BYTE *))(*(_QWORD *)a2 + 216LL))(
                                               a2,
                                               v26);
  v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
  *((_BYTE *)a3 + 604) &= ~0x10u;
  *((_BYTE *)a3 + 604) |= 16 * (v11 & 1);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2);
  *((_BYTE *)a3 + 606) &= ~0x20u;
  *((_BYTE *)a3 + 606) |= 32 * (v12 & 1);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
  *((_BYTE *)a3 + 607) &= ~0x80u;
  *((_BYTE *)a3 + 607) |= v13 << 7;
  v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_BYTE *)a3 + 608) &= ~0x10u;
  *((_BYTE *)a3 + 608) |= 16 * (v14 & 1);
  v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
  *((_BYTE *)a3 + 608) &= ~0x20u;
  *((_BYTE *)a3 + 608) |= (v15 & 0x400000) != 0 ? 0x20 : 0;
  v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
  *((_BYTE *)a3 + 608) &= ~0x40u;
  *((_BYTE *)a3 + 608) |= (v16 & 0x200000) != 0 ? 0x40 : 0;
  v17 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
  *((_BYTE *)a3 + 608) &= ~0x80u;
  *((_BYTE *)a3 + 608) |= (v17 & 0x800000) != 0 ? 0x80 : 0;
  v18 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 384LL))(a2);
  *((_BYTE *)a3 + 609) &= ~2u;
  *((_BYTE *)a3 + 609) |= 2 * (v18 & 1);
  if ( *((char *)a3 + 607) >= 0 )
  {
    v19 = *((_BYTE *)a3 + 608);
    if ( (v19 & 4) == 0 )
      *((_BYTE *)a3 + 608) = v19 & 0xF7;
  }
  v20 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 256LL))(a2);
  *((_BYTE *)a3 + 607) &= ~0x10u;
  *((_BYTE *)a3 + 607) |= 16 * (v20 & 1);
  v21 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 288LL))(a2);
  *((_BYTE *)a3 + 608) &= ~2u;
  *((_BYTE *)a3 + 608) |= 2 * (v21 & 1);
  CWindowList::HasIconicBitmapChange(this, a2);
  CWindowList::CheckForMaximizedChange(this, a3);
  v22 = (HWND)*((_QWORD *)a3 + 5);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a3 + 180);
  if ( v22 )
    PropW = (unsigned int)GetPropW(v22, (LPCWSTR)0xA914);
  else
    PropW = 0;
  *((_DWORD *)a3 + 89) = PropW;
  v24 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 368LL))(a2);
  *((_BYTE *)a3 + 608) &= ~1u;
  *((_BYTE *)a3 + 608) |= v24 & 1;
  return 0LL;
}
