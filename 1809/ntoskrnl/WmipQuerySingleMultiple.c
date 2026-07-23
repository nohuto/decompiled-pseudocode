/*
 * XREFs of WmipQuerySingleMultiple @ 0x1408B4F6C
 * Callers:
 *     WmipIoControl @ 0x1406AB080 (WmipIoControl.c)
 *     IoWMIQuerySingleInstanceMultiple @ 0x1408B3370 (IoWMIQuerySingleInstanceMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x1401B3F70 (EvaluateCurrentState.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x1405FCF88 (WmipQuerySetExecuteSI.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall WmipQuerySingleMultiple(
        IRP *a1,
        KPROCESSOR_MODE a2,
        char *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        int *a9)
{
  char *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // r11
  int v13; // edi
  _WORD *PoolWithTag; // rax
  _WORD *v15; // r14
  int v16; // r15d
  char v17; // r12
  unsigned int *v18; // rdx
  _BYTE *v19; // r13
  unsigned int v20; // r10d
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // cx
  unsigned int v25; // esi
  unsigned int *v26; // r12
  void *v27; // rdx
  char *v28; // r8
  unsigned int v29; // eax
  unsigned int *v30; // rcx
  __int64 i; // rax
  unsigned int v32; // esi
  char *v33; // rsi
  int v34; // eax
  char v36; // [rsp+40h] [rbp-338h]
  unsigned int v38; // [rsp+44h] [rbp-334h]
  unsigned __int16 v39; // [rsp+48h] [rbp-330h]
  unsigned int v40; // [rsp+50h] [rbp-328h] BYREF
  unsigned int v41; // [rsp+54h] [rbp-324h]
  int v42; // [rsp+58h] [rbp-320h]
  void *v43; // [rsp+60h] [rbp-318h]
  int v44; // [rsp+68h] [rbp-310h]
  int v45; // [rsp+6Ch] [rbp-30Ch]
  unsigned int v46; // [rsp+70h] [rbp-308h]
  int v47; // [rsp+74h] [rbp-304h]
  unsigned int *v48; // [rsp+78h] [rbp-300h]
  void *Src; // [rsp+80h] [rbp-2F8h]
  char *v50; // [rsp+88h] [rbp-2F0h]
  __int64 v51; // [rsp+90h] [rbp-2E8h]
  __int64 v52; // [rsp+98h] [rbp-2E0h]
  __int64 v53; // [rsp+A0h] [rbp-2D8h]
  PVOID Object; // [rsp+A8h] [rbp-2D0h]
  PVOID v55; // [rsp+B0h] [rbp-2C8h]
  PVOID v56; // [rsp+B8h] [rbp-2C0h]
  int *v57; // [rsp+C0h] [rbp-2B8h]
  __int128 v58; // [rsp+C8h] [rbp-2B0h]
  PIRP Irp; // [rsp+D8h] [rbp-2A0h]
  char *v60; // [rsp+E0h] [rbp-298h]
  __int64 v61; // [rsp+E8h] [rbp-290h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v38 = a4;
  v9 = a3;
  v50 = a3;
  Irp = a1;
  v57 = a9;
  v61 = (__int64)a9;
  v60 = a3;
  v10 = a6;
  v41 = a6;
  v11 = a7;
  v51 = a7;
  v12 = a8;
  v52 = a8;
  v45 = 0;
  v13 = 0;
  v42 = 0;
  if ( a7 )
  {
    v15 = 0LL;
    v55 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * a6, 0x70696D57u);
    v15 = PoolWithTag;
    v55 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, (const void *)(a5 + 8), 24LL * a6);
    else
      v13 = -1073741670;
    v9 = v50;
    a4 = v38;
    v11 = v51;
    v10 = v41;
    v12 = v52;
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  v16 = 0;
  v17 = 0;
  v36 = 0;
  v48 = 0LL;
  v18 = (unsigned int *)v9;
  v43 = v9;
  v19 = P;
  v56 = P;
  v20 = 580;
  v47 = 580;
  v21 = 0;
  Object = 0LL;
  while ( 1 )
  {
    v46 = v21;
    if ( v21 >= v10 )
      break;
    v22 = v21;
    if ( v11 )
    {
      v58 = *(_OWORD *)(v12 + 16LL * v21);
      Object = *(PVOID *)(v11 + 8LL * v21);
      v53 = 0LL;
      Src = (void *)*((_QWORD *)&v58 + 1);
      v24 = v58;
    }
    else
    {
      v23 = 3LL * v21;
      v24 = v15[12 * v22 + 4];
      Src = *(void **)&v15[4 * v23 + 8];
      *((_QWORD *)&v58 + 1) = Src;
      v53 = *(_QWORD *)&v15[4 * v23];
      v18 = (unsigned int *)v43;
    }
    v39 = v24;
    v25 = (v24 + 73) & 0xFFFFFFF8;
    if ( v17 || a4 < v25 )
    {
      if ( v25 > v20 )
      {
        if ( v19 != P )
          ExFreePoolWithTag(v19, 0);
        v19 = ExAllocatePoolWithTag(NonPagedPoolNx, v25, 0x70696D57u);
        v56 = v19;
        if ( !v19 )
        {
          v13 = -1073741670;
          break;
        }
        v47 = v25;
      }
      v26 = (unsigned int *)v19;
      v44 = v25;
      v48 = 0LL;
      v36 = 1;
    }
    else
    {
      v26 = v18;
      v44 = a4;
    }
    memset(v26, 0, 0x40uLL);
    v26[11] = 2;
    *v26 = v25;
    *((_QWORD *)v26 + 2) = v53;
    v26[12] = 64;
    v26[14] = v25;
    *((_WORD *)v26 + 32) = v39;
    if ( a2 == 1 && v39 )
    {
      if ( (BYTE8(v58) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v27 = Src;
      v28 = (char *)Src + v39;
      if ( (unsigned __int64)v28 > 0x7FFFFFFF0000LL || v28 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v27 = Src;
    }
    memmove((char *)v26 + 66, v27, v39);
    v40 = *v26;
    if ( (int)WmipQuerySetExecuteSI(Object, Irp, a2, 1u, (__int64)v26, v44, &v40) < 0 )
      goto LABEL_36;
    v29 = v26[11];
    if ( (v29 & 0x100) != 0 )
      goto LABEL_36;
    ++v42;
    if ( (v29 & 0x20) != 0 )
    {
      v16 += (v26[12] + 7) & 0xFFFFFFF8;
      v17 = 1;
      v36 = 1;
      goto LABEL_37;
    }
    if ( v36 )
    {
      v16 += (v40 + 7) & 0xFFFFFFF8;
LABEL_36:
      v17 = v36;
LABEL_37:
      v18 = (unsigned int *)v43;
      goto LABEL_38;
    }
    if ( v48 )
      v48[3] = v45;
    v30 = v26;
    for ( i = v26[3]; ; i = v30[3] )
    {
      v48 = v30;
      if ( !(_DWORD)i )
        break;
      v30 = (unsigned int *)((char *)v30 + i);
    }
    v32 = (v40 + 7) & 0xFFFFFFF8;
    v16 += v32;
    if ( EvaluateCurrentState((_DWORD **)&g_Feature_1448076600_61197643_FeatureDescriptorDetails) )
      v38 = v32 < v38 ? v38 - v32 : 0;
    else
      v38 -= v32;
    v18 = (unsigned int *)((char *)v43 + v32);
    v43 = v18;
    v45 = (_DWORD)v18 - (_DWORD)v48;
    v17 = 0;
LABEL_38:
    v21 = v46 + 1;
    a4 = v38;
    v11 = v51;
    v20 = v47;
    v10 = v41;
    v12 = v52;
  }
  v33 = v50;
  if ( v19 != P )
    ExFreePoolWithTag(v19, 0);
  if ( !v42 )
    v13 = -1073741163;
  if ( v13 >= 0 && v17 )
  {
    v34 = 56;
    *(_DWORD *)v33 = 56;
    *((_DWORD *)v33 + 11) = 32;
    *((_DWORD *)v33 + 12) = v16;
  }
  else
  {
    v34 = v16;
  }
  *v57 = v34;
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v13;
}
