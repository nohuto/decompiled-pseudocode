/*
 * XREFs of ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18017ADBC
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800B23D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B3200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ??4?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z @ 0x18006BDCC (--4-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@QEAAAEAV012@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18017A51C (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18017A5EC (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18017A744 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 */

__int64 __fastcall ClipPlaneIterator::UpdateClippingPlanes(ClipPlaneIterator *this)
{
  unsigned int v1; // ebx
  _DWORD *v3; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  unsigned int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // r8
  float x; // xmm2_4
  bool v10; // cc
  float v11; // xmm0_4
  _OWORD *v12; // rcx
  _DWORD *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v18[4]; // [rsp+30h] [rbp-68h] BYREF
  D2D_VECTOR_4F v19[4]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0;
  v18[0] = 0;
  if ( *(_BYTE *)this || !ClipPlaneIterator::HasMoreClipPlanes(this) )
  {
    v15 = *((_QWORD *)this + 15);
    v16 = *(_QWORD *)(v15 + 256);
    if ( v16 )
    {
      *(_QWORD *)(v15 + 256) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  else
  {
    if ( *((_DWORD *)this + 1) )
      ClipPlaneIterator::GetMorePlaceholderClipPlanes(this, v19, v18);
    else
      ClipPlaneIterator::GetMoreStandardClipPlanes(this, v19, v18);
    v3 = HeapAlloc(WPF::g_processHeap, 0, 0x60uLL);
    v5 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x60uLL);
      v5[2] = 0;
      *(_QWORD *)v5 = &ClipPlaneInfoRef::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      (**(void (__fastcall ***)(void *))v5)(v5);
      v6 = v18[0];
      v7 = 0;
      if ( !v18[0] )
        goto LABEL_19;
      do
      {
        v8 = v7;
        x = v19[v7].x;
        *(D2D_VECTOR_4F *)&v5[4 * v7 + 4] = v19[v7];
        if ( x == 0.0 )
          v10 = v19[v7].y <= 0.0;
        else
          v10 = x <= 0.0;
        if ( v10 )
          v11 = 0.0;
        else
          v11 = FLOAT_0_5;
        ++v7;
        *(float *)&v5[v8 + 20] = v11;
      }
      while ( v7 < v6 );
      if ( v7 < 4 )
      {
LABEL_19:
        v12 = &v5[4 * v7 + 4];
        v13 = &v5[v7 + 20];
        v14 = 4 - v7;
        do
        {
          *v12 = 0LL;
          *v13++ = 0;
          ++v12;
          --v14;
        }
        while ( v14 );
      }
      Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::operator=(
        (_QWORD *)(*((_QWORD *)this + 15) + 256LL),
        (void (__fastcall ***)(_QWORD))v5);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x2A8u);
    }
  }
  return v1;
}
