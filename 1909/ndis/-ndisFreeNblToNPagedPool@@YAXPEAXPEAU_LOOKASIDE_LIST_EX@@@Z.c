/*
 * XREFs of ?ndisFreeNblToNPagedPool@@YAXPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C0011100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeNblToNPagedPool(_QWORD *a1, struct _LOOKASIDE_LIST_EX *a2)
{
  void *v3; // rcx
  KIRQL v4; // al
  char *v5; // rdx
  __int64 v6; // rcx
  char **v7; // r8

  v3 = (void *)a1[46];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(a1 - 4) + 8LL));
  v5 = (char *)(a1 - 3);
  v6 = *(a1 - 3);
  if ( *(_QWORD **)(v6 + 8) != a1 - 3 || (v7 = (char **)*((_QWORD *)v5 + 1), *v7 != v5) )
    __fastfail(3u);
  *v7 = (char *)v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(*(a1 - 4) + 8LL), v4);
  ExFreePoolWithTag(a1 - 4, 0);
}
