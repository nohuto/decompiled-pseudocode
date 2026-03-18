/*
 * XREFs of RaspCreateSegmentList @ 0x140184DE4
 * Callers:
 *     RaspScanConvert @ 0x140183DC0 (RaspScanConvert.c)
 * Callees:
 *     RaspDestroySegmentList @ 0x140183BFC (RaspDestroySegmentList.c)
 *     RaspInterpolatePoint @ 0x140185130 (RaspInterpolatePoint.c)
 *     RaspAllocateMemory @ 0x1401851B4 (RaspAllocateMemory.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall RaspCreateSegmentList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int16 *v8; // r15
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  int v11; // edx
  unsigned int v12; // r12d
  int v13; // r9d
  _BYTE *v14; // r10
  unsigned int v15; // r11d
  unsigned int v16; // r8d
  void *Memory; // rax
  __int64 v18; // r13
  int v19; // ebp
  __int64 v20; // rdi
  unsigned int v21; // esi
  unsigned int v22; // r11d
  unsigned int v23; // r10d
  unsigned int v24; // r9d
  unsigned int v25; // edx
  int v26; // r8d
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 result; // rax
  __int64 v31; // r9
  __int64 v32; // rdx
  char v33; // al
  __int64 v34; // rax
  char v35; // al
  int v36; // eax
  __int64 v37; // [rsp+20h] [rbp-48h]
  char v38; // [rsp+28h] [rbp-40h]
  unsigned int v39; // [rsp+2Ch] [rbp-3Ch]
  unsigned int v41; // [rsp+80h] [rbp+18h]

  if ( a3 < 2 )
    return 3221225485LL;
  v8 = *(unsigned __int16 **)(a1 + 26);
  v9 = a3 - 2;
  v10 = 0;
  v39 = a3 - 2;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( a3 == 2 )
    goto LABEL_51;
  v14 = (_BYTE *)(a2 + 16);
  do
  {
    v15 = v13 + 1;
    v16 = v13 + 1;
    if ( v13 == v8[v11] )
    {
      if ( v11 )
        v16 = v8[v11 - 1] + 1;
      else
        v16 = 0;
      ++v11;
    }
    if ( (*v14 & 1) != 0 || (*(_BYTE *)(17LL * v16 + a2 + 16) & 1) == 0 )
      ++v12;
    v14 += 17;
    ++v13;
  }
  while ( v15 < v9 );
  if ( !v12 )
  {
LABEL_51:
    *a4 = 0LL;
    result = 0LL;
LABEL_52:
    *a5 = 0;
    return result;
  }
  Memory = (void *)RaspAllocateMemory(25LL * v12);
  v18 = (__int64)Memory;
  if ( !Memory )
  {
    result = 3221225626LL;
    goto LABEL_52;
  }
  memset(Memory, 0, 25LL * v12);
  v19 = 0;
  v20 = v18 + 16;
  v21 = 0;
  while ( 1 )
  {
    v22 = v21 + 1;
    v23 = v21 + 1;
    v41 = v21 + 1;
    v24 = v21 - 1;
    v25 = v21 + 2;
    if ( v21 )
    {
      if ( v19 && v21 == v8[v19 - 1] + 1 )
        v24 = v8[v19];
    }
    else
    {
      v24 = *v8;
    }
    v26 = v8[v19];
    if ( v21 == v26 - 1 )
    {
      if ( v19 )
        v25 = v8[v19 - 1] + 1;
      else
        v25 = 0;
    }
    if ( v21 == v26 )
    {
      if ( v19 )
      {
        v36 = v8[v19 - 1];
        v23 = v36 + 1;
        v41 = v36 + 1;
        v25 = v36 + 2;
      }
      else
      {
        v23 = 0;
        v41 = 0;
        v25 = 1;
      }
      ++v19;
    }
    v27 = a2 + 17LL * v21;
    if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
      break;
    if ( !v21 && (*(_BYTE *)(17LL * v24 + a2 + 16) & 1) != 0
      || v19 && v21 == v8[v19 - 1] + 1 && (*(_BYTE *)(17LL * v24 + a2 + 16) & 1) != 0 )
    {
      goto LABEL_25;
    }
    v37 = a2 + 17LL * v23;
    v38 = *(_BYTE *)(v37 + 16) & 1;
    v28 = RaspInterpolatePoint(a2 + 17LL * v24, a2 + 17LL * v21, a6);
    *(_QWORD *)(v20 - 16) = v28;
    if ( !v28 )
      goto LABEL_59;
    *(_QWORD *)(v20 - 8) = v27;
    if ( v38 )
    {
      *(_QWORD *)v20 = v37;
      *(_BYTE *)(v20 + 8) = 3;
    }
    else
    {
      v29 = RaspInterpolatePoint(v27, v37, a6);
      *(_QWORD *)v20 = v29;
      if ( !v29 )
        goto LABEL_59;
      *(_BYTE *)(v20 + 8) = 5;
    }
LABEL_24:
    v20 += 25LL;
LABEL_25:
    if ( ++v21 >= v39 )
      goto LABEL_26;
  }
  v31 = a2 + 17LL * v23;
  if ( (*(_BYTE *)(v31 + 16) & 1) != 0 )
  {
    *(_QWORD *)(v20 - 16) = v27;
    *(_QWORD *)(v20 - 8) = v31;
    *(_QWORD *)v20 = v31;
    *(_BYTE *)(v20 + 8) = 1;
    goto LABEL_24;
  }
  v32 = a2 + 17LL * v25;
  v33 = *(_BYTE *)(v32 + 16);
  *(_QWORD *)(v20 - 16) = v27;
  *(_QWORD *)(v20 - 8) = v31;
  if ( (v33 & 1) != 0 )
  {
    *(_QWORD *)v20 = v32;
    v35 = 2;
    goto LABEL_31;
  }
  v34 = RaspInterpolatePoint(v31, v32, a6);
  *(_QWORD *)v20 = v34;
  if ( v34 )
  {
    v23 = v41;
    v35 = 4;
    v22 = v21 + 1;
LABEL_31:
    *(_BYTE *)(v20 + 8) = v35;
    if ( v23 > v21 )
    {
      v21 = v22;
      if ( v22 == v8[v19] )
        ++v19;
    }
    goto LABEL_24;
  }
LABEL_59:
  RaspDestroySegmentList(v18, v12, a6);
  v18 = 0LL;
  v12 = 0;
  v10 = -1073741670;
LABEL_26:
  *a5 = v12;
  *a4 = v18;
  return v10;
}
