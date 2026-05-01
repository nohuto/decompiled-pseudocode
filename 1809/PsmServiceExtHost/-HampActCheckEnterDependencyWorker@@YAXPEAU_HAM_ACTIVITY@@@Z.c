/*
 * XREFs of ?HampActCheckEnterDependencyWorker@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002C334
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180024040 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18002BBF0 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18000D4F0 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4FC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F540 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampActCheckEnterDependencyWorker(struct _HAM_ACTIVITY *a1)
{
  __int64 v1; // rax
  struct _HAM_DEPENDENCY_GROUP *v3; // rdi
  char v4; // al

  v1 = *((_QWORD *)a1 + 10);
  v3 = *(struct _HAM_DEPENDENCY_GROUP **)(v1 + 664);
  if ( v3 && !*((_QWORD *)a1 + 9) && (*((_BYTE *)a1 + 544) & 2) == 0 )
  {
    HampDepGroupAcquireLockExclusive(*(struct _HAM_DEPENDENCY_GROUP **)(v1 + 664));
    v4 = HampDepGroupTryEnterStateChange(v3, (unsigned __int64 *)(*((_QWORD *)a1 + 10) + 600LL));
    *((_DWORD *)a1 + 136) &= ~2u;
    *((_DWORD *)a1 + 136) |= 2 * (v4 & 1);
    HampDepGroupReleaseLockExclusive(v3);
  }
}
