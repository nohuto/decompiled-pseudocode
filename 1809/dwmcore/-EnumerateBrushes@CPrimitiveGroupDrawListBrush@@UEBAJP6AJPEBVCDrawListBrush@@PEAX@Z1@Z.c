/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x1800104A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x18001070C (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18002781C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x1800278E0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x18002898C (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x180028BC0 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // r15d
  __int64 v6; // r12
  int (*v8)(const struct CDrawListBrush *, void *); // r14
  __int64 v9; // rsi
  const __m128i *v10; // rbx
  __m128i v11; // xmm6
  __int16 v12; // ax
  __int32 v13; // xmm0_4
  __int32 v14; // xmm1_4
  __int64 v15; // rax
  __int32 v16; // xmm0_4
  __int64 v17; // rdx
  __int32 v18; // xmm1_4
  __int64 v19; // rax
  __int32 v20; // xmm0_4
  __int32 v21; // xmm1_4
  CSurfaceDrawListBrush *v22; // rcx
  CSurfaceDrawListBrush *v23; // rax
  CSurfaceDrawListBrush *v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  CSurfaceDrawListBrush *v27; // r14
  struct CSurfaceDrawListBrush *v28; // rcx
  struct CObjectCache *ObjectCache; // rax
  CSurfaceDrawListBrush *v31; // [rsp+38h] [rbp-69h] BYREF
  CSurfaceDrawListBrush **v32; // [rsp+40h] [rbp-61h]
  CSurfaceDrawListBrush *v33; // [rsp+48h] [rbp-59h] BYREF
  char v34; // [rsp+50h] [rbp-51h]
  _DWORD v35[10]; // [rsp+58h] [rbp-49h] BYREF
  struct D2D_RECT_F v36; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v37[8]; // [rsp+90h] [rbp-11h] BYREF
  const __m128i *v38; // [rsp+98h] [rbp-9h]
  __int16 v39; // [rsp+108h] [rbp+67h] BYREF
  char v40; // [rsp+10Ah] [rbp+69h]
  int (*v41)(const struct CDrawListBrush *, void *); // [rsp+110h] [rbp+6Fh]
  char v42; // [rsp+120h] [rbp+7Fh] BYREF

  v41 = a2;
  v4 = *((_QWORD *)this + 7);
  v5 = 0;
  v6 = 0LL;
  v8 = a2;
  if ( !*(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) )
    return v5;
  while ( 1 )
  {
    v9 = **(_QWORD **)(v4 + 24) + 144 * v6;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v4, v37, (unsigned int)v6);
    if ( (*(_BYTE *)(v9 + 4) & 2) == 0
      && *(_DWORD *)v9
      && *(_DWORD *)(v9 + 40) < *(_DWORD *)(*((_QWORD *)this + 7) + 64LL) )
    {
      break;
    }
LABEL_18:
    v4 = *((_QWORD *)this + 7);
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *(_DWORD *)(*(_QWORD *)(v4 + 24) + 8LL) )
      return v5;
  }
  while ( 1 )
  {
    v10 = v38;
    if ( *((_BYTE *)this + 52) )
    {
      ClipRectAndEdgeFlags(v38, v38[2].m128i_u32[3], (char *)this + 32, *((unsigned int *)this + 12), &v36, &v42);
      v11 = (__m128i)v36;
    }
    else
    {
      v11 = _mm_loadu_si128(v38);
      v36 = (struct D2D_RECT_F)v11;
    }
    if ( IsEmpty(&v36) )
      goto LABEL_17;
    v31 = 0LL;
    v12 = *((_WORD *)this + 32);
    v13 = v10[4].m128i_i32[0];
    v14 = v10[4].m128i_i32[1];
    v35[2] = 0;
    v35[5] = 0;
    v33 = 0LL;
    v39 = v12;
    v40 = *((_BYTE *)this + 66);
    v32 = &v31;
    v15 = *((_QWORD *)this + 7);
    v35[0] = v13;
    v16 = v10[4].m128i_i32[2];
    v35[1] = v14;
    v17 = *(_QWORD *)(v15 + 112);
    v18 = v10[4].m128i_i32[3];
    v19 = *(unsigned int *)(v9 + 40);
    v35[3] = v16;
    v20 = v10[5].m128i_i32[0];
    v35[4] = v18;
    v21 = v10[5].m128i_i32[1];
    v35[6] = v20;
    v35[7] = v21;
    v35[8] = 1065353216;
    v34 = 1;
    v5 = CSurfaceDrawListBrush::CreateWithTextureTransform(v17 + 24 * v19, &v39, v35, &v33);
    if ( v34 )
    {
      v22 = *v32;
      *v32 = v33;
      if ( v22 )
        CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1u);
    }
    if ( (v5 & 0x80000000) != 0 )
      break;
    *(__m128i *)((char *)v31 + 120) = *(const __m128i *)((char *)v10 + 88);
    v23 = v31;
    *(_OWORD *)((char *)v31 + 8) = *(_OWORD *)((char *)this + 8);
    *((_QWORD *)v23 + 3) = *((_QWORD *)this + 3);
    v24 = v31;
    *((_DWORD *)v31 + 12) = v10[2].m128i_i32[3];
    *((_BYTE *)v24 + 52) = 1;
    *((__m128i *)v24 + 2) = v11;
    v25 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v8)(v31, a3);
    v5 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x73u);
      goto LABEL_24;
    }
    v27 = v31;
    if ( v31 )
    {
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)v31 + 64);
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((char *)v27 + 56);
      ObjectCache = CThreadContext::GetObjectCache(v28);
      if ( *((_DWORD *)ObjectCache + 1) >= *(_DWORD *)ObjectCache )
      {
        WPF::ProcessHeapImpl::Free(v27);
      }
      else
      {
        *(_QWORD *)v27 = *((_QWORD *)ObjectCache + 1);
        ++*((_DWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = v27;
      }
    }
    v8 = v41;
LABEL_17:
    if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v37) )
      goto LABEL_18;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v22, 0LL, 0, v5, 0x6Du);
LABEL_24:
  if ( v31 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v31, 1u);
  return v5;
}
