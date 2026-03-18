/*
 * XREFs of PrimitiveStorage::Alloc_16_ @ 0x1800AD61C
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x1800AC260 (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 *     ?Create@CDrawListPrimitive@@SAJ_NAEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBV?$StridedSpan@$$CBUVertexAAFixup_UVxN@@@@IV?$span@G$0?0@gsl@@AEBUD2D_VECTOR_2F@@0PEAPEAV1@@Z @ 0x180187518 (-Create@CDrawListPrimitive@@SAJ_NAEBV-$StridedSpan@$$CBU-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AE.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z @ 0x180066480 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCDrawListPrimitive8@@@Z.c)
 *     ??0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z @ 0x1800AA678 (--0CInlineStorageBase@PrimitiveStorage@@QEAA@AEBUGeometryCounts@CDrawListPrimitive@@I@Z.c)
 *     ?GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z @ 0x1800B3C40 (-GetCurrent@CThreadContext@@SAJPEAPEAV1@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

PrimitiveStorage::CInlineStorageBase *__fastcall PrimitiveStorage::Alloc_16_(
        struct CDrawListPrimitive::GeometryCounts *a1)
{
  PrimitiveStorage::CInlineStorageBase *v2; // rbx
  struct CDrawListPrimitive8 *v3; // rcx
  int v4; // eax
  int Current; // eax
  struct CThreadContext *v6; // rcx
  char *v7; // r10
  int v8; // edx
  __int64 v9; // r9
  int v10; // r8d
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int128 v13; // xmm1
  PrimitiveStorage::CInlineStorageBase *v15; // rax
  char *v16; // rdi
  void **v17; // rax
  unsigned int v18; // ecx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  struct CObjectCache *ObjectCache; // rax
  PrimitiveStorage::CInlineStorageBase *v22; // rdi
  int v23; // edx
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  __int128 v25; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+58h] [rbp+8h]
  struct CThreadContext *v27; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = (struct CDrawListPrimitive8 *)*((unsigned int *)a1 + 2);
  if ( !(_DWORD)v3 )
  {
    v16 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x68uLL);
    if ( v16 )
    {
      memset_0(&v24, 0, 0x20uLL);
      v18 = *((_DWORD *)a1 + 1);
      v17 = &PrimitiveStorage::CEmptyStorage::`vftable';
      v19 = v25;
      ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
      *((_QWORD *)v16 + 1) = __PAIR64__(v18, 0);
      v20 = v24;
      *((_DWORD *)v16 + 4) = 0;
      *(_OWORD *)(v16 + 24) = v20;
      *(_OWORD *)(v16 + 40) = v19;
      goto LABEL_14;
    }
    return 0LL;
  }
  v4 = *((_DWORD *)a1 + 1);
  if ( v4 == 2 )
  {
    if ( *(_DWORD *)a1 <= 4u && (unsigned int)v3 <= 6 )
    {
      Current = CThreadContext::GetCurrent(&v27);
      if ( Current < 0 )
        ModuleFailFastForHRESULT((unsigned int)Current, retaddr);
      v6 = v27;
      v7 = 0LL;
      v8 = *((_DWORD *)v27 + 23);
      if ( v8 )
      {
        v7 = (char *)*((_QWORD *)v27 + 12);
        *((_QWORD *)v27 + 12) = *(_QWORD *)v7;
        *((_DWORD *)v6 + 23) = v8 - 1;
      }
      if ( v7 || (v7 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x1A8uLL)) != 0LL )
      {
        v9 = *(unsigned int *)a1;
        v10 = *((_DWORD *)a1 + 1) + 2;
        *((_QWORD *)v7 + 1) = *(_QWORD *)a1;
        v2 = (PrimitiveStorage::CInlineStorageBase *)v7;
        v11 = (unsigned int)(8 * v9 * v10);
        *(_QWORD *)&v24 = &v7[(((((_BYTE)v7 + 104) & 0xF) + 15) & 0x10)
                            - (unsigned __int64)(((_BYTE)v7 + 104) & 0xF)
                            + 104];
        v12 = (((((_BYTE)v11 + (_BYTE)v24) & 0xF) + 15) & 0x10)
            - (unsigned __int64)(((_BYTE)v11 + (_BYTE)v24) & 0xF)
            + v11
            + v24;
        *((_QWORD *)&v24 + 1) = v12;
        *(_OWORD *)(v7 + 24) = v24;
        *(_QWORD *)&v25 = (((((_BYTE)v12 + (_BYTE)v11) & 0xF) + 15) & 0x10)
                        - (unsigned __int64)(((_BYTE)v12 + (_BYTE)v11) & 0xF)
                        + v12
                        + v11;
        ++CHWDrawListEngineMetrics::s_cDrawListPrimitives;
        *((_QWORD *)&v25 + 1) = (((((_BYTE)v25 + 8 * (_BYTE)v9) & 0xF) + 15) & 0x10)
                              - (unsigned __int64)(((_BYTE)v25 + 8 * (_BYTE)v9) & 0xF)
                              + v25
                              + 8 * v9;
        v13 = v25;
        *((_DWORD *)v7 + 4) = *((_DWORD *)a1 + 2);
        *(_QWORD *)v7 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vftable';
        *(_OWORD *)(v7 + 40) = v13;
      }
      return v2;
    }
    if ( *(_DWORD *)a1 <= 8u && (unsigned int)v3 <= 0x1E )
    {
      ObjectCache = CThreadContext::GetObjectCache(v3);
      v22 = 0LL;
      v23 = *((_DWORD *)ObjectCache + 1);
      if ( v23 )
      {
        v22 = (PrimitiveStorage::CInlineStorageBase *)*((_QWORD *)ObjectCache + 1);
        *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v22;
        *((_DWORD *)ObjectCache + 1) = v23 - 1;
      }
      if ( v22 || (v22 = (PrimitiveStorage::CInlineStorageBase *)HeapAlloc(WPF::g_processHeap, 0, 0x2F8uLL)) != 0LL )
      {
        PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v22, a1);
        v2 = v22;
        *(_QWORD *)v22 = &PrimitiveStorage::CCachableStorage<CDrawListPrimitive8,16>::`vftable';
      }
      return v2;
    }
  }
  v15 = (PrimitiveStorage::CInlineStorageBase *)HeapAlloc(
                                                  WPF::g_processHeap,
                                                  0,
                                                  (unsigned int)(*(_DWORD *)a1 * (16 * v4 + 40) + 2 * (_DWORD)v3 + 15)
                                                + 104LL);
  v16 = (char *)v15;
  if ( !v15 )
    return 0LL;
  PrimitiveStorage::CInlineStorageBase::CInlineStorageBase(v15, a1);
  v17 = &PrimitiveStorage::CDynamicInlineStorage::`vftable';
LABEL_14:
  *(_QWORD *)v16 = v17;
  return (PrimitiveStorage::CInlineStorageBase *)v16;
}
