/*
 * XREFs of ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002BEC8
 * Callers:
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180005A94 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18002BE24 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 */

void __fastcall HampActCancelExpirationTimer(struct _HAM_ACTIVITY *a1)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)a1 + 66);
  if ( v2 )
  {
    if ( (unsigned int)TpSetTimerEx(v2, 0LL, 0LL, 0LL) )
      CemRcObjectDereference(a1);
    TpReleaseTimer(*((_QWORD *)a1 + 66));
    *((_QWORD *)a1 + 66) = 0LL;
    *((_QWORD *)a1 + 67) = 0LL;
  }
}
