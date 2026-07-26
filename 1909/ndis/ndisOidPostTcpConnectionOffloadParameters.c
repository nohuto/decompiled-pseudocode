/*
 * XREFs of ndisOidPostTcpConnectionOffloadParameters @ 0x1C006C870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 */

__int64 __fastcall ndisOidPostTcpConnectionOffloadParameters(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rbp
  __int64 v4; // rdi
  size_t v5; // rsi
  unsigned int v6; // eax
  size_t v7; // r8
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v2 = *a1;
  v4 = a1[4];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_qq(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               4,
               11,
               231,
               (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
               v2,
               v4);
  if ( *(_DWORD *)(v4 + 4) == 1 && !*((_DWORD *)a1 + 10) )
  {
    v5 = 60LL;
    if ( *a1 )
    {
      v6 = *(_DWORD *)(v4 + 52);
      if ( v6 < 0x38 )
      {
        *((_DWORD *)a1 + 10) = -1073741823;
      }
      else
      {
        v7 = 60LL;
        if ( v6 <= 0x3C )
          v7 = v6;
        memmove((void *)(*(_QWORD *)(v2 + 4096) + 1104LL), *(const void **)(v4 + 40), v7);
      }
    }
    result = a1[3];
    if ( result )
    {
      v2 = *(_QWORD *)(result + 16);
      result = *(unsigned int *)(v4 + 52);
      if ( (unsigned int)result < 0x38 )
      {
        *((_DWORD *)a1 + 10) = -1073741823;
      }
      else
      {
        if ( (unsigned int)result <= 0x3C )
          v5 = (unsigned int)result;
        result = (__int64)memmove((void *)(*(_QWORD *)(v2 + 4096) + 1044LL), *(const void **)(v4 + 40), v5);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qD(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4,
             11,
             232,
             (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
             v2,
             *((_DWORD *)a1 + 10));
  return result;
}
