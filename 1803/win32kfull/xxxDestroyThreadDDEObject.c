/*
 * XREFs of xxxDestroyThreadDDEObject @ 0x1C0111A40
 * Callers:
 *     NtUserDdeInitialize @ 0x1C0106F80 (NtUserDdeInitialize.c)
 *     _CsDdeUninitialize @ 0x1C01E2900 (_CsDdeUninitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDestroyThreadDDEObject(__int64 a1, int *a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // rax
  struct tagSVR_INSTANCE_INFO *v7; // rcx
  __int64 v8; // rcx
  ULONG_PTR v9; // rdi
  __int64 i; // rax
  __int64 j; // rax

  v4 = *a2;
  v5 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)v4;
  v6 = gSharedInfo[1];
  if ( *(_BYTE *)(v5 + v6 + 24) != 9
    || (*(_BYTE *)(v5 + v6 + 25) & 1) != 0
    || *(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v4 + 8) != a1 )
  {
    return 0LL;
  }
  v7 = psiiList;
  if ( a2 == (int *)psiiList )
  {
    psiiList = (struct tagSVR_INSTANCE_INFO *)*((_QWORD *)a2 + 3);
  }
  else
  {
    for ( i = *((_QWORD *)psiiList + 3); (int *)i != a2; i = *(_QWORD *)(i + 24) )
      v7 = (struct tagSVR_INSTANCE_INFO *)i;
    *((_QWORD *)v7 + 3) = *((_QWORD *)a2 + 3);
  }
  v8 = *(_QWORD *)(a1 + 616);
  if ( a2 == (int *)v8 )
  {
    *(_QWORD *)(a1 + 616) = *((_QWORD *)a2 + 4);
  }
  else
  {
    for ( j = *(_QWORD *)(v8 + 32); (int *)j != a2; j = *(_QWORD *)(j + 32) )
      v8 = j;
    *(_QWORD *)(v8 + 32) = *((_QWORD *)a2 + 4);
  }
  if ( (unsigned int)HMMarkObjectDestroy(a2) )
  {
    v9 = *((_QWORD *)a2 + 6);
    if ( HMAssignmentUnlock(a2 + 12) )
    {
      HMFreeObject(a2);
      xxxDestroyWindow(v9);
    }
    else
    {
      HMFreeObject(a2);
    }
  }
  return 1LL;
}
