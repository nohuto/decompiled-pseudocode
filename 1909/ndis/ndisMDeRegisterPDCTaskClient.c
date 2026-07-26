/*
 * XREFs of ndisMDeRegisterPDCTaskClient @ 0x1C011943C
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A390 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     PdcTaskClientUnregister @ 0x1C0129AC4 (PdcTaskClientUnregister.c)
 */

_UNKNOWN **__fastcall ndisMDeRegisterPDCTaskClient(__int64 a1)
{
  _UNKNOWN **result; // rax
  void *v3; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_q(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            4,
                            11,
                            163,
                            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
                            a1);
  v3 = *(void **)(a1 + 5480);
  if ( v3 )
  {
    result = (_UNKNOWN **)PdcTaskClientUnregister(v3);
    *(_QWORD *)(a1 + 5480) = 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          4,
                          11,
                          164,
                          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
                          a1);
  return result;
}
