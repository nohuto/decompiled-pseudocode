/*
 * XREFs of DpiAgpFreePool @ 0x1C02AD440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpFreePool(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v5; // bp
  __int64 v6; // rsi
  unsigned int *v7; // rdi
  unsigned int *v8; // rdx
  unsigned int *v9; // rax
  void *v10; // rcx
  __int64 v11; // rax
  unsigned int *v13; // rcx
  void **v14; // rax

  v3 = 0;
  v5 = 0;
  if ( !a1 || !a2 )
    goto LABEL_12;
  v6 = *(_QWORD *)(a1 + 64);
  if ( !v6
    || *(_DWORD *)(v6 + 16) != 1953656900
    || *(_DWORD *)(v6 + 20) != 2
    || !*(_QWORD *)(v6 + 720)
    || !*(_QWORD *)(v6 + 736) )
  {
    return (unsigned int)-1073741811;
  }
  KeWaitForSingleObject((PVOID)(v6 + 2600), Executive, 0, 0, 0LL);
  v7 = *(unsigned int **)(v6 + 2584);
  v8 = v7;
  v9 = *(unsigned int **)v7;
  if ( *(unsigned int **)v7 != v7 )
  {
    while ( 1 )
    {
      v10 = (void *)*((_QWORD *)v7 + 9);
      if ( v10 == a2 )
        break;
      v7 = v9;
      v9 = *(unsigned int **)v9;
      if ( v9 == v8 )
        goto LABEL_11;
    }
    v5 = 1;
    if ( *((_BYTE *)v7 + 60) == 1 )
      MmUnmapIoSpace(v10, v7[14]);
    else
      MmUnmapLockedPages(v10, *((PMDL *)v7 + 6));
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v6 + 736))(
      *(_QWORD *)(v6 + 680),
      *((_QWORD *)v7 + 3),
      (v7[14] >> 12) + ((v7[14] & 0xFFF) != 0),
      0LL);
    IoFreeMdl(*((PMDL *)v7 + 6));
    (*(void (__fastcall **)(_QWORD, _QWORD))(v6 + 720))(*(_QWORD *)(v6 + 680), *((_QWORD *)v7 + 3));
    v13 = *(unsigned int **)v7;
    if ( *(unsigned int **)(*(_QWORD *)v7 + 8LL) != v7 || (v14 = (void **)*((_QWORD *)v7 + 1), *v14 != v7) )
      __fastfail(3u);
    *v14 = v13;
    *((_QWORD *)v13 + 1) = v14;
    ExFreePoolWithTag(v7, 0x74727044u);
  }
LABEL_11:
  KeReleaseMutex((PRKMUTEX)(v6 + 2600), 0);
  if ( !v5 )
  {
LABEL_12:
    v3 = -1073741811;
    v11 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
  }
  return v3;
}
