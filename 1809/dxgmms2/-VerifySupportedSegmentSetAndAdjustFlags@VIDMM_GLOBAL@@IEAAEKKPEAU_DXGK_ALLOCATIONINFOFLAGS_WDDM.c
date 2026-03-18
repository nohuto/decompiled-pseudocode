/*
 * XREFs of ?VerifySupportedSegmentSetAndAdjustFlags@VIDMM_GLOBAL@@IEAAEKKPEAU_DXGK_ALLOCATIONINFOFLAGS_WDDM2_0@@_K1_NPEAU_VIDMM_VERIFY_SUPPORTED_SEGMENT@@@Z @ 0x1C006109C
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00637F0 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_UPDATEALLOCPROPERTY@@PEA_K@Z @ 0x1C00AD0E0 (-UpdateAllocationProperty@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAU_VIDMM_MULTI_ALLOC@@PEA.c)
 * Callees:
 *     ?VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z @ 0x1C005F4FC (-VerifySegmentSet@VIDMM_GLOBAL@@QEAAEKKKPEAK@Z.c)
 */

unsigned __int8 __fastcall VIDMM_GLOBAL::VerifySupportedSegmentSetAndAdjustFlags(
        VIDMM_GLOBAL *this,
        __int64 a2,
        unsigned int a3,
        struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        bool a7,
        struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *a8)
{
  __int64 v9; // rcx
  __int64 v11; // r12
  __int64 v12; // rbx
  unsigned int v14; // edx
  unsigned int v15; // r11d
  unsigned int v16; // r8d
  int v17; // r9d
  unsigned int v18; // r10d
  char v19; // di
  __int64 v20; // rdx
  unsigned int v21; // r8d
  unsigned __int8 v22; // r15
  __int64 v23; // r11
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // r8d
  unsigned int v27; // r9d
  __int64 v28; // rcx
  struct _VIDMM_VERIFY_SUPPORTED_SEGMENT *v29; // rbx
  __int64 Value; // rdx
  unsigned __int8 result; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  unsigned int v38; // r8d
  unsigned int v39; // r10d
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // [rsp+70h] [rbp+8h]
  unsigned int v44; // [rsp+78h] [rbp+10h]

  v44 = a2;
  v9 = 1560LL * (unsigned int)a2;
  v11 = (unsigned int)a2;
  v12 = *((_QWORD *)this + 5023);
  v43 = v9;
  if ( (~*(_DWORD *)(v12 + v9 + 16) & a3) != 0 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v9, a2);
    *(_QWORD *)(v42 + 24) = 11724LL;
    goto LABEL_44;
  }
  v14 = a3;
  v15 = *(_DWORD *)(v12 + v9 + 20);
  v16 = 0;
  v17 = 0;
  if ( (~*(_DWORD *)(v12 + 16) & v14) != 0 )
    goto LABEL_9;
  if ( !v14 )
    goto LABEL_29;
  do
  {
    v18 = v14;
    if ( (v14 & 1) != 0 )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * (v16 + v15));
      if ( (*(_DWORD *)(v9 + 80) & 0x1001) == 0 )
      {
        v9 = v16;
        v17 |= 1 << v16;
      }
    }
    v14 >>= 1;
    ++v16;
  }
  while ( v18 >= 2 );
  if ( v17 )
LABEL_9:
    v19 = 0;
  else
LABEL_29:
    v19 = 1;
  v20 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v21 = v20;
      if ( (v20 & 1) != 0 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v15);
        if ( (*(_DWORD *)(v9 + 80) & 0x1001) != 0 )
          break;
      }
      v20 = (unsigned int)v20 >> 1;
      ++v15;
      if ( v21 < 2 )
        goto LABEL_31;
    }
    v22 = 1;
  }
  else
  {
LABEL_31:
    v22 = 0;
  }
  if ( (a4->Value & 0x40000) != 0 && !v19 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v9, v20);
    *(_QWORD *)(v42 + 24) = 11738LL;
    goto LABEL_44;
  }
  if ( (a4->Value & 0x20000) == 0 )
    goto LABEL_16;
  if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v44, a3, 0x10000, 0LL) )
  {
    v36 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2416LL) + 352 * v11 + 16);
    if ( (v36 & 0x10) == 0 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v36, v34);
      *(_QWORD *)(v42 + 24) = 11762LL;
      goto LABEL_44;
    }
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v36);
    a4->Value &= ~0x20000u;
