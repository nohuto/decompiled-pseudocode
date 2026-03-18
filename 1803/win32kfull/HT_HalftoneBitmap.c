/*
 * XREFs of HT_HalftoneBitmap @ 0x1C00D06DC
 * Callers:
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 * Callees:
 *     SanityCheckDimension @ 0x1C00D0974 (SanityCheckDimension.c)
 *     AAHalftoneBitmap @ 0x1C00D09A8 (AAHalftoneBitmap.c)
 *     pDCIAdjClr @ 0x1C00D2880 (pDCIAdjClr.c)
 *     CheckABInfo @ 0x1C022E908 (CheckABInfo.c)
 */

__int64 HT_HalftoneBitmap(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, ...)
{
  _WORD *v5; // rbx
  unsigned __int8 v6; // r9
  unsigned __int16 v7; // si
  __int16 v10; // r12
  __int16 v11; // di
  unsigned __int8 v12; // r14
  unsigned __int8 v13; // r9
  unsigned __int16 v14; // r11
  __int64 v15; // r15
  char *v16; // r14
  unsigned __int16 v17; // ax
  char *v18; // r13
  unsigned int v19; // ebx
  __int64 result; // rax
  __int64 v21; // rax
  __int16 v22; // cx
  PVOID v23; // rax
  char v24; // [rsp+40h] [rbp-20h]
  PVOID pv; // [rsp+48h] [rbp-18h] BYREF
  int v26; // [rsp+50h] [rbp-10h]
  unsigned int v27; // [rsp+54h] [rbp-Ch] BYREF
  int v28; // [rsp+58h] [rbp-8h]
  char v30; // [rsp+B0h] [rbp+50h]
  _WORD *v32; // [rsp+C8h] [rbp+68h] BYREF
  va_list va; // [rsp+C8h] [rbp+68h]
  va_list va1; // [rsp+D0h] [rbp+70h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v32 = va_arg(va1, _WORD *);
  v5 = v32;
  v6 = *(_BYTE *)(a3 + 10);
  v7 = 0;
  v30 = v6;
  v10 = *v32;
  v11 = 0;
  LOWORD(pv) = 0;
  v12 = *(_BYTE *)(a5 + 10);
  v24 = v12;
  LOWORD(v32) = 0;
  v28 = 0;
  v26 = 0;
  if ( v6 )
  {
    v26 = 0;
    v7 = 0;
    if ( v6 <= 3u )
    {
      v21 = *(_QWORD *)(a3 + 32);
      v7 = 1 << byte_1C02DCE30[v6];
      v26 = v7;
      if ( !v21 )
        return 4294967278LL;
      v28 = *(_DWORD *)(v21 + 8);
      if ( !v28 )
        return 4294967278LL;
    }
  }
  if ( !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 4), *((unsigned int *)v5 + 6))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 5), *((unsigned int *)v5 + 7))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 8), *((unsigned int *)v5 + 10))
    || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 9), *((unsigned int *)v5 + 11))
    || (v10 & 1) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 12), *((unsigned int *)v5 + 14))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 13), *((unsigned int *)v5 + 15)))
    || (v10 & 0x10) != 0
    && (!(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 16), *((unsigned int *)v5 + 18))
     || !(unsigned int)SanityCheckDimension(*((unsigned int *)v5 + 17), *((unsigned int *)v5 + 19))) )
  {
    return 4294967294LL;
  }
  if ( (v10 & 0x200) != 0 )
  {
    result = CheckABInfo((_DWORD)v5, v13, v12, (unsigned int)&pv, (__int64)va);
    v27 = result;
    if ( (int)result <= 0 )
      return result;
    v11 = (__int16)pv;
    v14 = (unsigned __int16)v32;
  }
  BYTE2(pv) = *((_BYTE *)v5 + 3);
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
  v15 = pDCIAdjClr(a1, a2, (unsigned int)&pv, 4 * (v7 + (unsigned int)v14) + 688, v11, (_DWORD)pv, (__int64)&v27);
  if ( !v15 )
    return v27;
  v16 = (char *)pv + 312;
  *((_QWORD *)pv + 40) = pv;
  *((_QWORD *)v16 + 4) = a4;
  *((_QWORD *)v16 + 5) = a5;
  v17 = v26;
  *((_QWORD *)v16 + 3) = a3;
  v18 = v16 + 688;
  *(_QWORD *)v16 = v15;
  *((_QWORD *)v16 + 2) = v5;
  *((_QWORD *)v16 + 6) = v16 + 88;
  if ( v17 )
  {
    v22 = v28;
    *((_QWORD *)v16 + 22) = v18;
    *((_WORD *)v16 + 49) = v22;
    v18 += 4 * v17;
  }
  if ( (v11 & 0x80u) != 0 )
  {
    if ( *(_QWORD *)(v15 + 7064) || (v23 = EngAllocMem(1u, 0xB00u, 0x35345448u), (*(_QWORD *)(v15 + 7064) = v23) != 0LL) )
    {
      if ( (v11 & 0x100) != 0 )
      {
        *(_WORD *)(v15 + 7056) = *(_WORD *)(v15 + 7058);
        *(_WORD *)(v15 + 7058) = *(unsigned __int8 *)(*((_QWORD *)v5 + 1) + 1LL);
      }
      if ( (_WORD)v32 )
      {
        *((_QWORD *)v16 + 33) = v18;
        *((_WORD *)v16 + 93) = *(_WORD *)(*((_QWORD *)v5 + 1) + 2LL);
      }
      goto LABEL_26;
    }
    EngReleaseSemaphore(*(HSEMAPHORE *)(v15 + 8));
    return 4294967294LL;
  }
LABEL_26:
  v16[161] = v30;
  v16[249] = v24;
  if ( (v10 & 0x40) != 0 )
    *((_QWORD *)v16 + 4) = 0LL;
  v19 = AAHalftoneBitmap(v16, 0LL);
  EngFreeMem(pv);
  return v19;
}
