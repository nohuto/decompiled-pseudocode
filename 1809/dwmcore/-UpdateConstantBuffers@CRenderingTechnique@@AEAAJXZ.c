/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800C6DD0
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexShaderKey@@@Z @ 0x1800C5830 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAW4Enum@VertexSha.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800910BC (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800C414C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x1800C51F8 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800C76DC (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateConstantBuffer@CRenderingTechniqueFragment@@QEAAIPEAE@Z @ 0x1800E0110 (-UpdateConstantBuffer@CRenderingTechniqueFragment@@QEAAIPEAE@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this)
{
  char v1; // di
  __int64 v3; // rax
  _OWORD *v4; // rax
  _DWORD *v5; // rbx
  _OWORD *v6; // rax
  _OWORD *v7; // rax
  _DWORD *v8; // rcx
  char *v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // r9
  __int64 v12; // r8
  __int128 *v13; // r15
  __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 v19; // r14
  SIZE_T v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  char *v25; // rsi
  __int128 *v26; // rdx
  __int128 *v27; // rcx
  __int128 v28; // xmm0
  void *v29; // rdx
  unsigned int *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned int v33; // eax
  void *v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned int v36; // ebx
  unsigned int v38; // edi
  unsigned int v39; // esi
  __int64 v40; // r14
  __int64 v41; // rcx
  CD3DDeviceLevel1 *v42; // r15
  int v43; // eax
  unsigned int v44; // ecx
  unsigned __int8 *v45; // rbx
  __int64 v46; // r9
  void *v47; // rcx
  unsigned __int64 v48; // rdx
  unsigned int i; // r8d
  int v50; // eax
  __int64 v51; // rcx
  _OWORD *pData; // rcx
  _DWORD *v53; // rdx
  _OWORD *v54; // rdx
  __int128 v55; // xmm0
  char *v56; // rax
  unsigned int v57; // [rsp+20h] [rbp-50h]
  __int128 v58; // [rsp+30h] [rbp-40h] BYREF
  D3D11_MAPPED_SUBRESOURCE v59; // [rsp+40h] [rbp-30h] BYREF
  char *v60; // [rsp+50h] [rbp-20h]
  void *v61[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v62; // [rsp+68h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+38h]
  unsigned __int64 v64; // [rsp+B0h] [rbp+40h] BYREF
  void *v65; // [rsp+B8h] [rbp+48h] BYREF
  void *v66; // [rsp+C0h] [rbp+50h] BYREF

  v1 = *((_BYTE *)this + 348);
  LOBYTE(v64) = v1;
  if ( v1 )
    goto LABEL_43;
  v3 = *((_QWORD *)this + 2);
  v59 = 0LL;
  *(_QWORD *)&v58 = v3;
  v60 = 0LL;
  DWORD2(v58) = 0;
  v4 = HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  v5 = v4;
  if ( !v4 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  *v4 = v58;
  v6 = *(_OWORD **)&v59.RowPitch;
  if ( *(_QWORD *)&v59.RowPitch )
  {
    pData = v59.pData;
    v53 = v5;
    if ( v59.pData )
    {
      do
      {
        v53 += 4;
        *((_OWORD *)v53 - 1) = *pData++;
      }
      while ( pData );
      v6 = *(_OWORD **)&v59.RowPitch;
      pData = v59.pData;
    }
    v54 = 0LL;
    if ( !v6 )
      goto LABEL_71;
    do
    {
      *(_OWORD *)((char *)v5 + (_QWORD)v54 + 16) = *v54;
      ++v54;
    }
    while ( v54 != v6 );
LABEL_70:
    pData = v59.pData;
LABEL_71:
    if ( pData )
      std::_Deallocate<16,0>(pData, (v60 - (char *)pData) & 0xFFFFFFFFFFFFFFF0uLL);
    goto LABEL_5;
  }
  v7 = v59.pData;
  v8 = v5;
  if ( v59.pData )
  {
    do
    {
      v8 += 4;
      *((_OWORD *)v8 - 1) = *v7++;
    }
    while ( v7 );
    goto LABEL_70;
  }
LABEL_5:
  v9 = (char *)(v5 + 4);
  v59.pData = v5;
  *(_QWORD *)&v59.RowPitch = v5 + 4;
  v60 = (char *)(v5 + 4);
  v10 = v5[2];
  v11 = *(_QWORD *)(*(_QWORD *)v5 + 32LL);
  v12 = (*(_QWORD *)(*(_QWORD *)v5 + 40LL) - v11) >> 4;
  if ( v10 >= (unsigned int)v12 )
    goto LABEL_24;
  do
  {
    if ( *(_QWORD *)(v11 + 16LL * v10 + 8) )
    {
      v5[2] = v10;
      v13 = *(__int128 **)&v59.RowPitch;
      *(_QWORD *)&v58 = *(_QWORD *)(v11 + 16LL * v10 + 8);
      DWORD2(v58) = 0;
      if ( v60 != *(char **)&v59.RowPitch )
      {
        **(_OWORD **)&v59.RowPitch = v58;
        *(_QWORD *)&v59.RowPitch += 16LL;
LABEL_23:
        CFragmentIterator::FindFirst((CFragmentIterator *)&v59);
        v9 = *(char **)&v59.RowPitch;
        goto LABEL_24;
      }
      v14 = (__int64)(*(_QWORD *)&v59.RowPitch - (unsigned __int64)v59.pData) >> 4;
      if ( v14 == 0xFFFFFFFFFFFFFFFLL )
        ModuleFailFastForHRESULT(2147483659LL, retaddr);
      v15 = v14 + 1;
      v16 = (v60 - (char *)v59.pData) >> 4;
      v17 = v16 >> 1;
      if ( v16 > 0xFFFFFFFFFFFFFFFLL - (v16 >> 1) )
      {
        v18 = v14 + 1;
      }
      else
      {
        v18 = v17 + v16;
        if ( v17 + v16 < v15 )
          v18 = v14 + 1;
      }
      v19 = 16 * v18;
      v20 = 16 * v18;
      if ( v18 > 0xFFFFFFFFFFFFFFFLL )
        v20 = -1LL;
      v21 = std::_Allocate<16,std::_Default_allocate_traits,0>(v20);
      v24 = 16 * v14;
      v25 = (char *)v21;
      *(_OWORD *)(v24 + v21) = v58;
      v26 = *(__int128 **)&v59.RowPitch;
      v27 = (__int128 *)v59.pData;
      if ( v13 == *(__int128 **)&v59.RowPitch )
      {
        if ( v59.pData == *(void **)&v59.RowPitch )
        {
LABEL_18:
          if ( v27 )
          {
            v66 = v27;
            v29 = (void *)((v60 - (char *)v27) & 0xFFFFFFFFFFFFFFF0uLL);
            v65 = v29;
            if ( (unsigned __int64)v29 >= 0x1000 )
            {
              std::_Adjust_manually_vector_aligned(&v66, (unsigned __int64 *)&v65, v22, v23);
              v29 = v65;
              v27 = (__int128 *)v66;
            }
            operator delete(v27, (unsigned __int64)v29);
          }
          v1 = v64;
          v59.pData = v25;
          *(_QWORD *)&v59.RowPitch = &v25[16 * v15];
          v60 = &v25[v19];
          goto LABEL_23;
        }
        do
        {
          v28 = *v27++;
          v21 += 16LL;
          *(_OWORD *)(v21 - 16) = v28;
        }
        while ( v27 != v26 );
      }
      else
      {
        if ( v59.pData != v13 )
        {
          do
          {
            v55 = *v27++;
            v21 += 16LL;
            *(_OWORD *)(v21 - 16) = v55;
          }
          while ( v27 != v13 );
          v26 = *(__int128 **)&v59.RowPitch;
          v27 = (__int128 *)v59.pData;
        }
        if ( v13 == v26 )
          goto LABEL_18;
        v56 = &v25[v24 - (_QWORD)v13];
        do
        {
          *(_OWORD *)&v56[(_QWORD)v13 + 16] = *v13;
          ++v13;
        }
        while ( v13 != v26 );
      }
      v27 = (__int128 *)v59.pData;
      goto LABEL_18;
    }
    ++v10;
  }
  while ( v10 < (unsigned int)v12 );
  while ( 1 )
  {
LABEL_24:
    if ( !((v9 - (char *)v59.pData) >> 4) )
      goto LABEL_34;
    v30 = (unsigned int *)*((_QWORD *)v9 - 2);
    if ( !v30[5] )
      goto LABEL_28;
    if ( v30[6] != (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v30 + 80LL))(*(_QWORD *)v30, v30[4]) )
      break;
    v9 = *(char **)&v59.RowPitch;
LABEL_28:
    v9 -= 16;
    *(_QWORD *)&v59.RowPitch = v9;
    if ( (v9 - (char *)v59.pData) >> 4 )
    {
      ++*((_DWORD *)v9 - 2);
      v9 = *(char **)&v59.RowPitch;
      v31 = *(_QWORD *)(*(_QWORD *)&v59.RowPitch - 16LL);
      v11 = *(_QWORD *)(v31 + 32);
      v32 = *(_QWORD *)(v31 + 40);
      v33 = *(_DWORD *)(*(_QWORD *)&v59.RowPitch - 8LL);
      v12 = (v32 - v11) >> 4;
      if ( v33 < (unsigned int)v12 )
      {
        while ( !*(_QWORD *)(v11 + 16LL * v33 + 8) )
        {
          if ( ++v33 >= (unsigned int)v12 )
            goto LABEL_24;
        }
        *(_DWORD *)(*(_QWORD *)&v59.RowPitch - 8LL) = v33;
        *(_QWORD *)&v58 = *(_QWORD *)(v11 + 16LL * v33 + 8);
        DWORD2(v58) = 0;
        if ( v60 == *(char **)&v59.RowPitch )
        {
          std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
            (__int64)&v59,
            *(char **)&v59.RowPitch,
            &v58);
        }
        else
        {
          **(_OWORD **)&v59.RowPitch = v58;
          *(_QWORD *)&v59.RowPitch += 16LL;
        }
        goto LABEL_23;
      }
    }
  }
  v1 = 1;
LABEL_34:
  v34 = v59.pData;
  if ( v59.pData )
  {
    v65 = v59.pData;
    v35 = (v60 - (char *)v59.pData) & 0xFFFFFFFFFFFFFFF0uLL;
    v64 = v35;
    if ( v35 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v65, &v64, v12, v11);
      v35 = v64;
      v34 = v65;
    }
    operator delete(v34, v35);
  }
  if ( !v1 )
  {
LABEL_39:
    *((_BYTE *)this + 348) = 0;
    return 0;
  }
LABEL_43:
  v38 = *((_DWORD *)this + 16);
  v39 = 0;
  if ( !v38 )
    goto LABEL_39;
  v40 = 0LL;
  while ( 1 )
  {
    v41 = *(_QWORD *)(v40 + *((_QWORD *)this + 5));
    v42 = *(CD3DDeviceLevel1 **)(*(_QWORD *)(v41 + 16) + 80LL);
    v66 = *(void **)(v41 + 120);
    v43 = CD3DDeviceLevel1::Map(v42, (struct ID3D11Resource *)v66, 0LL, 4LL, v57, &v59);
    v36 = v43;
    if ( v43 < 0 )
      break;
    v45 = (unsigned __int8 *)v59.pData;
    if ( *((_DWORD *)this + 22) )
    {
      *(_QWORD *)&v58 = *((_QWORD *)this + 2);
      v62 = 0LL;
      DWORD2(v58) = 0;
      *(_OWORD *)v61 = 0LL;
      std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
        (__int64)v61,
        0LL,
        &v58);
      CFragmentIterator::FindFirst((CFragmentIterator *)v61);
      while ( 1 )
      {
        v47 = v61[0];
        if ( !(((char *)v61[1] - (char *)v61[0]) >> 4) )
          break;
        v45 += CRenderingTechniqueFragment::UpdateConstantBuffer(*((CRenderingTechniqueFragment **)v61[1] - 2), v45);
        CFragmentIterator::MoveNext((CFragmentIterator *)v61);
      }
      if ( v61[0] )
      {
        v65 = v61[0];
        v48 = (v62 - (unsigned __int64)v61[0]) & 0xFFFFFFFFFFFFFFF0uLL;
        v64 = v48;
        if ( v48 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v65, &v64, (__int64)v61[1], v46);
          v48 = v64;
          v47 = v65;
        }
        operator delete(v47, v48);
      }
    }
    if ( *((_DWORD *)this + 86) )
    {
      for ( i = 0; i < *((_DWORD *)this + 23); ++i )
      {
        v50 = *((_DWORD *)this + 85);
        if ( _bittest(&v50, i) )
        {
          v51 = 60LL * i;
          *(_OWORD *)v45 = *(_OWORD *)((char *)this + v51 + 128);
          *((_OWORD *)v45 + 1) = *(_OWORD *)((char *)this + v51 + 144);
          v45 += 32;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD *, void *, _QWORD))(**((_QWORD **)v42 + 80) + 120LL))(
      *((_QWORD **)v42 + 80),
      v66,
      0LL);
    ++v39;
    v40 += 8LL;
    if ( v39 >= v38 )
      goto LABEL_39;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x1FEu);
  return v36;
}
