/*
 * XREFs of CcFindBcb @ 0x1400212D0
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 * Callees:
 *     CcGetBcbListHeadLargeOffset @ 0x1400AE0A0 (CcGetBcbListHeadLargeOffset.c)
 */

__int64 __fastcall CcFindBcb(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  __int64 v5; // r8
  __int64 v6; // rsi
  unsigned __int8 v7; // bp
  __int64 v10; // rdx
  _QWORD *BcbListHeadLargeOffset; // rdx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v15; // rcx

  v5 = *(_QWORD *)(a1 + 32);
  v6 = HIDWORD(*a2);
  v7 = 0;
  v10 = *a2 + 0x80000LL;
  if ( v5 <= 0x200000 || (*(_DWORD *)(a1 + 152) & 0x200) == 0 )
    goto LABEL_17;
  if ( v5 <= 0x2000000 )
  {
    if ( v10 < v5 )
    {
      BcbListHeadLargeOffset = (_QWORD *)(8 * ((unsigned __int64)(unsigned int)v5 >> 18)
                                        + *(_QWORD *)(a1 + 88)
                                        + 16 * (v10 >> 19));
      goto LABEL_5;
    }
LABEL_17:
    BcbListHeadLargeOffset = (_QWORD *)(a1 + 16);
    goto LABEL_5;
  }
  LOBYTE(v5) = 1;
  BcbListHeadLargeOffset = (_QWORD *)CcGetBcbListHeadLargeOffset(a1, v10, v5);
LABEL_5:
  v12 = *BcbListHeadLargeOffset - 16LL;
  if ( (_DWORD)v6 )
    goto LABEL_18;
  if ( *(_WORD *)v12 != 765 )
    goto LABEL_13;
  if ( *(_DWORD *)(v12 + 36) )
  {
LABEL_18:
    if ( *(_WORD *)v12 == 765 )
    {
      while ( *a2 < *(_QWORD *)(v12 + 32) )
      {
        v15 = *(_QWORD *)(v12 + 8);
        if ( *a2 >= v15 )
        {
LABEL_16:
          v7 = 1;
          break;
        }
        if ( *a3 >= v15 )
          *a3 = v15;
        v12 = *(_QWORD *)(v12 + 16) - 16LL;
        if ( *(_WORD *)v12 != 765 )
          break;
      }
    }
  }
  else
  {
    do
    {
      if ( *(_DWORD *)a2 >= *(_DWORD *)(v12 + 32) )
        break;
      v13 = *(_DWORD *)(v12 + 8);
      if ( *(_DWORD *)a2 >= v13 )
        goto LABEL_16;
      if ( *(_DWORD *)a3 >= v13 )
        *(_DWORD *)a3 = v13;
      v12 = *(_QWORD *)(v12 + 16) - 16LL;
    }
    while ( *(_WORD *)v12 == 765 );
  }
LABEL_13:
  *a4 = v12;
  return v7;
}
