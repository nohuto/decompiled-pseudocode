/*
 * XREFs of RtlRunOnceComplete @ 0x180077F50
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000E9A4 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpSubSegmentInitialize @ 0x18000ED20 (RtlpSubSegmentInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x1800213E0 (RtlRunOnceExecuteOnce.c)
 * Callees:
 *     NtReleaseKeyedEvent @ 0x1800A2FB0 (NtReleaseKeyedEvent.c)
 */

__int64 __fastcall RtlRunOnceComplete(signed __int64 *a1, unsigned int a2, __int64 a3)
{
  char v4; // al
  signed __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  _QWORD *v9; // rdx
  _QWORD *v11; // rbx
  char v12; // [rsp+38h] [rbp+10h]

  if ( ((a2 - 1) & a2) != 0 || (a2 & 0xFFFFFFF9) != 0 )
    return 3221225712LL;
  v4 = (v12 ^ ~(unsigned __int8)(a2 >> 1)) & 3 ^ v12;
  if ( a3 && ((a3 & 3) != 0 || (v4 & 2) == 0) )
    return 3221225713LL;
  _m_prefetchw(a1);
  v5 = *a1;
  v6 = a3 & 0xFFFFFFFFFFFFFFFCuLL | v4 & 2;
  v7 = *a1 & 3;
  if ( v7 == 1 )
  {
    if ( (v4 & 1) != 0 )
    {
      v8 = _InterlockedExchange64(a1, v6);
      if ( (v8 & 3) == 1 )
      {
        v9 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v9 )
        {
          do
          {
            v11 = (_QWORD *)*v9;
            NtReleaseKeyedEvent(0LL, v9, 0LL, 0LL);
            v9 = v11;
          }
          while ( v11 );
        }
        return 0LL;
      }
      return 3221225562LL;
    }
    return 3221225712LL;
  }
  if ( v7 != 3 )
    return 3221225473LL;
  if ( (v4 & 1) != 0 )
    return 3221225712LL;
  if ( v5 == _InterlockedCompareExchange64(a1, v6, v5) )
    return 0LL;
  return 3221225525LL;
}
