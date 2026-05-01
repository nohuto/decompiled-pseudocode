/*
 * XREFs of ?HampActCompareForMaxCommit@@YAJPEAU_HAM_ACTIVITY@@0K@Z @ 0x18003838C
 * Callers:
 *     ?HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z @ 0x1800382D0 (-HampActGetCommitRequest@@YA_KPEAU_HAM_ACTIVITY@@_K@Z.c)
 * Callees:
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18002C308 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 */

__int64 __fastcall HampActCompareForMaxCommit(struct _HAM_ACTIVITY *a1, struct _HAM_ACTIVITY *a2, char a3)
{
  __int64 v3; // r11
  struct _HAM_ACTIVITY *v4; // r9
  struct _HAM_ACTIVITY *v5; // r10
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  struct _HAM_ACTIVITY *v11; // rax
  unsigned __int8 v12; // dl
  __int64 v13; // r9
  BOOL IsStartedOrReachedPendState; // eax
  int v15; // r8d

  v3 = *((_QWORD *)a1 + 10);
  v4 = a2;
  v5 = a1;
  if ( (a3 & 1) == 0 )
  {
    HampActIsStartedOrReachedPendState((__int64)a1, 4u);
    IsStartedOrReachedPendState = HampActIsStartedOrReachedPendState(v13, v12);
    if ( v15 )
    {
      if ( !IsStartedOrReachedPendState )
        return 1LL;
    }
    else if ( IsStartedOrReachedPendState )
    {
      return 0xFFFFFFFFLL;
    }
  }
  if ( (*((_DWORD *)v5 + 28) & 0x10000) != 0 && (*((_DWORD *)v4 + 28) & 0x10000) == 0 )
    return 1LL;
  if ( (*((_DWORD *)v5 + 28) & 0x10000) == 0 && (*((_DWORD *)v4 + 28) & 0x10000) != 0 )
    return 0xFFFFFFFFLL;
  v7 = *((_QWORD *)v5 + 57);
  v8 = *((_QWORD *)v4 + 57);
  if ( v7 < v8 )
    return 0xFFFFFFFFLL;
  if ( v7 > v8 )
    return 1LL;
  v9 = *((_QWORD *)v5 + 58);
  v10 = *((_QWORD *)v4 + 58);
  if ( v9 > v10 )
    return 1LL;
  if ( v9 < v10 )
    return 0xFFFFFFFFLL;
  v11 = *(struct _HAM_ACTIVITY **)(v3 + 976);
  if ( v5 == v11 )
    return 1LL;
  if ( v4 == v11 )
    return 0xFFFFFFFFLL;
  return 0LL;
}
