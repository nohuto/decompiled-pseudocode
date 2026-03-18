/*
 * XREFs of ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180036350
 * Callers:
 *     ?UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z @ 0x180016450 (-UpdateCpuClippingData@CVisual@@IEAAJPEBVCVisualTree@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800328F4 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsRootVisual@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180165A50 (-IsRootVisual@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CCpuClippingData::Update(unsigned int *a1, __int64 a2, _QWORD *a3, int a4, char a5)
{
  int v6; // r13d
  _QWORD *v7; // rbp
  unsigned int v9; // esi
  struct _LIST_ENTRY **v10; // rdi
  int v11; // eax
  _QWORD *v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  unsigned int i; // eax
  _QWORD **v18; // rdx
  _QWORD *v19; // rdx
  _QWORD *v20; // rax
  _DWORD *v21; // r8
  __int64 v22; // rdx
  _BYTE *v23; // rcx
  unsigned int j; // eax
  _QWORD **v25; // rcx
  _QWORD *v26; // rcx
  __int64 v27; // r12
  struct _LIST_ENTRY **p_Blink; // r15
  const struct CVisual *v29; // rax
  struct _LIST_ENTRY *v30; // rbp
  struct _LIST_ENTRY *Blink; // rdi
  CVisual *v32; // r10
  struct _LIST_ENTRY *v33; // r11
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v36; // rax
  _QWORD *v37; // r12
  unsigned __int64 v38; // rax
  char v39; // cl
  unsigned int v40; // r9d
  char v41; // di
  unsigned int v42; // eax
  char v43; // r13
  struct _LIST_ENTRY *v44; // rbp
  _DWORD *v45; // rax
  _DWORD *v46; // rax
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  struct _LIST_ENTRY *v49; // r8
  bool v50; // r9
  int v51; // ecx
  unsigned int v52; // r8d
  unsigned __int64 v53; // rdx
  int v54; // ecx
  bool v55; // cc
  _QWORD *v57; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  char v59; // [rsp+A0h] [rbp+8h]
  char v60; // [rsp+A8h] [rbp+10h]
  bool v62; // [rsp+B8h] [rbp+20h]

  v6 = a4;
  v7 = a3;
  v60 = a4 == 2;
  v62 = *a1 == 0;
  v9 = 0;
  v57 = 0LL;
  v10 = 0LL;
  v59 = 0;
  if ( *(_QWORD **)(a2 + 24) == a3 )
  {
    v11 = 3;
    if ( a4 > 3 )
      v11 = a4;
    v6 = v11;
  }
  else
  {
    v12 = 0LL;
    v13 = a3[10];
    if ( *(_BYTE *)(a2 + 32) )
    {
      v12 = (_QWORD *)(v13 + 328);
    }
    else
    {
      v14 = *(_QWORD *)(v13 + 224);
      if ( *(int *)v14 < 0 )
      {
        v15 = *(unsigned int *)(v14 + 4);
        v16 = (_BYTE *)(v14 + 8);
        for ( i = 0; i < (unsigned int)v15; ++v16 )
        {
          if ( *v16 == 1 )
            break;
          ++i;
        }
        v18 = i >= (unsigned int)v15 ? 0LL : (_QWORD **)(v14 + 8LL * i - (((_BYTE)v15 + 15) & 7) + v15 + 15);
        v19 = *v18;
        if ( v19 )
        {
          v20 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 != v19 )
          {
            while ( v20[4] != a2 )
            {
              v20 = (_QWORD *)*v20;
              if ( v20 == v19 )
                goto LABEL_20;
            }
            v12 = v20 - 28;
          }
        }
      }
    }
LABEL_20:
    v10 = (struct _LIST_ENTRY **)(v12 + 17);
    v57 = v12 + 17;
    if ( *((_DWORD *)v12 + 34) == 5 && v6 <= 3 )
      v6 = 3;
  }
  v21 = (_DWORD *)v7[28];
  if ( (*v21 & 0x800000) == 0 )
    goto LABEL_32;
  v22 = (unsigned int)v21[1];
  v23 = v21 + 2;
  for ( j = 0; j < (unsigned int)v22; ++v23 )
  {
    if ( *v23 == 9 )
      break;
    ++j;
  }
  v25 = j >= (unsigned int)v22 ? 0LL : (_QWORD **)((char *)v21 + v22 + 8LL * j - (((_BYTE)v22 + 15) & 7) + 15);
  v26 = *v25;
  if ( v26 )
    v27 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v26 + 152LL))(*v26);
  else
LABEL_32:
    v27 = 0LL;
  p_Blink = v10;
  if ( !v27 )
  {
    v37 = v57;
    v39 = v62;
    goto LABEL_63;
  }
  v29 = (const struct CVisual *)a3;
  v30 = 0LL;
  Blink = 0LL;
  p_Blink = (struct _LIST_ENTRY **)v57;
  if ( a3[10] )
  {
    while ( 1 )
    {
      if ( CVisualTree::IsRootVisual((CVisualTree *)a2, v29) )
      {
LABEL_52:
        v37 = v57;
        goto LABEL_58;
      }
      if ( *(_BYTE *)(a2 + 32) )
      {
        v33 = (struct _LIST_ENTRY *)((char *)v32 + 328);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v32);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( Flink[2].Flink != (struct _LIST_ENTRY *)a2 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_44;
            }
            v33 = Flink - 14;
          }
        }
      }
LABEL_44:
      if ( v32 == (CVisual *)v27 )
      {
        v37 = v57;
        p_Blink = &v33[8].Blink;
        goto LABEL_58;
      }
      if ( (unsigned int)(LODWORD(v33[8].Blink) - 1) > 1 )
        break;
      v36 = v33[9].Flink;
      if ( v30 > v36 )
        v36 = v30;
      v30 = v36;
      if ( *((_QWORD *)v32 + 31) && Blink <= v33[10].Blink )
        Blink = v33[10].Blink;
      v29 = (const struct CVisual *)a3;
      if ( !*((_QWORD *)v32 + 10) )
        goto LABEL_52;
    }
    v37 = v57;
    if ( v6 <= 3 )
      v6 = 3;
    v38 = *((_QWORD *)a1 + 8);
  }
  else
  {
    v37 = v57;
LABEL_58:
    v38 = *((_QWORD *)a1 + 8);
    v39 = 1;
    if ( (unsigned __int64)v30 > v38 )
      goto LABEL_60;
  }
  v39 = v62;
LABEL_60:
  v7 = a3;
  if ( (unsigned __int64)Blink > v38 )
    *((_QWORD *)a1 + 5) = 0LL;
LABEL_63:
  v40 = *a1;
  v41 = v39;
  if ( v6 > (int)*a1 )
    v41 = 1;
  if ( !*((_QWORD *)a1 + 5) )
  {
    v41 = 1;
    v59 = 1;
    *((_QWORD *)a1 + 5) = *(_QWORD *)(v7[2] + 368LL);
  }
  if ( !*((_QWORD *)a1 + 7) )
  {
    v41 = 1;
    v59 = 1;
    *((_QWORD *)a1 + 7) = *(_QWORD *)(v7[2] + 368LL);
  }
  if ( !*((_QWORD *)a1 + 6) )
  {
    v41 = 1;
    v59 = 1;
    *((_QWORD *)a1 + 6) = *(_QWORD *)(v7[2] + 368LL);
  }
  if ( !v41 || (v42 = CCpuClippingData::CalcMode((__int64)v7, v6, v60), v40 = *a1, *a1 == v42) )
  {
    v43 = v59;
  }
  else
  {
    *a1 = v42;
    v43 = 1;
    v40 = v42;
    *((_QWORD *)a1 + 1) = *(_QWORD *)(v7[2] + 368LL);
  }
  *((_BYTE *)a1 + 76) = a5;
  if ( !p_Blink || *(_DWORD *)p_Blink == 5 || (unsigned __int64)p_Blink[4] <= *((_QWORD *)a1 + 4) || v40 - 1 > 1 )
  {
    if ( !v43 )
      goto LABEL_99;
  }
  else
  {
    v43 = 1;
  }
  if ( v40 != 5 )
  {
    v44 = 0LL;
    if ( p_Blink && *(_DWORD *)p_Blink != 5 )
      v44 = p_Blink[2];
    if ( !*((_QWORD *)a1 + 2) )
    {
      v45 = HeapAlloc(WPF::g_processHeap, 0, 0x44uLL);
      if ( !v45 )
        ModuleFailFastForHRESULT(2147942414LL, retaddr);
      v45[16] = 0;
      *((_QWORD *)a1 + 2) = v45;
    }
    if ( !a3[31] || *a1 == 4 )
    {
      v46 = (_DWORD *)*((_QWORD *)a1 + 3);
      if ( v46 )
      {
        operator delete(*((void **)a1 + 3), 0x44uLL);
        v46 = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
      }
    }
    else
    {
      v46 = (_DWORD *)*((_QWORD *)a1 + 3);
      if ( !v46 )
      {
        v46 = operator new(0x44uLL);
        if ( v46 )
          v46[16] = 0;
        else
          v46 = 0LL;
        *((_QWORD *)a1 + 3) = v46;
        if ( !v46 )
        {
          v9 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024882, 0x17Du);
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, -2147024882, 0xC5u);
          return v9;
        }
      }
    }
    v49 = v44;
    v7 = a3;
    CVisual::CalcEffectiveTransform(a3, *a1, v49, &a5, *((_QWORD *)a1 + 2), a2, v46);
    *((_QWORD *)a1 + 4) = *(_QWORD *)(a3[2] + 368LL);
  }
LABEL_99:
  if ( v41 || v43 )
  {
    v50 = v37 && *((_DWORD *)v37 + 18);
    v51 = *a1;
    v52 = 0;
    v53 = *((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 8) = v53;
    a1[18] = 0;
    v54 = v51 - 1;
    if ( v54 )
    {
      if ( v54 != 2 )
        return v9;
    }
    else
    {
      if ( v53 <= v37[8] )
        v53 = v37[8];
      *((_QWORD *)a1 + 8) = v53;
      if ( v50 )
      {
        v52 = *((_DWORD *)v37 + 18);
        v55 = v53 <= *((_QWORD *)a1 + 5);
        a1[18] = v52;
        if ( v55 )
          v53 = *((_QWORD *)a1 + 5);
        *((_QWORD *)a1 + 8) = v53;
      }
    }
    if ( v53 <= *((_QWORD *)a1 + 6) )
      v53 = *((_QWORD *)a1 + 6);
    *((_QWORD *)a1 + 8) = v53;
    if ( v50 || v7[31] )
    {
      if ( v53 <= *((_QWORD *)a1 + 7) )
        v53 = *((_QWORD *)a1 + 7);
      *((_QWORD *)a1 + 8) = v53;
      if ( v7[31] )
        a1[18] = v52 + 1;
    }
  }
  return v9;
}
