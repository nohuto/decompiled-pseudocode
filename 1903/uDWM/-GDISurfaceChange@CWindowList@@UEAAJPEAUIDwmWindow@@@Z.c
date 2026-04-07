/*
 * XREFs of ?GDISurfaceChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800186F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013130 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001367C (--0CWindowData@@QEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180015A00 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??$CreateProxyFromHandle@VCGdiSpriteBitmapProxy@@@CCompositor@@IEAAJIPEAPEAVCGdiSpriteBitmapProxy@@@Z @ 0x180016260 (--$CreateProxyFromHandle@VCGdiSpriteBitmapProxy@@@CCompositor@@IEAAJIPEAPEAVCGdiSpriteBitmapProx.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002F6F0 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::GDISurfaceChange(CWindowList *this, struct IDwmWindow *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  struct CWindowData *v6; // rbx
  int v7; // ebp
  struct CWindowData *v8; // rdi
  int v9; // edi
  __int64 v10; // rax
  int ProxyFrom; // eax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdi
  char v16; // al
  _QWORD *v17; // rax
  __int64 v19; // r9
  int v20; // r8d
  unsigned int v21; // r14d
  unsigned int v22; // ebp
  __int64 v23; // r15
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  CWindowData *v27; // rax
  CWindowData *v28; // rax
  int v29; // eax
  unsigned int v30; // [rsp+20h] [rbp-B8h]
  void *v31; // [rsp+28h] [rbp-B0h]
  __int128 v32; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-98h]
  unsigned int v34; // [rsp+48h] [rbp-90h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v36; // [rsp+60h] [rbp-78h]
  __int128 v37; // [rsp+70h] [rbp-68h]
  __int128 v38; // [rsp+80h] [rbp-58h]
  __int64 v39; // [rsp+90h] [rbp-48h]
  char v40; // [rsp+98h] [rbp-40h]
  unsigned int v41; // [rsp+E8h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = *(_QWORD *)a2;
  v5 = 0LL;
  v41 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(v4 + 8))(a2);
  if ( v8 || !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_2;
  v27 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         752LL);
  if ( !v27 || (v28 = CWindowData::CWindowData(v27), (v8 = v28) == 0LL) )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x891u, v31);
    v9 = -2147024882;
    goto LABEL_47;
  }
  *((_QWORD *)v28 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v28);
  *((_QWORD *)v8 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v29 = CWindowList::SyncWindowData(this, a2, v8);
  v7 = v29;
  if ( v29 >= 0 )
LABEL_2:
    v6 = v8;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x895u, v31);
  v9 = v7;
  if ( v7 < 0 )
  {
LABEL_47:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x140Bu, v31);
    goto LABEL_23;
  }
  if ( !v6 )
    goto LABEL_23;
  v10 = *((_QWORD *)v6 + 54);
  if ( v10 )
  {
    v25 = *((_QWORD *)v6 + 48);
    if ( v25 )
    {
      v26 = *(_QWORD *)(v10 + 32);
      if ( v26 )
      {
        if ( *(_QWORD *)(v26 + 384) == v25 )
        {
          ProxyFrom = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v25 + 16) + 16LL) + 864LL))(
                        *(_QWORD *)(*(_QWORD *)(v25 + 16) + 16LL),
                        *(unsigned int *)(*(_QWORD *)(v25 + 16) + 24LL));
          v9 = ProxyFrom;
          if ( ProxyFrom < 0 )
          {
            v30 = 5145;
LABEL_53:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, ProxyFrom, v30, v31);
            goto LABEL_23;
          }
        }
      }
    }
  }
  ProxyFrom = (*(__int64 (__fastcall **)(struct IDwmWindow *, _QWORD, _QWORD, unsigned int *))(*(_QWORD *)a2 + 344LL))(
                a2,
                *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                *((_QWORD *)this + 71),
                &v41);
  v9 = ProxyFrom;
  if ( ProxyFrom < 0 )
  {
    v30 = 5150;
    goto LABEL_53;
  }
  v12 = *((_QWORD *)v6 + 48);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 8), 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(__int64, __int64))v12)(v12, 1LL);
    *((_QWORD *)v6 + 48) = 0LL;
  }
  if ( v41 )
  {
    ProxyFrom = CCompositor::CreateProxyFromHandle<CGdiSpriteBitmapProxy>(
                  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
                  v41,
                  (__int64 *)v6 + 48);
    v9 = ProxyFrom;
    if ( ProxyFrom < 0 )
    {
      v30 = 5155;
      goto LABEL_53;
    }
  }
  v13 = *((_QWORD *)v6 + 50);
  if ( v13 )
  {
    if ( *((_QWORD *)v6 + 48) )
    {
      v14 = *(_DWORD *)(v13 + 80);
      if ( (v14 & 0x2000000) == 0 )
      {
        v15 = *(_QWORD *)(v13 + 24);
        for ( *(_DWORD *)(v13 + 80) = v14 | 0x2000000; v15; v15 = *(_QWORD *)(v15 + 24) )
        {
          if ( (*(_BYTE *)(v15 + 80) & 1) != 0 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
        }
      }
    }
    else
    {
      *(_DWORD *)(v13 + 80) &= ~0x2000000u;
    }
  }
  (*(void (__fastcall **)(struct IDwmWindow *, __int64, __int64))(*(_QWORD *)a2 + 352LL))(
    a2,
    (__int64)v6 + 376,
    (__int64)v6 + 380);
  v16 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 280LL))(a2);
  *((_BYTE *)v6 + 607) &= ~2u;
  v9 = 0;
  *((_BYTE *)v6 + 607) |= 2 * (v16 & 1);
  if ( *((_DWORD *)v6 + 118) )
  {
    v19 = *((_QWORD *)v6 + 56);
    v20 = *((_DWORD *)v6 + 118);
    v33 = 0LL;
    v32 = 0LL;
    v34 = 0;
    if ( (int)DynArrayImpl<0>::AddMultipleAndSet((__int64)&v32, 8, v20, v19) >= 0 )
    {
      v21 = v34;
      v22 = 0;
      if ( v34 )
      {
        v23 = v32;
        while ( 1 )
        {
          v24 = CSecondaryWindowRepresentation::OnRepresentationUpdated(*(CSecondaryWindowRepresentation **)(v23 + 8LL * v22));
          v9 = v24;
          if ( v24 < 0 )
            break;
          if ( ++v22 >= v21 )
            goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x1F21u, v31);
      }
    }
LABEL_31:
    DynArrayImpl<0>::~DynArrayImpl<0>(&v32);
  }
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x142Fu, v31);
    goto LABEL_23;
  }
  Buffer[0] = *((_QWORD *)v6 + 15);
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  Buffer[1] = 0LL;
  v39 = -1LL;
  v40 = 0;
  v17 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
  if ( v17 )
    v5 = v17[8];
  if ( *((_QWORD *)v6 + 5) == v5 )
  {
    ProxyFrom = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)v6 + 15));
    v9 = ProxyFrom;
    if ( ProxyFrom < 0 )
    {
      v30 = 5172;
      goto LABEL_53;
    }
  }
LABEL_23:
  if ( v41 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                   + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL));
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v9;
}
