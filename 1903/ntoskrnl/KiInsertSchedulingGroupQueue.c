/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x1400E8F4C
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x1400E8EEC (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x1400E9074 (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall KiInsertSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  BOOLEAN v9; // r8
  int v10; // r11d
  int v11; // eax
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  BOOLEAN result; // al
  unsigned __int16 v15; // r8
  int v16; // r10d
  int v17; // eax

  v3 = *(_QWORD *)(a2 + 408);
  v4 = a1 + 22896;
  *(_BYTE *)(a2 + 112) |= 1u;
  v7 = v3 + 392;
  if ( !v3 )
    v7 = v4;
  v8 = *(_QWORD *)v7;
  if ( (*(_BYTE *)(v7 + 8) & 1) != 0 && v8 )
    v8 ^= v7;
  v9 = 0;
  if ( v8 )
  {
    v10 = *(_DWORD *)(a2 + 116);
    while ( 1 )
    {
      v11 = v10 - *(_DWORD *)(v8 + 28);
      if ( v10 == *(_DWORD *)(v8 + 28) )
      {
        v12 = *(_WORD *)(a2 + 114);
        if ( v12 )
        {
          v15 = *(_WORD *)(v8 + 26);
          _BitScanReverse((unsigned int *)&v16, v12);
          v17 = 0;
          if ( v15 )
            _BitScanReverse((unsigned int *)&v17, v15);
          v11 = v17 - v16;
        }
        else
        {
          if ( !v10 )
          {
            if ( *(_QWORD *)a2 <= *(_QWORD *)(v8 - 88) )
              goto LABEL_10;
            goto LABEL_20;
          }
          v11 = 1;
        }
      }
      if ( v11 < 0 )
      {
LABEL_10:
        v13 = *(_QWORD *)v8;
        if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_14;
          v13 ^= v8;
        }
        if ( !v13 )
        {
LABEL_14:
          v9 = 0;
          break;
        }
        goto LABEL_24;
      }
LABEL_20:
      v13 = *(_QWORD *)(v8 + 8);
      if ( (*(_BYTE *)(v7 + 8) & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_30;
        v13 ^= v8;
      }
      if ( !v13 )
      {
LABEL_30:
        v9 = 1;
        break;
      }
LABEL_24:
      v8 = v13;
    }
  }
  result = RtlRbInsertNodeEx((PRTL_RB_TREE)v7, (PRTL_BALANCED_NODE)v8, v9, (PRTL_BALANCED_NODE)(a2 + 88));
  if ( a3 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
