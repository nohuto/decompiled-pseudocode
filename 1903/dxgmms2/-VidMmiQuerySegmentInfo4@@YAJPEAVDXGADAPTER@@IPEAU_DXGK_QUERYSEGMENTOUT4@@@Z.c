/*
 * XREFs of ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C00900BC
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C008E620 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001750 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002940 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0017EFC (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C0018980 (memset.c)
 */

__int64 __fastcall VidMmiQuerySegmentInfo4(struct DXGADAPTER *this, int a2, struct _DXGK_QUERYSEGMENTOUT4 *a3)
{
  unsigned int DriverVersion; // eax
  unsigned int v7; // r12d
  char v8; // r13
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  unsigned int v13; // r14d
  SIZE_T v14; // rax
  _DWORD *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // edi
  _DWORD *v22; // rax
  __int64 v23; // rcx
  __int128 v24; // xmm1
  SIZE_T v25; // xmm0_8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _BYTE v32[40]; // [rsp+20h] [rbp-60h] BYREF
  _DXGKARG_QUERYADAPTERINFO v33; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v34; // [rsp+C0h] [rbp+40h]
  int v35; // [rsp+C8h] [rbp+48h] BYREF

  memset(&v33, 0, sizeof(v33));
  v35 = a2;
  memset(v32, 0, sizeof(v32));
  DriverVersion = DpiGetDriverVersion(*((_QWORD *)this + 24));
  v7 = 0;
  v33.InputDataSize = 4;
  *(_DWORD *)v32 = 0;
  *(_QWORD *)&v32[8] = 0LL;
  v34 = DriverVersion;
  v8 = 0;
  v33.Type = DXGKQAITYPE_QUERYSEGMENT4;
  v33.pInputData = &v35;
  v33.pOutputData = v32;
  v33.OutputDataSize = 40;
  v9 = DXGADAPTER::DdiQueryAdapterInfo(this, &v33);
  v12 = v9;
  if ( v9 < 0 )
  {
    v27 = WdLogNewEntry5_WdWarning(v11, v10);
    *(_QWORD *)(v27 + 24) = v12;
    WdLogEvent5_WdWarning(v27);
    return (unsigned int)v12;
  }
  v13 = *(_DWORD *)v32;
  if ( *(_DWORD *)v32 > 0x20u )
  {
    v28 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v28 + 24) = 76LL;
    WdLogEvent5_WdAssertion(v28);
    LODWORD(v12) = -1073741823;
    return (unsigned int)v12;
  }
  v14 = 104LL * *(unsigned int *)v32;
  if ( !is_mul_ok(*(unsigned int *)v32, 0x68uLL) )
    v14 = -1LL;
  v15 = operator new[](v14, 0x31326956u, PagedPool);
  v17 = v15;
  if ( !v15 )
  {
    _InterlockedIncrement(&dword_1C004E5D8);
    v29 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v29 + 24) = v13;
    WdLogEvent5_WdLowResource(v29);
    return 3221225495LL;
  }
  memset(v15, 0, 104LL * v13);
  *(_QWORD *)&v32[8] = v17;
  *(_QWORD *)&v32[32] = 104LL;
  v18 = DXGADAPTER::DdiQueryAdapterInfo(this, &v33);
  v12 = v18;
  if ( v18 < 0 )
  {
    v30 = WdLogNewEntry5_WdAssertion(v20, v19);
    *(_QWORD *)(v30 + 24) = v12;
    WdLogEvent5_WdAssertion(v30);
    goto LABEL_25;
  }
  v21 = 0;
  if ( !v13 )
  {
LABEL_13:
    v24 = *(_OWORD *)&v32[16];
    *(_OWORD *)&a3->NbSegment = *(_OWORD *)v32;
    v25 = *(_QWORD *)&v32[32];
    *(_OWORD *)&a3->PagingBufferSegmentId = v24;
    a3->SegmentDescriptorStride = v25;
    return (unsigned int)v12;
  }
  v22 = v17 + 23;
  while ( 1 )
  {
    if ( v34 < 0x7005 )
    {
      *v22 = 0;
      goto LABEL_12;
    }
    v23 = (unsigned int)*v22;
    if ( (unsigned int)v23 > 1 )
      break;
    if ( (_DWORD)v23 )
    {
      if ( v8 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v23, v34);
        *(_QWORD *)(v31 + 24) = v7;
        *(_QWORD *)(v31 + 32) = v21;
        goto LABEL_24;
      }
      v8 = 1;
      v7 = v21;
    }
LABEL_12:
    ++v21;
    v22 += 26;
    if ( v21 >= v13 )
      goto LABEL_13;
  }
  v31 = WdLogNewEntry5_WdAssertion(v23, v34);
  *(_QWORD *)(v31 + 24) = (unsigned int)v17[26 * v21 + 23];
LABEL_24:
  WdLogEvent5_WdAssertion(v31);
  LODWORD(v12) = -1073741823;
LABEL_25:
  operator delete(v17);
  return (unsigned int)v12;
}
