/*
 * XREFs of NVMeCompletionQueueInit @ 0x1C000D254
 * Callers:
 *     AdminQueueInitialize @ 0x1C000B4D8 (AdminQueueInitialize.c)
 *     IoQueuesInitialize @ 0x1C000C854 (IoQueuesInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeCompletionQueueInit(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned int v7; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 result; // rax
  _QWORD *v16; // rbx
  int v17; // [rsp+60h] [rbp+18h] BYREF

  v6 = a5;
  v7 = 0;
  v17 = 0;
  *(_QWORD *)a2 = a4;
  if ( v6 )
    *(_QWORD *)(a2 + 8) = v6;
  else
    *(_QWORD *)(a2 + 8) = StorPortGetPhysicalAddress(a1, 0LL, a4, &v17);
  v11 = *(_DWORD *)(a1 + 160) * (2 * (unsigned int)a3 + 1);
  v12 = *(_QWORD *)(a1 + 136) + 4096LL;
  *(_WORD *)(a2 + 168) = a3;
  *(_DWORD *)(a2 + 170) = 0;
  *(_QWORD *)(a2 + 176) = 0LL;
  *(_DWORD *)(a2 + 184) = 0;
  *(_QWORD *)(a2 + 192) = a6;
  *(_QWORD *)(a2 + 16) = v12 + v11;
  if ( a3 && a3 <= *(_WORD *)(a1 + 268) )
  {
    v13 = a2 + 288;
    *(_BYTE *)(a2 + 200) = 1;
    *(_QWORD *)(a2 + 288) = a1;
    *(_DWORD *)(a2 + 204) = 0;
    *(_QWORD *)(a2 + 296) = a2;
    if ( (*(_DWORD *)(a1 + 3740) & 2) != 0 )
      v14 = 4105LL;
    else
      v14 = 4106LL;
    result = StorPortNotification(v14, a1, a2 + 216, NVMeIoPollingDpcRoutine);
    if ( *(_DWORD *)(a2 + 204) )
    {
      v16 = (_QWORD *)(a2 + 208);
      if ( !*v16 )
      {
        result = StorPortExtendedFunction(0LL, a1, 8 * (unsigned int)*(unsigned __int16 *)(a1 + 194), 1701672526LL);
        if ( *v16 )
        {
          if ( *(_WORD *)(a1 + 194) )
          {
            do
            {
              a5 = *(_QWORD *)(*v16 + 8LL * v7);
              StorPortExtendedFunction(88LL, a1, NVMeIoPollingTimerExCallback, v13);
              result = *(unsigned __int16 *)(a1 + 194);
              ++v7;
            }
            while ( v7 < (unsigned int)result );
          }
        }
      }
    }
  }
  else
  {
    *(_BYTE *)(a2 + 200) = 0;
    return StorPortNotification(4097LL, a1, a2 + 24, NVMeCompletionDpcRoutine);
  }
  return result;
}
