/*
 * XREFs of RtlRunOnceComplete @ 0x18000B240
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     sub_18004A7A0 @ 0x18004A7A0 (sub_18004A7A0.c)
 * Callees:
 *     ZwReleaseKeyedEvent @ 0x18009F3D0 (ZwReleaseKeyedEvent.c)
 */

NTSTATUS __cdecl RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  char v4; // al
  PVOID Ptr; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  _QWORD *v11; // rbx
  char v12; // [rsp+38h] [rbp+10h]

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v4 = (v12 ^ ~(unsigned __int8)(Flags >> 1)) & 3 ^ v12;
  if ( Context && (((unsigned __int8)Context & 3) != 0 || (v4 & 2) == 0) )
    return -1073741583;
  _m_prefetchw(RunOnce);
  Ptr = RunOnce->Ptr;
  v6 = (unsigned __int64)Context & 0xFFFFFFFFFFFFFFFCuLL | v4 & 2;
  v7 = (__int64)RunOnce->Ptr & 3;
  if ( v7 == 1 )
  {
    if ( (v4 & 1) != 0 )
    {
      v8 = _InterlockedExchange64((volatile __int64 *)RunOnce, v6);
      if ( (v8 & 3) == 1 )
      {
        v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v9 )
        {
          do
          {
            v11 = (_QWORD *)*v9;
            ZwReleaseKeyedEvent(0LL, v9, 0, 0LL);
            v9 = v11;
          }
          while ( v11 );
        }
        return 0;
      }
      return -1073741734;
    }
    return -1073741584;
  }
  if ( v7 != 3 )
    return -1073741823;
  if ( (v4 & 1) != 0 )
    return -1073741584;
  if ( Ptr == (PVOID)_InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v6, (signed __int64)Ptr) )
    return 0;
  return -1073741771;
}
