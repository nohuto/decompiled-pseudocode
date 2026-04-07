/*
 * XREFs of ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000D380 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000D8A0 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18000F120 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012950 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180015A80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001BC50 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E330 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001EC50 (-ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180020E80 (-DestroyWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800210F0 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800243C0 (-ClientMarginsChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180035990 (-ReparentingFromDesktop@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18000CEBC (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x18000D284 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18000F524 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180012470 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001256C (-WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180020FE0 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180028BF0 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::SyncWindowData(CWindowList *this, struct IDwmWindow *a2, struct CWindowData *a3)
{
  char v6; // al
  _OWORD *v7; // rax
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
  int SyncedWindowData; // eax
  char v23; // al
  struct CWindowData *v24; // r8
  char v25; // di
  char v26; // al
  CDesktopManager *v27; // rcx
  char v28; // di
  bool v29; // bp
  char v30; // r12
  char v31; // di
  unsigned __int8 v32; // bp
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *i; // rdi
  HWND v35; // rcx
  unsigned int PropW; // eax
  char v37; // al
  struct CWindowData *Buffer[2]; // [rsp+30h] [rbp-58h] BYREF

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
  *((_BYTE *)a3 + 596) &= ~1u;
  *((_BYTE *)a3 + 596) |= v6 & 1;
  *((_QWORD *)a3 + 15) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 64LL))(a2);
  v7 = (_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 136LL))(a2);
  *(_OWORD *)((char *)a3 + 312) = *v7;
  *(_OWORD *)((char *)a3 + 328) = v7[1];
  *((_QWORD *)a3 + 37) = *((_QWORD *)a3 + 39);
  v8 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 144LL))(a2);
  *((_BYTE *)a3 + 596) &= ~2u;
  *((_BYTE *)a3 + 596) |= 2 * (v8 & 1);
  *((_BYTE *)a3 + 344) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 152LL))(a2);
  v9 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 208LL))(a2);
  *((_BYTE *)a3 + 597) &= ~1u;
  *((_BYTE *)a3 + 597) |= v9 & 1;
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 224LL))(a2);
  *((_BYTE *)a3 + 600) &= ~4u;
  *((_BYTE *)a3 + 600) |= 4 * (v10 & 1);
  *(_OWORD *)((char *)a3 + 152) = *(_OWORD *)(*(__int64 (__fastcall **)(struct IDwmWindow *, struct CWindowData **))(*(_QWORD *)a2 + 216LL))(
                                               a2,
                                               Buffer);
  v11 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 240LL))(a2);
  *((_BYTE *)a3 + 596) &= ~0x10u;
  *((_BYTE *)a3 + 596) |= 16 * (v11 & 1);
  v12 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 248LL))(a2);
  *((_BYTE *)a3 + 598) &= ~0x20u;
  *((_BYTE *)a3 + 598) |= 32 * (v12 & 1);
  v13 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 272LL))(a2);
  *((_BYTE *)a3 + 599) &= ~0x80u;
  *((_BYTE *)a3 + 599) |= v13 << 7;
  v14 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 80LL))(a2);
  *((_BYTE *)a3 + 600) &= ~0x10u;
  *((_BYTE *)a3 + 600) |= 16 * (v14 & 1);
  v15 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
  *((_BYTE *)a3 + 600) &= ~0x20u;
  *((_BYTE *)a3 + 600) |= (v15 & 0x400000) != 0 ? 0x20 : 0;
  v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
  *((_BYTE *)a3 + 600) &= ~0x40u;
  *((_BYTE *)a3 + 600) |= (v16 & 0x200000) != 0 ? 0x40 : 0;
  v17 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 360LL))(a2);
  *((_BYTE *)a3 + 600) &= ~0x80u;
  *((_BYTE *)a3 + 600) |= (v17 & 0x800000) != 0 ? 0x80 : 0;
  v18 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 384LL))(a2);
  *((_BYTE *)a3 + 601) &= ~1u;
  *((_BYTE *)a3 + 601) |= v18 & 1;
  if ( *((char *)a3 + 599) >= 0 )
  {
    v19 = *((_BYTE *)a3 + 600);
    if ( (v19 & 4) == 0 )
      *((_BYTE *)a3 + 600) = v19 & 0xF7;
  }
  v20 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 256LL))(a2);
  *((_BYTE *)a3 + 599) &= ~0x10u;
  *((_BYTE *)a3 + 599) |= 16 * (v20 & 1);
  v21 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 288LL))(a2);
  *((_BYTE *)a3 + 600) &= ~2u;
  *((_BYTE *)a3 + 600) |= 2 * (v21 & 1);
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  Buffer[0] = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, Buffer);
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x155Bu);
    goto LABEL_19;
  }
  v23 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2);
  v24 = Buffer[0];
  v25 = v23;
  if ( Buffer[0] && (unsigned int)(*((_DWORD *)Buffer[0] + 28) - 8) > 3 )
  {
    if ( (*((_BYTE *)Buffer[0] + 600) & 0x40) != 0 )
    {
      if ( !GetPropW(*((HWND *)Buffer[0] + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
        goto LABEL_19;
      v24 = Buffer[0];
    }
    v26 = *((_BYTE *)v24 + 598) & 1;
    if ( v26 || !v25 )
    {
      if ( !v26 || v25 )
        goto LABEL_18;
      DynArray<CWindowData *,0>::Remove((__int64 *)this + 58, Buffer);
    }
    else
    {
      DynArray<CWindowData *,0>::AddMultipleAndSet((char *)this + 464, Buffer);
    }
    v24 = Buffer[0];
LABEL_18:
    v27 = CDesktopManager::s_pDesktopManagerInstance;
    *((_BYTE *)v24 + 598) ^= (v25 ^ *((_BYTE *)v24 + 598)) & 1;
    CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(*((CIconicBitmapRegistry **)v27 + 37), Buffer[0]);
  }
LABEL_19:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  v28 = *((_BYTE *)a3 + 597);
  v29 = (*((_DWORD *)a3 + 25) & 0x11000000) == 0x11000000 && *((_QWORD *)a3 + 4);
  v30 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 392)) == 0;
  *((_BYTE *)a3 + 597) &= ~2u;
  v31 = v28 & 2;
  *((_BYTE *)a3 + 597) |= 2 * v29;
  if ( v29 )
  {
    if ( !v31 )
    {
      CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 392), (__int64)a3);
      goto LABEL_29;
    }
  }
  else if ( !v31 )
  {
    goto LABEL_29;
  }
  if ( !v29 )
  {
    Buffer[0] = a3;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 392), Buffer);
  }
LABEL_29:
  v32 = RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 392)) == 0;
  if ( v30 != v32 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this, *((_QWORD *)a3 + 15));
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v32;
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( (BYTE5(i[37].Flink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)i);
        PostMessageW((HWND)i[2].Blink, 0x321u, v32, 0LL);
      }
    }
  }
  v35 = (HWND)*((_QWORD *)a3 + 5);
  *((_OWORD *)a3 + 3) = *(_OWORD *)((char *)a3 + 180);
  if ( v35 )
    PropW = (unsigned int)GetPropW(v35, (LPCWSTR)0xA914);
  else
    PropW = 0;
  *((_DWORD *)a3 + 87) = PropW;
  v37 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 368LL))(a2);
  *((_BYTE *)a3 + 600) &= ~1u;
  *((_BYTE *)a3 + 600) |= v37 & 1;
  return 0LL;
}
