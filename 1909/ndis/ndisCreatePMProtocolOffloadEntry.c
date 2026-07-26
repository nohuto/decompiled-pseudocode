/*
 * XREFs of ndisCreatePMProtocolOffloadEntry @ 0x1C00237B0
 * Callers:
 *     ndisSourcePreAddProtocolOffload @ 0x1C00232D4 (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C0023410 (ndisMiniportPreAddProtocolOffload.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 */

_DWORD *__fastcall ndisCreatePMProtocolOffloadEntry(void *Src, int a2)
{
  _DWORD *PoolWithTag; // rax
  int v5; // edx
  _DWORD *v6; // rbx
  _DWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x706F444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x120uLL);
    memmove(v6 + 12, Src, 0xF0uLL);
    v6[8] = v6[14];
    result = v6;
    v6[4] = 288;
    v6[11] = a2;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        11,
        95,
        (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids);
    }
    return 0LL;
  }
  return result;
}