LABEL_16:
    v23 = v43;
    goto LABEL_17;
  }
  if ( v22 )
  {
    v42 = WdLogNewEntry5_WdAssertion(v35, v34);
    *(_QWORD *)(v42 + 24) = 11770LL;
    goto LABEL_44;
  }
  v23 = v43;
  v37 = a3;
  v38 = *(_DWORD *)(v12 + v43 + 20);
  if ( a3 )
  {
    do
    {
      v39 = v37;
      if ( (v37 & 1) != 0 )
      {
        v40 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v38);
        if ( a5 > *(_QWORD *)(v40 + 392) )
        {
          v42 = WdLogNewEntry5_WdAssertion(v38, v37);
          *(_QWORD *)(v42 + 24) = 11783LL;
          goto LABEL_44;
        }
        if ( (*(_DWORD *)(v40 + 80) & 0x20) != 0 )
        {
          v42 = WdLogNewEntry5_WdAssertion(v38, v37);
          *(_QWORD *)(v42 + 24) = 11788LL;
          goto LABEL_44;
        }
      }
      v37 = (unsigned int)v37 >> 1;
      ++v38;
    }
    while ( v39 >= 2 );
  }
LABEL_17:
  v24 = *((_QWORD *)this + 5023);
  v25 = a3;
  v26 = *(_DWORD *)(v23 + v24 + 20);
  if ( (~*(_DWORD *)(v23 + v24 + 16) & a3) != 0 || !a3 )
  {
LABEL_22:
    v29 = a8;
    *(_DWORD *)a8 &= ~4u;
  }
  else
  {
    while ( 1 )
    {
      v27 = v25;
      if ( (v25 & 1) != 0 )
      {
        v28 = *(_QWORD *)(*((_QWORD *)this + 464) + 8LL * v26);
        if ( (*(_DWORD *)(v28 + 80) & 0x20) != 0 )
          break;
      }
      v25 = (unsigned int)v25 >> 1;
      ++v26;
      if ( v27 < 2 )
        goto LABEL_22;
    }
    if ( !a6 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v28, v25);
      *(_QWORD *)(v42 + 24) = 11810LL;
      goto LABEL_44;
    }
    if ( a6 < a5 )
    {
      v42 = WdLogNewEntry5_WdAssertion(v28, v25);
      *(_QWORD *)(v42 + 24) = 11816LL;
      goto LABEL_44;
    }
    v29 = a8;
    *(_DWORD *)a8 |= 4u;
  }
  Value = a4->Value;
  if ( (a4->Value & 4) != 0 && (a4->Value & 0x800000) == 0 )
  {
    if ( *((_BYTE *)this + 7073) )
    {
      if ( !VIDMM_GLOBAL::VerifySegmentSet(this, v44, a3, 16, 0LL) )
      {
        v42 = WdLogNewEntry5_WdAssertion(v33, v32);
        *(_QWORD *)(v42 + 24) = 11846LL;
        goto LABEL_44;
      }
      Value = a4->Value;
    }
    else
    {
      v41 = *(unsigned int *)(*((_QWORD *)this + 3) + 308LL);
      if ( (v41 & 8) == 0 && !v19 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v41, Value);
        *(_QWORD *)(v42 + 24) = 11853LL;
        goto LABEL_44;
      }
    }
  }
  if ( (Value & 0x20000001) == 0x20000001 && !v19 )
  {
    v42 = WdLogNewEntry5_WdAssertion(536870913LL, Value);
    *(_QWORD *)(v42 + 24) = 11864LL;
    goto LABEL_44;
  }
  if ( (Value & 0x100000) == 0 || v19 )
  {
    if ( (Value & 0x4000) == 0 || v19 )
    {
      if ( !a7 || (Value & 1) == 0 || v19 )
      {
        result = 1;
        *(_DWORD *)v29 = (2 * v22) | v19 & 0xFD | *(_DWORD *)v29 & 0xFFFFFFFC;
        return result;
      }
      v42 = WdLogNewEntry5_WdAssertion(536870913LL, Value);
      *(_QWORD *)(v42 + 24) = 11890LL;
    }
    else
    {
      v42 = WdLogNewEntry5_WdAssertion(536870913LL, Value);
      *(_QWORD *)(v42 + 24) = 11878LL;
    }
  }
  else
  {
    v42 = WdLogNewEntry5_WdAssertion(536870913LL, Value);
    *(_QWORD *)(v42 + 24) = 11871LL;
  }
LABEL_44:
  WdLogEvent5_WdAssertion(v42);
  return 0;
}
