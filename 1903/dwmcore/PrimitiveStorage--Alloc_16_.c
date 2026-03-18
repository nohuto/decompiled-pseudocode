/*
 * XREFs of PrimitiveStorage::Alloc_16_ @ 0x18009B3D4
 * Callers:
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180078B84 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18009AE40 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?CreateInstanced@CDrawListPrimitive@@SAJAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@IV?$span@$$CBG$0?0@gsl@@V?$span@UInstance_Pos4_QRot_ColorDW_Size2@@$0?0@4@AEBUD2D_VECTOR_2F@@_NPEAPEAV1@@Z @ 0x1801BC0C0 (-CreateInstanced@CDrawListPrimitive@@SAJAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x18004D22C (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x1800C2BEC (--0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800E47B4 (--0CThreadContext@@AEAA@XZ.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::Alloc_16_(
        struct CDrawListPrimitive::GeometryCounts *a1)
{
  PrimitiveStorage::CInlineStorageBase *v1; // rbx
  int v3; // eax
  CThreadContext *Value; // rsi
  int v5; // ecx
  _OWORD *v6; // r10
  __int64 v7; // r9
  __int128 v8; // xmm0
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  PrimitiveStorage::CInlineStorageBase *result; // rax
  struct CObjectCache *ObjectCache; // rax
  unsigned int v16; // r8d
  PrimitiveStorage::CInlineStorageBase *v17; // rsi
  int v18; // edx
  PrimitiveStorage::CInlineStorageBase *v19; // rax
  unsigned int v20; // r8d
  PrimitiveStorage::CInlineStorageBase *v21; // rsi
  unsigned int v22; // ecx
  CThreadContext *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int128 v26; // [rsp+30h] [rbp-50h]
  __int128 v27; // [rsp+30h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-40h]
  void *retaddr; // [rsp+88h] [rbp+8h]

  v1 = 0LL;
  if ( *(_DWORD *)a1 )
  {
    v3 = *((_DWORD *)a1 + 2);
    if ( v3 == 2 && !*((_DWORD *)a1 + 4) )
    {
      if ( *(_DWORD *)a1 <= 4u && *((_DWORD *)a1 + 3) <= 6u )
      {
        Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
        if ( !Value )
        {
          v23 = (CThreadContext *)operator new(0x138uLL);
          if ( v23 )
            Value = CThreadContext::CThreadContext(v23);
          else
            Value = 0LL;
          if ( !Value )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, 0x8007000E, 0x42u, 0LL);
            ModuleFailFastForHRESULT(2147942414LL, retaddr, v25);
          }
          TlsSetValue(CThreadContext::s_dwTlsIndex, Value);
        }
        v5 = *((_DWORD *)Value + 27);
        v6 = 0LL;
        if ( v5 )
        {
          v6 = (_OWORD *)*((_QWORD *)Value + 14);
          *((_QWORD *)Value + 14) = *(_QWORD *)v6;
          *((_DWORD *)Value + 27) = v5 - 1;
        }
        if ( v6 || (v6 = DefaultHeap::Alloc(0x1A8uLL)) != 0LL )
        {
          v7 = *(unsigned int *)a1;
          v8 = *(_OWORD *)a1;
          v1 = (PrimitiveStorage::CInlineStorageBase *)v6;
          v9 = *((_DWORD *)a1 + 2) + 2;
          *(_QWORD *)&v26 = (char *)v6
                          + (((((_BYTE)v6 + 104) & 0xF) + 15) & 0x10)
                          - (unsigned __int64)(((_BYTE)v6 + 104) & 0xF)
                          + 104;
          *((_QWORD *)&v26 + 1) = v26 + (unsigned int)(8 * v9 * *(_DWORD *)a1);
          v10 = (unsigned int)(8 * v9 * *((_DWORD *)a1 + 1)) + *((_QWORD *)&v26 + 1);
          v11 = *((unsigned int *)a1 + 3);
          ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
          *(_OWORD *)((char *)v6 + 8) = v8;
          v12 = v10 + 8 * v7;
          *(_QWORD *)&v28 = v10;
          v13 = v12 + 2 * v11;
          *((_QWORD *)&v28 + 1) = v12;
          LODWORD(v11) = *((_DWORD *)a1 + 4);
          v6[2] = v26;
          *((_DWORD *)v6 + 6) = v11;
          v6[3] = v28;
          *(_QWORD *)v6 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
          *((_QWORD *)v6 + 8) = v13;
        }
        return v1;
      }
      if ( *(_DWORD *)a1 <= 8u && *((_DWORD *)a1 + 3) <= 0x1Eu )
      {
        ObjectCache = CThreadContext::GetObjectCache(a1);
        v17 = 0LL;
        v18 = *((_DWORD *)ObjectCache + 1);
        if ( v18 )
        {
          v17 = (PrimitiveStorage::CInlineStorageBase *)*((_QWORD *)ObjectCache + 1);
          *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v17;
          *((_DWORD *)ObjectCache + 1) = v18 - 1;
        }
        if ( v17 || (v17 = (PrimitiveStorage::CInlineStorageBase *)DefaultHeap::Alloc(0x2F8uLL)) != 0LL )
        {
          PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v17, a1, v16);
          v1 = v17;
          *(_QWORD *)v17 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
        }
        return v1;
      }
    }
    v19 = (PrimitiveStorage::CInlineStorageBase *)DefaultHeap::Alloc(
                                                    (unsigned int)(2
                                                                 * (*((_DWORD *)a1 + 3)
                                                                  + 4
                                                                  * (*(_DWORD *)a1 * (v3 + 3)
                                                                   + *((_DWORD *)a1 + 1) * (v3 + 2)
                                                                   + 6 * *((_DWORD *)a1 + 4)))
                                                                 + 15)
                                                  + 104LL);
    v21 = v19;
    if ( !v19 )
      return 0LL;
    PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v19, a1, v20);
    *(_QWORD *)v21 = &PrimitiveStorage::CDynamicInlineStorage::`vftable';
    return v21;
  }
  else
  {
    result = (PrimitiveStorage::CInlineStorageBase *)DefaultHeap::Alloc(0x68uLL);
    if ( !result )
      return v1;
    v22 = *((_DWORD *)a1 + 2);
    ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
    *((_QWORD *)&v27 + 1) = v22;
    *((_OWORD *)result + 2) = 0LL;
    *(_QWORD *)&v27 = 0LL;
    *((_OWORD *)result + 3) = 0LL;
    *(_QWORD *)result = &PrimitiveStorage::CEmptyStorage::`vftable';
    *(_OWORD *)((char *)result + 8) = v27;
    *((_DWORD *)result + 6) = 0;
    *((_QWORD *)result + 8) = 0LL;
  }
  return result;
}
