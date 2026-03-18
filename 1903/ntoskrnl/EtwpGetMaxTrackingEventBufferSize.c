/*
 * XREFs of EtwpGetMaxTrackingEventBufferSize @ 0x1406B809C
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x1406B7F90 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpSendDbgId @ 0x1408FA7EC (EtwpSendDbgId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetMaxTrackingEventBufferSize(__int64 a1)
{
  int v1; // edx
  __int64 *v2; // r8
  __int64 *v4; // r9
  __int64 *v5; // r8
  int v6; // eax
  __int64 result; // rax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx

  v1 = 0;
  v2 = *(__int64 **)(a1 + 112);
  if ( v2 != (__int64 *)(a1 + 112) )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( NtBuildLabEx[v8] );
    v1 = (v8 + 24) & 0xFFFFFFF8;
    while ( v2 != (__int64 *)(a1 + 112) )
    {
      v9 = *((_DWORD *)v2 + 5);
      v2 = (__int64 *)*v2;
      v1 += (v9 + 19) & 0xFFFFFFF8;
    }
  }
  v4 = (__int64 *)(a1 + 1024);
  v5 = *(__int64 **)(a1 + 1024);
  while ( v5 != v4 )
  {
    v10 = *((_DWORD *)v5 + 4) + 16 * *((_DWORD *)v5 + 6) + 27;
    v5 = (__int64 *)*v5;
    v1 += v10 & 0xFFFFFFF8;
  }
  v6 = *(_DWORD *)(a1 + 136);
  if ( v6 )
    v1 += (32 * v6 + 23) & 0xFFFFFFF8;
  result = (unsigned int)(v1 + 72);
  if ( !v1 )
    return 0LL;
  return result;
}
