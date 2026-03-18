/*
 * XREFs of WmipQueryAllDataMultiple @ 0x1408B3A44
 * Callers:
 *     WmipIoControl @ 0x1406A9E00 (WmipIoControl.c)
 *     IoWMIQueryAllDataMultiple @ 0x1408B2060 (IoWMIQueryAllDataMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     WmipQueryAllData @ 0x14059DBCC (WmipQueryAllData.c)
 */

__int64 __fastcall WmipQueryAllDataMultiple(
        unsigned int a1,
        void **a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        _DWORD *a5,
        unsigned int a6,
        char *a7,
        int *a8)
{
  int v8; // r13d
  void **v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // rbp
  _BYTE *PoolWithTag; // rax
  _BYTE *v14; // rsi
  _QWORD *v15; // rcx
  int v16; // ebp
  char v17; // r12
  char *v18; // r14
  char *v19; // rcx
  char *v20; // rbx
  _BYTE *v22; // rdx
  void **v23; // rsi
  void **v24; // r13
  int v25; // edi
  void *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  int v34; // [rsp+34h] [rbp-F4h]
  void **v35; // [rsp+38h] [rbp-F0h] BYREF
  char *v36; // [rsp+40h] [rbp-E8h]
  int v37; // [rsp+48h] [rbp-E0h]
  void *v38; // [rsp+50h] [rbp-D8h]
  __int64 v39; // [rsp+58h] [rbp-D0h]
  _BYTE *v40; // [rsp+60h] [rbp-C8h]
  signed __int64 v41; // [rsp+68h] [rbp-C0h]
  IRP *v42; // [rsp+70h] [rbp-B8h]
  _DWORD *v43; // [rsp+78h] [rbp-B0h]
  int *v44; // [rsp+80h] [rbp-A8h]
  _BYTE v45[80]; // [rsp+90h] [rbp-98h] BYREF

  v37 = 0;
  v8 = 0;
  v38 = 0LL;
  v10 = a2;
  v11 = a5;
  v44 = a8;
  v42 = a3;
  v35 = a2;
  v43 = a5;
  v34 = 0;
  if ( a2 )
  {
    v14 = 0LL;
    v40 = 0LL;
  }
  else
  {
    a1 = *(_DWORD *)a7;
    v12 = *(unsigned int *)a7;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * v12, 0x70696D57u);
    v40 = PoolWithTag;
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( a1 )
    {
      v15 = PoolWithTag;
      do
      {
        *v15 = *(_QWORD *)((char *)v15 + a7 - PoolWithTag + 8);
        ++v15;
        --v12;
      }
      while ( v12 );
    }
    v10 = v35;
  }
  v16 = 0;
  v17 = 0;
  v18 = 0LL;
  v19 = (char *)a5;
  v36 = (char *)a5;
  v20 = (char *)a5;
  if ( !a1 )
    goto LABEL_26;
  v22 = v14;
  v23 = v35;
  v24 = v10;
  v41 = v22 - (_BYTE *)v10;
  v39 = a1;
  do
  {
    if ( v20 == v45 || a6 < 0x48 )
    {
      v20 = v45;
      v25 = 72;
      v18 = 0LL;
    }
    else
    {
      v20 = v19;
      v25 = a6;
    }
    memset(v20, 0, 0x48uLL);
    *((_DWORD *)v20 + 11) = 1;
    *(_DWORD *)v20 = 48;
    if ( v23 )
    {
      v27 = *v24;
      v38 = *v24;
    }
    else
    {
      *((_QWORD *)v20 + 2) = *(void **)((char *)v24 + v41);
      v27 = v38;
    }
    if ( (int)WmipQueryAllData(v27, v42, a4, (__int64)v20, v25, (unsigned int *)&v35) < 0 )
      goto LABEL_23;
    v28 = *((_DWORD *)v20 + 11);
    if ( (v28 & 0x100) != 0 )
      goto LABEL_23;
    ++v34;
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *((_DWORD *)v20 + 12);
      v20 = v45;
LABEL_22:
      v17 = 1;
      v16 += (v29 + 7) & 0xFFFFFFF8;
LABEL_23:
      v19 = v36;
      goto LABEL_24;
    }
    if ( v20 == v45 )
    {
      v29 = (int)v35;
      goto LABEL_22;
    }
    if ( v18 )
      *((_DWORD *)v18 + 3) = v37;
    v30 = *((unsigned int *)v20 + 3);
    v18 = v20;
    while ( (_DWORD)v30 )
    {
      v18 += v30;
      v30 = *((unsigned int *)v18 + 3);
    }
    v31 = ((_DWORD)v35 + 7) & 0xFFFFFFF8;
    v19 = &v36[v31];
    v16 += v31;
    a6 -= v31;
    v36 = v19;
    v37 = (_DWORD)v19 - (_DWORD)v18;
LABEL_24:
    ++v24;
    --v39;
  }
  while ( v39 );
  v14 = v40;
  v11 = v43;
  v8 = v34;
LABEL_26:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( !v8 )
    return 3221226133LL;
  if ( v17 )
  {
    v32 = 56;
    v11[11] = 32;
    *v11 = 56;
    v11[12] = v16;
  }
  else
  {
    v32 = v16;
  }
  *v44 = v32;
  return 0LL;
}
