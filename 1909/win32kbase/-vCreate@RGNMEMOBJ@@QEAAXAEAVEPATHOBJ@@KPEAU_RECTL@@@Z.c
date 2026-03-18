/*
 * XREFs of ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00116C0
 * Callers:
 *     GreExtCreateRegion @ 0x1C0018220 (GreExtCreateRegion.c)
 *     GreCreatePolyPolygonRgnInternal @ 0x1C00ADCC4 (GreCreatePolyPolygonRgnInternal.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C0011B10 (-vTighten@RGNOBJ@@QEAAXXZ.c)
 *     ?vCloseAllFigures@EPATHOBJ@@QEAAXXZ @ 0x1C0011BF0 (-vCloseAllFigures@EPATHOBJ@@QEAAXXZ.c)
 *     ?bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z @ 0x1C0011C24 (-bFastFillWrapper@RGNMEMOBJ@@AEAAHAEAVEPATHOBJ@@@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C0012FFC (PALLOCMEM2.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     AllocateObject @ 0x1C002A780 (AllocateObject.c)
 *     ?bFlatten@EPATHOBJ@@QEAAHXZ @ 0x1C0078700 (-bFlatten@EPATHOBJ@@QEAAHXZ.c)
 *     bConstructGET @ 0x1C00ACB30 (bConstructGET.c)
 *     ?bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z @ 0x1C00ACE5C (-bAddScans@RGNMEMOBJ@@AEAAHJPEAVEDGE@@K@Z.c)
 *     vAdvanceAETEdges @ 0x1C00ACFF0 (vAdvanceAETEdges.c)
 *     vXSortAETEdges @ 0x1C00AD830 (vXSortAETEdges.c)
 *     vMoveNewEdges @ 0x1C00ADF80 (vMoveNewEdges.c)
 *     ?bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z @ 0x1C00AE2BC (-bAddNullScan@RGNMEMOBJ@@AEAAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
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
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 Object; // rax
  unsigned int v19; // edi
  _QWORD *v20; // rax
  int v21; // esi
  struct _KTHREAD *CurrentThread; // r12
  __int64 v23; // rax
  int v24; // eax
  int v25; // edx
  _DWORD *v26; // rdx
  REGION *v27; // rcx
  LONG top; // ecx
  __int64 v29; // rax
  _QWORD v31[6]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v32[7]; // [rsp+58h] [rbp-A8h] BYREF
  char v33; // [rsp+90h] [rbp-70h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
    return;
  memset(v31, 0, sizeof(v31));
  memset(v32, 0, 0x30uLL);
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
    v29 = v7 + 1;
    if ( (unsigned int)v29 < v7 )
      return;
    if ( (unsigned __int64)(48 * v29) > 0xFFFFFFFF )
      return;
    v10 = (char *)PALLOCMEM2(48 * v29);
    if ( !v10 )
      return;
    v11 = 1;
  }
  else
  {
    v10 = &v33;
    v11 = 0;
  }
  v12 = (__m128i *)*((_QWORD *)a2 + 1);
  v13 = HIDWORD(v12[3].m128i_i64[0]);
  v14 = _mm_srli_si128(v12[3], 8).m128i_u64[0];
  v15 = HIDWORD(v14);
  if ( SHIDWORD(v14) < (int)v13 )
    goto LABEL_55;
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
  v17 = 32 * (v16 >> 4) + 536;
  if ( v17 > 0x7FFFFFFF )
    goto LABEL_55;
  Object = AllocateObject((unsigned int)v17);
  *(_QWORD *)this = Object;
  if ( !Object )
    goto LABEL_55;
  *(_DWORD *)(Object + 24) = v17;
  v19 = 0x80000000;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 104;
  *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 36LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 84LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)this + 104LL;
  v20 = (_QWORD *)(*(_QWORD *)this + 48LL);
  v20[1] = v20;
  *v20 = v20;
  v21 = bConstructGET(a2, v32, v10, a4);
  if ( !v21 )
    goto LABEL_60;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v31[2]) = 0;
  v31[0] = v31;
  HIDWORD(v31[1]) = 0x7FFFFFFF;
  while ( !PsIsThreadTerminating(CurrentThread) )
  {
    if ( (_QWORD *)v31[0] != v31 )
    {
      vAdvanceAETEdges(v31);
      if ( (_QWORD *)v31[0] != v31 )
      {
        if ( *(_QWORD **)v31[0] != v31 )
          vXSortAETEdges(v31);
LABEL_29:
        v23 = v32[0];
        goto LABEL_30;
      }
    }
    v23 = v32[0];
    if ( (_QWORD *)v32[0] == v32 )
      goto LABEL_38;
    v25 = v19;
    v19 = *(_DWORD *)(v32[0] + 16LL);
    if ( v19 != v25 )
    {
      if ( !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v25, v19) )
        goto LABEL_60;
      goto LABEL_29;
    }
LABEL_30:
    if ( *(_DWORD *)(v23 + 16) == v19 )
      vMoveNewEdges(v32, v31, v19);
    v24 = RGNMEMOBJ::bAddScans(this, v19++, (struct EDGE *)v31, a3);
    v21 = v24;
    if ( !v24 )
      goto LABEL_60;
  }
  v21 = 0;
LABEL_38:
  if ( !v21 || !(unsigned int)RGNMEMOBJ::bAddNullScan(this, v19, 0x7FFFFFFF) )
  {
LABEL_60:
    v27 = *(REGION **)this;
    goto LABEL_61;
  }
  RGNOBJ::vTighten(this);
  v26 = *(_DWORD **)this;
  if ( ((*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) == 0
     || (*(_DWORD *)(*(_QWORD *)this + 88LL) & 0xF8000000) == -134217728)
    && (((v26[25] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v26[24] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0
    && (((v26[23] & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) == 0 )
  {
    goto LABEL_55;
  }
  v27 = *(REGION **)this;
LABEL_61:
  REGION::vDeleteREGION(v27);
  *(_QWORD *)this = 0LL;
LABEL_55:
  if ( v11 )
    Win32FreePool(v10);
}
