/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001EC50
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18001BC50 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18000F424 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z @ 0x18004BB60 (-SetClipRegion@CAccent@@QEAAXPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180087B7C (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 */

__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  struct CWindowData *v5; // rbx
  int v6; // edi
  struct CWindowData *v7; // rsi
  int v8; // esi
  bool v9; // bp
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // rsi
  __int64 v14; // rax
  CBaseObject *v15; // r14
  int v16; // eax
  __int64 v17; // rdi
  CAccent *v19; // rcx
  CWindowData *v20; // rcx
  CWindowData *v21; // rax
  CWindowData *v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // [rsp+20h] [rbp-38h]
  unsigned int v26; // [rsp+68h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v26 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v21 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v21 || (v22 = CWindowData::CWindowData(v21), (v7 = v22) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
    v8 = -2147024882;
    goto LABEL_33;
  }
  *((_QWORD *)v22 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v22);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v23 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v23;
  if ( v23 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x88Bu);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x1352u);
    goto LABEL_18;
  }
  if ( !v5 || !*((_QWORD *)v5 + 4) )
    goto LABEL_18;
  v9 = *((_QWORD *)v5 + 45) != 0LL;
  v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)a2 + 336LL))(
          a2,
          *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
          *((_QWORD *)this + 71),
          &v26);
  v8 = v10;
  if ( v10 < 0 )
  {
    v25 = 4955;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v25);
    goto LABEL_18;
  }
  v11 = *((_QWORD *)v5 + 45);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
    *((_QWORD *)v5 + 45) = 0LL;
  }
  v12 = v26;
  if ( v26 )
  {
    v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5);
    v14 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            32LL);
    v15 = (CBaseObject *)v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 8) = 1;
      *(_QWORD *)v14 = &CResource::`vftable';
      *(_DWORD *)(v14 + 24) = v12;
      *(_QWORD *)(v14 + 16) = v13;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 88LL))(v13, v12);
      v8 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x66u);
        CBaseObject::Release(v15);
      }
      else
      {
        *((_QWORD *)v5 + 45) = v15;
      }
      if ( v8 >= 0 )
        goto LABEL_16;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x61u);
      v8 = -2147024882;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x135Fu);
    goto LABEL_18;
  }
LABEL_16:
  v17 = *((_QWORD *)v5 + 49);
  if ( v17 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v17 + 720) + 597LL) & 4) != 0 )
      CTopLevelWindow::OnBlurBehindUpdated(*((CTopLevelWindow **)v5 + 49));
    v19 = *(CAccent **)(v17 + 264);
    if ( v19 )
    {
      v24 = *(_QWORD *)(v17 + 720);
      if ( (*(_BYTE *)(v24 + 156) & 0x10) != 0 )
        CAccent::SetClipRegion(v19, *(struct CResource **)(v24 + 360));
    }
  }
  if ( v9 != (*((_QWORD *)v5 + 45) != 0LL) )
  {
    v10 = CWindowData::NotifyRepresentationChanged(v5);
    v8 = v10;
    if ( v10 >= 0 )
    {
      CWindowData::UnmetTabRequirementsMaybeUpdated(v20);
      goto LABEL_18;
    }
    v25 = 4974;
    goto LABEL_41;
  }
LABEL_18:
  if ( v26 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 5) + 128LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
      v26);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v8;
}
