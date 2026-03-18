/*
 * XREFs of ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800A61E4
 * Callers:
 *     ?ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ @ 0x1800CBF94 (-ReplaceMegaRectsWithClippedRects@CMegaRectCollection@@QEAAJXZ.c)
 * Callees:
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800A6674 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A683C (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800A6D6C (-EstimateSizeSubtract@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180161868 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 */

__int64 __fastcall CMegaRectCollection::OccludeRegions(CMegaRectCollection *this)
{
  __int64 v1; // rdx
  unsigned int v2; // edi
  __int64 *****v3; // rsi
  int v5; // ebx
  __int64 i; // rbp
  __int64 ****v7; // rax
  unsigned int v8; // r8d
  __int64 ***v9; // rax
  __int64 *v10; // r14
  __int64 j; // r15
  int v12; // edi
  bool v13; // al
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 ****v17; // rax
  const struct FastRegion::Internal::CRgnData *v18; // r13
  const struct FastRegion::Internal::CRgnData **v19; // rax
  const struct FastRegion::Internal::CRgnData *v20; // rbx
  int v21; // eax
  SIZE_T v22; // r8
  FastRegion::Internal::CRgnData *v23; // rcx
  int v24; // eax
  unsigned int v25; // ecx
  FastRegion::Internal::CRgnData *v27; // rax
  unsigned int v28; // [rsp+30h] [rbp-168h]
  FastRegion::CRegion *v29; // [rsp+38h] [rbp-160h]
  const struct FastRegion::Internal::CRgnData **v30; // [rsp+40h] [rbp-158h]
  int v31; // [rsp+50h] [rbp-148h] BYREF
  void *v32; // [rsp+58h] [rbp-140h]
  _BYTE v33[256]; // [rsp+60h] [rbp-138h] BYREF

  v1 = *((_QWORD *)this + 3);
  v2 = 0;
  v3 = *(__int64 ******)this;
  v5 = 0;
  for ( i = v1; i != v1 + *((_QWORD *)this + 4); ++i )
  {
    if ( v3 )
      v7 = *v3;
    else
      v7 = 0LL;
    if ( v7[1][i & ((unsigned __int64)v7[2] - 1)][1] )
    {
      v8 = 0;
      v9 = 0LL;
      v28 = 0;
      if ( v3 && *v3 )
        v9 = **v3;
      v10 = 0LL;
      if ( v9 && *v9 )
        v10 = **v9;
      for ( j = i + 1; ; ++j )
      {
        v1 = *((_QWORD *)this + 3);
        v12 = v2 | 1;
        v13 = j != v1 + *((_QWORD *)this + 4) && v8 < CCommonRegistryData::m_dwMegaRectSearchCount;
        v2 = v12 & 0xFFFFFFFE;
        if ( !v13 )
          break;
        if ( v10 )
          v14 = *v10;
        else
          v14 = 0LL;
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8 * (j & (*(_QWORD *)(v14 + 16) - 1LL))) + 8LL) )
        {
          if ( v10 )
            v15 = *v10;
          else
            v15 = 0LL;
          v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8 * (j & (*(_QWORD *)(v15 + 16) - 1LL)));
          if ( v3 )
            v17 = *v3;
          else
            v17 = 0LL;
          v30 = *(const struct FastRegion::Internal::CRgnData ***)(v16 + 8);
          v18 = *v30;
          v19 = (const struct FastRegion::Internal::CRgnData **)v17[1][i & ((unsigned __int64)v17[2] - 1)][1];
          v29 = (FastRegion::CRegion *)v19;
          if ( *(_DWORD *)*v30 && (v20 = *v19, *(_DWORD *)*v19) )
          {
            v21 = FastRegion::Internal::CRgnData::EstimateSizeSubtract(*v19, v18);
            v22 = v21;
            v23 = (FastRegion::Internal::CRgnData *)v33;
            v32 = v33;
            v31 = v21;
            if ( (unsigned __int64)v21 > 0x100 )
            {
              if ( !v21 )
                v22 = 1LL;
              v27 = (FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v22);
              v23 = v27;
              if ( !v27 )
              {
                FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v31);
                v5 = -2147024882;
LABEL_45:
                MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v5, 0x20Eu);
                return (unsigned int)v5;
              }
              v32 = v27;
              v18 = *v30;
              v20 = *(const struct FastRegion::Internal::CRgnData **)v29;
            }
            FastRegion::Internal::CRgnData::Subtract(v23, v20, v18);
            v24 = FastRegion::CRegion::SaveResult(v29, (struct FastRegion::Internal::CWorkBuffer *)&v31);
            v25 = (unsigned int)v32;
            v5 = v24;
            if ( v33 != v32 )
              WPF::ProcessHeapImpl::Free(v32);
            if ( v5 < 0 )
              goto LABEL_45;
            v8 = v28;
          }
          else
          {
            v5 = 0;
          }
        }
        v28 = ++v8;
      }
    }
  }
  return (unsigned int)v5;
}
