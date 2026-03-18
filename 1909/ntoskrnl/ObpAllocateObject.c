/*
 * XREFs of ObpAllocateObject @ 0x1405F36C0
 * Callers:
 *     IopAllocRealFileObject @ 0x1405D8820 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     ObCreateObjectTypeEx @ 0x14075E310 (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x14003A800 (SeAuditHeaderRequired.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(int *a1, char a2, __int64 a3, _WORD *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  int v8; // ebp
  __int64 v11; // r8
  char v12; // r10
  int v13; // r11d
  int v14; // r15d
  int v15; // r9d
  char v16; // r14
  char v17; // si
  int v18; // r8d
  char v19; // cl
  char v20; // r13
  char v21; // r14
  unsigned __int8 v22; // r13
  char v23; // dl
  char v24; // al
  int v25; // ecx
  int v26; // r12d
  int v27; // r12d
  unsigned int v28; // ecx
  char *PoolWithTag; // rax
  char v30; // r9
  char *v31; // r8
  __int64 v32; // rdx
  char v33; // r8
  int v34; // ecx
  unsigned __int32 v35; // edx
  __int128 v37; // xmm0
  unsigned __int8 v38; // dl
  int v39; // [rsp+20h] [rbp-58h]
  int v40; // [rsp+24h] [rbp-54h]
  char v41; // [rsp+80h] [rbp+8h]
  int v43; // [rsp+90h] [rbp+18h]

  v8 = *a1 & 0x20;
  v43 = 16;
  if ( SeAuditHeaderRequired((POBJECT_TYPE *)a3) )
  {
    v13 = 16;
    v12 |= 0x20u;
  }
  else
  {
    v13 = 0;
  }
  v14 = 32;
  v39 = v13;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess
    || KeGetCurrentThread()->ApcState.Process == PsIdleProcess
    || !PsInitialSystemProcess )
  {
    v15 = 0;
  }
  else
  {
    v15 = 32;
    v12 |= 8u;
  }
  v16 = *(_BYTE *)(v11 + 66);
  v40 = v15;
  v17 = v16 & 0x10;
  v18 = (v16 & 0x10) != 0 ? 0x10 : 0;
  v19 = v12 | 4;
  if ( (v16 & 0x10) == 0 )
    v19 = v12;
  if ( *a4 )
  {
    if ( (v16 & 2) != 0 )
      return 3221225523LL;
    v19 |= 2u;
  }
  else
  {
    v14 = 0;
  }
  v20 = v16 >> 7;
  v21 = v16 & 0x20;
  v22 = v20 & 0x30;
  v23 = v19 | 1;
  v24 = v19;
  v25 = 48;
  if ( !v21 )
    v23 = v24;
  v41 = v23;
  if ( !a7 )
  {
    v41 = v23;
LABEL_47:
    v25 = 0;
    v43 = 0;
    goto LABEL_16;
  }
  if ( !*a7 && !a7[1] )
    goto LABEL_47;
  v41 = v23 | 0x40;
LABEL_16:
  v26 = 64;
  if ( !v8 )
    v26 = 48;
  v27 = v13 + v15 + v14 + v43 + (v21 != 0 ? 0x20 : 0) + v18 + v26;
  v28 = v27 + v22 + v25;
  if ( v28 + a5 < v28 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a3 + 100), v28 + a5, *(_DWORD *)(a3 + 192));
  if ( !PoolWithTag )
    return 3221225626LL;
  v30 = v41;
  if ( v22 )
  {
    v38 = -(char)((_BYTE)PoolWithTag + v27) & 0x3F;
    if ( v38 )
    {
      PoolWithTag += v38;
      v30 = v41 | 0x80;
      *((_DWORD *)PoolWithTag - 1) = v38;
    }
  }
  if ( v43 )
  {
    v31 = &PoolWithTag[v27 + a5];
    *(_QWORD *)PoolWithTag = v31;
    *(_QWORD *)v31 = 0LL;
    *((_QWORD *)v31 + 1) = 0LL;
    *((_QWORD *)v31 + 2) = 0LL;
    *((_QWORD *)v31 + 3) = 0LL;
    *((_QWORD *)v31 + 4) = 0LL;
    *((_QWORD *)v31 + 5) = 0LL;
    v32 = *(_QWORD *)PoolWithTag;
    PoolWithTag += 16;
    *(_BYTE *)(v32 + 24) = *a7;
  }
  if ( v39 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    PoolWithTag += 16;
  }
  if ( v8 )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v40 )
  {
    *(_DWORD *)PoolWithTag = a1[5];
    *((_DWORD *)PoolWithTag + 1) = a1[6];
    *((_DWORD *)PoolWithTag + 2) = a1[7];
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    PoolWithTag += 32;
  }
  if ( v17 )
  {
    *((_DWORD *)PoolWithTag + 2) &= 0xFF000000;
    PoolWithTag[11] = 0;
    *(_QWORD *)PoolWithTag = 0LL;
    PoolWithTag += 16;
  }
  if ( v14 )
  {
    v37 = *(_OWORD *)a4;
    *(_QWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *(_OWORD *)(PoolWithTag + 8) = v37;
    PoolWithTag += 32;
  }
  if ( v21 )
  {
    *((_WORD *)PoolWithTag + 12) = 0;
    *((_QWORD *)PoolWithTag + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)PoolWithTag + 1) = PoolWithTag;
    *(_QWORD *)PoolWithTag = PoolWithTag;
    PoolWithTag += 32;
  }
  PoolWithTag[26] = v30;
  v33 = 1;
  PoolWithTag[25] = 0;
  PoolWithTag[27] = 1;
  if ( v17 )
  {
    PoolWithTag[27] = 65;
    v33 = 65;
  }
  *((_QWORD *)PoolWithTag + 1) = 0LL;
  *(_QWORD *)PoolWithTag = 1LL;
  *((_QWORD *)PoolWithTag + 2) = 0LL;
  PoolWithTag[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(PoolWithTag);
  if ( !a2 )
  {
    v33 |= 2u;
    PoolWithTag[27] = v33;
    if ( (*a1 & 0x10000) != 0 )
    {
      v33 |= 4u;
      PoolWithTag[27] = v33;
    }
  }
  v34 = *a1;
  if ( (*a1 & 0x10) != 0 )
  {
    v33 |= 0x10u;
    PoolWithTag[27] = v33;
    v34 = *a1;
  }
  if ( (v34 & 0x20) != 0 )
    PoolWithTag[27] = v33 | 8;
  *((_QWORD *)PoolWithTag + 4) = a1;
  *((_QWORD *)PoolWithTag + 5) = 0LL;
  v35 = _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  if ( v35 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v35;
  *a6 = PoolWithTag;
  return 0LL;
}
