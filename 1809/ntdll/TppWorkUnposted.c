/*
 * XREFs of TppWorkUnposted @ 0x180110580
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180073CC8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     TppETWCallbackDequeue @ 0x180110A68 (TppETWCallbackDequeue.c)
 */

__int64 __fastcall TppWorkUnposted(__int64 a1)
{
  int v1; // edi
  __int64 v2; // rbx
  __int64 v3; // rdx
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // edx
  unsigned __int32 v6; // ecx
  __int64 result; // rax

  v1 = a1;
  v2 = a1 - 200;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478LL;
  if ( *(_BYTE *)v3 )
    TppETWCallbackDequeue(*(_QWORD *)(v2 + 144), v1, *(_QWORD *)(v2 + 80), *(_QWORD *)(v2 + 88), *(_QWORD *)(v2 + 104));
  _m_prefetchw((const void *)(v2 + 232));
  v4 = *(_DWORD *)(v2 + 232);
  while ( 1 )
  {
    v5 = v4 >> 1;
    if ( v4 < 2 )
      break;
    v6 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 232), 0, v4);
    if ( v4 == v6 )
      goto LABEL_11;
  }
  v5 = 0;
LABEL_11:
  if ( v5 )
    TppBarrierAdjust((_RTL_SRWLOCK *)(v2 + 56), -v5, 0);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    return (**(__int64 (__fastcall ***)(__int64))(v2 + 8))(v2);
  return result;
}
