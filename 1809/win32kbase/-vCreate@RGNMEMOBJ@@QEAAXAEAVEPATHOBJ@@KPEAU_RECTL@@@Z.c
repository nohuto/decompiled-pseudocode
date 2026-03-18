/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0017730
 * Callers:
 *     GreExtCreateRegion @ 0x1C001A670 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C009FC3C (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00FA8E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00150E4 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0017B64 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0017D00 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C0017DE0 (-vCloseAllFigures@EPATHOBJ@@QEAAXXZ.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0018070 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001D7B4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     AllocateObject @ 0x1C00255D0 (AllocateObject.c)
 *     PALLOCMEM2 @ 0x1C0025778 (PALLOCMEM2.c)
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C006D1F0 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 *     bConstructGET @ 0x1C009EA60 (bConstructGET.c)
 *     vAdvanceAETEdges @ 0x1C009F0C0 (vAdvanceAETEdges.c)
 *     vXSortAETEdges @ 0x1C009F7B0 (vXSortAETEdges.c)
 *     vMoveNewEdges @ 0x1C009FF10 (vMoveNewEdges.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  unsigned int v7; // edi
  _DWORD *v8; // r9
  char *v9; // r14
  int v10; // r15d
  __m128i *v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // xmm0_8
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 Object; // rax
  unsigned int v18; // edi
  _QWORD *v19; // rax
  int v20; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v22; // rax
  int v23; // eax
  int v24; // edx
  _DWORD *v25; // rdx
  REGION *v26; // rcx
  unsigned __int64 v27; // rdx
  __m128i *v28; // rcx
  LONG top; // ecx
  _QWORD *v31; // [rsp+28h] [rbp-D8h] BYREF
  int v32; // [rsp+34h] [rbp-CCh]
  int v33; // [rsp+38h] [rbp-C8h]
  _QWORD v34[7]; // [rsp+58h] [rbp-A8h] BYREF
  char v35; // [rsp+90h] [rbp-70h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
    return;
  *(_QWORD *)this = 0LL;
  if ( (*(_DWORD *)a2 & 1) != 0 && !(unsigned int)EPATHOBJ::bFlatten(a2) )
    return;
  EPATHOBJ::vCloseAllFigures(a2);
  v7 = *((_DWORD *)a2 + 1);
  if ( v7 < 2 )
    return;
  if ( !a4
    || (v28 = (__m128i *)*((_QWORD *)a2 + 1), a4->top < (int)HIDWORD(v28[3].m128i_i64[0]))
    && a4->bottom > _mm_srli_si128(v28[48LL], 8).m128i_i32[1] )
  {
    if ( (unsigned int)RGNMEMOBJ::bFastFillWrapper(this, a2) )
    {
      RGNOBJ::vTighten(this);
      v8 = *(_DWORD **)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) != 0
        && (*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) != -134217728
        || (v8[25] & 0xF8000000) != 0 && (v8[25] & 0xF8000000) != -134217728
        || (v8[24] & 0xF8000000) != 0 && (v8[24] & 0xF8000000) != -134217728
        || (v8[23] & 0xF8000000) != 0 && (v8[23] & 0xF8000000) != -134217728 )
      {
        REGION::vDeleteREGION(*(REGION **)this);
        *(_QWORD *)this = 0LL;
      }
      return;
    }
  }
  if ( v7 >= 0x14 )
  {
    if ( v7 + 1 < v7 )
      return;
    v27 = 48LL * (v7 + 1);
    if ( v27 > 0xFFFFFFFF )
      return;
    v9 = (char *)PALLOCMEM2((unsigned int)v27);
    if ( !v9 )
      return;
    v10 = 1;
  }
  else
  {
    v9 = &v35;
    v10 = 0;
  }
  v11 = (__m128i *)*((_QWORD *)a2 + 1);
  v12 = HIDWORD(v11[3].m128i_i64[0]);
  v13 = _mm_srli_si128(v11[3], 8).m128i_u64[0];
  v14 = HIDWORD(v13);
  if ( SHIDWORD(v13) < (int)v12 )
    goto LABEL_55;
  if ( a4 )
  {
    top = a4->top;
    if ( (int)v12 > top )
      top = v12;
    LODWORD(v12) = top;
    if ( SHIDWORD(v13) >= a4->bottom )
      LODWORD(v14) = a4->bottom;
  }
  v15 = (int)v14 - (__int64)(int)v12;
  if ( v15 <= 0 )
    v15 = 0LL;
  v16 = 32 * (v15 >> 4) + 536;
  if ( v16 > 0x7FFFFFFF )
    goto LABEL_55;
  Object = AllocateObject((unsigned int)v16);
  *(_QWORD *)this = Object;
  if ( !Object )
    goto LABEL_55;
  *(_DWORD *)(Object + 24) = v16;
  v18 = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  v19 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v19[1] = v19;
  *v19 = v19;
  v20 = bConstructGET(a2, v34, v9, a4);
  if ( !v20 )
    goto LABEL_60;
  CurrentThread = KeGetCurrentThread();
  v33 = 0;
  v31 = &v31;
  v32 = 0x7FFFFFFF;
  while ( !PsIsThreadTerminating(CurrentThread) )
  {
    if ( v31 != &v31 )
    {
      vAdvanceAETEdges(&v31);
      if ( v31 != &v31 )
      {
        if ( (_QWORD **)*v31 != &v31 )
          vXSortAETEdges(&v31);
LABEL_28:
        v22 = v34[0];
        goto LABEL_29;
      }
    }
    v22 = v34[0];
    if ( (_QWORD *)v34[0] == v34 )
      goto LABEL_37;
    v24 = v18;
    v18 = *(_DWORD *)(v34[0] + 16LL);
    if ( v18 != v24 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v24, v18) )
        goto LABEL_60;
      goto LABEL_28;
    }
LABEL_29:
    if ( *(_DWORD *)(v22 + 16) == v18 )
      vMoveNewEdges(v34, &v31, v18);
    v23 = RGNMEMOBJ::bAddScans(this, v18++, (struct EDGE *)&v31, a3);
    v20 = v23;
    if ( !v23 )
      goto LABEL_60;
  }
  v20 = 0;
LABEL_37:
  if ( !v20 || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v18, 0x7FFFFFFF) )
  {
LABEL_60:
    v26 = *(REGION **)this;
    goto LABEL_61;
  }
  RGNOBJ::vTighten(this);
  v25 = *(_DWORD **)this;
  if ( ((*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) == 0
     || (*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) == -134217728)
    && (((v25[25] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v25[24] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v25[23] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    goto LABEL_55;
  }
  v26 = *(REGION **)this;
LABEL_61:
  REGION::vDeleteREGION(v26);
  *(_QWORD *)this = 0LL;
LABEL_55:
  if ( v10 )
    Win32FreePool(v9);
}
