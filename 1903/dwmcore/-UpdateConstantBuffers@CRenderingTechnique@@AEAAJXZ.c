/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180037368
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x1800372D8 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800357C0 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180037630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180037828 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x180038FD4 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C42E8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this)
{
  char v1; // si
  __int64 v3; // rax
  void *pData; // rcx
  __int64 v5; // rdx
  unsigned int *v6; // rbx
  int v7; // eax
  unsigned __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned int v11; // r13d
  unsigned int v12; // r15d
  __int64 v13; // r12
  __int64 v14; // rcx
  CD3DDeviceLevel1 *v15; // r14
  struct ID3D11Resource *v16; // rdx
  int v17; // eax
  unsigned int v18; // ecx
  _OWORD *v19; // rsi
  __int64 v20; // rax
  void *v21; // rcx
  unsigned int *v22; // r14
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned int v27; // ebx
  const void *v28; // rax
  unsigned __int64 v29; // rdx
  unsigned int i; // r8d
  int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  int v35; // [rsp+38h] [rbp-40h]
  D3D11_MAPPED_SUBRESOURCE v36; // [rsp+40h] [rbp-38h] BYREF
  __int64 v37; // [rsp+50h] [rbp-28h]
  void *v38[2]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v39; // [rsp+68h] [rbp-10h]
  unsigned __int64 v40; // [rsp+C0h] [rbp+48h] BYREF
  void *v41; // [rsp+C8h] [rbp+50h] BYREF
  CD3DDeviceLevel1 *v42; // [rsp+D0h] [rbp+58h]
  struct ID3D11Resource *v43; // [rsp+D8h] [rbp+60h]

  v1 = *((_BYTE *)this + 276);
  if ( !v1 )
  {
    v3 = *((_QWORD *)this + 1);
    v37 = 0LL;
    v35 = 0;
    v34 = v3;
    v36 = 0LL;
    std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
      &v36,
      0LL,
      &v34);
LABEL_3:
    CFragmentIterator::FindFirst((CFragmentIterator *)&v36);
    pData = v36.pData;
    v5 = *(_QWORD *)&v36.RowPitch;
    while ( (v5 - (__int64)pData) >> 4 )
    {
      v6 = *(unsigned int **)(v5 - 16);
      if ( v6[5] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v6 + 80LL))(*(_QWORD *)v6, v6[4]);
        pData = v36.pData;
        if ( v6[6] != v7 )
        {
          v1 = 1;
          break;
        }
        v5 = *(_QWORD *)&v36.RowPitch;
      }
      v5 -= 16LL;
      *(_QWORD *)&v36.RowPitch = v5;
      if ( (v5 - (__int64)pData) >> 4 )
      {
        ++*(_DWORD *)(v5 - 8);
        goto LABEL_3;
      }
    }
    if ( pData )
    {
      v41 = pData;
      v8 = (v37 - (_QWORD)pData) & 0xFFFFFFFFFFFFFFF0uLL;
      v40 = v8;
      if ( v8 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v41, &v40);
        v8 = v40;
        pData = v41;
      }
      operator delete(pData, v8);
    }
    if ( !v1 )
      goto LABEL_16;
  }
  v11 = *((_DWORD *)this + 14);
  v12 = 0;
  if ( v11 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + *((_QWORD *)this + 4));
      v15 = *(CD3DDeviceLevel1 **)(*(_QWORD *)(v14 + 16) + 80LL);
      v16 = *(struct ID3D11Resource **)(v14 + 120);
      v42 = v15;
      v43 = v16;
      v17 = CD3DDeviceLevel1::Map(v15, v16, 0, D3D11_MAP_WRITE_DISCARD, v33, &v36);
      v9 = v17;
      if ( v17 < 0 )
        break;
      v19 = v36.pData;
      if ( *((_DWORD *)this + 20) )
      {
        v20 = *((_QWORD *)this + 1);
        v39 = 0LL;
        v35 = 0;
        v34 = v20;
        *(_OWORD *)v38 = 0LL;
        std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
          v38,
          0LL,
          &v34);
        CFragmentIterator::FindFirst((CFragmentIterator *)v38);
        while ( 1 )
        {
          v21 = v38[0];
          if ( !(((char *)v38[1] - (char *)v38[0]) >> 4) )
            break;
          v22 = (unsigned int *)*((_QWORD *)v38[1] - 2);
          v23 = v22[5];
          if ( (_DWORD)v23 )
          {
            v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v22 + 80LL))(*(_QWORD *)v22, v22[4]);
            v25 = *(_QWORD *)v22;
            v26 = v22[4];
            v27 = v22[5];
            v22[6] = v24;
            v28 = (const void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 72LL))(v25, v26);
            memcpy_0(v19, v28, v27);
            v23 = v22[5];
          }
          if ( (v23 & 0xF) != 0 )
            v23 = (unsigned int)v23 - (v23 & 0xF) + 16;
          v19 = (_OWORD *)((char *)v19 + v23);
          CFragmentIterator::MoveNext((CFragmentIterator *)v38);
        }
        if ( v38[0] )
        {
          v41 = v38[0];
          v29 = (v39 - (unsigned __int64)v38[0]) & 0xFFFFFFFFFFFFFFF0uLL;
          v40 = v29;
          if ( v29 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v41, &v40);
            v29 = v40;
            v21 = v41;
          }
          operator delete(v21, v29);
        }
        v15 = v42;
      }
      if ( *((_DWORD *)this + 68) )
      {
        for ( i = 0; i < *((_DWORD *)this + 21); ++i )
        {
          v31 = *((_DWORD *)this + 67);
          if ( _bittest(&v31, i) )
          {
            v32 = 44LL * i;
            *v19 = *(_OWORD *)((char *)this + v32 + 104);
            v19[1] = *(_OWORD *)((char *)this + v32 + 120);
            v19 += 2;
          }
        }
      }
      (*(void (__fastcall **)(_QWORD *, struct ID3D11Resource *, _QWORD))(**((_QWORD **)v15 + 80) + 120LL))(
        *((_QWORD **)v15 + 80),
        v43,
        0LL);
      ++v12;
      v13 += 8LL;
      if ( v12 >= v11 )
        goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1E9u, 0LL);
  }
  else
  {
LABEL_16:
    *((_BYTE *)this + 276) = 0;
    return 0;
  }
  return v9;
}
