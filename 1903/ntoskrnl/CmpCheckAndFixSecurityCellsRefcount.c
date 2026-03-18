/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x1406DD1E8
 * Callers:
 *     CmpCheckRegistry2 @ 0x140650910 (CmpCheckRegistry2.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvpMarkCellDirty @ 0x1405D4FF0 (HvpMarkCellDirty.c)
 */

char __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter2)
{
  unsigned int v1; // ebp
  char v3; // di
  unsigned int *v4; // r14
  __int64 v5; // rsi
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0xFFFFFFFFLL;
  v1 = 0;
  v3 = 1;
  if ( !*(_DWORD *)(BugCheckParameter2 + 1864) )
  {
LABEL_5:
    v5 = 0LL;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v4 = (unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 1880) + 16LL * v1);
    v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *v4,
           &v7);
    if ( !v5 )
      return 0;
    if ( *(_DWORD *)(v5 + 12) < *(_DWORD *)(*((_QWORD *)v4 + 1) + 28LL) )
      break;
LABEL_4:
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
    if ( ++v1 >= *(_DWORD *)(BugCheckParameter2 + 1864) )
      goto LABEL_5;
  }
  if ( HvpMarkCellDirty(BugCheckParameter2, *v4, 0) )
  {
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(*((_QWORD *)v4 + 1) + 28LL);
    goto LABEL_4;
  }
  v3 = 0;
LABEL_6:
  if ( v5 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v7);
  return v3;
}
