/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004E574
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004D570 (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x1801B7804 (-ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVEALLCHILDREN@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004E824 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A2C30 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800A9650 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18015ACEC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017ED50 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801EBCCC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  _QWORD *v1; // rdi
  __int64 v3; // rax
  int v4; // r13d
  int v5; // r12d
  __int64 v6; // rax
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 *v11; // rdi
  unsigned __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rsi
  char v18; // al
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  unsigned __int64 *v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 *v27; // rax
  CVisual *v28; // rcx
  CVisual *v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  struct _LIST_ENTRY *i; // rdi
  int v34; // eax
  unsigned int v35; // ecx
  struct CManipulationManager *v36; // [rsp+70h] [rbp+8h] BYREF
  __int64 v37; // [rsp+78h] [rbp+10h]

  v1 = (_QWORD *)((char *)this + 72);
  v3 = *((_QWORD *)this + 9);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  v4 = 0;
  v5 = 0;
  if ( (_DWORD)v3 )
  {
    v12 = 0LL;
    v13 = 0LL;
    v37 = (unsigned int)v3;
    v14 = 2LL;
    do
    {
      v15 = CPtrArrayBase::operator[](v1, v13);
      v17 = v15;
      if ( v15 )
      {
        if ( (*(_BYTE *)(v15 + 94) & 2) != 0 )
        {
          v36 = 0LL;
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v36);
          if ( (int)CComposition::GetManipulationManager(*((CComposition **)this + 2), &v36) >= 0 )
            CManipulationManager::QueueMidManipulationUpdate(v36, 3LL, v17);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v36);
        }
        v18 = *(_BYTE *)(v17 + 272);
        v19 = *(_DWORD *)(v17 + 264);
        *(_QWORD *)(v17 + 80) = 0LL;
        v20 = v4 + v19;
        v21 = v5 + *(_DWORD *)(v17 + 268);
        v4 = v20 + 1;
        if ( (v18 & 1) == 0 )
          v4 = v20;
        v5 = v21 + 1;
        if ( (v18 & 2) == 0 )
          v5 = v21;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        v22 = (unsigned __int64 *)(*v1 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (*v1 & 2) != 0 )
          v23 = *v22;
        else
          v23 = *v1 & 1LL;
        if ( v12 >= v23 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, 0LL, 0, -2147024809, 0x13Bu);
        }
        else if ( v23 == 1 )
        {
          *v1 = 1LL;
        }
        else
        {
          v22[v14] = 0LL;
        }
        v16 = v37;
      }
      ++v13;
      ++v12;
      ++v14;
      v37 = v16 - 1;
    }
    while ( v16 != 1 );
  }
  if ( (*v1 & 2) != 0 )
    WPF::ProcessHeapImpl::Free((void *)(*v1 & 0xFFFFFFFFFFFFFFFCuLL));
  *v1 = 0LL;
  if ( v4 || v5 )
  {
    v28 = this;
    v29 = this;
    do
    {
      *((_DWORD *)v28 + 66) -= v4;
      *((_DWORD *)v28 + 67) -= v5;
      v28 = (CVisual *)*((_QWORD *)v28 + 10);
      if ( v29 )
      {
        v29 = (CVisual *)*((_QWORD *)v29 + 10);
        if ( v29 )
          v29 = (CVisual *)*((_QWORD *)v29 + 10);
      }
    }
    while ( v28 != v29 );
  }
  v6 = *((_QWORD *)this + 3);
  if ( (v6 & 2) != 0 )
    v6 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v6) = v6 & 1;
  if ( (_DWORD)v6 )
  {
    v30 = 0LL;
    v31 = (unsigned int)v6;
    do
    {
      v32 = CPtrArrayBase::operator[]((char *)this + 24, v30);
      if ( v32 != *((_QWORD *)this + 10) )
        (*(void (__fastcall **)(__int64, _QWORD, CVisual *))(*(_QWORD *)v32 + 64LL))(v32, 0LL, this);
      ++v30;
      --v31;
    }
    while ( v31 );
  }
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v8 = RenderPassInfoList;
  if ( RenderPassInfoList )
  {
    for ( i = RenderPassInfoList->Flink; i != v8; i = i->Flink )
    {
      v34 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&i[-6].Blink);
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x133Bu);
        break;
      }
      CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&i[-6].Blink);
    }
  }
  v9 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 128LL))(this);
  *((_DWORD *)this + 22) |= 0x15u;
  v10 = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 28);
  v11 = (__int64 *)*((_QWORD *)this + 10);
  if ( (*((_BYTE *)this + 95) & 8) != 0 )
  {
    do
    {
      if ( !v11 || ((*((_DWORD *)v11 + 22) << 25) & 0xA2000000) == 0xA2000000 )
        break;
      v24 = *v11;
      *((_DWORD *)v11 + 22) |= 0x51u;
      v25 = (*(__int64 (__fastcall **)(__int64 *))(v24 + 128))(v11);
      v26 = v25;
      if ( v25 )
      {
        if ( v25 != v10 )
          ++*(_DWORD *)(v25 + 24);
      }
      else
      {
        v26 = v10;
      }
      CVisual::NotifyVisualTreeListeners(v11, 0LL);
      v27 = v11;
      v10 = v26;
      v11 = (__int64 *)v11[10];
    }
    while ( (*((_BYTE *)v27 + 95) & 8) != 0 );
  }
}
