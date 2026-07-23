/*
 * XREFs of KeCaptureWaitChainHeadEx @ 0x1401666FC
 * Callers:
 *     ExpPrepareToWakeResourceShared @ 0x140165334 (ExpPrepareToWakeResourceShared.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x140166664 (ExpPrepareToWakeResourceExclusive.c)
 * Callees:
 *     RtlInsertHeadCircularList @ 0x1401353A0 (RtlInsertHeadCircularList.c)
 */

__int64 __fastcall KeCaptureWaitChainHeadEx(_QWORD **a1, __int64 *a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r10
  _QWORD *v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // rcx
  _QWORD *v9; // rax

  result = 0LL;
  v4 = a3;
  *a2 = 0LL;
  v6 = *a1;
  if ( *a1 )
  {
    if ( (_QWORD *)*v6 == v6 )
    {
      *a1 = 0LL;
    }
    else
    {
      *a1 = (_QWORD *)*v6;
      v8 = (_QWORD *)*v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v9 = (_QWORD *)v6[1], (_QWORD *)*v9 != v6) )
        __fastfail(3u);
      *v9 = v8;
      v8[1] = v9;
    }
    result = RtlInsertHeadCircularList(a2, v6);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v4 )
    *v4 = v7;
  return result;
}
