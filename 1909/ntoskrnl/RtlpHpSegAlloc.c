/*
 * XREFs of RtlpHpSegAlloc @ 0x14005FDE0
 * Callers:
 *     ExAllocateHeapPool @ 0x140037CE0 (ExAllocateHeapPool.c)
 *     ExAllocateHeapPages @ 0x1400F4544 (ExAllocateHeapPages.c)
 *     ExAllocateContiguousHeapPool @ 0x1400F6154 (ExAllocateContiguousHeapPool.c)
 *     RtlpHpMetadataAlloc @ 0x140110058 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocateHeapInternal @ 0x1401102DC (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpSegSubAllocate @ 0x140127EEC (RtlpHpSegSubAllocate.c)
 *     ExAllocateHeapSpecialPool @ 0x14033E988 (ExAllocateHeapSpecialPool.c)
 * Callees:
 *     RtlpHpSegPageRangeCommit @ 0x14001FBC8 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegPageRangeHandleCommit @ 0x140021E00 (RtlpHpSegPageRangeHandleCommit.c)
 *     RtlpHpSegMgrCommit @ 0x140022010 (RtlpHpSegMgrCommit.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140060280 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x14011D148 (RtlpHpSegPageRangeComputeLargePageCost.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpHpSegPageRangeFree @ 0x14031B60C (RtlpHpSegPageRangeFree.c)
 */

