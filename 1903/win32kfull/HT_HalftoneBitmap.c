/*
 * XREFs of HT_HalftoneBitmap @ 0x1C0036ED8
 * Callers:
 *     EngHTBlt @ 0x1C0036378 (EngHTBlt.c)
 * Callees:
 *     SanityCheckDimension @ 0x1C0037184 (SanityCheckDimension.c)
 *     AAHalftoneBitmap @ 0x1C00371B0 (AAHalftoneBitmap.c)
 *     pDCIAdjClr @ 0x1C00390BC (pDCIAdjClr.c)
 *     CheckABInfo @ 0x1C025D7C0 (CheckABInfo.c)
 */

__int64 HT_HalftoneBitmap(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  unsigned __int8 v5; // r9
  _WORD *v7; // rdi
  unsigned __int16 v8; // bx
  __int16 v10; // r15
  __int16 v11; // si
  unsigned __int8 v12; // r14
  unsigned __int8 v13; // r9
  unsigned __int16 v14; // r10
  int v15; // r11d
  __int64 v16; // rax
  __int64 v17; // r14
  PVOID v18; // r13
  char *v19; // rbx
  unsigned __int16 v20; // ax
  char *v21; // r12
  unsigned int v22; // ebx
  __int64 result; // rax
  __int64 v24; // rax
  __int16 v25; // cx
  PVOID v26; // rax
  char v27; // [rsp+40h] [rbp-20h]
  PVOID pv; // [rsp+48h] [rbp-18h] BYREF
  int v29; // [rsp+50h] [rbp-10h]
  unsigned int v30; // [rsp+54h] [rbp-Ch] BYREF
  int v31; // [rsp+58h] [rbp-8h]
  char v33; // [rsp+B0h] [rbp+50h]
  _WORD *v35; // [rsp+C8h] [rbp+68h] BYREF
  va_list va; // [rsp+C8h] [rbp+68h]
  va_list va1; // [rsp+D0h] [rbp+70h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v35 = va_arg(va1, _WORD *);
  v5 = *(_BYTE *)(a3 + 10);
  v7 = v35;
  v8 = 0;
  v33 = v5;
  LOWORD(pv) = 0;
  v10 = *v35;
  v11 = 0;
  v12 = *(_BYTE *)(a5 + 10);
  v27 = v12;
  LOWORD(v35) = 0;
  v31 = 0;
  v29 = 0;
  if ( v5 )
  {
    v8 = 0;
    v29 = 0;
    if ( v5 <= 3u )
    {
      v24 = *(_QWORD *)(a3 + 32);
      v8 = 1 << byte_1C02E03DC[v5];
      v29 = v8;
      if ( !v24 )
        return 4294967278LL;
      v31 = *(_DWORD *)(v24 + 8);
      if ( !v31 )
        return 4294967278LL;
    }
  }
  if ( !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 4), *((unsigned int *)v7 + 6))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 5), *((unsigned int *)v7 + 7))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 8), *((unsigned int *)v7 + 10))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 9), *((unsigned int *)v7 + 11))
    || (v10 & 1) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 12), *((unsigned int *)v7 + 14))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 13), *((unsigned int *)v7 + 15)))
    || (v10 & 0x10) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 16), *((unsigned int *)v7 + 18))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v7 + 17), *((unsigned int *)v7 + 19))) )
  {
    return 4294967294LL;
  }
  if ( (v10 & 0x200) != 0 )
  {
    result = CheckABInfo((_DWORD)v7, v13, v12, (unsigned int)&pv, (__int64)va);
    v30 = result;
    if ( (int)result <= 0 )
      return result;
    v11 = (__int16)pv;
    v14 = (unsigned __int16)v35;
    v15 = a1;
  }
  BYTE2(pv) = *((_BYTE *)v7 + 3);
  LOWORD(pv) = 1024;
  BYTE3(pv) = v12;
  if ( (v10 & 2) != 0 )
    v11 |= 4u;
  if ( (v10 & 4) != 0 )
    v11 |= 2u;
  if ( (v10 & 0x20) != 0 || v12 == 1 )
    v11 |= 1u;
  if ( (v10 & 0x80u) != 0 )
    v11 |= 8u;
  if ( (v10 & 0x100) != 0 )
    v11 |= 0x20u;
  v16 = pDCIAdjClr(v15, a2, (unsigned int)&pv, 4 * (v8 + (unsigned int)v14) + 688, v11, (_DWORD)pv, (__int64)&v30);
  v17 = v16;
  if ( !v16 )
    return v30;
  v18 = pv;
  v19 = (char *)pv + 312;
  *((_QWORD *)pv + 39) = v16;
  *((_QWORD *)v19 + 4) = a4;
  *((_QWORD *)v19 + 5) = a5;
  *((_QWORD *)v19 + 6) = v19 + 88;
  v20 = v29;
  *((_QWORD *)v19 + 3) = a3;
  v21 = v19 + 688;
  *((_QWORD *)v19 + 1) = v18;
  *((_QWORD *)v19 + 2) = v7;
  if ( v20 )
  {
    v25 = v31;
    *((_QWORD *)v19 + 22) = v21;
    *((_WORD *)v19 + 49) = v25;
    v21 += 4 * v20;
  }
  if ( (v11 & 0x80u) != 0 )
  {
    if ( *(_QWORD *)(v17 + 7064) || (v26 = EngAllocMem(1u, 0xB00u, 0x35345448u), (*(_QWORD *)(v17 + 7064) = v26) != 0LL) )
    {
      if ( (v11 & 0x100) != 0 )
      {
        *(_WORD *)(v17 + 7056) = *(_WORD *)(v17 + 7058);
        *(_WORD *)(v17 + 7058) = *(unsigned __int8 *)(*((_QWORD *)v7 + 1) + 1LL);
      }
      if ( (_WORD)v35 )
      {
        *((_QWORD *)v19 + 33) = v21;
        *((_WORD *)v19 + 93) = *(_WORD *)(*((_QWORD *)v7 + 1) + 2LL);
      }
      goto LABEL_26;
    }
    EngReleaseSemaphore(*(HSEMAPHORE *)(v17 + 8));
    return 4294967294LL;
  }
LABEL_26:
  v19[161] = v33;
  v19[249] = v27;
  if ( (v10 & 0x40) != 0 )
    *((_QWORD *)v19 + 4) = 0LL;
  v22 = AAHalftoneBitmap(v19, 0LL);
  EngFreeMem(v18);
  return v22;
}
