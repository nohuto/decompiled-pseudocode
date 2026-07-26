/*
 * XREFs of ndisClonePMPatternList @ 0x1C0072984
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C001D0F4 (ndisPMAddWOLPattern.c)
 *     ndisPMAddProtocolOffload @ 0x1C002311C (ndisPMAddProtocolOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisClonePMPatternList(unsigned int *Src, _QWORD *a2)
{
  unsigned int v2; // ebp
  unsigned int *v4; // rbx
  _QWORD *PoolWithTag; // rax
  int v6; // edx
  _QWORD *v7; // rsi
  _QWORD *v8; // rcx

  v2 = 0;
  v4 = Src;
  if ( Src )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4[4], 0x6B70444Eu);
      v7 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memmove(PoolWithTag, v4, v4[4]);
      *v7 = 0LL;
      v7[1] = 0LL;
      *v7 = *a2;
      *a2 = v7;
      v4 = *(unsigned int **)v4;
      if ( !v4 )
        return v2;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        11,
        96,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids);
    }
    v2 = -1073741670;
    while ( 1 )
    {
      v8 = (_QWORD *)*a2;
      if ( !*a2 )
        break;
      *a2 = *v8;
      ExFreePoolWithTag(v8, 0);
    }
  }
  return v2;
}
