/*
 * XREFs of ndisCreateWoLPatternEntry @ 0x1C00352CC
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C001CF98 (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C0034BA4 (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisGetWoLPatternSize @ 0x1C001CF58 (ndisGetWoLPatternSize.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

_DWORD *__fastcall ndisCreateWoLPatternEntry(_DWORD *Src, int a2)
{
  int v4; // edx
  unsigned int WoLPatternSize; // ebp
  unsigned int v6; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  _DWORD *result; // rax
  int v10; // r9d

  WoLPatternSize = ndisGetWoLPatternSize(Src);
  v6 = WoLPatternSize + 92;
  if ( WoLPatternSize + 92 < 0x120 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 59;
      goto LABEL_8;
    }
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x7770444Eu);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v6);
      memmove(v8 + 12, Src, WoLPatternSize);
      v8[8] = v8[14];
      result = v8;
      v8[4] = v6;
      v8[11] = a2;
      return result;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 60;
LABEL_8:
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v4,
        11,
        v10,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids);
    }
  }
  return 0LL;
}
