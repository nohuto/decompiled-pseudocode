/*
 * XREFs of ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x18000B700
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z @ 0x18000BA48 (-IsAncestorInSameSpace@CVisualTree@@QEBA_NPEBVCVisual@@0@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z @ 0x18007B0E0 (-EnsureTreeData@CVisual@@QEAAJPEBVCVisualTree@@PEAPEAVCTreeData@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Push@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z @ 0x1800AEE44 (-Push@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAAJAEBQEAVCVisual@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z @ 0x1802543D8 (-ClearResolvingFlagsFromStack@CPreComputeHelper@@IEAAXPEBVCVisualTree@@@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x180254440 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z @ 0x180254620 (-ResolveTransformParentCycle@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAVCVisual@@@Z.c)
 *     ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x180254708 (-ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z.c)
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
  struct _LIST_ENTRY *v9; // rdi
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
  unsigned int v35; // r14d
  int v36; // eax
  unsigned int v37; // ecx
  unsigned __int64 v38; // rax
  void *v39; // rdi
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  void *v44; // rdi
  HANDLE ProcessHeap; // rax
  int v46; // eax
  unsigned int v47; // ecx
  void *lpMem[2]; // [rsp+30h] [rbp-48h] BYREF
  int v49; // [rsp+90h] [rbp+18h]
  struct CVisual *v50; // [rsp+98h] [rbp+20h] BYREF

  v6 = a4;
  v49 = 0;
  v50 = a4;
  if ( a4 != *((struct CVisual **)a3 + 3) )
  {
    v8 = a5;
    while ( 1 )
    {
      v9 = 0LL;
      if ( *((_BYTE *)a3 + 32) )
      {
        v9 = (struct _LIST_ENTRY *)((char *)v6 + 328);
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
            v9 = Flink - 14;
          }
        }
      }
LABEL_5:
      lpMem[0] = v9;
      if ( v9 && v9[7].Blink >= (struct _LIST_ENTRY *)v8 )
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
            v30 = (_QWORD **)((char *)v10 + 8LL * i - (((_BYTE)v23 + 15) & 7) + v23 + 15);
          v11 = (const struct CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v30 + 192LL))(**v30);
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
        v40 = CVisual::EnsureTreeData(v6, a3, (struct CTreeData **)lpMem);
        v49 = v40;
        if ( v40 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x5Bu, 0LL);
          goto LABEL_24;
        }
        v9 = (struct _LIST_ENTRY *)lpMem[0];
      }
      if ( ((__int64)v9[1].Flink & 8) != 0 )
      {
        v42 = CPreComputeHelper::ResolveTransformParentCycle((CPreComputeHelper *)this, a3, v8, v6);
        v49 = v42;
        if ( v42 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x63u, 0LL);
          goto LABEL_24;
        }
      }
      v31 = (char)v9[1].Flink;
      if ( (v31 & 4) != 0 && v9[13].Blink == (struct _LIST_ENTRY *)v8 )
        goto LABEL_11;
      if ( v13 )
      {
        LOBYTE(v9[1].Flink) = v31 | 8;
      }
      else if ( !CVisualTree::IsAncestorInSameSpace(a3, v6, v11) )
      {
        CPreComputeHelper::InvalidateVisual(v34, v6, a3, v8);
LABEL_11:
        v12 = (struct CVisual *)*((_QWORD *)v6 + 10);
      }
      v14 = *((unsigned int *)this + 3);
      v15 = *((_DWORD *)this + 2);
      lpMem[0] = 0LL;
      if ( v15 != (_DWORD)v14 )
        goto LABEL_13;
      v35 = 2 * v14;
      if ( (unsigned __int64)(2 * v14) <= 0xFFFFFFFF )
      {
        if ( v35 <= 0x40 )
          v35 = 64;
        v36 = HrMalloc(8uLL, v35, lpMem);
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x53u, 0LL);
LABEL_74:
          v44 = lpMem[0];
          if ( lpMem[0] )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, v44);
          }
          goto LABEL_16;
        }
        v38 = 8LL * *((unsigned int *)this + 2);
        if ( v38 > 0xFFFFFFFF )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0x55u, 0LL);
          goto LABEL_74;
        }
        v39 = lpMem[0];
        memcpy_0(lpMem[0], this[3], (unsigned int)v38);
        operator delete((void *)this[3]);
        v15 = *((_DWORD *)this + 2);
        this[3] = v39;
        *((_DWORD *)this + 3) = v35;
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
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_16:
      v18 = (struct CVisual *)*((_QWORD *)a3 + 3);
      if ( v12 )
      {
        v50 = v12;
        v6 = v12;
        if ( v12 == v18 )
          break;
      }
      else
      {
        if ( v6 == v18 )
          break;
        v46 = CPreComputeHelper::ResolveTransformParentOrphan((CPreComputeHelper *)this, a3, v8, &v50);
        v49 = v46;
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x95u, 0LL);
          goto LABEL_24;
        }
        v6 = v50;
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
    v49 = 0;
  }
  if ( v19 && v21 != v6 )
    CWatermarkStack<CVisual *,64,2,10>::Push(this + 1, &v50);
LABEL_24:
  if ( v49 < 0 )
    CPreComputeHelper::ClearResolvingFlagsFromStack((CPreComputeHelper *)this, a3);
  return (unsigned int)v49;
}
