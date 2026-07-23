/*
 * XREFs of MiFreeToSubAllocatedRegion @ 0x1405E071C
 * Callers:
 *     MmDeleteTeb @ 0x1405E066C (MmDeleteTeb.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F9BBC (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     RtlClearBitsEx @ 0x140027F20 (RtlClearBitsEx.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400769C4 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140076BD8 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiDecommitRegion @ 0x1405ED220 (MiDecommitRegion.c)
 */

void __fastcall MiFreeToSubAllocatedRegion(char *P, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 Process; // r12
  __int64 **VadEvent; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r8
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // r8d
  bool v21; // zf
  __int64 *i; // rcx
  bool v23; // bl
  int v24; // eax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rdx

  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  VadEvent = MiLocateVadEvent((__int64)P, 64);
  if ( !VadEvent )
    goto LABEL_21;
  v13 = (__int64)(VadEvent + 1);
  v14 = (unsigned __int64)(v12 + 4095) >> 12;
  v15 = (v11 - ((*((unsigned int *)P + 6) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12)) >> 12;
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  RtlClearBitsEx(v13, v15, v14);
  v16 = *(unsigned int *)(v13 + 44);
  v17 = *(_DWORD *)(v13 + 40) - v14;
  v18 = v17;
  *(_DWORD *)(v13 + 40) = v17;
  if ( v14 + v17 >= v16 )
  {
    v18 = v17;
    if ( v17 < (unsigned int)v16 )
    {
      v25 = (_QWORD *)(v13 + 16);
      v26 = *(_QWORD *)(Process + 1296) + 16 * ((*(_DWORD *)(v13 + 48) & 3) + 16LL);
      v27 = *(_QWORD *)v26;
      if ( *(_QWORD *)(*(_QWORD *)v26 + 8LL) != v26 )
        goto LABEL_28;
      *v25 = v27;
      *(_QWORD *)(v13 + 24) = v26;
      *(_QWORD *)(v27 + 8) = v25;
      *(_QWORD *)v26 = v25;
      v18 = *(_DWORD *)(v13 + 40);
    }
  }
  v19 = 0;
  v20 = 0;
  v21 = v18 == 0;
  for ( i = (__int64 *)*((_QWORD *)P + 7); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 16) == 2 )
    {
      if ( v20 <= 1 )
        ++v20;
      if ( a3 <= i[2] && a3 + a4 - 1 >= (i[1] & 0xFFFFFFFFFFFFF000uLL) && v19 <= 1 )
        ++v19;
    }
  }
  v23 = v21;
  v24 = 1;
  if ( v20 != 1 )
    v23 = 0;
  if ( v19 != 1 )
    v24 = 0;
  if ( v23 )
  {
    v28 = (_QWORD *)(v13 + 16);
    v29 = *(_QWORD *)(v13 + 16);
    if ( *(_QWORD *)(v29 + 8) == v13 + 16 )
    {
      v30 = *(_QWORD **)(v13 + 24);
      if ( (_QWORD *)*v30 == v28 )
      {
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        *v28 = 0LL;
        *(_QWORD *)(v13 + 24) = 0LL;
        goto LABEL_20;
      }
    }
LABEL_28:
    __fastfail(3u);
  }
  if ( v24 )
    MiDecommitRegion(P, a3, a3 + a4 - 1);
LABEL_20:
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, Process);
  if ( !v23 )
  {
LABEL_21:
    MiUnlockAndDereferenceVad(P);
    return;
  }
  MiDeleteVad((unsigned int *)P, 0LL, 0);
}
