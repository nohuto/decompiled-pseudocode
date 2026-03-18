/*
 * XREFs of EtwpRealtimeInjectEtwBuffer @ 0x14062F7D4
 * Callers:
 *     EtwpRealtimeDeliverBuffer @ 0x14062F6B4 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406B7F90 (EtwpRealtimeNotifyConsumers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     EtwpFindUserBufferSpace @ 0x14062F5DC (EtwpFindUserBufferSpace.c)
 *     EtwpFreeUserBufferSpace @ 0x1409008D4 (EtwpFreeUserBufferSpace.c)
 */

__int64 __fastcall EtwpRealtimeInjectEtwBuffer(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ecx
  __int64 v8; // rcx
  _DWORD *v9; // rdx
  volatile signed __int32 *v10; // r8
  signed __int64 v11; // rax
  int v12; // ecx
  signed __int64 *v13; // r8
  signed __int64 *v14; // rdx
  signed __int64 v15; // rcx
  int UserBufferSpace; // [rsp+20h] [rbp-78h]
  void *v17; // [rsp+28h] [rbp-70h] BYREF
  signed __int64 v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+40h] [rbp-58h]
  char *v21; // [rsp+48h] [rbp-50h]
  _BYTE v22[48]; // [rsp+50h] [rbp-48h] BYREF

  v19 = a2;
  v20 = a3;
  memset(v22, 0, sizeof(v22));
  if ( *(_WORD *)(a3 + 54) == 6 )
  {
    v6 = *(_DWORD *)(a2 + 84) + 1;
    *(_DWORD *)(a2 + 84) = v6;
    if ( (a1[3] & 0x10000000) != 0 || v6 > 2 )
      return 0LL;
  }
  else
  {
    *(_DWORD *)(a2 + 84) = 0;
  }
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 768LL)) )
    return 3221225738LL;
  KiStackAttachProcess(*(_KPROCESS **)(a2 + 24), 0, (__int64)v22);
  **(_DWORD **)(a2 + 136) = a1[64];
  **(_DWORD **)(a2 + 144) = a1[69];
  v8 = (unsigned int)(4 * a1[63]);
  if ( **(_DWORD **)(a2 + 64) < (unsigned int)v8 )
  {
    UserBufferSpace = EtwpFindUserBufferSpace(v8, a2, *(_DWORD *)(a3 + 48), &v17);
    if ( UserBufferSpace >= 0 )
    {
      memmove(v17, (const void *)a3, *(unsigned int *)(a3 + 48));
      if ( (*(_BYTE *)(a2 + 90) & 0x10) != 0 )
      {
        v9 = (char *)v17 + 32;
        v21 = (char *)v17 + 32;
        v10 = *(volatile signed __int32 **)(a2 + 72);
        LODWORD(v11) = *v10;
        do
        {
          *v9 = v11;
          v12 = v11;
          LODWORD(v11) = _InterlockedCompareExchange(v10, (signed __int32)v9, v11);
        }
        while ( (_DWORD)v11 != v12 );
        v11 = (unsigned int)v11;
      }
      else
      {
        v13 = (signed __int64 *)((char *)v17 + 32);
        v14 = *(signed __int64 **)(a2 + 72);
        _m_prefetchw(v14);
        v11 = *v14;
        do
        {
          *v13 = v11;
          v15 = v11;
          v11 = _InterlockedCompareExchange64(v14, (signed __int64)v13, v11);
        }
        while ( v11 != v15 );
      }
      v18 = v11;
      _InterlockedIncrement(*(volatile signed __int32 **)(a2 + 64));
      if ( !v18 )
        KeSetEvent(*(PRKEVENT *)(a2 + 56), 0, 0);
    }
  }
  else
  {
    UserBufferSpace = -1073741764;
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v22, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)(a2 + 24) + 768LL));
  return (unsigned int)UserBufferSpace;
}
