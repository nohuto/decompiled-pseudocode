/*
 * XREFs of MiHotPatchProcess @ 0x140856864
 * Callers:
 *     MiHotPatchAllProcesses @ 0x1408564E8 (MiHotPatchAllProcesses.c)
 * Callees:
 *     MiUnlockVadShared @ 0x14001AF48 (MiUnlockVadShared.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x140075560 (MiLockVadShared.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     MiHotPatchImage @ 0x140856590 (MiHotPatchImage.c)
 */

__int64 __fastcall MiHotPatchProcess(struct _EX_RUNDOWN_REF *a1, int a2, int a3)
{
  struct _EX_RUNDOWN_REF *v3; // r15
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *Count; // rax
  unsigned __int64 i; // rsi
  __int64 *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  char v15; // bl
  int v16; // edi
  __int64 v17; // rcx
  int v18; // ebx
  char *v19; // rcx
  _QWORD **v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rcx

  v3 = a1 + 95;
  if ( !ExAcquireRundownProtection_0(a1 + 95) )
    return 3221225738LL;
  CurrentThread = KeGetCurrentThread();
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)a1);
LABEL_4:
  Count = (_QWORD *)a1[197].Count;
  i = 0LL;
  while ( Count )
  {
    i = (unsigned __int64)Count;
    Count = (_QWORD *)*Count;
  }
  while ( i )
  {
    if ( (*(_DWORD *)(i + 48) & 7) == 2 )
    {
      MiLockVadShared((__int64)CurrentThread, i);
      if ( !(unsigned int)MiVadDeleted(i)
        && (*(_DWORD *)(i + 48) & 0x4000000) != 0
        && (v11 = **(__int64 ***)(i + 72), v12 = *v11, v13 = *(_QWORD *)(*v11 + 56), *(_DWORD *)(v13 + 60) == a2)
        && *(_DWORD *)(v13 + 72) == a3 )
      {
        v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 24), -1LL, -1LL);
        v15 = *(_BYTE *)(v12 + 15) >> 4;
        v16 = v14;
        MiReferenceVad(i);
        MiUnlockVadShared((__int64)CurrentThread, i);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)a1);
        MiHotPatchImage(v17, v16, (_RTL_BALANCED_NODE *)i, a2, a3, v15, 0);
        LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)a1);
        MiLockVadShared((__int64)CurrentThread, i);
        v18 = MiVadDeleted(i);
        MiUnlockAndDereferenceVadShared(v19);
        if ( v18 )
          goto LABEL_4;
      }
      else
      {
        MiUnlockVadShared((__int64)CurrentThread, i);
      }
    }
    v20 = *(_QWORD ***)(i + 8);
    v21 = i;
    if ( v20 )
    {
      v22 = *v20;
      for ( i = *(_QWORD *)(i + 8); v22; v22 = (_QWORD *)*v22 )
        i = (unsigned __int64)v22;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v21 )
          break;
        v21 = i;
      }
    }
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)a1);
  ExReleaseRundownProtection_0(v3);
  return 0LL;
}
