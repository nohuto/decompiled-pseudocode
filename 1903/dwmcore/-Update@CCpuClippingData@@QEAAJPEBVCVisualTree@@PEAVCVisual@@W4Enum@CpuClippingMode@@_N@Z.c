/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18006D9E0
 * Callers:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800176BC (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180063A50 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x18006DFA0 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCpuClippingData::Update(int *a1, __int64 a2, _QWORD *a3, int a4, char a5)
{
  int v5; // r14d
  bool v9; // r12
  char v10; // r15
  struct _LIST_ENTRY **v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r8
  _DWORD *v14; // r8
  __int64 v15; // r10
  struct _LIST_ENTRY **v16; // rdi
  int v17; // r9d
  unsigned int v18; // ebx
  __int64 v20; // r14
  _DWORD *v21; // rax
  bool v22; // r9
  int v23; // edx
  int v24; // r8d
  unsigned __int64 v25; // rcx
  int v26; // edx
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rax
  _BYTE *v30; // rdx
  __int64 i; // rcx
  _QWORD **v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v36; // rax
  __int64 v37; // r8
  CVisual *v38; // r11
  struct _LIST_ENTRY *v39; // rdx
  unsigned __int64 v40; // r8
  struct _LIST_ENTRY *v41; // rax
  struct _LIST_ENTRY **p_Blink; // rcx
  struct _LIST_ENTRY *v43; // rax
  __int64 v44; // rax
  _BYTE *v45; // rdx
  __int64 j; // rcx
  _QWORD **v47; // rcx
  _QWORD *v48; // rcx
  unsigned __int64 v49; // rax
  unsigned int v50; // ecx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v53; // ecx
  void *retaddr; // [rsp+88h] [rbp+0h]
  struct _LIST_ENTRY *v55; // [rsp+90h] [rbp+8h]
  unsigned __int64 v56; // [rsp+98h] [rbp+10h]
  bool v57; // [rsp+A8h] [rbp+20h]

  v5 = a4;
  v57 = a4 == 2;
  v9 = *a1 == 0;
  v10 = 0;
  v11 = 0LL;
  if ( *(_QWORD **)(a2 + 24) == a3 )
    goto LABEL_55;
  v12 = a3[10];
  v13 = 0LL;
  if ( *(_BYTE *)(a2 + 32) )
  {
    v13 = (_QWORD *)(v12 + 328);
  }
  else
  {
    v28 = *(_QWORD *)(v12 + 224);
    if ( *(int *)v28 < 0 )
    {
      v29 = *(unsigned int *)(v28 + 4);
      v30 = (_BYTE *)(v28 + 8);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v29; ++v30 )
      {
        if ( *v30 == 1 )
          break;
        i = (unsigned int)(i + 1);
      }
      v32 = (unsigned int)i >= (unsigned int)v29 ? 0LL : (_QWORD **)(v28 + v29 + 15 + 8 * i - (((_BYTE)v29 + 15) & 7));
      v33 = *v32;
      if ( v33 )
      {
        v34 = (_QWORD *)*v33;
        if ( (_QWORD *)*v33 != v33 )
        {
          while ( v34[4] != a2 )
          {
            v34 = (_QWORD *)*v34;
            if ( v34 == v33 )
              goto LABEL_4;
          }
          v13 = v34 - 28;
        }
      }
    }
  }
LABEL_4:
  v11 = (struct _LIST_ENTRY **)(v13 + 17);
  if ( *((_DWORD *)v13 + 34) == 5 )
  {
LABEL_55:
    if ( v5 <= 3 )
      v5 = 3;
  }
  v14 = (_DWORD *)a3[28];
  if ( (*v14 & 0x800000) == 0 )
    goto LABEL_6;
  v44 = (unsigned int)v14[1];
  v45 = v14 + 2;
  for ( j = 0LL; (unsigned int)j < (unsigned int)v44; ++v45 )
  {
    if ( *v45 == 9 )
      break;
    j = (unsigned int)(j + 1);
  }
  v47 = (unsigned int)j >= (unsigned int)v44
      ? 0LL
      : (_QWORD **)((char *)v14 + 8 * j - (((_BYTE)v44 + 15) & 7) + v44 + 15);
  v48 = *v47;
  if ( v48 )
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v48 + 192LL))(*v48);
  else
