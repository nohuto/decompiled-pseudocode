/*
 * XREFs of ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800A9030
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18007F878 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800A2C30 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800A55A8 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8C28 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x1800A93D8 (-ResetVisibleRegionForAll@CVisual@@QEAAJXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800A9650 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x1800A96E0 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801EBCCC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CVisual::ProcessInsertChildAt(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_INSERTCHILDAT *a3)
{
  unsigned int v3; // r9d
  CVisual *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  CVisual *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  CVisual *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 *v20; // rsi
  int v21; // r9d
  int v22; // r8d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rbp
  __int64 *v27; // rax
  __int64 v28; // rcx
  _BYTE *v29; // rdx
  unsigned int i; // eax
  _QWORD ***v31; // rcx
  _QWORD **v32; // rcx
  _QWORD *j; // rax
  __int64 v34; // rcx
  _BYTE *v35; // rdx
  unsigned int k; // eax
  _QWORD ***v37; // rcx
  _QWORD **v38; // rcx
  _QWORD *m; // rax
  CVisual *v40; // rax
  unsigned __int64 v41; // rsi
  __int64 v42; // rbp
  unsigned __int64 v43; // rax
  struct CManipulationManager *v44; // [rsp+68h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  v5 = this;
  if ( v3
    && v3 < *((_DWORD *)a2 + 7)
    && (v6 = *((_QWORD *)a2 + 5), v7 = v3 * *((_DWORD *)a2 + 6), v8 = v7, *(_DWORD *)(v7 + v6))
    && (this = *(CVisual **)(v7 + v6 + 8)) != 0LL
    && (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 157LL) )
  {
    v9 = *(_QWORD **)(v8 + v6 + 8);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
  {
    v12 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0xCD8u);
    return v12;
  }
  if ( (CVisual *)v9[10] == v5 )
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x2D4u);
LABEL_73:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v16, 0LL, 0, v12, 0xCDBu);
    return v12;
  }
  v10 = CPtrArrayBase::InsertAt((CVisual *)((char *)v5 + 72), (unsigned __int64)v9, *((unsigned int *)a3 + 3));
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2D7u);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
    v13 = (CVisual *)v9[10];
    if ( v13 )
      CVisual::RemoveChild(v13, (struct CVisual *)v9, 0);
    v9[56] = 0LL;
    v14 = v9[28];
    v9[10] = v5;
    if ( *(int *)v14 < 0 )
    {
      v28 = *(unsigned int *)(v14 + 4);
      v29 = (_BYTE *)(v14 + 8);
      for ( i = 0; i < (unsigned int)v28; ++v29 )
      {
        if ( *v29 == 1 )
          break;
        ++i;
      }
      if ( i >= (unsigned int)v28 )
        v31 = 0LL;
      else
        v31 = (_QWORD ***)(v14 + v28 + 15 + 8LL * i - (((_BYTE)v28 + 15) & 7));
      v32 = *v31;
      if ( v32 )
      {
        for ( j = *v32; j != v32; j = (_QWORD *)*j )
          *(j - 13) = 0LL;
      }
    }
    v9[63] = 0LL;
    v15 = v9[28];
    if ( *(int *)v15 < 0 )
    {
      v34 = *(unsigned int *)(v15 + 4);
      v35 = (_BYTE *)(v15 + 8);
      for ( k = 0; k < (unsigned int)v34; ++v35 )
      {
        if ( *v35 == 1 )
          break;
        ++k;
      }
      if ( k >= (unsigned int)v34 )
        v37 = 0LL;
      else
        v37 = (_QWORD ***)(v15 + v34 + 15 + 8LL * k - (((_BYTE)v34 + 15) & 7));
      v38 = *v37;
      if ( v38 )
      {
        for ( m = *v38; m != v38; m = (_QWORD *)*m )
          *(m - 6) = 0LL;
      }
    }
    CVisual::OnClipChanged((CVisual *)v9);
    if ( (*((_BYTE *)v9 + 95) & 8) != 0 )
    {
      CVisual::PropagateFlags(v5, 1LL);
      v17 = v9[3];
      if ( (v17 & 2) != 0 )
        v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v17) = v17 & 1;
      if ( (_DWORD)v17 )
      {
        v41 = 0LL;
        v42 = (unsigned int)v17;
        do
        {
          v43 = CPtrArrayBase::operator[](v9 + 3, v41);
          if ( v43 != v9[10] )
            (*(void (__fastcall **)(unsigned __int64, __int64, _QWORD *))(*(_QWORD *)v43 + 64LL))(v43, 1LL, v9);
          ++v41;
          --v42;
        }
        while ( v42 );
      }
      CVisual::ResetVisibleRegionForAll((CVisual *)v9);
      v18 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 128LL))(v9);
      *((_DWORD *)v9 + 22) |= 4u;
      v19 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 28);
      v20 = (__int64 *)v9[10];
      if ( (*((_BYTE *)v9 + 95) & 8) != 0 )
      {
        do
        {
          if ( !v20 )
            break;
          LODWORD(v16) = *((_DWORD *)v20 + 22);
          if ( ((unsigned __int8)v16 & 0x40) != 0 )
            break;
          v24 = *v20;
          *((_DWORD *)v20 + 22) = (unsigned int)v16 | 0x40;
          v25 = (*(__int64 (__fastcall **)(__int64 *))(v24 + 128))(v20);
          v26 = v25;
          if ( v25 )
          {
            if ( v25 != v19 )
              ++*(_DWORD *)(v25 + 24);
          }
          else
          {
            v26 = v19;
          }
          CVisual::NotifyVisualTreeListeners(v20, 1LL);
          v27 = v20;
          v19 = v26;
          v20 = (__int64 *)v20[10];
        }
        while ( (*((_BYTE *)v27 + 95) & 8) != 0 );
      }
      LOBYTE(v16) = *((_BYTE *)v9 + 272);
      v21 = *((_DWORD *)v9 + 66) + 1;
      if ( ((unsigned __int8)v16 & 1) == 0 )
        v21 = *((_DWORD *)v9 + 66);
      v22 = *((_DWORD *)v9 + 67) + 1;
      if ( ((unsigned __int8)v16 & 2) == 0 )
        v22 = *((_DWORD *)v9 + 67);
      if ( v21 || v22 )
      {
        v16 = v5;
        v40 = v5;
        do
        {
          *((_DWORD *)v16 + 66) += v21;
          *((_DWORD *)v16 + 67) += v22;
          v16 = (CVisual *)*((_QWORD *)v16 + 10);
          if ( v40 )
          {
            v40 = (CVisual *)*((_QWORD *)v40 + 10);
            if ( v40 )
              v40 = (CVisual *)*((_QWORD *)v40 + 10);
          }
        }
        while ( v16 != v40 );
      }
      if ( (*((_BYTE *)v9 + 94) & 2) != 0 )
      {
        v44 = 0LL;
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v44);
        if ( (int)CComposition::GetManipulationManager(*((CComposition **)v5 + 2), &v44) >= 0 )
          CManipulationManager::QueueMidManipulationUpdate(v44, 2LL, v9);
        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v44);
      }
    }
  }
  if ( (v12 & 0x80000000) != 0 )
    goto LABEL_73;
  return v12;
}
