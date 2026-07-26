/*
 * XREFs of ndisMIsLoopbackNetBuffer @ 0x1C00572C4
 * Callers:
 *     ndisMLoopbackNetBufferLists @ 0x1C00578B8 (ndisMLoopbackNetBufferLists.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C0005E40 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     ethFindMulticast @ 0x1C0067F58 (ethFindMulticast.c)
 */

void __fastcall ndisMIsLoopbackNetBuffer(
        struct _LOCK_STATE_EX *LockState,
        __int64 a2,
        __int64 a3,
        char *a4,
        unsigned __int8 *LockStatea)
{
  unsigned __int8 v5; // si
  char v7; // di
  __int64 v10; // rcx
  char *v11; // rbx
  unsigned __int8 *v12; // r13
  char *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbp
  int v16; // r15d
  bool v17; // zf
  __int64 v18; // [rsp+20h] [rbp-38h]

  v5 = 0;
  v7 = 0;
  if ( (unsigned __int8)byte_1C00A0252 >= 4u )
    WPP_SF_qqq(0x3Cu, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, LockState, a2, a3);
  v10 = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v10 + 10) & 5) != 0 )
    v11 = *(char **)(v10 + 24);
  else
    v11 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20);
  v12 = LockStatea;
  *a4 = 0;
  *v12 = 0;
  if ( v11 )
  {
    v13 = &v11[*(unsigned int *)(a2 + 16)];
    if ( *(_DWORD *)&LockState[612].OldIrql )
      goto LABEL_36;
    if ( (*(_DWORD *)&LockState[40].OldIrql & 0x800000) != 0 )
    {
      if ( (*v13 & 1) == 0
        && (v14 = *(_QWORD *)&LockState[133].LockState, *(_DWORD *)(v13 + 2) == *(_DWORD *)(v14 + 338))
        && *(_WORD *)v13 == *(_WORD *)(v14 + 336) )
      {
        v7 = 1;
        v5 = 1;
      }
      else
      {
        v7 = 1;
      }
LABEL_33:
      if ( (*(_DWORD *)(a3 + 136) & 0x200) != 0 )
        v5 = 1;
LABEL_38:
      *a4 = v7;
      *v12 = v5;
      if ( (unsigned __int8)byte_1C00A0252 >= 4u )
      {
        LODWORD(v18) = v5;
        WPP_SF_qqd(0x3Du, &WPP_9311d8c63e523f0dc817929b0a257a44_Traceguids, LockState, a4, v18);
      }
      return;
    }
    NdisAcquireRWLockRead(
      *(PNDIS_RW_LOCK_EX *)(*(_QWORD *)&LockState[133].LockState + 288LL),
      (PLOCK_STATE_EX)&LockStatea,
      0);
    v15 = *(_QWORD *)&LockState[133].LockState;
    v7 = 0;
    v5 = 0;
    v16 = *(_DWORD *)(v15 + 312);
    if ( (*v13 & 1) != 0 )
    {
      if ( *v13 == -1 && v13[1] == -1 && v13[2] == -1 && v13[3] == -1 && v13[4] == -1 && v13[5] == -1 )
      {
        v17 = (v16 & 8) == 0;
        goto LABEL_22;
      }
      if ( (v16 & 4) != 0 )
      {
LABEL_23:
        v7 = 1;
        goto LABEL_30;
      }
      if ( (v16 & 2) != 0 )
      {
        v17 = (unsigned __int8)ethFindMulticast(*(unsigned int *)(v15 + 368), 0LL, *(_QWORD *)(v15 + 352), v13) == 0;
LABEL_22:
        if ( v17 )
          goto LABEL_30;
        goto LABEL_23;
      }
    }
    else if ( *(_DWORD *)(v13 + 2) == *(_DWORD *)(v15 + 338) && *(_WORD *)v13 == *(_WORD *)(v15 + 336) )
    {
      v7 = 1;
      v5 = 1;
    }
LABEL_30:
    if ( (v16 & 0xA0) != 0 )
      v7 = 1;
    NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v15 + 288), (PLOCK_STATE_EX)&LockStatea);
    if ( v7 )
      goto LABEL_33;
LABEL_36:
    if ( (*(_DWORD *)(a3 + 136) & 0x200) != 0 )
      v7 = 1;
    goto LABEL_38;
  }
}
