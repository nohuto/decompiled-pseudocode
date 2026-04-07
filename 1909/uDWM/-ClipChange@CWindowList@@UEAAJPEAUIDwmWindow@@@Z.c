/*
 * XREFs of ?ClipChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012070
 * Callers:
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180011E80 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?OnClipUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800122B8 (-OnClipUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800136DC (--0CWindowData@@QEAA@XZ.c)
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x180014A34 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x180014EB4 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180016070 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??$CreateProxyFromHandle@VCGdiSpriteBitmapProxy@@@CCompositor@@IEAAJIPEAPEAVCGdiSpriteBitmapProxy@@@Z @ 0x1800168D0 (--$CreateProxyFromHandle@VCGdiSpriteBitmapProxy@@@CCompositor@@IEAAJIPEAPEAVCGdiSpriteBitmapProx.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::ClipChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  CWindowData *v5; // rbx
  int v6; // esi
  struct CWindowData *v7; // rdi
  unsigned int v8; // edi
  bool v9; // si
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  CTopLevelWindow *v13; // rcx
  int v15; // eax
  CWindowData *v16; // rcx
  CWindowData *v17; // rax
  CWindowData *v18; // rax
  int v19; // eax
  void *v20; // [rsp+28h] [rbp-30h]
  unsigned int v21; // [rsp+68h] [rbp+10h] BYREF
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v21 = 0;
  v5 = 0LL;
  v6 = 0;
  v7 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v7 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v17 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         752LL);
  if ( !v17 || (v18 = CWindowData::CWindowData(v17), (v7 = v18) == 0LL) )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x891u, v20);
    v8 = -2147024882;
    goto LABEL_28;
  }
  *((_QWORD *)v18 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v18);
  *((_QWORD *)v7 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v19 = CWindowList::SyncWindowData(this, a2, v7);
  v6 = v19;
  if ( v19 >= 0 )
LABEL_2:
    v5 = v7;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x895u, v20);
  v8 = v6;
  if ( v6 < 0 )
  {
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x13A1u, v20);
    goto LABEL_17;
  }
  if ( v5 && *((_QWORD *)v5 + 4) )
  {
    v9 = *((_QWORD *)v5 + 46) != 0LL;
    v10 = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)a2 + 336LL))(
            a2,
            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
            *((_QWORD *)this + 71),
            &v21);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x13ABu, v20);
      goto LABEL_17;
    }
    v11 = *((_QWORD *)v5 + 46);
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 8), 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(__int64, __int64))v11)(v11, 1LL);
      *((_QWORD *)v5 + 46) = 0LL;
    }
    if ( v21 )
    {
      v22 = 0LL;
      v12 = CCompositor::CreateProxyFromHandle<CGdiSpriteBitmapProxy>(
              *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
              v21,
              &v22);
      v8 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x13B0u, v20);
        goto LABEL_17;
      }
      *((_QWORD *)v5 + 46) = v22;
    }
    v13 = (CTopLevelWindow *)*((_QWORD *)v5 + 50);
    if ( v13 )
      CTopLevelWindow::OnClipUpdated(v13);
    if ( v9 != (*((_QWORD *)v5 + 46) != 0LL) )
    {
      v15 = CWindowData::NotifyRepresentationChanged(v5);
      v8 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x13C0u, v20);
      else
        CWindowData::UnmetTabRequirementsMaybeUpdated(v16);
    }
  }
LABEL_17:
  if ( v21 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                         + 16LL)
                                           + 136LL))(
      *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
      v21);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
