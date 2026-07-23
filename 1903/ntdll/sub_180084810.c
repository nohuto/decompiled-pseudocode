/*
 * XREFs of sub_180084810 @ 0x180084810
 * Callers:
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180066BBC @ 0x180066BBC (sub_180066BBC.c)
 *     sub_18010F080 @ 0x18010F080 (sub_18010F080.c)
 */

int __fastcall sub_180084810(__int64 a1)
{
  struct _PEB *v2; // rax
  int v3; // ett
  unsigned int v4; // edi
  __int64 v5; // rcx

  _m_prefetchw((const void *)(a1 + 232));
  LODWORD(v2) = *(_DWORD *)(a1 + 232);
  if ( (unsigned int)v2 >= 2 )
  {
    _m_prefetchw((const void *)(a1 + 232));
    LODWORD(v2) = *(_DWORD *)(a1 + 232);
    do
    {
      v3 = (int)v2;
      LODWORD(v2) = _InterlockedCompareExchange(
                      (volatile signed __int32 *)(a1 + 232),
                      (unsigned __int8)v2 & 1,
                      (signed __int32)v2);
    }
    while ( v3 != (_DWORD)v2 );
    v4 = (unsigned int)v2 >> 1;
    if ( (unsigned int)v2 >> 1 )
    {
      sub_180066BBC((_RTL_SRWLOCK *)(a1 + 56), -v4, 0);
      LODWORD(v2) = RtlGetCurrentServiceSessionId();
      if ( (_DWORD)v2 )
      {
        v2 = NtCurrentPeb();
        v5 = (__int64)&v2->SharedData->UserModeGlobalLogger[3];
      }
      else
      {
        v5 = 2147353478LL;
      }
      if ( *(_BYTE *)v5 )
        LODWORD(v2) = sub_18010F080(
                        *(_QWORD *)(a1 + 144),
                        (int)a1 + 200,
                        *(_QWORD *)(a1 + 80),
                        *(_QWORD *)(a1 + 88),
                        *(_QWORD *)(a1 + 104),
                        v4);
    }
  }
  return (int)v2;
}
