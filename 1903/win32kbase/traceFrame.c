/*
 * XREFs of traceFrame @ 0x1C014EDD4
 * Callers:
 *     RIMFixUpCompleteFrame @ 0x1C014F828 (RIMFixUpCompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00519C0 (WPP_RECORDER_SF_DD.c)
 *     tracePointerFlags @ 0x1C014EEE8 (tracePointerFlags.c)
 */

_UNKNOWN **__fastcall traceFrame(__int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned int v2; // ebx
  int v4; // r9d
  _DWORD *v5; // rdi
  int v6; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v4 = 44;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_7;
    v4 = 45;
  }
  result = (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          4,
                          1,
                          v4,
                          (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
LABEL_7:
  if ( *(_DWORD *)(a1 + 24) )
  {
    v5 = (_DWORD *)(*(_QWORD *)(a1 + 112) + 52LL);
    do
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_D(
          (_DWORD)gRimLog,
          4,
          1,
          46,
          (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
          *((_WORD *)v5 - 22));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 4;
          WPP_RECORDER_SF_DD(
            (_DWORD)gRimLog,
            v6,
            1,
            43,
            (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids,
            *(v5 - 1),
            *v5);
        }
      }
      result = (_UNKNOWN **)tracePointerFlags((unsigned int)*(v5 - 6));
      ++v2;
      v5 += 48;
    }
    while ( v2 < *(_DWORD *)(a1 + 24) );
  }
  return result;
}
