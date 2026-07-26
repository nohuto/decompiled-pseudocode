/*
 * XREFs of ndisCreateWoLPatternEntry @ 0x1C00BB87C
 * Callers:
 *     ndisSourcePreAddWoLPattern @ 0x1C00BB61C (ndisSourcePreAddWoLPattern.c)
 *     ndisMiniportPreAddWoLPattern @ 0x1C00BB708 (ndisMiniportPreAddWoLPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisGetWoLPatternSize @ 0x1C00BBB98 (ndisGetWoLPatternSize.c)
 */

_DWORD *__fastcall ndisCreateWoLPatternEntry(void *Src, int a2)
{
  unsigned int WoLPatternSize; // r14d
  unsigned int v5; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  _DWORD *result; // rax
  unsigned __int16 v9; // cx

  WoLPatternSize = ndisGetWoLPatternSize();
  if ( WoLPatternSize + 92 < 0x120 )
  {
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
    {
      v9 = 59;
LABEL_8:
      WPP_SF_(v9, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
    }
  }
  else
  {
    v5 = WoLPatternSize + 92;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, WoLPatternSize + 92, 0x7770444Eu);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v5);
      memmove(v7 + 12, Src, WoLPatternSize);
      v7[8] = v7[14];
      result = v7;
      v7[4] = v5;
      v7[11] = a2;
      return result;
    }
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
    {
      v9 = 60;
      goto LABEL_8;
    }
  }
  return 0LL;
}
