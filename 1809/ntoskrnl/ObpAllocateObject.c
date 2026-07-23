/*
 * XREFs of ObpAllocateObject @ 0x140646A60
 * Callers:
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 * Callees:
 *     SeAuditHeaderRequired @ 0x1400BC130 (SeAuditHeaderRequired.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpAllocateObject(int *a1, char a2, __int64 a3, _WORD *a4, int a5, _QWORD *a6, _BYTE *a7)
{
  int v8; // r14d
  __int64 v11; // r8
  char v12; // r10
  int v13; // ebx
  int v14; // r12d
  int v15; // r11d
  char v16; // r15
  char v17; // bp
  int v18; // r9d
  char v19; // cl
  char v20; // r15
  unsigned __int8 v21; // dl
  char v22; // r8
  char v23; // al
  int v24; // ecx
  int v25; // r13d
  unsigned int v26; // r13d
  unsigned int v27; // ecx
  char *PoolWithTag; // rax
  char *v29; // rbx
  char v30; // r8
  char *v31; // rdx
  __int64 v32; // rcx
  char v33; // dl
  int v34; // eax
  unsigned __int32 v35; // ecx
  __int128 v37; // xmm0
  unsigned __int8 v38; // cl
  int v39; // [rsp+20h] [rbp-58h]
  int v40; // [rsp+24h] [rbp-54h]
  int v41; // [rsp+28h] [rbp-50h]
  unsigned int Size; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int8 v43; // [rsp+80h] [rbp+8h]
  char v45; // [rsp+90h] [rbp+18h]

  v8 = *a1 & 0x20;
  v39 = 16;
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
  v40 = v13;
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
  v41 = v15;
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
  v20 = v16 & 0x20;
  v21 = (*(char *)(v11 + 66) >> 7) & 0x30;
  v43 = v21;
  v22 = v19 | 1;
  v23 = v19;
  v24 = 48;
  if ( !v20 )
    v22 = v23;
  v45 = v22;
  if ( !a7 )
  {
    v45 = v22;
LABEL_46:
    v24 = 0;
    v39 = 0;
    goto LABEL_16;
  }
  if ( !*a7 && !a7[1] )
    goto LABEL_46;
  v45 = v22 | 0x40;
LABEL_16:
  v25 = 64;
  if ( !v8 )
    v25 = 48;
  v26 = v13 + v15 + v14 + v39 + (v20 != 0 ? 0x20 : 0) + v18 + v25;
  v27 = v26 + v21 + v24;
  Size = v27 + a5;
  if ( v27 + a5 < v27 )
    return 3221225485LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)*(_DWORD *)(a3 + 100), v27 + a5, *(_DWORD *)(a3 + 192));
  v29 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, Size);
  v30 = v45;
  if ( v43 )
  {
    v38 = -(char)((_BYTE)v29 + v26) & 0x3F;
    if ( v38 )
    {
      v29 += v38;
      v30 = v45 | 0x80;
      *((_DWORD *)v29 - 1) = v38;
    }
  }
  if ( v39 )
  {
    v31 = &v29[v26 + a5];
    *(_QWORD *)v29 = v31;
    *(_QWORD *)v31 = 0LL;
    *((_QWORD *)v31 + 1) = 0LL;
    *((_QWORD *)v31 + 2) = 0LL;
    *((_QWORD *)v31 + 3) = 0LL;
    *((_QWORD *)v31 + 4) = 0LL;
    *((_QWORD *)v31 + 5) = 0LL;
    v32 = *(_QWORD *)v29;
    v29 += 16;
    *(_BYTE *)(v32 + 24) = *a7;
  }
  if ( v40 )
  {
    *(_QWORD *)v29 = 0LL;
    *((_QWORD *)v29 + 1) = 0LL;
    v29 += 16;
  }
  if ( v8 )
  {
    *(_QWORD *)v29 = 0LL;
    v29 += 16;
  }
  if ( v41 )
  {
    *(_DWORD *)v29 = a1[5];
    *((_DWORD *)v29 + 1) = a1[6];
    *((_DWORD *)v29 + 2) = a1[7];
    *((_QWORD *)v29 + 2) = 0LL;
    v29 += 32;
  }
  if ( v17 )
  {
    *((_DWORD *)v29 + 2) &= 0xFF000000;
    v29[11] = 0;
    *(_QWORD *)v29 = 0LL;
    v29 += 16;
  }
  if ( v14 )
  {
    v37 = *(_OWORD *)a4;
    *(_QWORD *)v29 = 0LL;
    *((_DWORD *)v29 + 6) = 0;
    *(_OWORD *)(v29 + 8) = v37;
    v29 += 32;
  }
  if ( v20 )
  {
    *((_WORD *)v29 + 12) = 0;
    *((_QWORD *)v29 + 2) = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink;
    *((_QWORD *)v29 + 1) = v29;
    *(_QWORD *)v29 = v29;
    v29 += 32;
  }
  v29[26] = v30;
  v33 = 1;
  v29[25] = 0;
  v29[27] = 1;
  if ( v17 )
  {
    v29[27] = 65;
    v33 = 65;
  }
  *((_QWORD *)v29 + 1) = 0LL;
  *(_QWORD *)v29 = 1LL;
  *((_QWORD *)v29 + 2) = 0LL;
  v29[24] = ObHeaderCookie ^ *(_BYTE *)(a3 + 40) ^ BYTE1(v29);
  if ( !a2 )
  {
    v33 |= 2u;
    v29[27] = v33;
    if ( (*a1 & 0x10000) != 0 )
    {
      v33 |= 4u;
      v29[27] = v33;
    }
  }
  v34 = *a1;
  if ( (*a1 & 0x10) != 0 )
  {
    v33 |= 0x10u;
    v29[27] = v33;
    v34 = *a1;
  }
  if ( (v34 & 0x20) != 0 )
    v29[27] = v33 | 8;
  *((_QWORD *)v29 + 4) = a1;
  *((_QWORD *)v29 + 5) = 0LL;
  v35 = _InterlockedIncrement((volatile signed __int32 *)(a3 + 44));
  if ( v35 > *(_DWORD *)(a3 + 52) )
    *(_DWORD *)(a3 + 52) = v35;
  *a6 = v29;
  return 0LL;
}