_WORD *__fastcall RtlpHpSegAlloc(__int64 a1, size_t Size, __int64 a3, __int64 a4, unsigned int a5)
{
  char v5; // bl
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r8
  size_t v8; // r12
  unsigned int v10; // r15d
  _WORD *result; // rax
  __int64 v12; // rsi
  int v13; // edi
  int v14; // r13d
  unsigned int v15; // eax
  int v16; // r9d
  int v17; // r8d
  __int64 v18; // rax
  char v19; // cl
  unsigned int v20; // edx
  unsigned int v21; // r13d
  int v22; // eax
  char v23; // r8
  unsigned int v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // edi
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r9
  unsigned int v29; // r11d
  unsigned int v30; // eax
  int v31; // ebx
  int v32; // ecx
  unsigned __int64 v33; // r15
  int v34; // r8d
  unsigned __int64 v35; // r15
  unsigned int v36; // r12d
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // ebx
  unsigned int v40; // eax
  int v41; // edx
  int v42; // r11d
  unsigned int v43; // ecx
  int v44; // ecx
  int v45; // eax
  unsigned int v46; // edx
  int v47; // r11d
  int v48; // eax
  int v49; // ecx
  __int64 v50; // rdx
  unsigned int v51; // r8d
  unsigned int v52; // eax
  void *v53; // rsi
  int v54; // [rsp+40h] [rbp-78h] BYREF
  int v55; // [rsp+48h] [rbp-70h] BYREF
  unsigned int v56; // [rsp+50h] [rbp-68h]
  unsigned int v57; // [rsp+54h] [rbp-64h]
  int v58; // [rsp+58h] [rbp-60h]
  int v59; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v60; // [rsp+60h] [rbp-58h]
  int v61; // [rsp+64h] [rbp-54h]
  int v62; // [rsp+68h] [rbp-50h]
  __int64 v63; // [rsp+70h] [rbp-48h]
  char v65; // [rsp+D0h] [rbp+18h]
  unsigned int v66; // [rsp+D8h] [rbp+20h]

  v5 = a5;
  v6 = (unsigned __int64)(a4 + 4095) >> 12;
  v7 = (unsigned __int64)(a3 + 4095) >> 12;
  v8 = Size;
  v62 = a5 & 4;
  v10 = v7 + 1;
  if ( (a5 & 4) == 0 )
    v10 = v7;
  v60 = v10;
  if ( (a5 & 0x800000) != 0 && (unsigned int)-*(_DWORD *)a1 > 0x200000 )
    return 0LL;
  result = (_WORD *)RtlpHpSegPageRangeAllocate(a1, v10, a5);
  v12 = (__int64)result;
  if ( result )
  {
    v13 = *((unsigned __int8 *)result + 31);
    v14 = (unsigned __int16)~result[14];
    v61 = v14;
    v59 = v13;
    if ( (_DWORD)v6 )
    {
      v15 = a5 & 0xFFFFFFFD;
      v16 = 511;
      v17 = v6;
      if ( !v14 )
        v15 = a5;
      v65 = v15;
      v66 = (v15 >> 22) & 2;
      v18 = *(_QWORD *)a1;
      if ( (*(_BYTE *)(a1 + 13) & 7) == 0 )
        v16 = 0x7FFF;
      v19 = *(_BYTE *)(a1 + 9);
      v58 = v16;
      v20 = (unsigned int)((v12 - (v12 & v18)) >> 5) << v19;
      v63 = v20;
      if ( (int)v6 <= 0 )
        v17 = -(int)v6;
      v57 = v17;
      if ( v17 )
      {
        v21 = 0;
        while ( 1 )
        {
          v22 = v17;
          v23 = *(_BYTE *)(a1 + 9);
          v24 = v22 - v21;
          v25 = v16 - (v16 & (v20 + v21)) + 1;
          if ( v25 >= v24 )
            v25 = v24;
          v26 = 1 << *(_BYTE *)(a1 + 9);
          v56 = v25;
          v27 = (unsigned __int64)v21 >> v23 << v23;
          v28 = v12 + 32 * ((unsigned __int64)v21 >> v23);
          v29 = v21 & (v26 - 1);
          v30 = v25 + v29 - 1;
          v31 = 0;
          v32 = -1;
          v33 = 32 * ((unsigned __int64)v30 >> v23);
          v34 = -1;
          v35 = v28 + v33;
          v36 = (v30 & (v26 - 1)) + 1;
          if ( v29 )
            break;
LABEL_30:
          while ( v28 < v35 )
          {
            v40 = *(unsigned __int8 *)(v28 + 25);
            v41 = 0;
            v42 = v34;
            if ( (int)v6 <= 0 )
            {
              if ( *(_BYTE *)(v28 + 25) )
              {
                v44 = v27;
                v41 = -v40;
                if ( v34 != -1 )
                  v44 = v34;
                v34 = v44;
                v43 = *(unsigned __int8 *)(v28 + 25);
                goto LABEL_40;
              }
            }
            else if ( v40 < v26 )
            {
              v34 = v40 + v27;
              v41 = v26 - v40;
              v43 = v26;
              if ( v42 != -1 )
                v34 = v42;
LABEL_40:
              v32 = v27 + v43;
              if ( v41 && (int)v6 <= 0 )
                *(_BYTE *)(v28 + 25) = v41 + v40;
            }
            v31 += v41;
            v28 += 32LL;
            LODWORD(v27) = v26 + v27;
          }
          v45 = v34;
          if ( v28 == v35 )
          {
            v46 = *(unsigned __int8 *)(v28 + 25);
            v47 = 0;
            if ( (int)v6 <= 0 )
            {
              if ( *(_BYTE *)(v28 + 25) )
              {
                v48 = v27;
                v47 = -v46;
                v36 = *(unsigned __int8 *)(v28 + 25);
                if ( v34 != -1 )
                  v48 = v34;
                v34 = v48;
LABEL_54:
                v32 = v27 + v36;
                if ( v47 && (int)v6 <= 0 )
                  *(_BYTE *)(v28 + 25) = v47 + v46;
              }
            }
            else if ( v46 < v36 )
            {
              v34 = v27 + v46;
              v47 = v36 - v46;
              if ( v45 != -1 )
                v34 = v45;
              goto LABEL_54;
            }
            v31 += v47;
          }
          if ( v31 )
          {
            v49 = v32 - v34;
            v50 = v12 & *(_QWORD *)a1;
            v55 = v34;
            v51 = v63 + v34;
            v54 = v49;
            if ( v31 > 0 )
            {
              v52 = 4096;
              if ( (v65 & 2) != 0 )
                v52 = 1073745920;
            }
            else
            {
              v52 = 0x4000;
            }
            if ( (int)RtlpHpSegMgrCommit(a1, v50, v51, v49, v31, v52, v66) < 0 )
            {
              RtlpHpSegPageRangeFree(a1, v12, a5);
              return 0LL;
            }
            if ( v31 > 0 )
              RtlpHpSegPageRangeHandleCommit(a1, v12, &v55, &v54, 1);
            _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v31);
            *(_WORD *)(v12 + 28) = ~(v31 + ~*(_WORD *)(v12 + 28));
          }
          v21 += v56;
          v17 = v57;
          if ( v21 >= v57 )
          {
            v5 = a5;
            v13 = v59;
            v10 = v60;
            v8 = Size;
            v14 = v61;
            goto LABEL_71;
          }
          v20 = v63;
          v16 = v58;
        }
        v37 = *(unsigned __int8 *)(v28 + 25);
        v38 = v26;
        if ( v28 == v35 )
          v38 = v36;
        if ( (int)v6 <= 0 )
        {
          if ( v37 > v29 )
          {
            v39 = v21 & (v26 - 1);
            v38 = *(unsigned __int8 *)(v28 + 25);
            goto LABEL_26;
          }
        }
        else if ( v37 < v38 )
        {
          v39 = v38;
          v29 = *(unsigned __int8 *)(v28 + 25);
LABEL_26:
          v31 = v39 - v37;
          v34 = v27 + v29;
          v32 = v27 + v38;
          if ( v31 && (int)v6 <= 0 )
            *(_BYTE *)(v28 + 25) = v31 + v37;
        }
        v28 += 32LL;
        LODWORD(v27) = v26 + v27;
        goto LABEL_30;
      }
    }
LABEL_71:
    if ( v62 )
      RtlpHpSegPageRangeCommit(a1, v12, v10 - 1, v10 - (v13 << *(_BYTE *)(a1 + 9)) - 1, 0, 0LL);
    *(_DWORD *)(v12 + 4) = (v13 << *(_BYTE *)(a1 + 8)) - v8;
    v53 = (void *)((v12 & *(_QWORD *)a1) + ((v12 - (v12 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)));
    if ( (v5 & 2) != 0
      && (v14
       || BYTE1(*(_QWORD *)(a1 + 40)) >= 2u
       || (*(_BYTE *)(a1 + 13) & 7) != 0 && (int)RtlpHpSegPageRangeComputeLargePageCost(a1, v53, (unsigned int)v8) <= 2) )
    {
      memset(v53, 0, v8);
    }
    return v53;
  }
  return result;
}
