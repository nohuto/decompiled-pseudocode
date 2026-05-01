/*
 * XREFs of ?CrmpActivityWindowClosedReasonSubscribe@@YGJPAU_CRMP_ACTIVITY_CONTEXT@@P6GXPAX11@Z1@Z @ 0x1000BCD7
 * Callers:
 *     _CrmActivityWindowClosedReasonSubscribe@12 @ 0x1000BCC0 (_CrmActivityWindowClosedReasonSubscribe@12.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x1000A750 (-CrmpActivityWindowClosedReasonUnsubscribe@@YGXPAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __userpurge CrmpActivityWindowClosedReasonSubscribe@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct _CRMP_ACTIVITY_CONTEXT *a3,
        void (__stdcall *a4)(void *, void *, void *),
        void *a5)
{
  CLIENT_CALL_RETURN v6; // edi
  int v9; // [esp+20h] [ebp-1Ch]

  v9 = 1;
  v6.Pointer = _NdrClientCall4(&stru_10001638, &byte_10002FEA, a2[2], a2[3], *(_DWORD *)(a2[4] + 4), a2 + 14).Pointer;
  if ( v6.Simple >= 0 )
  {
    a2[12] = a1;
    a2[13] = a3;
    v6.Simple = RtlSubscribeWnfStateChangeNotification(
                  a2 + 16,
                  a2[14],
                  a2[15],
                  0,
                  CrmpActivityWindowClosedWNFCallback,
                  a2,
                  0,
                  0,
                  0);
    if ( v6.Simple >= 0 )
    {
      v9 = 0;
      v6.Simple = 0;
    }
  }
  if ( v9 )
    CrmpActivityWindowClosedReasonUnsubscribe(a2);
  return v6;
}
