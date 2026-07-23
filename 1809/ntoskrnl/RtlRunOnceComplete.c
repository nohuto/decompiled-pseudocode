/*
 * XREFs of RtlRunOnceComplete @ 0x1406C8D20
 * Callers:
 *     RtlRunOnceExecuteOnce @ 0x14060E910 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

NTSTATUS __stdcall RtlRunOnceComplete(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID Context)
{
  char v4; // al
  unsigned __int64 Value; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  char v12; // [rsp+38h] [rbp+10h]

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFF9) != 0 )
    return -1073741584;
  v4 = (v12 ^ ~(unsigned __int8)(Flags >> 1)) & 3 ^ v12;
  if ( Context && (((unsigned __int8)Context & 3) != 0 || (v4 & 2) == 0) )
    return -1073741583;
  _m_prefetchw(RunOnce);
  Value = RunOnce->Value;
  v7 = (unsigned __int64)Context & 0xFFFFFFFFFFFFFFFCuLL | v4 & 2;
  v8 = RunOnce->Value & 3;
  if ( v8 == 1 )
  {
    if ( (v4 & 1) != 0 )
    {
      v9 = _InterlockedExchange64((volatile __int64 *)RunOnce, v7);
      if ( (v9 & 3) == 1 )
      {
        v10 = v9 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v10 )
        {
          do
          {
            v11 = *(_QWORD *)v10;
            KeSetEvent((PRKEVENT)(v10 + 8), 1, 0);
            v10 = v11;
          }
          while ( v11 );
        }
        return 0;
      }
      return -1073741734;
    }
    return -1073741584;
  }
  if ( v8 != 3 )
    return -1073741823;
  if ( (v4 & 1) != 0 )
    return -1073741584;
  if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v7, Value) )
    return 0;
  return -1073741771;
}
