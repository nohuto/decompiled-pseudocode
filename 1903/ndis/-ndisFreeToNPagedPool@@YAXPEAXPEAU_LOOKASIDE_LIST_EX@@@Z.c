/*
 * XREFs of ?ndisFreeToNPagedPool@@YAXPEAXPEAU_LOOKASIDE_LIST_EX@@@Z @ 0x1C001F220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisFreeToNPagedPool(_QWORD *a1, struct _LOOKASIDE_LIST_EX *a2)
{
  _QWORD *v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rcx
  _QWORD *v5; // r8

  v2 = a1 - 4;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(a1 - 4) + 8LL));
  v4 = v2[1];
  if ( *(_QWORD **)(v4 + 8) != v2 + 1 || (v5 = (_QWORD *)v2[2], (_QWORD *)*v5 != v2 + 1) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(*v2 + 8LL), v3);
  ExFreePoolWithTag(v2, 0);
}
