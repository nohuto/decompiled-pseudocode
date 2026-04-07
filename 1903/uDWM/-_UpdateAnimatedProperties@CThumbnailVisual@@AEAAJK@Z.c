/*
 * XREFs of ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x180027DFC
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180025680 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180025A50 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x1800B09D0 (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x1800B0AF4 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::_UpdateAnimatedProperties(CThumbnailVisual *this, int a2)
{
  __int64 v2; // rax
  int v3; // esi
  int started; // edi
  CThumbnailTransition *v6; // rcx
  CThumbnailTransition *v8; // rcx
  int v9; // ebp
  int v10; // r14d
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // r10d
  int v15; // r9d
  int v16; // eax
  float v17; // xmm0_4
  CThumbnailTransition *v18; // rcx
  CBaseObject *v19; // rcx

  v2 = *((_QWORD *)this + 46);
  v3 = a2 & 0x30000;
  started = -2147467259;
  if ( !v2 || !v3 )
  {
    v6 = (CThumbnailTransition *)*((_QWORD *)this + 58);
    if ( !v6 )
      return (unsigned int)started;
    CThumbnailTransition::StopAnimation(v6);
    started = 0;
    goto LABEL_26;
  }
  v8 = (CThumbnailTransition *)*((_QWORD *)this + 58);
  v9 = *(_DWORD *)(v2 + 48);
  v10 = *(_DWORD *)(v2 + 52);
  if ( v8 )
  {
    *((_BYTE *)this + 473) = 1;
    CThumbnailTransition::StopAnimation(v8);
  }
  started = -2147024882;
  v11 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          40LL);
  if ( v11 )
  {
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)v11 = &CThumbnailTransition::`vftable'{for `CBaseObject'};
    *(_QWORD *)(v11 + 16) = &CThumbnailTransition::`vftable'{for `IAnimationListener'};
    *(_DWORD *)(v11 + 8) = 1;
  }
  *((_QWORD *)this + 58) = v11;
  if ( v11 )
  {
    SetRect(
      (LPRECT)this + 18,
      *((_DWORD *)this + 28),
      *((_DWORD *)this + 29),
      *((_DWORD *)this + 28) + *((_DWORD *)this + 30),
      *((_DWORD *)this + 29) + *((_DWORD *)this + 31));
    v13 = *((_QWORD *)this + 46);
    if ( (*(_BYTE *)(v13 + 44) & 1) != 0 )
    {
      v14 = 0;
      if ( *(_DWORD *)(v13 + 60) - *(_DWORD *)(v13 + 52) >= 0 )
        v14 = *(_DWORD *)(v13 + 60) - *(_DWORD *)(v13 + 52);
      v15 = 0;
      if ( *(_DWORD *)(v13 + 56) - *(_DWORD *)(v13 + 48) >= 0 )
        v15 = *(_DWORD *)(v13 + 56) - *(_DWORD *)(v13 + 48);
      SetRect((LPRECT)this + 19, v9, v10, v9 + v15, v10 + v14);
      v13 = *((_QWORD *)this + 46);
    }
    else
    {
      *((_OWORD *)this + 19) = *((_OWORD *)this + 18);
    }
    v16 = 4;
    if ( v3 != 0x20000 )
      v16 = 1;
    *((_DWORD *)this + 80) = v16;
    v17 = *((double *)this + 23);
    *((float *)this + 81) = v17;
    if ( (*(_BYTE *)(v13 + 44) & 4) != 0 )
      v17 = (double)*(unsigned __int8 *)(v13 + 80) / 255.0;
    *((float *)this + 82) = v17;
    v18 = (CThumbnailTransition *)*((_QWORD *)this + 58);
    *((_BYTE *)this + 474) = 0;
    started = CThumbnailTransition::StartAnimation(v18, this, v12);
    if ( started >= 0 )
      goto LABEL_27;
    v19 = (CBaseObject *)*((_QWORD *)this + 58);
    if ( v19 )
    {
      CBaseObject::Release(v19);
      *((_QWORD *)this + 58) = 0LL;
    }
    *((_BYTE *)this + 473) = 0;
LABEL_26:
    if ( started < 0 )
      return (unsigned int)started;
LABEL_27:
    CThumbnailVisual::SetDirtyFlags(this, 4096);
  }
  return (unsigned int)started;
}
