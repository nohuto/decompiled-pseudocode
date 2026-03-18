/*
 * XREFs of ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180045368
 * Callers:
 *     ?GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z @ 0x1800452D8 (-GetConstantBuffer@CRenderingTechnique@@QEAAJPEAVCD3DDeviceLevel1@@PEAPEAUID3D11Buffer@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800437BC (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180045630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x180045828 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800473A4 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C3F08 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderingTechnique::UpdateConstantBuffers(CRenderingTechnique *this)
{
  char v1; // si
  __int64 v3; // rax
  void *pData; // rcx
  __int64 v5; // rdx
  unsigned int *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  __int64 v12; // r12
  __int64 v13; // rcx
  CD3DDeviceLevel1 *v14; // r14
  struct ID3D11Resource *v15; // rdx
  int v16; // eax
  unsigned int v17; // ecx
  _OWORD *v18; // rsi
  __int64 v19; // rax
  void *v20; // rcx
  unsigned int *v21; // r14
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v26; // ebx
  const void *v27; // rax
  unsigned int i; // r8d
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // [rsp+20h] [rbp-58h]
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  int v33; // [rsp+38h] [rbp-40h]
  D3D11_MAPPED_SUBRESOURCE v34; // [rsp+40h] [rbp-38h] BYREF
  __int64 v35; // [rsp+50h] [rbp-28h]
  void *v36[2]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v37; // [rsp+68h] [rbp-10h]
  unsigned __int64 v38; // [rsp+C0h] [rbp+48h] BYREF
  void *v39; // [rsp+C8h] [rbp+50h] BYREF
  CD3DDeviceLevel1 *v40; // [rsp+D0h] [rbp+58h]
  struct ID3D11Resource *v41; // [rsp+D8h] [rbp+60h]

  v1 = *((_BYTE *)this + 276);
  if ( !v1 )
  {
    v3 = *((_QWORD *)this + 1);
    v35 = 0LL;
    v33 = 0;
    v32 = v3;
    v34 = 0LL;
    std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
      &v34,
      0LL,
      &v32);
LABEL_3:
    CFragmentIterator::FindFirst((CFragmentIterator *)&v34);
    pData = v34.pData;
    v5 = *(_QWORD *)&v34.RowPitch;
    while ( (v5 - (__int64)pData) >> 4 )
    {
      v6 = *(unsigned int **)(v5 - 16);
      if ( v6[5] )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v6 + 80LL))(*(_QWORD *)v6, v6[4]);
        pData = v34.pData;
        if ( v6[6] != v7 )
        {
          v1 = 1;
          break;
        }
        v5 = *(_QWORD *)&v34.RowPitch;
      }
      v5 -= 16LL;
      *(_QWORD *)&v34.RowPitch = v5;
      if ( (v5 - (__int64)pData) >> 4 )
      {
        ++*(_DWORD *)(v5 - 8);
        goto LABEL_3;
      }
    }
    if ( pData )
    {
      v39 = pData;
      v38 = (v35 - (_QWORD)pData) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v38 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(&v39, &v38);
        pData = v39;
      }
      operator delete(pData);
    }
    if ( !v1 )
      goto LABEL_16;
  }
  v10 = *((_DWORD *)this + 14);
  v11 = 0;
  if ( v10 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + *((_QWORD *)this + 4));
      v14 = *(CD3DDeviceLevel1 **)(*(_QWORD *)(v13 + 16) + 80LL);
      v15 = *(struct ID3D11Resource **)(v13 + 120);
      v40 = v14;
      v41 = v15;
      v16 = CD3DDeviceLevel1::Map(v14, v15, 0, D3D11_MAP_WRITE_DISCARD, v31, &v34);
      v8 = v16;
      if ( v16 < 0 )
        break;
      v18 = v34.pData;
      if ( *((_DWORD *)this + 20) )
      {
        v19 = *((_QWORD *)this + 1);
        v37 = 0LL;
        v33 = 0;
        v32 = v19;
        *(_OWORD *)v36 = 0LL;
        std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
          v36,
          0LL,
          &v32);
        CFragmentIterator::FindFirst((CFragmentIterator *)v36);
        while ( 1 )
        {
          v20 = v36[0];
          if ( !(((char *)v36[1] - (char *)v36[0]) >> 4) )
            break;
          v21 = (unsigned int *)*((_QWORD *)v36[1] - 2);
          v22 = v21[5];
          if ( (_DWORD)v22 )
          {
            v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v21 + 80LL))(*(_QWORD *)v21, v21[4]);
            v24 = *(_QWORD *)v21;
            v25 = v21[4];
            v26 = v21[5];
            v21[6] = v23;
            v27 = (const void *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 72LL))(v24, v25);
            memcpy_0(v18, v27, v26);
            v22 = v21[5];
          }
          if ( (v22 & 0xF) != 0 )
            v22 = (unsigned int)v22 - (v22 & 0xF) + 16;
          v18 = (_OWORD *)((char *)v18 + v22);
          CFragmentIterator::MoveNext((CFragmentIterator *)v36);
        }
        if ( v36[0] )
        {
          v39 = v36[0];
          v38 = (v37 - (unsigned __int64)v36[0]) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v38 >= 0x1000 )
          {
            std::_Adjust_manually_vector_aligned(&v39, &v38);
            v20 = v39;
          }
          operator delete(v20);
        }
        v14 = v40;
      }
      if ( *((_DWORD *)this + 68) )
      {
        for ( i = 0; i < *((_DWORD *)this + 21); ++i )
        {
          v29 = *((_DWORD *)this + 67);
          if ( _bittest(&v29, i) )
          {
            v30 = 44LL * i;
            *v18 = *(_OWORD *)((char *)this + v30 + 104);
            v18[1] = *(_OWORD *)((char *)this + v30 + 120);
            v18 += 2;
          }
        }
      }
      (*(void (__fastcall **)(_QWORD *, struct ID3D11Resource *, _QWORD))(**((_QWORD **)v14 + 80) + 120LL))(
        *((_QWORD **)v14 + 80),
        v41,
        0LL);
      ++v11;
      v12 += 8LL;
      if ( v11 >= v10 )
        goto LABEL_16;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1E9u, 0LL);
  }
  else
  {
LABEL_16:
    *((_BYTE *)this + 276) = 0;
    return 0;
  }
  return v8;
}
