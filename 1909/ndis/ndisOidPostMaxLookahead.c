/*
 * XREFs of ndisOidPostMaxLookahead @ 0x1C006C330
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

_DWORD *__fastcall ndisOidPostMaxLookahead(__int64 *a1)
{
  __int64 v1; // rbx
  _DWORD *result; // rax
  __int64 v4; // rdx

  v1 = a1[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_DWORD *)WPP_RECORDER_SF_qq(
                         *((_QWORD *)WPP_GLOBAL_Control + 8),
                         4,
                         11,
                         71,
                         (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                         *a1,
                         v1);
  v4 = *a1;
  if ( *a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 4u )
    {
      result = *(_DWORD **)(v1 + 40);
      *(_DWORD *)(v4 + 596) = *result;
      *(_DWORD *)(v1 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 4;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_DWORD *)WPP_RECORDER_SF_qq(
                       *((_QWORD *)WPP_GLOBAL_Control + 8),
                       4,
                       11,
                       72,
                       (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
                       *a1,
                       v1);
  return result;
}
