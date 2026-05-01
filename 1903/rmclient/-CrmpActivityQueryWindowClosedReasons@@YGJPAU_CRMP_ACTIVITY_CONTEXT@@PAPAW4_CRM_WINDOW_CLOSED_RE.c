/*
 * XREFs of ?CrmpActivityQueryWindowClosedReasons@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@PAPAW4_CRM_WINDOW_CLOSED_REASON@@PAK@Z @ 0x1000A1C7
 * Callers:
 *     _CrmActivityQueryWindowClosedReasons@12 @ 0x1000A1B0 (_CrmActivityQueryWindowClosedReasons@12.c)
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __userpurge CrmpActivityQueryWindowClosedReasons@<eax>(
        PVOID *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _CRMP_ACTIVITY_CONTEXT *a3,
        enum _CRM_WINDOW_CLOSED_REASON **a4,
        unsigned int *a5)
{
  int v5; // eax
  CLIENT_CALL_RETURN result; // eax
  int v8; // [esp+18h] [ebp-24h] BYREF
  CLIENT_CALL_RETURN v9; // [esp+1Ch] [ebp-20h]
  PVOID P; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  P = 0;
  v8 = 0;
  v5 = a2[4];
  ms_exc.registration.TryLevel = 0;
  result.Pointer = _NdrClientCall4(&stru_10001638, &byte_10002ED0, a2[2], a2[3], *(_DWORD *)(v5 + 4), &P, &v8).Pointer;
  v9.Pointer = result.Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( result.Simple >= 0 )
  {
    *a1 = P;
    *(_DWORD *)a3 = v8;
    P = 0;
    result.Simple = 0;
    v9.Simple = 0;
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v9;
  }
  return result;
}
