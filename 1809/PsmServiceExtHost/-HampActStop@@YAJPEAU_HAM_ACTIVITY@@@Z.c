/*
 * XREFs of ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18002BE24
 * Callers:
 *     ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000DD60 (-HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18002D5E4 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18002BBF0 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampRmContextStopActivity@@YAXPEAX@Z @ 0x18002BE94 (-HampRmContextStopActivity@@YAXPEAX@Z.c)
 *     ?HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002BEC8 (-HampActCancelExpirationTimer@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z @ 0x18002BEF0 (-HampActBeginStateChange@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STATE@@@Z.c)
 *     ?HampSystemActivationClientDeactivate@@YAXPEAX@Z @ 0x180039618 (-HampSystemActivationClientDeactivate@@YAXPEAX@Z.c)
 */

__int64 __fastcall HampActStop(struct _HAM_ACTIVITY *a1, __int64 a2)
{
  __int64 result; // rax
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  void *v5; // rcx

  LOBYTE(a2) = 1;
  result = HampActBeginStateChange(a1, a2);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)a1 + 136) &= 0xFFFFFF3F;
    HampActCancelExpirationTimer(a1);
    v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
    *((_DWORD *)a1 + 136) &= ~0x20u;
    HampHostUpdateActivityState(v4);
    HampHostReleaseLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
    HampRmContextStopActivity(*((void **)a1 + 11));
    v5 = (void *)*((_QWORD *)a1 + 63);
    if ( v5 )
    {
      HampSystemActivationClientDeactivate(v5);
      *((_QWORD *)a1 + 63) = 0LL;
    }
    HampActEndStateChange((struct _RM_HAM_ACTIVITY_HOST **)a1, 0);
    return 0LL;
  }
  return result;
}
