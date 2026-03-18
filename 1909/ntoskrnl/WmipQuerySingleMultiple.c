/*
 * XREFs of WmipQuerySingleMultiple @ 0x1408F0AE0
 * Callers:
 *     WmipIoControl @ 0x140695760 (WmipIoControl.c)
 *     IoWMIQuerySingleInstanceMultiple @ 0x1408EEEE0 (IoWMIQuerySingleInstanceMultiple.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WmipQuerySetExecuteSI @ 0x140713490 (WmipQuerySetExecuteSI.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
        _DWORD *a9)
{
  char *v9; // r14
  int v10; // edi
  __int64 v11; // rdx
  _WORD *PoolWithTag; // rax
  _WORD *v13; // rsi
  int v14; // r15d
  char v15; // r13
  unsigned int *v16; // r8
  _BYTE *v17; // r12
  unsigned int v18; // r9d
  __int64 v19; // rax
  unsigned __int16 v20; // dx
  unsigned int v21; // r14d
  unsigned int *v22; // r13
  void *v23; // rdx
  char *v24; // r8
  unsigned int v25; // eax
  unsigned int *i; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  char *v29; // r14
  char v31; // [rsp+40h] [rbp-338h]
  unsigned __int16 v33; // [rsp+42h] [rbp-336h]
  unsigned int v34; // [rsp+48h] [rbp-330h] BYREF
  unsigned int v35; // [rsp+4Ch] [rbp-32Ch]
  int v36; // [rsp+50h] [rbp-328h]
  void *v37; // [rsp+58h] [rbp-320h]
  int v38; // [rsp+60h] [rbp-318h]
  int v39; // [rsp+64h] [rbp-314h]
  int v40; // [rsp+68h] [rbp-310h]
  int v41; // [rsp+6Ch] [rbp-30Ch]
  void *Src; // [rsp+70h] [rbp-308h]
  unsigned int *v43; // [rsp+78h] [rbp-300h]
  __int64 v44; // [rsp+80h] [rbp-2F8h]
  char *v45; // [rsp+88h] [rbp-2F0h]
  __int128 v46; // [rsp+90h] [rbp-2E8h]
  unsigned int v47; // [rsp+A0h] [rbp-2D8h]
  _DWORD *v48; // [rsp+A8h] [rbp-2D0h]
  __int64 v49; // [rsp+B0h] [rbp-2C8h]
  PVOID Object; // [rsp+B8h] [rbp-2C0h]
  PVOID v51; // [rsp+C0h] [rbp-2B8h]
  PVOID v52; // [rsp+C8h] [rbp-2B0h]
  __int64 v53; // [rsp+D0h] [rbp-2A8h]
  PIRP Irp; // [rsp+D8h] [rbp-2A0h]
  char *v55; // [rsp+E0h] [rbp-298h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v35 = a4;
  v9 = a3;
  v45 = a3;
  Irp = a1;
  v55 = a3;
  v47 = a6;
  v44 = a7;
  v53 = a8;
  v48 = a9;
  v39 = 0;
  v46 = 0uLL;
  memset(P, 0, 0x248uLL);
  v10 = 0;
  v36 = 0;
  v11 = a7;
  if ( a7 )
  {
    v13 = 0LL;
    v51 = 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 24LL * a6, 0x70696D57u);
    v13 = PoolWithTag;
    v51 = PoolWithTag;
    if ( PoolWithTag )
      memmove(PoolWithTag, (const void *)(a5 + 8), 24LL * a6);
    else
      v10 = -1073741670;
    v9 = v45;
    v11 = v44;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  v14 = 0;
  v15 = 0;
  v31 = 0;
  v43 = 0LL;
  v16 = (unsigned int *)v9;
  v37 = v9;
  v17 = P;
  v52 = P;
  v18 = 580;
  v41 = 580;
  v19 = 0LL;
  Object = 0LL;
  while ( 1 )
  {
    v40 = v19;
    if ( (unsigned int)v19 >= v47 )
      break;
    if ( v11 )
    {
      v46 = *(_OWORD *)(v53 + 16 * v19);
      Object = *(PVOID *)(v11 + 8LL * (unsigned int)v19);
      v49 = 0LL;
      Src = (void *)*((_QWORD *)&v46 + 1);
      v20 = v46;
    }
    else
    {
      v20 = v13[12 * v19 + 4];
      LODWORD(v46) = *(_DWORD *)&v13[12 * v19 + 4];
      Src = *(void **)&v13[12 * v19 + 8];
      *((_QWORD *)&v46 + 1) = Src;
      v49 = *(_QWORD *)&v13[12 * v19];
      v16 = (unsigned int *)v37;
    }
    v33 = v20;
    v21 = (v20 + 73) & 0xFFFFFFF8;
    if ( v15 || v35 < v21 )
    {
      if ( v21 > v18 )
      {
        if ( v17 != P )
          ExFreePoolWithTag(v17, 0);
        v17 = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x70696D57u);
        v52 = v17;
        if ( !v17 )
        {
          v10 = -1073741670;
          break;
        }
        v41 = v21;
      }
      v22 = (unsigned int *)v17;
      v38 = v21;
      v43 = 0LL;
      v31 = 1;
    }
    else
    {
      v22 = v16;
      v38 = v35;
    }
    memset(v22, 0, 0x40uLL);
    v22[11] = 2;
    *v22 = v21;
    *((_QWORD *)v22 + 2) = v49;
    v22[12] = 64;
    v22[14] = v21;
    *((_WORD *)v22 + 32) = v33;
    if ( a2 == 1 && v33 )
    {
      if ( (BYTE8(v46) & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = Src;
      v24 = (char *)Src + v33;
      if ( (unsigned __int64)v24 > 0x7FFFFFFF0000LL || v24 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v23 = Src;
    }
    memmove((char *)v22 + 66, v23, v33);
    v34 = *v22;
    if ( (int)WmipQuerySetExecuteSI(Object, Irp, a2, 1u, (__int64)v22, v38, &v34) < 0 )
      goto LABEL_37;
    v25 = v22[11];
    if ( (v25 & 0x100) != 0 )
      goto LABEL_37;
    ++v36;
    if ( (v25 & 0x20) != 0 )
    {
      v14 += (v22[12] + 7) & 0xFFFFFFF8;
      v15 = 1;
      v31 = 1;
      goto LABEL_38;
    }
    if ( v31 )
    {
      v14 += (v34 + 7) & 0xFFFFFFF8;
LABEL_37:
      v15 = v31;
LABEL_38:
      v16 = (unsigned int *)v37;
      goto LABEL_39;
    }
    if ( v43 )
      v43[3] = v39;
    for ( i = v22; ; i = (unsigned int *)((char *)i + v27) )
    {
      v43 = i;
      v27 = i[3];
      if ( !(_DWORD)v27 )
        break;
    }
    v28 = (v34 + 7) & 0xFFFFFFF8;
    v14 += v28;
    v35 -= v28;
    v16 = (unsigned int *)((char *)v37 + v28);
    v37 = v16;
    v39 = (_DWORD)v16 - (_DWORD)i;
    v15 = 0;
LABEL_39:
    v19 = (unsigned int)(v40 + 1);
    v18 = v41;
    v11 = v44;
  }
  v29 = v45;
  if ( v17 != P )
    ExFreePoolWithTag(v17, 0);
  if ( !v36 )
    v10 = -1073741163;
  if ( v10 >= 0 && v15 )
  {
    *(_DWORD *)v29 = 56;
    *((_DWORD *)v29 + 11) = 32;
    *((_DWORD *)v29 + 12) = v14;
    *v48 = 56;
  }
  else
  {
    *v48 = v14;
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v10;
}
