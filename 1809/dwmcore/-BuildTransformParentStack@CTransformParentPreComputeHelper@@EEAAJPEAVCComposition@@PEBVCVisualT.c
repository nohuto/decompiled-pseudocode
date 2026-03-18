/*
 * XREFs of ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180006BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x180006F0C (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x1800218E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x18006520C (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x180225990 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1802259F8 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x180225BD8 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x180225CBC (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CTransformParentPreComputeHelper::BuildTransformParentStack(
        const void **this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        unsigned __int64 a5)
{
  struct CVisual *v6; // rsi
  unsigned __int64 v8; // r12
  struct CTreeData *v9; // rdi
  _DWORD *v10; // r8
  const struct CVisual *v11; // r14
  struct CVisual *v12; // rbx
  char v13; // r15
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  struct CVisual *v18; // rax
  char v19; // r9
  int v20; // eax
  struct CVisual *v21; // rcx
  __int64 v23; // r9
  _BYTE *v24; // r10
  unsigned int v25; // ecx
  _BYTE *v26; // rax
  __int64 *v27; // r15
  __int64 v28; // r15
  unsigned int i; // eax
  _QWORD **v30; // rax
  char v31; // al
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CPreComputeHelper *v34; // rcx
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // edi
  unsigned int v38; // ecx
  SIZE_T v39; // r8
  void *v40; // r14
  unsigned __int64 v41; // rax
  int v42; // eax
  unsigned int v43; // ecx
  int v44; // r9d
  int v45; // eax
  unsigned int v46; // ecx
  struct CTreeData *v47; // [rsp+30h] [rbp-48h] BYREF
  int v48; // [rsp+90h] [rbp+18h]
  struct CVisual *v49; // [rsp+98h] [rbp+20h] BYREF

  v6 = a4;
  v48 = 0;
  v49 = a4;
  if ( a4 != *((struct CVisual **)a3 + 3) )
  {
    v8 = a5;
    while ( 1 )
    {
      v9 = 0LL;
      if ( *((_BYTE *)a3 + 32) )
      {
        v9 = (struct CVisual *)((char *)v6 + 328);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v6);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( (const struct CVisualTree *)Flink[2].Flink != a3 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_5;
            }
            v9 = (struct CTreeData *)&Flink[-14];
          }
        }
      }
LABEL_5:
      v47 = v9;
      if ( v9 && *((_QWORD *)v9 + 15) >= v8 )
      {
        v19 = 0;
        goto LABEL_19;
      }
      v10 = (_DWORD *)*((_QWORD *)v6 + 28);
      v11 = 0LL;
      if ( (*v10 & 0x800000) != 0 )
      {
        v23 = (unsigned int)v10[1];
        v24 = v10 + 2;
        v25 = 0;
        if ( (_DWORD)v23 )
        {
          v26 = v10 + 2;
          do
          {
            if ( *v26 == 9 )
              break;
            ++v25;
            ++v26;
          }
          while ( v25 < (unsigned int)v23 );
        }
        if ( v25 >= (unsigned int)v23 )
          v27 = 0LL;
        else
          v27 = (__int64 *)((char *)v10 + v23 + 8LL * v25 - (((_BYTE)v23 + 15) & 7) + 15);
        v28 = *v27;
        if ( v28 )
        {
          for ( i = 0; i < (unsigned int)v23; ++v24 )
          {
            if ( *v24 == 9 )
              break;
            ++i;
          }
          if ( i >= (unsigned int)v23 )
            v30 = 0LL;
          else
            v30 = (_QWORD **)((char *)v10 + v23 + 8LL * i - (((_BYTE)v23 + 15) & 7) + 15);
          v11 = (const struct CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v30 + 152LL))(**v30);
        }
        v12 = v11;
        if ( v28 )
        {
          v13 = *(_BYTE *)(v28 + 8);
          goto LABEL_10;
        }
      }
      else
      {
        v12 = 0LL;
      }
      v13 = 0;
LABEL_10:
      if ( !v11 )
        goto LABEL_11;
      if ( !v9 )
      {
        v35 = CVisual::EnsureTreeData(v6, a3, &v47);
        v48 = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x5Fu);
          goto LABEL_24;
        }
        v9 = v47;
      }
      if ( (*((_BYTE *)v9 + 16) & 8) != 0 )
      {
        v42 = CPreComputeHelper::ResolveTransformParentCycle((CPreComputeHelper *)this, a3, v8, v6);
        v48 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x67u);
          goto LABEL_24;
        }
      }
      v31 = *((_BYTE *)v9 + 16);
      if ( (v31 & 4) != 0 && *((_QWORD *)v9 + 27) == v8 )
        goto LABEL_11;
      if ( v13 )
      {
        *((_BYTE *)v9 + 16) = v31 | 8;
      }
      else if ( !CVisualTree::IsAncestorInSameSpace(a3, v6, v11) )
      {
        CPreComputeHelper::InvalidateVisual(v34, v6, a3, v8);
LABEL_11:
        v12 = (struct CVisual *)*((_QWORD *)v6 + 10);
      }
      v14 = *((unsigned int *)this + 3);
      v15 = *((_DWORD *)this + 2);
      if ( v15 != (_DWORD)v14 )
        goto LABEL_13;
      v37 = 2 * v14;
      if ( (unsigned __int64)(2 * v14) > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0x4Cu);
        goto LABEL_16;
      }
      if ( v37 <= 0x40 )
        v37 = 64;
      v38 = v37;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v37 <= 8 )
      {
        v44 = -2147024809;
        goto LABEL_79;
      }
      v39 = 8LL * v37;
      if ( !v39 )
        v39 = 1LL;
      v40 = HeapAlloc(WPF::g_processHeap, 0, v39);
      if ( !v40 )
      {
        v44 = -2147024882;
LABEL_79:
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v44, 0x54u);
        goto LABEL_16;
      }
      v41 = 8LL * *((unsigned int *)this + 2);
      if ( v41 <= 0xFFFFFFFF )
      {
        memcpy_0(v40, this[3], (unsigned int)v41);
        WPF::ProcessHeapImpl::Free((void *)this[3]);
        v15 = *((_DWORD *)this + 2);
        this[3] = v40;
        *((_DWORD *)this + 3) = v37;
LABEL_13:
        *((_QWORD *)this[3] + v15) = v6;
        v16 = *((_DWORD *)this + 8);
        v17 = *((_DWORD *)this + 2) + 1;
        *((_DWORD *)this + 2) = v17;
        if ( v16 <= v17 )
          v16 = v17;
        *((_DWORD *)this + 8) = v16;
        goto LABEL_16;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, -2147024362, 0x56u);
      HeapFree(WPF::g_processHeap, 0, v40);
LABEL_16:
      v18 = (struct CVisual *)*((_QWORD *)a3 + 3);
      if ( v12 )
      {
        v49 = v12;
        v6 = v12;
        if ( v12 == v18 )
          break;
      }
      else
      {
        if ( v6 == v18 )
          break;
        v45 = CPreComputeHelper::ResolveTransformParentOrphan((CPreComputeHelper *)this, a3, v8, &v49);
        v48 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x99u);
          goto LABEL_24;
        }
        v6 = v49;
      }
    }
  }
  v19 = 1;
LABEL_19:
  v20 = *((_DWORD *)this + 2);
  v21 = 0LL;
  if ( v20 )
  {
    v21 = (struct CVisual *)*((_QWORD *)this[3] + (unsigned int)(v20 - 1));
    v48 = 0;
  }
  if ( v19 && v21 != v6 )
    CWatermarkStack<CVisual *,64,2,10>::Push(this + 1, &v49);
LABEL_24:
  if ( v48 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack((CPreComputeHelper *)this, a3);
  return (unsigned int)v48;
}
