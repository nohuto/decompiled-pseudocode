/*
 * XREFs of DpiAgpAllocatePool @ 0x1C02ACF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpAllocatePool(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *BaseAddress)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  SIZE_T v7; // r12
  unsigned int v8; // esi
  PMDL Mdl; // rbp
  char v10; // r13
  unsigned int v11; // esi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  unsigned int v28; // esi
  __int64 v29; // rax
  PVOID v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _DWORD *v41; // rsi
  __int64 v42; // rax
  char v43; // al
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  unsigned int v50; // [rsp+40h] [rbp-58h]
  __int64 v51; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v52[9]; // [rsp+50h] [rbp-48h] BYREF
  char v53; // [rsp+A0h] [rbp+8h]

  v5 = (int)a3;
  v6 = 0LL;
  v7 = (unsigned int)a2;
  v8 = 0;
  v51 = 0LL;
  Mdl = 0LL;
  v53 = 0;
  v10 = 0;
  v52[0] = 0LL;
  if ( !a1 || !(_DWORD)a2 || !BaseAddress )
  {
    LODWORD(v16) = -1073741811;
LABEL_35:
    if ( (int)v16 >= 0 )
      return (unsigned int)v16;
    if ( v10 != 1 )
      goto LABEL_41;
    goto LABEL_37;
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6
    || *(_DWORD *)(v6 + 16) != 1953656900
    || *(_DWORD *)(v6 + 20) != 2
    || !*(_QWORD *)(v6 + 712)
    || !*(_QWORD *)(v6 + 728) )
  {
    LODWORD(v16) = -1073741811;
    v48 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v48 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v48);
    return (unsigned int)v16;
  }
  *BaseAddress = 0LL;
  LOBYTE(v8) = (a2 & 0xFFF) != 0;
  v11 = ((unsigned int)a2 >> 12) + v8;
  v50 = v11;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64 *, _QWORD *))(v6 + 712))(
          *(_QWORD *)(v6 + 680),
          v11,
          (unsigned int)a3,
          &v51,
          a4);
  v16 = v12;
  if ( v12 < 0 )
  {
    v17 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v6 + 712);
    *(_QWORD *)(v17 + 32) = v16;
LABEL_11:
    WdLogEvent5_WdError(v17);
LABEL_32:
    v8 = v50;
    goto LABEL_35;
  }
  v53 = 1;
  Mdl = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
  if ( !Mdl )
  {
    LODWORD(v16) = -1073741670;
    v22 = WdLogNewEntry5_WdLowResource(v19, v18, v20, v21);
    *(_QWORD *)(v22 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v22);
LABEL_44:
    (*(void (__fastcall **)(_QWORD, __int64))(v6 + 720))(*(_QWORD *)(v6 + 680), v51);
    return (unsigned int)v16;
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, PMDL, _QWORD *))(v6 + 728))(
          *(_QWORD *)(v6 + 680),
          v51,
          v11,
          0LL,
          Mdl,
          v52);
  v16 = v23;
  if ( v23 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v25, v24, v26);
    *(_QWORD *)(v27 + 24) = *(_QWORD *)(v6 + 728);
    v17 = v27;
    *(_QWORD *)(v27 + 32) = v16;
    goto LABEL_11;
  }
  v10 = 1;
  if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
  {
    v28 = 4;
    if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != 1 )
      {
        if ( (_DWORD)v5 == 2 )
        {
          v28 = 1028;
        }
        else
        {
          v29 = WdLogNewEntry5_WdError((unsigned int)(v5 - 1), v24, v26);
          *(_QWORD *)(v29 + 24) = v5;
          *(_QWORD *)(v29 + 32) = v6;
          WdLogEvent5_WdError(v29);
        }
      }
    }
    else
    {
      v28 = 516;
    }
    v30 = (PVOID)MmMapIoSpaceEx(*a4, v7, v28);
  }
  else
  {
    Mdl->MdlFlags |= 0x2002u;
    v30 = MmMapLockedPagesSpecifyCache(Mdl, 0, (MEMORY_CACHING_TYPE)v5, 0LL, 0, 0x40000010u);
  }
  *BaseAddress = v30;
  if ( v30 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x50uLL, 0x74727044u);
    v41 = PoolWithTag;
    if ( !PoolWithTag )
    {
      LODWORD(v16) = -1073741801;
      v42 = WdLogNewEntry5_WdLowResource(v38, v37, v39, v40);
      *(_QWORD *)(v42 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v42);
      v8 = v50;
LABEL_37:
      if ( (*(_DWORD *)(v6 + 704) & 1) != 0 )
        MmUnmapIoSpace(BaseAddress, v7);
      else
        MmUnmapLockedPages(BaseAddress, Mdl);
      goto LABEL_40;
    }
    PoolWithTag[4] = 1953656900;
    PoolWithTag[5] = 9;
    *((_QWORD *)PoolWithTag + 3) = v51;
    *((_QWORD *)PoolWithTag + 4) = *a4;
    *((_QWORD *)PoolWithTag + 5) = v52[0];
    *((_QWORD *)PoolWithTag + 6) = Mdl;
    PoolWithTag[14] = v7;
    v43 = *(_BYTE *)(v6 + 704) & 1;
    v41[16] = v5;
    *((_BYTE *)v41 + 60) = v43;
    *((_QWORD *)v41 + 9) = *BaseAddress;
    KeWaitForSingleObject((PVOID)(v6 + 2600), Executive, 0, 0, 0LL);
    v44 = (_QWORD *)(v6 + 2584);
    v45 = *(_QWORD *)(v6 + 2584);
    if ( *(_QWORD *)(v45 + 8) != v6 + 2584 )
      __fastfail(3u);
    *(_QWORD *)v41 = v45;
    *((_QWORD *)v41 + 1) = v44;
    *(_QWORD *)(v45 + 8) = v41;
    *v44 = v41;
    KeReleaseMutex((PRKMUTEX)(v6 + 2600), 0);
    v47 = WdLogNewEntry5_WdEvent(v46);
    *(_QWORD *)(v47 + 24) = *BaseAddress;
    WdLogEvent5_WdEvent(v47);
    goto LABEL_32;
  }
  LODWORD(v16) = -1073741670;
  v35 = WdLogNewEntry5_WdLowResource(v32, v31, v33, v34);
  *(_QWORD *)(v35 + 24) = -1073741670LL;
  WdLogEvent5_WdLowResource(v35);
  v8 = v50;
LABEL_40:
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(v6 + 736))(*(_QWORD *)(v6 + 680), v51, v8, 0LL);
LABEL_41:
  if ( Mdl )
    IoFreeMdl(Mdl);
  if ( v53 == 1 )
    goto LABEL_44;
  return (unsigned int)v16;
}
