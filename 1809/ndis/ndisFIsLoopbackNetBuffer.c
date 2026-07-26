/*
 * XREFs of ndisFIsLoopbackNetBuffer @ 0x1C005BAF4
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C005BD5C (ndisFLoopbackNetBufferLists.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005E40 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     ethFindMulticast @ 0x1C0067F58 (ethFindMulticast.c)
 */

void __fastcall ndisFIsLoopbackNetBuffer(
        struct _LOCK_STATE_EX *LockState,
        __int64 a2,
        __int64 a3,
        char *a4,
        unsigned __int8 *LockStatea)
{
  __int64 v5; // rbp
  unsigned __int8 v6; // si
  char v7; // di
  __int64 v11; // rcx
  char *v12; // rbx
  unsigned __int8 *v13; // r12
  char *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rbp
  int v17; // r14d
  bool v18; // zf
  __int64 v19; // [rsp+20h] [rbp-38h]

  v5 = *(_QWORD *)&LockState[10].Flags;
  v6 = 0;
  v7 = 0;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqq(0x64u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, LockState, a2, a3);
  v11 = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v11 + 10) & 5) != 0 )
    v12 = *(char **)(v11 + 24);
  else
    v12 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v11, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20);
  v13 = LockStatea;
  *a4 = 0;
  *v13 = 0;
  if ( v12 )
  {
    v14 = &v12[*(unsigned int *)(a2 + 16)];
    if ( *(_DWORD *)(v5 + 464) )
      goto LABEL_37;
    if ( (*(_DWORD *)(v5 + 120) & 0x800000) != 0 )
    {
      if ( (*v14 & 1) == 0
        && (v15 = *(_QWORD *)(v5 + 400), *(_DWORD *)(v14 + 2) == *(_DWORD *)(v15 + 338))
        && *(_WORD *)v14 == *(_WORD *)(v15 + 336) )
      {
        v7 = 1;
        v6 = 1;
      }
      else
      {
        v7 = 1;
      }
LABEL_34:
      if ( (*(_DWORD *)(a3 + 136) & 0x200) != 0 )
        v6 = 1;
LABEL_39:
      *a4 = v7;
      *v13 = v6;
      if ( (unsigned __int8)byte_1C00A0252 >= 4u )
      {
        LODWORD(v19) = v6;
        WPP_SF_qqd(0x65u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, LockState, a4, v19);
      }
      return;
    }
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(*(_QWORD *)(v5 + 400) + 288LL), (PLOCK_STATE_EX)&LockStatea, 0);
    v16 = *(_QWORD *)(v5 + 400);
    v7 = 0;
    v6 = 0;
    v17 = *(_DWORD *)(v16 + 312);
    if ( (*v14 & 1) != 0 )
    {
      if ( *v14 == -1 && v14[1] == -1 && v14[2] == -1 && v14[3] == -1 && v14[4] == -1 && v14[5] == -1 )
      {
        v18 = (v17 & 8) == 0;
LABEL_22:
        if ( v18 )
          goto LABEL_31;
        goto LABEL_30;
      }
      if ( (v17 & 4) == 0 )
      {
        if ( (v17 & 2) == 0 )
          goto LABEL_31;
        v18 = (unsigned __int8)ethFindMulticast(*(unsigned int *)(v16 + 368), 0LL, *(_QWORD *)(v16 + 352), v14) == 0;
        goto LABEL_22;
      }
    }
    else
    {
      if ( *(_DWORD *)(v14 + 2) != *(_DWORD *)(v16 + 338) || *(_WORD *)v14 != *(_WORD *)(v16 + 336) )
      {
LABEL_31:
        if ( (v17 & 0xA0) != 0 )
          v7 = 1;
        NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v16 + 288), (PLOCK_STATE_EX)&LockStatea);
        if ( v7 )
          goto LABEL_34;
LABEL_37:
        if ( (*(_DWORD *)(a3 + 136) & 0x200) != 0 )
          v7 = 1;
        goto LABEL_39;
      }
      v6 = 1;
    }
LABEL_30:
    v7 = 1;
    goto LABEL_31;
  }
}
