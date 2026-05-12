/*
 * XREFs of RaidAdapterCreateDumpInfo @ 0x1C00728F0
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0075098 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00081B4 (RaidAllocatePool.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C0013824 (StorPortGetAdditionalCrashDumpArea.c)
 *     RtlStringCbPrintfW @ 0x1C00151B8 (RtlStringCbPrintfW.c)
 *     RaidDriverGetName @ 0x1C001523C (RaidDriverGetName.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C00152B4 (RaidQueryCrashdumpFunctions.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C0037D68 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C0037E30 (RaidAdapterFreeDumpInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C00726D0 (RaidAdapterCreateDriverInfo.c)
 */

__int64 RaidAdapterCreateDumpInfo(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, ...)
{
  _BYTE *v4; // r11
  _BYTE *v5; // r14
  _QWORD *v7; // rdx
  char v9; // r13
  int v10; // edi
  _QWORD *v11; // rcx
  _QWORD *v12; // r10
  _QWORD *v13; // r9
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _BYTE *Pool; // rax
  char *v17; // rsi
  char *v18; // rax
  char *v19; // r14
  _BYTE *v20; // r12
  PVOID v21; // rax
  PVOID v22; // rdi
  __int64 v23; // rcx
  __int16 v24; // ax
  __int64 v25; // rax
  int v26; // r8d
  wchar_t *v27; // rdi
  __int64 v28; // r8
  __int64 v29; // rdx
  wchar_t *v30; // r15
  __int64 v31; // r9
  wchar_t *v32; // rax
  PVOID *v33; // rax
  _QWORD *v34; // rcx
  char v35; // di
  struct _DEVICE_OBJECT *v36; // rcx
  __int64 v37; // rax
  PVOID *v38; // rax
  PVOID **v39; // rcx
  PVOID *v41; // [rsp+38h] [rbp-28h] BYREF
  PVOID *v42; // [rsp+40h] [rbp-20h]
  size_t cbDest; // [rsp+48h] [rbp-18h] BYREF
  wchar_t *v44; // [rsp+50h] [rbp-10h]
  __int64 v45; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v46; // [rsp+B0h] [rbp+50h]
  _QWORD *v47; // [rsp+B8h] [rbp+58h]
  _BYTE *v48; // [rsp+C0h] [rbp+60h] BYREF
  va_list va; // [rsp+C0h] [rbp+60h]
  _QWORD *v50; // [rsp+C8h] [rbp+68h]
  _BYTE *v51; // [rsp+D0h] [rbp+70h]
  va_list va1; // [rsp+D8h] [rbp+78h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v48 = va_arg(va1, _BYTE *);
  v50 = va_arg(va1, _QWORD *);
  v51 = va_arg(va1, _BYTE *);
  v47 = a4;
  v46 = a3;
  v45 = a1;
  v4 = v48;
  v5 = v51;
  LOBYTE(v45) = 0;
  v7 = v50;
  v42 = 0LL;
  v9 = 0;
  v41 = 0LL;
  v10 = 0;
  cbDest = 0LL;
  v44 = 0LL;
  *a4 = 0LL;
  *v4 = 0;
  *v7 = 0LL;
  *v5 = 0;
  if ( *(_DWORD *)(a3 + 4) == 1 )
    v11 = *(_QWORD **)(a2 + 5800);
  else
    v11 = *(_QWORD **)(a2 + 5808);
  if ( v11 )
    goto LABEL_65;
  v12 = (_QWORD *)(a3 + 40);
  v13 = 0LL;
  v14 = *(_QWORD **)(a3 + 40);
  if ( v14 != v12 )
  {
    do
    {
      v11 = v14 - 1;
      v13 = v14 - 1;
      v15 = v14[2] - *(_QWORD *)(a2 + 5256);
      if ( !v15 )
        v15 = v11[4] - *(_QWORD *)(a2 + 5264);
      if ( !v15 )
        break;
      v14 = (_QWORD *)*v14;
      v11 = 0LL;
      v13 = 0LL;
    }
    while ( v14 != v12 );
    v7 = v50;
  }
  if ( v13 )
  {
LABEL_65:
    *v7 = v11[7];
    *a4 = v11;
    *v4 = 1;
    *v5 = 1;
    return (unsigned int)v10;
  }
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
  v48 = Pool;
  v17 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memset(Pool, 0, 0x70uLL);
  *((_QWORD *)v17 + 2) = v17 + 8;
  *((_QWORD *)v17 + 1) = v17 + 8;
  *(_DWORD *)v17 = 112;
  *(_OWORD *)(v17 + 24) = *(_OWORD *)(a2 + 5256);
  v18 = (char *)RaidAllocatePool(NonPagedPoolNx, 0x158uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
  v19 = v18;
  if ( v18 )
  {
    memset(v18, 0, 0x158uLL);
    *(_DWORD *)v19 = 304;
    v20 = v19 + 304;
    *(_OWORD *)(v19 + 56) = *(_OWORD *)(a2 + 320);
    *(_OWORD *)(v19 + 72) = *(_OWORD *)(a2 + 336);
    *(_OWORD *)(v19 + 88) = *(_OWORD *)(a2 + 352);
    *(_OWORD *)(v19 + 104) = *(_OWORD *)(a2 + 368);
    *(_OWORD *)(v19 + 120) = *(_OWORD *)(a2 + 384);
    *(_OWORD *)(v19 + 136) = *(_OWORD *)(a2 + 400);
    *(_OWORD *)(v19 + 152) = *(_OWORD *)(a2 + 416);
    *(_OWORD *)(v19 + 168) = *(_OWORD *)(a2 + 432);
    *(_OWORD *)(v19 + 184) = *(_OWORD *)(a2 + 448);
    *(_OWORD *)(v19 + 200) = *(_OWORD *)(a2 + 464);
    *(_OWORD *)(v19 + 216) = *(_OWORD *)(a2 + 480);
    *(_OWORD *)(v19 + 232) = *(_OWORD *)(a2 + 496);
    *(_OWORD *)(v19 + 248) = *(_OWORD *)(a2 + 512);
    *(_OWORD *)(v19 + 264) = *(_OWORD *)(a2 + 528);
    *((_DWORD *)v17 + 11) = 304;
    v21 = RaidAllocatePool(NonPagedPoolNx, 0x10000uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
    v22 = v21;
    if ( !v21 )
    {
      v10 = -1073741670;
LABEL_61:
      if ( v19 )
        ExFreePoolWithTag(v19, 0x44436152u);
      goto LABEL_63;
    }
    memset(v21, 0, 0x10000uLL);
    *((_DWORD *)v19 + 8) = 0x10000;
    *((_QWORD *)v19 + 5) = v22;
    if ( (unsigned __int8)(*(_BYTE *)(a2 + 464) - 2) <= 2u )
      *((_DWORD *)v17 + 10) |= 1u;
    v23 = *(_QWORD *)(a2 + 544);
    if ( (*(_DWORD *)(v23 + 184) & 0x20) != 0 )
    {
      *((_DWORD *)v17 + 10) |= 2u;
      v23 = *(_QWORD *)(a2 + 544);
    }
    if ( (*(_DWORD *)(v23 + 184) & 0x80u) != 0 && (*(_DWORD *)(v23 + 188) & 2) != 0 )
      v24 = HiberFileHybridPriority;
    else
      v24 = -1;
    *((_WORD *)v19 + 144) = v24;
    if ( *(_BYTE *)(a2 + 4514) )
    {
      *((_QWORD *)v17 + 8) = *(_QWORD *)(a2 + 720);
      v25 = a2 + 784;
    }
    else
    {
      *((_QWORD *)v17 + 8) = 0LL;
      v25 = 0LL;
    }
    *((_QWORD *)v19 + 35) = v25;
    v26 = *(_DWORD *)(a2 + 512);
    if ( v26 )
      StorPortGetAdditionalCrashDumpArea(a2, (__int64)(v19 + 56), v26);
    RaidDriverGetName(*(_QWORD *)(a2 + 16), (__int64)&cbDest);
    v27 = v44;
    v28 = -1LL;
    v29 = -1LL;
    do
      ++v29;
    while ( v44[v29] );
    if ( (unsigned int)v29 > 4
      && v44[(unsigned int)(v29 - 4)] == 46
      && v44[(unsigned int)(v29 - 3)] == 115
      && v44[(unsigned int)(v29 - 2)] == 121
      && v44[(unsigned int)(v29 - 1)] == 115 )
    {
      v30 = v44;
    }
    else
    {
      do
        ++v28;
      while ( v44[v28] );
      v31 = *(_QWORD *)(a2 + 8);
      cbDest = (unsigned int)(2 * v28 + 10);
      v32 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, cbDest, 0x44436152u, v31);
      v30 = v32;
      if ( !v32 )
      {
        v33 = v42;
        v10 = -1073741670;
        goto LABEL_56;
      }
      RtlStringCbPrintfW(v32, cbDest, L"%ws.sys", v27);
    }
    v10 = RaidAdapterCreateDriverInfo(a2, v46, v30, &v41, &v45);
    if ( v10 < 0 )
    {
      v9 = v45;
      v33 = v41;
LABEL_56:
      if ( !v9 && v33 )
        RaidAdapterFreeDriverInfo(&v41);
      if ( v30 )
        ExFreePoolWithTag(v30, 0x44436152u);
      goto LABEL_61;
    }
    v34 = *(_QWORD **)(a2 + 5152);
    if ( v34 && (int)PoFxRegisterCrashdumpDevice(*v34) >= 0 )
    {
      v35 = 1;
      *v20 = 1;
      *((_QWORD *)v19 + 39) = **(_QWORD **)(a2 + 5152);
    }
    else
    {
      v35 = 0;
    }
    v36 = *(struct _DEVICE_OBJECT **)(a2 + 24);
    *(_WORD *)(a2 + 5218) = 1;
    *(_WORD *)(a2 + 5216) = 40;
    if ( RaidQueryCrashdumpFunctions(v36, (void *)(a2 + 5216)) >= 0
      && (v37 = *(_QWORD *)(a2 + 5248)) != 0
      && *(_QWORD *)(a2 + 5240) )
    {
      *((_QWORD *)v19 + 41) = v37;
      *((_QWORD *)v19 + 42) = *(_QWORD *)(a2 + 5224);
    }
    else
    {
      *(_WORD *)(a2 + 5218) = 0;
      if ( !v35 )
      {
LABEL_54:
        v38 = v41;
        v39 = (PVOID **)v50;
        v10 = 0;
        v9 = v45;
        *((_QWORD *)v17 + 6) = v19;
        v19 = 0LL;
        *((_QWORD *)v17 + 7) = v38;
        *v39 = v38;
        v33 = 0LL;
        v41 = 0LL;
        v48 = 0LL;
        *v51 = v9;
        *v47 = v17;
        v17 = 0LL;
        goto LABEL_56;
      }
    }
    *((_QWORD *)v19 + 40) = a2 + 5053;
    *((_QWORD *)v19 + 1) = a2 + 5053;
    *((_QWORD *)v19 + 2) = StorDumpAdapterPowerOn;
    *((_QWORD *)v19 + 3) = v20;
    goto LABEL_54;
  }
  v10 = -1073741670;
LABEL_63:
  if ( v17 )
    RaidAdapterFreeDumpInfo((PVOID *)va);
  return (unsigned int)v10;
}
