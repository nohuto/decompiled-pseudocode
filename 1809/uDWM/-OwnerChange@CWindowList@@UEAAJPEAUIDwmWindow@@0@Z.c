/*
 * XREFs of ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18000F120
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ @ 0x18000F424 (-UnmetTabRequirementsMaybeUpdated@CWindowData@@QEAAXXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18000F484 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18000F524 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x18000F590 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180012F50 (-ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x180020FE0 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::OwnerChange(CWindowList *this, struct IDwmWindow *a2, struct IDwmWindow *a3)
{
  unsigned int v6; // ebp
  CWindowData *v7; // rdi
  int v8; // esi
  CWindowData **v9; // rcx
  struct CWindowData *v10; // rbx
  int v11; // ebx
  CWindowData *v13; // r14
  __int64 v14; // rsi
  int v15; // esi
  struct CWindowData *v16; // rbx
  CWindowData *v17; // rdx
  int v18; // eax
  CWindowData *v19; // rbx
  __int64 v20; // rax
  char v21; // al
  int v22; // eax
  unsigned int v23; // r8d
  CWindowData *v24; // rax
  CWindowData *v25; // rax
  int v26; // eax
  CWindowData *v27; // rax
  CWindowData *v28; // rax
  int v29; // eax
  int v30; // eax
  CWindowData *v31; // [rsp+68h] [rbp+10h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 0;
  v7 = 0LL;
  v8 = 0;
  v10 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v10 || !a3 && !(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 16LL))(a2) )
    goto LABEL_4;
  v27 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                         WPF::g_pProcessHeap,
                         744LL);
  if ( !v27 || (v28 = CWindowData::CWindowData(v27), (v10 = v28) == 0LL) )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
    v11 = -2147024882;
    goto LABEL_46;
  }
  *((_QWORD *)v28 + 3) = a2;
  (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a2)(a2, v28);
  *((_QWORD *)v10 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 24LL))(a2);
  v29 = CWindowList::SyncWindowData(this, a2, v10);
  v8 = v29;
  if ( v29 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x88Bu);
  else
LABEL_4:
    v7 = v10;
  v11 = v8;
  if ( v8 < 0 )
  {
LABEL_46:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xDE5u);
    goto LABEL_7;
  }
  if ( !v7 )
    goto LABEL_7;
  v13 = 0LL;
  if ( a3 )
  {
    v15 = 0;
    v16 = (struct CWindowData *)(*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 8LL))(a3);
    if ( v16 )
      goto LABEL_13;
    v24 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           744LL);
    if ( !v24 || (v25 = CWindowData::CWindowData(v24), (v16 = v25) == 0LL) )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
      v11 = -2147024882;
      goto LABEL_48;
    }
    *((_QWORD *)v25 + 3) = a3;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))a3)(a3, v25);
    *((_QWORD *)v16 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a3 + 24LL))(a3);
    v26 = CWindowList::SyncWindowData(this, a3, v16);
    v15 = v26;
    if ( v26 >= 0 )
LABEL_13:
      v13 = v16;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x88Bu);
    v11 = v15;
    if ( v15 >= 0 )
      goto LABEL_9;
LABEL_48:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xDEDu);
    goto LABEL_7;
  }
LABEL_9:
  v31 = v7;
  v11 = 0;
  v14 = *((_QWORD *)v7 + 68);
  if ( (CWindowData *)v14 == v13 )
    goto LABEL_10;
  if ( v14 )
  {
    CWindowData::UpdateOwnerLists(v7, 0);
    v7 = v31;
  }
  *((_QWORD *)v7 + 68) = 0LL;
  if ( v14 )
  {
    DynArray<CWindowData *,0>::Remove(v14 + 552, &v31);
    v23 = *(_DWORD *)(v14 + 464);
    if ( v23 )
    {
      v17 = v31;
      while ( 1 )
      {
        v9 = *(CWindowData ***)(*(_QWORD *)(v14 + 440) + 8LL * v6);
        if ( v9[8] == v31 )
          break;
        if ( ++v6 >= v23 )
          goto LABEL_20;
      }
      v30 = CWindowData::NotifyRepresentationChanged((CWindowData *)v14);
      v11 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xE14u);
        goto LABEL_10;
      }
    }
  }
  v17 = v31;
LABEL_20:
  *((_QWORD *)v17 + 68) = v13;
  if ( !v13 || v13 == v31 )
  {
LABEL_29:
    CWindowData::UnmetTabRequirementsMaybeUpdated((CWindowData *)v9);
    goto LABEL_10;
  }
  v18 = DynArray<CWindowData *,0>::AddMultipleAndSet((char *)v13 + 552, &v31);
  v11 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xE21u);
  }
  else
  {
    v19 = v31;
    v20 = *((_QWORD *)v31 + 68);
    v21 = v20 && (*(_BYTE *)(v20 + 597) & 0x40) != 0 && CWindowData::ShouldBeIncludedInOwnerSWR(v31);
    if ( *((_BYTE *)v19 + 597) >> 7 != v21 )
      CWindowData::UpdateOwnerLists(v19, !(*((_BYTE *)v19 + 597) >> 7));
    v22 = CWindowData::NotifyRepresentationChanged(v13);
    v11 = v22;
    if ( v22 >= 0 )
      goto LABEL_29;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xE26u);
  }
LABEL_10:
  if ( v11 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xDF1u);
LABEL_7:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)v11;
}
