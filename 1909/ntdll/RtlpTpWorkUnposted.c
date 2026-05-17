/*
 * XREFs of RtlpTpWorkUnposted @ 0x18002F180
 * Callers:
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 * Callees:
 *     TpUnreserveTaskPost @ 0x18002F270 (TpUnreserveTaskPost.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     RtlTpETWCallbackDequeue @ 0x18010FE6C (RtlTpETWCallbackDequeue.c)
 */

__int64 __fastcall RtlpTpWorkUnposted(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // eax
  void *v6; // rcx
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-50h]
  __int64 v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp-28h]
  int v15; // [rsp+68h] [rbp-20h]
  int v16; // [rsp+6Ch] [rbp-1Ch]
  int v17; // [rsp+70h] [rbp-18h]

  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1) )
    v4 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478LL;
  if ( *(_BYTE *)v4 )
    RtlTpETWCallbackDequeue(v4, a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v9 = 3;
  v13 = 0LL;
  v16 = 1;
  v17 = 72;
  if ( !a2 )
  {
    v5 = 0;
    if ( (*(_BYTE *)(a1 + 48) & 0xC0) != 0 )
      v5 = 2;
    v15 = v5;
  }
  TpUnreserveTaskPost(*(_QWORD *)(a1 + 32), &v9);
  v6 = *(void **)(a1 + 40);
  if ( v6 )
    NtClose(v6);
  v7 = *(_QWORD *)(a1 + 72);
  if ( v7 != -1 )
    RtlReleaseActivationContext(v7);
  if ( *(_QWORD *)(a1 + 80) )
    LdrUnloadDll();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
