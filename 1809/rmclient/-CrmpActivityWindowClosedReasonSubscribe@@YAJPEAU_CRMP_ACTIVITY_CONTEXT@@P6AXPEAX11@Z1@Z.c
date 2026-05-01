/*
 * XREFs of ?CrmpActivityWindowClosedReasonSubscribe@@YAJPEAU_CRMP_ACTIVITY_CONTEXT@@P6AXPEAX11@Z1@Z @ 0x1800081BC
 * Callers:
 *     CrmActivityWindowClosedReasonSubscribe @ 0x1800081B0 (CrmActivityWindowClosedReasonSubscribe.c)
 * Callees:
 *     ?CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z @ 0x18000FF7C (-CrmpActivityWindowClosedReasonUnsubscribe@@YAXPEAU_CRMP_ACTIVITY_CONTEXT@@@Z.c)
 */

__int64 __fastcall CrmpActivityWindowClosedReasonSubscribe(
        struct _CRMP_ACTIVITY_CONTEXT *a1,
        void (*a2)(void *, void *, void *),
        void *a3)
{
  int v6; // esi
  int Pointer; // eax
  int v8; // ebx

  v6 = 1;
  Pointer = (unsigned int)NdrClientCall3(
                            (MIDL_STUBLESS_PROXY_INFO *)&stru_180013BA0,
                            8u,
                            0LL,
                            *((_QWORD *)a1 + 1),
                            *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL),
                            (char *)a1 + 88).Pointer;
  v8 = Pointer;
  if ( Pointer >= 0 )
  {
    *((_QWORD *)a1 + 9) = a2;
    *((_QWORD *)a1 + 10) = a3;
    v8 = RtlSubscribeWnfStateChangeNotification(
           (char *)a1 + 96,
           *((_QWORD *)a1 + 11),
           0LL,
           CrmpActivityWindowClosedWNFCallback,
           a1,
           0LL,
           0,
           0,
           Pointer);
    if ( v8 >= 0 )
    {
      v6 = 0;
      v8 = 0;
    }
  }
  if ( v6 )
    CrmpActivityWindowClosedReasonUnsubscribe(a1);
  return (unsigned int)v8;
}
