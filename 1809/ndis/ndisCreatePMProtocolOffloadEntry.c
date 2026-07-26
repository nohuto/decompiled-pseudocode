/*
 * XREFs of ndisCreatePMProtocolOffloadEntry @ 0x1C00BA1E4
 * Callers:
 *     ndisSourcePreAddProtocolOffload @ 0x1C00B9FCC (ndisSourcePreAddProtocolOffload.c)
 *     ndisMiniportPreAddProtocolOffload @ 0x1C00BA0A0 (ndisMiniportPreAddProtocolOffload.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

_DWORD *__fastcall ndisCreatePMProtocolOffloadEntry(void *Src, int a2)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v5; // rbx
  _DWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x120uLL, 0x706F444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x120uLL);
    memmove(v5 + 12, Src, 0xF0uLL);
    v5[8] = v5[14];
    result = v5;
    v5[4] = 288;
    v5[11] = a2;
  }
  else
  {
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
      WPP_SF_(0x5Fu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
    return 0LL;
  }
  return result;
}
