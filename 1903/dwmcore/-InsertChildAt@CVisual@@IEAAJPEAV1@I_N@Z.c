/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x18007D678
 * Callers:
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x18007D5D4 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800CEA6C (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_MOVECHILD@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnClipChanged@CVisual@@AEAAXXZ @ 0x18007DB20 (-OnClipChanged@CVisual@@AEAAXXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x18007DBD0 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180080284 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180080598 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180089C04 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800A44AC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180180990 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x1801A8FAC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CVisual *this, struct CVisual *a2, unsigned int a3, char a4)
{
  char v4; // r12
  int v7; // eax
  unsigned int v8; // ecx
  CVisual *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rax
  _DWORD *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rbp
  __int64 *v16; // rbx
  __int64 v17; // rax
  _DWORD *v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 *v21; // rbx
  char v22; // cl
  int v23; // r9d
  int v24; // r8d
  unsigned int v25; // ebx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rcx
  _BYTE *v36; // rdx
  unsigned int i; // eax
  _QWORD ***v38; // rcx
  _QWORD **v39; // rcx
  _QWORD *j; // rax
  __int64 v41; // rcx
  _BYTE *v42; // rdx
  unsigned int k; // eax
  _QWORD ***v44; // rcx
  _QWORD **v45; // rcx
  _QWORD *m; // rax
  __int64 v47; // rbp
  __int64 v48; // r12
  __int64 v49; // rax
  CVisual *v50; // rcx
  CVisual *v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rcx
  _BYTE *v59; // rdx
  unsigned int n; // eax
  _QWORD ***v61; // r14
  _QWORD **v62; // r14
  _QWORD *ii; // rbx
  int v64; // eax
  unsigned int v65; // ecx
  __int64 v66; // rcx
  _BYTE *v67; // rdx
  unsigned int jj; // eax
  _QWORD ***v69; // r14
  _QWORD **v70; // r14
  _QWORD *kk; // rbx
  int v72; // eax
  unsigned int v73; // ecx
  CComposition *v74; // rbx
  unsigned int v75; // [rsp+70h] [rbp+8h]
  struct CManipulationManager *v76; // [rsp+78h] [rbp+10h] BYREF
  char v77; // [rsp+88h] [rbp+20h]

  v77 = a4;
  v4 = a4;
  if ( *((CVisual **)a2 + 10) == this )
  {
    v25 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x2EDu, 0LL);
  }
  else
  {
    v7 = CPtrArrayBase::InsertAt((CVisual *)((char *)this + 72), (unsigned __int64)a2, a3);
    v75 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x2F0u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = (CVisual *)*((_QWORD *)a2 + 10);
      if ( v9 )
        CVisual::RemoveChild(v9, a2, 0);
      *((_QWORD *)a2 + 56) = 0LL;
      *((_QWORD *)a2 + 10) = this;
      v10 = *((_QWORD *)a2 + 28);
      if ( *(int *)v10 < 0 )
      {
        v35 = *(unsigned int *)(v10 + 4);
        v36 = (_BYTE *)(v10 + 8);
        for ( i = 0; i < (unsigned int)v35; ++v36 )
        {
          if ( *v36 == 1 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v35 )
          v38 = 0LL;
        else
          v38 = (_QWORD ***)(v35 + 15 + v10 + 8LL * i - (((_BYTE)v35 + 15) & 7));
        v39 = *v38;
        if ( v39 )
        {
          for ( j = *v39; j != v39; j = (_QWORD *)*j )
            *(j - 13) = 0LL;
        }
      }
      *((_QWORD *)a2 + 63) = 0LL;
      v11 = *((_QWORD *)a2 + 28);
      if ( *(int *)v11 < 0 )
      {
        v41 = *(unsigned int *)(v11 + 4);
        v42 = (_BYTE *)(v11 + 8);
        for ( k = 0; k < (unsigned int)v41; ++v42 )
        {
          if ( *v42 == 1 )
            break;
          ++k;
        }
        if ( k >= (unsigned int)v41 )
          v44 = 0LL;
        else
          v44 = (_QWORD ***)(v11 + v41 + 15 + 8LL * k - (((_BYTE)v41 + 15) & 7));
        v45 = *v44;
        if ( v45 )
        {
          for ( m = *v45; m != v45; m = (_QWORD *)*m )
            *(m - 6) = 0LL;
        }
      }
      CVisual::OnClipChanged(a2);
      if ( (*((_BYTE *)a2 + 95) & 4) != 0 )
      {
        v12 = *((_QWORD *)this + 3);
        if ( (v12 & 2) != 0 )
          v12 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v12) = v12 & 1;
        if ( (_DWORD)v12 )
        {
          v52 = 0LL;
          v53 = (unsigned int)v12;
          do
          {
            v54 = CPtrArrayBase::operator[]((char *)this + 24, v52);
            if ( v54 != *((_QWORD *)this + 10) )
              (*(void (__fastcall **)(__int64, _QWORD, CVisual *))(*(_QWORD *)v54 + 64LL))(v54, 0LL, this);
            ++v52;
            --v53;
          }
          while ( v53 );
        }
        v13 = (_DWORD *)*((_QWORD *)this + 28);
        if ( (*v13 & 0x40000000) != 0 )
        {
          v58 = (unsigned int)v13[1];
          v59 = v13 + 2;
          for ( n = 0; n < (unsigned int)v58; ++v59 )
          {
            if ( *v59 == 2 )
              break;
            ++n;
          }
          v61 = n >= (unsigned int)v58 ? 0LL : (_QWORD ***)((char *)v13 + v58 + 8LL * n - (((_BYTE)v58 + 15) & 7) + 15);
          v62 = *v61;
          if ( v62 )
          {
            for ( ii = *v62; ii != v62; ii = (_QWORD *)*ii )
            {
              v64 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(ii - 11));
              if ( v64 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x1424u, 0LL);
                break;
              }
              CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(ii - 11));
            }
          }
        }
        v14 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 160LL))(this);
        *((_DWORD *)this + 22) |= 0x11u;
        v15 = v14;
        v16 = (__int64 *)*((_QWORD *)this + 10);
        if ( (*((_BYTE *)this + 95) & 4) != 0 )
        {
          do
          {
            if ( !v16 || (v16[11] & 0x11) == 0x11 )
              break;
            v32 = *v16;
            *((_DWORD *)v16 + 22) |= 0x11u;
            v33 = (*(__int64 (__fastcall **)(__int64 *))(v32 + 160))(v16);
            if ( !v33 )
              v33 = v15;
            v15 = v33;
            CVisual::NotifyVisualTreeListeners(v16, 0LL);
            v34 = v16;
            v16 = (__int64 *)v16[10];
          }
          while ( (*((_BYTE *)v34 + 95) & 4) != 0 );
        }
        v17 = *((_QWORD *)a2 + 3);
        if ( (v17 & 2) != 0 )
          v17 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v17) = v17 & 1;
        if ( (_DWORD)v17 )
        {
          v55 = 0LL;
          v56 = (unsigned int)v17;
          do
          {
            v57 = CPtrArrayBase::operator[]((char *)a2 + 24, v55);
            if ( v57 != *((_QWORD *)a2 + 10) )
              (*(void (__fastcall **)(__int64, __int64, struct CVisual *))(*(_QWORD *)v57 + 64LL))(v57, 1LL, a2);
            ++v55;
            --v56;
          }
          while ( v56 );
        }
        v18 = (_DWORD *)*((_QWORD *)a2 + 28);
        if ( (*v18 & 0x40000000) != 0 )
        {
          v66 = (unsigned int)v18[1];
          v67 = v18 + 2;
          for ( jj = 0; jj < (unsigned int)v66; ++v67 )
          {
            if ( *v67 == 2 )
              break;
            ++jj;
          }
          v69 = jj >= (unsigned int)v66
              ? 0LL
              : (_QWORD ***)((char *)v18 + v66 + 8LL * jj - (((_BYTE)v66 + 15) & 7) + 15);
          v70 = *v69;
          if ( v70 )
          {
            for ( kk = *v70; kk != v70; kk = (_QWORD *)*kk )
            {
              v72 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(kk - 11));
              if ( v72 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x1424u, 0LL);
                break;
              }
              CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(kk - 11));
            }
          }
        }
        v19 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 160LL))(a2);
        *((_DWORD *)a2 + 22) |= 4u;
        v20 = v19;
        if ( v19 )
          ++*(_DWORD *)(v19 + 28);
        v21 = (__int64 *)*((_QWORD *)a2 + 10);
        if ( (*((_BYTE *)a2 + 95) & 4) != 0 )
        {
          do
          {
            if ( !v21 || (v21[11] & 0x40) != 0 )
              break;
            v27 = *v21;
            *((_DWORD *)v21 + 22) |= 0x40u;
            v28 = (*(__int64 (__fastcall **)(__int64 *))(v27 + 160))(v21);
            v29 = v28;
            if ( v28 )
            {
              if ( v28 != v20 )
                ++*(_DWORD *)(v28 + 24);
            }
            else
            {
              v29 = v20;
            }
            v30 = v21[3];
            if ( (v30 & 2) != 0 )
              v30 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v30) = v30 & 1;
            if ( (_DWORD)v30 )
            {
              v47 = 0LL;
              v48 = (unsigned int)v30;
              do
              {
                v49 = CPtrArrayBase::operator[](v21 + 3, v47);
                if ( v49 != v21[10] )
                  (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v49 + 64LL))(v49, 1LL, v21);
                ++v47;
                --v48;
              }
              while ( v48 );
            }
            v31 = v21;
            v20 = v29;
            v21 = (__int64 *)v21[10];
          }
          while ( (*((_BYTE *)v31 + 95) & 4) != 0 );
          v4 = v77;
        }
        v22 = *((_BYTE *)a2 + 272);
        v23 = *((_DWORD *)a2 + 66) + 1;
        if ( (v22 & 1) == 0 )
          v23 = *((_DWORD *)a2 + 66);
        v24 = *((_DWORD *)a2 + 67) + 1;
        if ( (v22 & 2) == 0 )
          v24 = *((_DWORD *)a2 + 67);
        if ( v23 || v24 )
        {
          v50 = this;
          v51 = this;
          do
          {
            *((_DWORD *)v50 + 66) += v23;
            *((_DWORD *)v50 + 67) += v24;
            v50 = (CVisual *)*((_QWORD *)v50 + 10);
            if ( v51 )
            {
              v51 = (CVisual *)*((_QWORD *)v51 + 10);
              if ( v51 )
                v51 = (CVisual *)*((_QWORD *)v51 + 10);
            }
          }
          while ( v50 != v51 );
        }
        if ( !v4 && (*((_BYTE *)a2 + 94) & 2) != 0 )
        {
          v76 = 0LL;
          v74 = (CComposition *)*((_QWORD *)this + 2);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v76);
          if ( (int)CComposition::GetManipulationManager(v74, &v76) >= 0 )
            (*(void (__fastcall **)(struct CManipulationManager *, __int64, struct CVisual *))(*(_QWORD *)v76 + 48LL))(
              v76,
              2LL,
              a2);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v76);
        }
      }
    }
    return v75;
  }
  return v25;
}
