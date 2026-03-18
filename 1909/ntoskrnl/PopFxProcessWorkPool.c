/*
 * XREFs of PopFxProcessWorkPool @ 0x1405B1E30
 * Callers:
 *     PopFxPluginWork @ 0x140677900 (PopFxPluginWork.c)
 *     PopFxEmergencyWorker @ 0x14078C950 (PopFxEmergencyWorker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     ExInterlockedRemoveHeadList @ 0x14010A430 (ExInterlockedRemoveHeadList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PopFxDispatchPluginWorkOnce @ 0x1405B1C74 (PopFxDispatchPluginWorkOnce.c)
 */

NTSTATUS __fastcall PopFxProcessWorkPool(unsigned __int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  struct _KTHREAD *CurrentThread; // rcx
  __m128i v5; // xmm2
  int v6; // ebx
  LARGE_INTEGER *p_Timeout; // rax
  NTSTATUS result; // eax
  int v9; // ecx
  PLIST_ENTRY v10; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+8h] BYREF

  v3 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = _mm_unpacklo_epi64((__m128i)a1, (__m128i)a1);
  v6 = a2 != -1;
  if ( a2 == -1 )
    *(_QWORD *)(a1 + 264) = CurrentThread;
  else
    *(_QWORD *)(a1 + 8LL * a2 + 272) = CurrentThread;
  *(__m128i *)Object = _mm_add_epi64(
                         _mm_add_epi64(
                           _mm_slli_epi64(_mm_unpacklo_epi32(_mm_load_si128((const __m128i *)&_xmm), (__m128i)0LL), 5u),
                           v5),
                         (__m128i)_xmm);
  while ( 1 )
  {
    Timeout.QuadPart = 0LL;
    if ( KeWaitForSingleObject((PVOID)(a1 + 32 * (v6 + 1LL)), Executive, 0, 0, &Timeout) != 258 )
    {
      v9 = v6;
      goto LABEL_12;
    }
    if ( (_DWORD)v3 == -1 )
    {
      p_Timeout = 0LL;
    }
    else
    {
      Timeout.QuadPart = -50000LL;
      p_Timeout = &Timeout;
    }
    result = KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, p_Timeout, 0LL);
    v9 = result;
    if ( result == 258 )
      break;
LABEL_12:
    if ( v9 )
    {
      if ( v9 == 1 )
        PopFxDispatchPluginWorkOnce(*(_QWORD *)a1);
    }
    else
    {
      v10 = ExInterlockedRemoveHeadList((PLIST_ENTRY)(a1 + 16), (PKSPIN_LOCK)(a1 + 8));
      v10->Flink = 0LL;
      v10->Blink = 0LL;
      ((void (__fastcall *)(struct _LIST_ENTRY *))v10[1].Flink)(v10[1].Blink);
    }
    if ( (_DWORD)v3 == -1 )
    {
      _m_prefetchw((const void *)(a1 + 96));
      v11 = *(_DWORD *)(a1 + 96);
      do
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), v11, v11);
      }
      while ( v12 != v11 );
      if ( v11 )
        v6 = 0;
      else
        v6 = (v6 + 1) % 2;
    }
  }
  *(_QWORD *)(a1 + 8 * v3 + 272) = 0LL;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 96), ~(1 << v3));
  return result;
}
