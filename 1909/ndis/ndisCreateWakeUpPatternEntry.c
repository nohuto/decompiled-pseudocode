/*
 * XREFs of ndisCreateWakeUpPatternEntry @ 0x1C0072F3C
 * Callers:
 *     ndisSetAddWakeUpPattern @ 0x1C007685C (ndisSetAddWakeUpPattern.c)
 *     ndisSetOpenAddWakeUpPattern @ 0x1C0076F9C (ndisSetOpenAddWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

_DWORD *__fastcall ndisCreateWakeUpPatternEntry(_DWORD *Src, int a2)
{
  __int64 v2; // r8
  unsigned int v5; // esi
  _DWORD *PoolWithTag; // rax
  int v7; // edx
  _DWORD *v8; // rbx
  _DWORD *result; // rax

  v2 = (unsigned int)Src[2];
  v5 = v2 + 24;
  if ( v2 + 24 <= (unsigned __int64)(unsigned int)(Src[3] + Src[4]) )
    v5 = Src[3] + Src[4];
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5 + 280, 0x6B70444Eu);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5 + 280);
    memmove(v8 + 12, Src, v5);
    v8[4] = v5 + 280;
    v8[8] = *Src;
    result = v8;
    v8[11] = a2;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        11,
        28,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids);
    }
    return 0LL;
  }
  return result;
}
