/*
 * XREFs of ?VidMmiQuerySegmentInfo4@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_QUERYSEGMENTOUT4@@@Z @ 0x1C008C848
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z @ 0x1C008ADF0 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00015B0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001AD8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0018A40 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 */

__int64 __fastcall VidMmiQuerySegmentInfo4(struct DXGADAPTER *this, int a2, struct _DXGK_QUERYSEGMENTOUT4 *a3)
{
  unsigned int DriverVersion; // eax
  unsigned int v6; // r12d
  char v7; // r13
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned int v12; // r14d
  SIZE_T v13; // rax
  _DWORD *v14; // rax
  __int64 v15; // rcx
  _DWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // edi
  _DWORD *v21; // rax
  __int64 v22; // rcx
  __int128 v23; // xmm1
  SIZE_T v24; // xmm0_8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _BYTE v31[40]; // [rsp+20h] [rbp-60h] BYREF
  _DXGKARG_QUERYADAPTERINFO v32; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+40h]
  int v34; // [rsp+C8h] [rbp+48h] BYREF

  v34 = a2;
  memset(v31, 0, sizeof(v31));
  DriverVersion = DpiGetDriverVersion(*((_QWORD *)this + 24));
  v6 = 0;
  v32.InputDataSize = 4;
  *(_DWORD *)v31 = 0;
  *(_QWORD *)&v31[8] = 0LL;
  v33 = DriverVersion;
  v7 = 0;
  v32.Type = DXGKQAITYPE_QUERYSEGMENT4;
  v32.pInputData = &v34;
  v32.pOutputData = v31;
  v32.OutputDataSize = 40;
  v8 = DXGADAPTER::DdiQueryAdapterInfo(this, &v32);
  v11 = v8;
  if ( v8 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v10, v9);
    *(_QWORD *)(v26 + 24) = v11;
    WdLogEvent5_WdWarning(v26);
    return (unsigned int)v11;
  }
  v12 = *(_DWORD *)v31;
  if ( *(_DWORD *)v31 > 0x20u )
  {
    v27 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v27 + 24) = 76LL;
    WdLogEvent5_WdAssertion(v27);
    LODWORD(v11) = -1073741823;
    return (unsigned int)v11;
  }
  v13 = 104LL * *(unsigned int *)v31;
  if ( !is_mul_ok(*(unsigned int *)v31, 0x68uLL) )
    v13 = -1LL;
  v14 = operator new[](v13, 0x31326956u, PagedPool);
  v16 = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1C004D5F8);
    v28 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v28 + 24) = v12;
    WdLogEvent5_WdLowResource(v28);
    return 3221225495LL;
  }
  memset(v14, 0, 104LL * v12);
  *(_QWORD *)&v31[8] = v16;
  *(_QWORD *)&v31[32] = 104LL;
  v17 = DXGADAPTER::DdiQueryAdapterInfo(this, &v32);
  v11 = v17;
  if ( v17 < 0 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v19, v18);
    *(_QWORD *)(v29 + 24) = v11;
    WdLogEvent5_WdAssertion(v29);
    goto LABEL_25;
  }
  v20 = 0;
  if ( !v12 )
  {
LABEL_13:
    v23 = *(_OWORD *)&v31[16];
    *(_OWORD *)&a3->NbSegment = *(_OWORD *)v31;
    v24 = *(_QWORD *)&v31[32];
    *(_OWORD *)&a3->PagingBufferSegmentId = v23;
    a3->SegmentDescriptorStride = v24;
    return (unsigned int)v11;
  }
  v21 = v16 + 23;
  while ( 1 )
  {
    if ( v33 < 0x7005 )
    {
      *v21 = 0;
      goto LABEL_12;
    }
    v22 = (unsigned int)*v21;
    if ( (unsigned int)v22 > 1 )
      break;
    if ( (_DWORD)v22 )
    {
      if ( v7 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v22, v33);
        *(_QWORD *)(v30 + 24) = v6;
        *(_QWORD *)(v30 + 32) = v20;
        goto LABEL_24;
      }
      v7 = 1;
      v6 = v20;
    }
LABEL_12:
    ++v20;
    v21 += 26;
    if ( v20 >= v12 )
      goto LABEL_13;
  }
  v30 = WdLogNewEntry5_WdAssertion(v22, v33);
  *(_QWORD *)(v30 + 24) = (unsigned int)v16[26 * v20 + 23];
LABEL_24:
  WdLogEvent5_WdAssertion(v30);
  LODWORD(v11) = -1073741823;
LABEL_25:
  operator delete(v16);
  return (unsigned int)v11;
}
