/*
 * XREFs of WmipQueryAllDataMultiple @ 0x1408B4C84
 * Callers:
 *     WmipIoControl @ 0x1406AB080 (WmipIoControl.c)
 *     IoWMIQueryAllDataMultiple @ 0x1408B32A0 (IoWMIQueryAllDataMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipQueryAllData @ 0x14059EBCC (WmipQueryAllData.c)
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
  _DWORD *v8; // r15
  unsigned int v9; // r12d
  int v10; // r13d
  void **v12; // rax
  __int64 v13; // rsi
  char *PoolWithTag; // rax
  char *v15; // rbp
  _QWORD *v16; // rcx
  int v17; // esi
  char *v18; // r14
  char *v19; // rcx
  char *v20; // rbx
  void **v22; // r15
  char *v23; // rbp
  int v24; // edi
  void **v26; // rax
  void *v27; // rax
  int v28; // eax
  int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // edi
  unsigned int v32; // r12d
  int v33; // eax
  char v34; // [rsp+30h] [rbp-F8h]
  int v36; // [rsp+34h] [rbp-F4h]
  void **v37; // [rsp+38h] [rbp-F0h] BYREF
  char *v38; // [rsp+40h] [rbp-E8h]
  void **v39; // [rsp+48h] [rbp-E0h]
  void *v40; // [rsp+50h] [rbp-D8h]
  __int64 v41; // [rsp+58h] [rbp-D0h]
  char *v42; // [rsp+60h] [rbp-C8h]
  IRP *v43; // [rsp+70h] [rbp-B8h]
  _DWORD *v44; // [rsp+78h] [rbp-B0h]
  int *v45; // [rsp+80h] [rbp-A8h]
  _BYTE v46[80]; // [rsp+90h] [rbp-98h] BYREF

  v8 = a5;
  v9 = 0;
  v40 = 0LL;
  v10 = 0;
  v12 = a2;
  v43 = a3;
  v37 = a2;
  v45 = a8;
  v44 = a5;
  v36 = 0;
  if ( a2 )
  {
    v15 = 0LL;
    v42 = 0LL;
  }
  else
  {
    a1 = *(_DWORD *)a7;
    v13 = *(unsigned int *)a7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 8 * v13, 0x70696D57u);
    v42 = PoolWithTag;
    v15 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    if ( a1 )
    {
      v16 = PoolWithTag;
      do
      {
        *v16 = *(_QWORD *)((char *)v16 + a7 - PoolWithTag + 8);
        ++v16;
        --v13;
      }
      while ( v13 );
    }
    v12 = v37;
  }
  v17 = 0;
  v18 = 0LL;
  v34 = 0;
  v19 = (char *)a5;
  v38 = (char *)a5;
  v20 = (char *)a5;
  if ( !a1 )
    goto LABEL_26;
  v22 = v37;
  v39 = v12;
  v23 = (char *)(v15 - (char *)v12);
  v41 = a1;
  do
  {
    if ( v20 == v46 || a6 < 0x48 )
    {
      v20 = v46;
      v24 = 72;
      v18 = 0LL;
    }
    else
    {
      v20 = v19;
      v24 = a6;
    }
    memset(v20, 0, 0x48uLL);
    v26 = v39;
    *((_DWORD *)v20 + 11) = 1;
    *(_DWORD *)v20 = 48;
    if ( v22 )
    {
      v27 = *v26;
      v40 = v27;
    }
    else
    {
      *((_QWORD *)v20 + 2) = *(_QWORD *)&v23[(_QWORD)v26];
      v27 = v40;
    }
    if ( (int)WmipQueryAllData(v27, v43, a4, (__int64)v20, v24, (unsigned int *)&v37) < 0 )
      goto LABEL_23;
    v28 = *((_DWORD *)v20 + 11);
    if ( (v28 & 0x100) != 0 )
      goto LABEL_23;
    ++v36;
    if ( (v28 & 0x20) != 0 )
    {
      v29 = *((_DWORD *)v20 + 12);
      v20 = v46;
LABEL_22:
      v34 = 1;
      v17 += (v29 + 7) & 0xFFFFFFF8;
LABEL_23:
      v19 = v38;
      goto LABEL_24;
    }
    if ( v20 == v46 )
    {
      v29 = (int)v37;
      goto LABEL_22;
    }
    if ( v18 )
      *((_DWORD *)v18 + 3) = v9;
    v30 = *((unsigned int *)v20 + 3);
    v18 = v20;
    while ( (_DWORD)v30 )
    {
      v18 += v30;
      v30 = *((unsigned int *)v18 + 3);
    }
    v31 = ((_DWORD)v37 + 7) & 0xFFFFFFF8;
    v17 += v31;
    if ( EvaluateCurrentState((_DWORD **)&g_Feature_1448076600_61197643_FeatureDescriptorDetails) )
      a6 = v31 < a6 ? a6 - v31 : 0;
    else
      a6 -= v31;
    v19 = &v38[v31];
    v32 = v31 + (_DWORD)v38;
    v38 = v19;
    v9 = v32 - (_DWORD)v18;
LABEL_24:
    ++v39;
    --v41;
  }
  while ( v41 );
  v15 = v42;
  v8 = v44;
  v10 = v36;
LABEL_26:
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( !v10 )
    return 3221226133LL;
  if ( v34 )
  {
    v33 = 56;
    v8[11] = 32;
    *v8 = 56;
    v8[12] = v17;
  }
  else
  {
    v33 = v17;
  }
  *v45 = v33;
  return 0LL;
}
