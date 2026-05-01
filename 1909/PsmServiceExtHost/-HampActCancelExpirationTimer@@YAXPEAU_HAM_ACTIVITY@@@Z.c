/*
 * XREFs of ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180034F98
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800252A0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180034DA0 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007A99C (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
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
