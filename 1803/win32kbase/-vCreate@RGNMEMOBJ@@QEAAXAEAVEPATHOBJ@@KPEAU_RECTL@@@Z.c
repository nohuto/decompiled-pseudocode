/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C0020210
 * Callers:
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C0072744 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C001B850 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 *     ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C001B9D0 (-vCloseAllFigures@EPATHOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C001CAB4 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     vXSortAETEdges @ 0x1C001DD00 (vXSortAETEdges.c)
 *     vAdvanceAETEdges @ 0x1C001DD50 (vAdvanceAETEdges.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C00200BC (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0020C50 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C0023D70 (AllocateObject.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C004495C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     bConstructGET @ 0x1C005E3A0 (bConstructGET.c)
 *     vMoveNewEdges @ 0x1C0065140 (vMoveNewEdges.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C0071A40 (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C0071AB4 (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

void __fastcall RGNMEMOBJ::vCreate(RGNMEMOBJ *this, struct EPATHOBJ *a2, unsigned int a3, struct _RECTL *a4)
{
  unsigned int v7; // edi
  _DWORD *v8; // r9
  __m128i *v9; // rcx
  char *v10; // r14
  int v11; // r15d
  __m128i *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // xmm0_8
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 Object; // rax
  unsigned int v20; // edi
  _QWORD *v21; // rax
  int v22; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v24; // rax
  int v25; // eax
  int v26; // edx
  REGION *v27; // rcx
  unsigned __int64 v28; // rdx
  LONG top; // ecx
  __int64 ***v31; // [rsp+28h] [rbp-D8h] BYREF
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
    || (v9 = (__m128i *)*((_QWORD *)a2 + 1), a4->top < (int)HIDWORD(v9[3].m128i_i64[0]))
    && a4->bottom > _mm_srli_si128(v9[48LL], 8).m128i_i32[1] )
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
    v28 = 48LL * (v7 + 1);
    if ( v28 > 0xFFFFFFFF )
      return;
    v10 = (char *)PALLOCMEM2((unsigned int)v28, 0x67646547u, 0);
    if ( !v10 )
      return;
    v11 = 1;
  }
  else
  {
    v10 = &v35;
    v11 = 0;
  }
  v12 = (__m128i *)*((_QWORD *)a2 + 1);
  v13 = HIDWORD(v12[3].m128i_i64[0]);
  v14 = _mm_srli_si128(v12[3], 8).m128i_u64[0];
  v15 = HIDWORD(v14);
  if ( SHIDWORD(v14) < (int)v13 )
    goto LABEL_44;
  if ( a4 )
  {
    top = a4->top;
    if ( (int)v13 > top )
      top = v13;
    LODWORD(v13) = top;
    if ( SHIDWORD(v14) >= a4->bottom )
      LODWORD(v15) = a4->bottom;
  }
  v16 = (int)v15 - (__int64)(int)v13;
  if ( v16 <= 0 )
    v16 = 0LL;
  v17 = 32 * (v16 >> 4);
  v18 = v17 + 536;
  if ( v17 + 536 > 0x7FFFFFFF )
    goto LABEL_44;
  Object = AllocateObject(v18);
  *(_QWORD *)this = Object;
  if ( !Object )
    goto LABEL_44;
  *(_DWORD *)(Object + 24) = v18;
  v20 = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  v21 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v21[1] = v21;
  *v21 = v21;
  v22 = bConstructGET(a2, v34, v10, a4);
  if ( !v22 )
    goto LABEL_59;
  CurrentThread = KeGetCurrentThread();
  v33 = 0;
  v31 = (__int64 ***)&v31;
  v32 = 0x7FFFFFFF;
  while ( !PsIsThreadTerminating(CurrentThread) )
  {
    if ( v31 != (__int64 ***)&v31 )
    {
      vAdvanceAETEdges((__int64 **)&v31);
      if ( v31 != (__int64 ***)&v31 )
      {
        if ( *v31 != (__int64 **)&v31 )
          vXSortAETEdges((__int64 ***)&v31);
LABEL_29:
        v24 = v34[0];
        goto LABEL_30;
      }
    }
    v24 = v34[0];
    if ( (_QWORD *)v34[0] == v34 )
      goto LABEL_38;
    v26 = v20;
    v20 = *(_DWORD *)(v34[0] + 16LL);
    if ( v20 != v26 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v26, v20) )
        goto LABEL_59;
      goto LABEL_29;
    }
LABEL_30:
    if ( *(_DWORD *)(v24 + 16) == v20 )
      vMoveNewEdges(v34, &v31, v20);
    v25 = RGNMEMOBJ::bAddScans(this, v20++, (struct EDGE *)&v31, a3);
    v22 = v25;
    if ( !v25 )
      goto LABEL_59;
  }
  v22 = 0;
LABEL_38:
  if ( !v22 || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v20, 0x7FFFFFFF) )
  {
LABEL_59:
    v27 = *(REGION **)this;
    goto LABEL_60;
  }
  RGNOBJ::vTighten(this);
  v27 = *(REGION **)this;
  if ( (((*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v27 + 25) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v27 + 24) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((*((_DWORD *)v27 + 23) & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    goto LABEL_44;
  }
LABEL_60:
  REGION::vDeleteREGION(v27);
  *(_QWORD *)this = 0LL;
LABEL_44:
  if ( v11 )
    Win32FreePool((__int64)v10);
}
