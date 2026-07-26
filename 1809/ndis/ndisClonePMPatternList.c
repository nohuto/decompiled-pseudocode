/*
 * XREFs of ndisClonePMPatternList @ 0x1C0049EB4
 * Callers:
 *     ndisPMAddProtocolOffload @ 0x1C0014904 (ndisPMAddProtocolOffload.c)
 *     ndisPMAddWOLPattern @ 0x1C00256CC (ndisPMAddWOLPattern.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

__int64 __fastcall ndisClonePMPatternList(unsigned int *Src, _QWORD *a2)
{
  unsigned int v2; // ebp
  unsigned int *v4; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rsi
  _QWORD *v7; // rcx

  v2 = 0;
  v4 = Src;
  if ( Src )
  {
    while ( 1 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4[4], 0x6B70444Eu);
      v6 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      memmove(PoolWithTag, v4, v4[4]);
      *v6 = 0LL;
      v6[1] = 0LL;
      *v6 = *a2;
      *a2 = v6;
      v4 = *(unsigned int **)v4;
      if ( !v4 )
        return v2;
    }
    if ( (unsigned __int8)byte_1C00A025A >= 2u )
      WPP_SF_(0x60u, &WPP_293c7713174a39067998d2cc62157da6_Traceguids);
    v2 = -1073741670;
    while ( 1 )
    {
      v7 = (_QWORD *)*a2;
      if ( !*a2 )
        break;
      *a2 = *v7;
      ExFreePoolWithTag(v7, 0);
    }
  }
  return v2;
}