LABEL_6:
    v15 = 0LL;
  v16 = v11;
  if ( v15 )
  {
    v38 = (CVisual *)a3[10];
    v39 = 0LL;
    v40 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    if ( v38 )
    {
      while ( a3 != *(_QWORD **)(a2 + 24) )
      {
        if ( *(_BYTE *)(a2 + 32) )
        {
          v41 = (struct _LIST_ENTRY *)((char *)v38 + 328);
        }
        else
        {
          TreeDataListHead = CVisual::GetTreeDataListHead(v38);
          if ( !TreeDataListHead || (Flink = TreeDataListHead->Flink, TreeDataListHead->Flink == TreeDataListHead) )
          {
LABEL_117:
            v41 = 0LL;
          }
          else
          {
            while ( Flink[2].Flink != (struct _LIST_ENTRY *)a2 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_117;
            }
            v41 = Flink - 14;
          }
          v40 = v56;
          v39 = v55;
        }
        p_Blink = &v41[8].Blink;
        if ( v38 == (CVisual *)v15 )
        {
          v16 = &v41[8].Blink;
          break;
        }
        if ( (unsigned int)(*(_DWORD *)p_Blink - 1) > 1 )
        {
          if ( v5 <= 3 )
            v5 = 3;
          v49 = *((_QWORD *)a1 + 8);
          goto LABEL_91;
        }
        v43 = v41[9].Flink;
        if ( v39 > v43 )
          v43 = v39;
        v39 = v43;
        v55 = v43;
        if ( *((_QWORD *)v38 + 31) )
        {
          if ( v40 <= (unsigned __int64)p_Blink[4] )
            v40 = (unsigned __int64)p_Blink[4];
          v56 = v40;
        }
        v38 = (CVisual *)*((_QWORD *)v38 + 10);
        if ( !v38 )
          break;
      }
    }
    v49 = *((_QWORD *)a1 + 8);
    if ( (unsigned __int64)v39 > v49 )
      v9 = 1;
LABEL_91:
    if ( v40 > v49 )
      *((_QWORD *)a1 + 5) = 0LL;
  }
  v17 = *a1;
  if ( v5 > *a1 )
    v9 = 1;
  if ( !*((_QWORD *)a1 + 5) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 5) = *(_QWORD *)(a3[2] + 384LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 7) = *(_QWORD *)(a3[2] + 384LL);
  }
  if ( !*((_QWORD *)a1 + 6) )
  {
    v9 = 1;
    v10 = 1;
    *((_QWORD *)a1 + 6) = *(_QWORD *)(a3[2] + 384LL);
  }
  if ( v9 )
  {
    v27 = CCpuClippingData::CalcMode(a3, (unsigned int)v5, v57);
    v17 = *a1;
    if ( *a1 != v27 )
    {
      *a1 = v27;
      v10 = 1;
      v17 = v27;
      *((_QWORD *)a1 + 1) = *(_QWORD *)(a3[2] + 384LL);
    }
  }
  *((_BYTE *)a1 + 76) = a5;
  if ( !v16 || *(_DWORD *)v16 == 5 || (unsigned __int64)v16[4] <= *((_QWORD *)a1 + 4) || (unsigned int)(v17 - 1) > 1 )
  {
    if ( !v10 )
      goto LABEL_21;
  }
  else
  {
    v10 = 1;
  }
  if ( v17 != 5 )
  {
    v20 = 0LL;
    if ( v16 && *(_DWORD *)v16 != 5 )
      v20 = (__int64)v16[2];
    if ( !*((_QWORD *)a1 + 2) )
    {
      ProcessHeap = GetProcessHeap();
      v36 = HeapAlloc(ProcessHeap, 0, 0x44uLL);
      if ( !v36 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr, v37);
      v36[16] = 0;
      *((_QWORD *)a1 + 2) = v36;
    }
    if ( !a3[31] || *a1 == 4 )
    {
      v21 = (_DWORD *)*((_QWORD *)a1 + 3);
      if ( v21 )
      {
        operator delete(*((void **)a1 + 3), 0x44uLL);
        v21 = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
      }
    }
    else
    {
      v21 = (_DWORD *)*((_QWORD *)a1 + 3);
      if ( !v21 )
      {
        v21 = operator new(0x44uLL);
        if ( v21 )
          v21[16] = 0;
        *((_QWORD *)a1 + 3) = v21;
        if ( !v21 )
        {
          v18 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, -2147024882, 0x17Du, 0LL);
          MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, -2147024882, 0xC5u, 0LL);
          return v18;
        }
      }
    }
    CVisual::CalcEffectiveTransform((__int64)a3, *a1, v20, &a5, *((CMILMatrix **)a1 + 2), a2, (__int64)v21);
    *((_QWORD *)a1 + 4) = *(_QWORD *)(a3[2] + 384LL);
  }
LABEL_21:
  if ( !v9 && !v10 )
    return 0;
  v22 = v11 && *((_DWORD *)v11 + 18);
  v23 = *a1;
  v24 = 0;
  v25 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 8) = v25;
  a1[18] = 0;
  v26 = v23 - 1;
  if ( !v26 )
  {
    if ( v25 <= (unsigned __int64)v11[8] )
      v25 = (unsigned __int64)v11[8];
    *((_QWORD *)a1 + 8) = v25;
    if ( v22 )
    {
      v24 = *((_DWORD *)v11 + 18);
      if ( v25 <= *((_QWORD *)a1 + 5) )
        v25 = *((_QWORD *)a1 + 5);
      a1[18] = v24;
    }
    goto LABEL_46;
  }
  if ( v26 == 2 )
  {
LABEL_46:
    if ( v25 <= *((_QWORD *)a1 + 6) )
      v25 = *((_QWORD *)a1 + 6);
    *((_QWORD *)a1 + 8) = v25;
    if ( v22 || a3[31] )
    {
      if ( v25 <= *((_QWORD *)a1 + 7) )
        v25 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 8) = v25;
      if ( a3[31] )
        a1[18] = v24 + 1;
    }
  }
  return 0;
}
