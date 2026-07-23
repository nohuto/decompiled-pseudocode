/*
 * XREFs of RaspCreateSegmentList @ 0x14017BD7C
 * Callers:
 *     RaspScanConvert @ 0x14017AD50 (RaspScanConvert.c)
 * Callees:
 *     RaspDestroySegmentList @ 0x14017AB94 (RaspDestroySegmentList.c)
 *     RaspInterpolatePoint @ 0x14017C0E0 (RaspInterpolatePoint.c)
 *     RaspAllocateMemory @ 0x14017C164 (RaspAllocateMemory.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall RaspCreateSegmentList(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned __int16 *v8; // r13
  unsigned int v9; // esi
  unsigned int v10; // edi
  int v11; // edx
  unsigned int v12; // r12d
  int v13; // r9d
  _BYTE *v14; // r10
  unsigned int v15; // r11d
  unsigned int v16; // r8d
  char *Memory; // rax
  char *v18; // rsi
  char *v19; // rsi
  int v20; // r14d
  unsigned int v21; // ebp
  unsigned int v22; // r10d
  unsigned int v23; // ebx
  unsigned int v24; // r9d
  unsigned int v25; // edx
  int v26; // r8d
  __int64 v27; // r15
  char v28; // bl
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 result; // rax
  __int64 v33; // r9
  __int64 v34; // rdx
  char v35; // al
  __int64 v36; // rax
  char v37; // al
  int v38; // eax
  unsigned int v39; // [rsp+20h] [rbp-58h]
  __int64 v40; // [rsp+28h] [rbp-50h]
  __int64 v41; // [rsp+30h] [rbp-48h]

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
    goto LABEL_53;
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
LABEL_53:
    *a4 = 0LL;
    result = 0LL;
LABEL_54:
    *a5 = 0;
    return result;
  }
  Memory = (char *)RaspAllocateMemory(25LL * v12);
  v41 = (__int64)Memory;
  v18 = Memory;
  if ( !Memory )
  {
    result = 3221225626LL;
    goto LABEL_54;
  }
  memset(Memory, 0, 25LL * v12);
  v19 = v18 + 16;
  v20 = 0;
  v21 = 0;
  while ( 1 )
  {
    v22 = v21 + 1;
    v23 = v21 + 1;
    v24 = v21 - 1;
    v25 = v21 + 2;
    if ( v21 )
    {
      if ( v20 && v21 == v8[v20 - 1] + 1 )
        v24 = v8[v20];
    }
    else
    {
      v24 = *v8;
    }
    v26 = v8[v20];
    if ( v21 == v26 - 1 )
    {
      if ( v20 )
        v25 = v8[v20 - 1] + 1;
      else
        v25 = 0;
    }
    if ( v21 == v26 )
    {
      if ( v20 )
      {
        v38 = v8[v20 - 1];
        v23 = v38 + 1;
        v25 = v38 + 2;
      }
      else
      {
        v23 = 0;
        v25 = 1;
      }
      ++v20;
    }
    v27 = a2 + 17LL * v21;
    if ( (*(_BYTE *)(v27 + 16) & 1) != 0 )
    {
      v33 = a2 + 17LL * v23;
      if ( (*(_BYTE *)(v33 + 16) & 1) != 0 )
      {
        *((_QWORD *)v19 - 2) = v27;
        *((_QWORD *)v19 - 1) = v33;
        *(_QWORD *)v19 = v33;
        v19[8] = 1;
      }
      else
      {
        v34 = a2 + 17LL * v25;
        v35 = *(_BYTE *)(v34 + 16);
        *((_QWORD *)v19 - 2) = v27;
        *((_QWORD *)v19 - 1) = v33;
        if ( (v35 & 1) != 0 )
        {
          *(_QWORD *)v19 = v34;
          v37 = 2;
        }
        else
        {
          v36 = RaspInterpolatePoint(v33, v34, a6);
          *(_QWORD *)v19 = v36;
          if ( !v36 )
            break;
          v22 = v21 + 1;
          v37 = 4;
        }
        v19[8] = v37;
        if ( v23 > v21 )
        {
          v21 = v22;
          if ( v22 == v8[v20] )
            ++v20;
        }
      }
      goto LABEL_24;
    }
    if ( !v21 && (*(_BYTE *)(17LL * v24 + a2 + 16) & 1) != 0
      || v20 && v21 == v8[v20 - 1] + 1 && (*(_BYTE *)(17LL * v24 + a2 + 16) & 1) != 0 )
    {
      goto LABEL_25;
    }
    v40 = a2 + 17LL * v23;
    v28 = *(_BYTE *)(v40 + 16);
    v29 = RaspInterpolatePoint(a2 + 17LL * v24, a2 + 17LL * v21, a6);
    *((_QWORD *)v19 - 2) = v29;
    if ( (v28 & 1) != 0 )
    {
      if ( !v29 )
        break;
      *(_QWORD *)v19 = v40;
      *((_QWORD *)v19 - 1) = v27;
      v19[8] = 3;
      goto LABEL_24;
    }
    if ( !v29 )
      break;
    *((_QWORD *)v19 - 1) = v27;
    v30 = RaspInterpolatePoint(v27, v40, a6);
    *(_QWORD *)v19 = v30;
    if ( !v30 )
      break;
    v19[8] = 5;
LABEL_24:
    v19 += 25;
LABEL_25:
    if ( ++v21 >= v39 )
    {
      v31 = v41;
      goto LABEL_27;
    }
  }
  RaspDestroySegmentList(v41, v12, a6);
  v31 = 0LL;
  v12 = 0;
  v10 = -1073741670;
LABEL_27:
  *a5 = v12;
  *a4 = v31;
  return v10;
}
