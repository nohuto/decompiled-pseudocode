/*
 * XREFs of RtlpTpWorkUnposted @ 0x18002FD50
 * Callers:
 *     RtlpTpWorkCallback @ 0x18002F9F0 (RtlpTpWorkCallback.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     TpUnreserveTaskPost @ 0x18002FC60 (TpUnreserveTaskPost.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     RtlTpETWCallbackDequeue @ 0x18011160C (RtlTpETWCallbackDequeue.c)
 */

__int64 __fastcall RtlpTpWorkUnposted(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  void *v10; // rcx
  volatile signed __int32 *v11; // rcx
  __int64 v12; // rcx
  int v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h]
  __int64 v16; // [rsp+40h] [rbp-48h]
  __int64 v17; // [rsp+48h] [rbp-40h]
  __int128 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  int v21; // [rsp+6Ch] [rbp-1Ch]
  int v22; // [rsp+70h] [rbp-18h]

  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478LL;
  if ( *(_BYTE *)v6 )
    RtlTpETWCallbackDequeue(v6, a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v14 = 3;
  v18 = 0LL;
  v21 = 1;
  v22 = 72;
  if ( !a2 )
  {
    v7 = 0;
    if ( (*(_BYTE *)(a1 + 48) & 0xC0) != 0 )
      v7 = 2;
    v20 = v7;
  }
  TpUnreserveTaskPost(*(volatile signed __int32 **)(a1 + 32), (__int64)&v14, v4, v5);
  v10 = *(void **)(a1 + 40);
  if ( v10 )
    NtClose(v10);
  v11 = *(volatile signed __int32 **)(a1 + 72);
  if ( v11 != (volatile signed __int32 *)-1LL )
    RtlReleaseActivationContext(v11);
  v12 = *(_QWORD *)(a1 + 80);
  if ( v12 )
    LdrUnloadDll(v12, v8, v9);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
}
