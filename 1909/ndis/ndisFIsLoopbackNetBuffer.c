/*
 * XREFs of ndisFIsLoopbackNetBuffer @ 0x1C008F0E4
 * Callers:
 *     ndisFLoopbackNetBufferLists @ 0x1C008F2EC (ndisFLoopbackNetBufferLists.c)
 * Callees:
 *     NdisAcquireRWLockRead @ 0x1C000E6E0 (NdisAcquireRWLockRead.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     ethFindMulticast @ 0x1C00A2F2C (ethFindMulticast.c)
 */

void __fastcall ndisFIsLoopbackNetBuffer(__int64 a1, __int64 a2, __int64 a3, char *a4, char *a5)
{
  __int64 v5; // rsi
  __int64 v6; // rcx
  char v7; // bp
  char v8; // di
  char *v12; // rbx
  char *v13; // r15
  char *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rsi
  int v17; // r14d
  bool v18; // zf
  struct _LOCK_STATE_EX LockState; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = 0;
  *(_WORD *)&LockState.OldIrql = 0;
  v8 = 0;
  LockState.Flags = 0;
  if ( (*(_BYTE *)(v6 + 10) & 5) != 0 )
    v12 = *(char **)(v6 + 24);
  else
    v12 = (char *)MmMapLockedPagesSpecifyCache((PMDL)v6, 0, MmCached, 0LL, 0, 0x40000020u);
  v13 = a5;
  *a4 = 0;
  *v13 = 0;
  if ( v12 )
  {
    v14 = &v12[*(unsigned int *)(a2 + 16)];
    if ( *(_DWORD *)(v5 + 464) )
      goto LABEL_34;
    if ( (*(_DWORD *)(v5 + 120) & 0x800000) != 0 )
    {
      if ( (*v14 & 1) == 0
        && (v15 = *(_QWORD *)(v5 + 400), *(_DWORD *)(v14 + 2) == *(_DWORD *)(v15 + 338))
        && *(_WORD *)v14 == *(_WORD *)(v15 + 336) )
      {
        v8 = 1;
        v7 = 1;
      }
      else
      {
        v8 = 1;
      }
LABEL_32:
      if ( (*(_DWORD *)(a3 + 136) & 0x200) != 0 )
        v7 = 1;
LABEL_36:
      *a4 = v8;
      *v13 = v7;
      return;
    }
    NdisAcquireRWLockRead(*(PNDIS_RW_LOCK_EX *)(*(_QWORD *)(v5 + 400) + 288LL), &LockState, 0);
    v16 = *(_QWORD *)(v5 + 400);
    v8 = 0;
    v7 = 0;
    v17 = *(_DWORD *)(v16 + 312);
    if ( (*v14 & 1) != 0 )
    {
      if ( *v14 == -1 && v14[1] == -1 && v14[2] == -1 && v14[3] == -1 && v14[4] == -1 && v14[5] == -1 )
      {
        v18 = (v17 & 8) == 0;
LABEL_20:
        if ( v18 )
          goto LABEL_29;
        goto LABEL_28;
      }
      if ( (v17 & 4) == 0 )
      {
        if ( (v17 & 2) == 0 )
          goto LABEL_29;
        v18 = (unsigned __int8)ethFindMulticast(*(unsigned int *)(v16 + 368), 0LL, *(_QWORD *)(v16 + 352), v14) == 0;
        goto LABEL_20;
      }
    }
    else
    {
      if ( *(_DWORD *)(v14 + 2) != *(_DWORD *)(v16 + 338) || *(_WORD *)v14 != *(_WORD *)(v16 + 336) )
      {
LABEL_29:
        if ( (v17 & 0xA0) != 0 )
          v8 = 1;
        NdisReleaseRWLock(*(PNDIS_RW_LOCK_EX *)(v16 + 288), &LockState);
        if ( v8 )
          goto LABEL_32;
LABEL_34:
        if ( (*(_DWORD *)(a3 + 136) & 0x200) != 0 )
          v8 = 1;
        goto LABEL_36;
      }
      v7 = 1;
    }
LABEL_28:
    v8 = 1;
    goto LABEL_29;
  }
}
