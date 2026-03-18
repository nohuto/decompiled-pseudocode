/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x14011707C
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x14011701C (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x140117190 (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD690 (RtlRbInsertNodeEx.c)
 */

char __fastcall KiInsertSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 *v3; // rax
  __int64 v4; // r9
  unsigned __int64 *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  bool v10; // r8
  int v11; // r9d
  int v12; // r11d
  int v13; // eax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r8
  int v16; // r10d
  int v17; // eax
  unsigned __int64 v18; // rax
  char result; // al

  *(_BYTE *)(a2 + 112) |= 1u;
  v3 = (unsigned __int64 *)(a1 + 22896);
  v4 = *(_QWORD *)(a2 + 408);
  v7 = (unsigned __int64 *)(v4 + 392);
  if ( !v4 )
    v7 = v3;
  v8 = v7[1];
  v9 = *v7;
  if ( (v8 & 1) != 0 && v9 )
    v9 ^= (unsigned __int64)v7;
  v10 = 0;
  v11 = v8 & 1;
  if ( v9 )
  {
    v12 = *(_DWORD *)(a2 + 116);
    while ( 1 )
    {
      v13 = v12 - *(_DWORD *)(v9 + 28);
      if ( v12 == *(_DWORD *)(v9 + 28) )
      {
        v14 = *(_WORD *)(a2 + 114);
        if ( v14 )
        {
          v15 = *(_WORD *)(v9 + 26);
          _BitScanReverse((unsigned int *)&v16, v14);
          v17 = 0;
          if ( v15 )
            _BitScanReverse((unsigned int *)&v17, v15);
          v13 = v17 - v16;
        }
        else
        {
          if ( !v12 )
          {
            if ( *(_QWORD *)a2 > *(_QWORD *)(v9 - 88) )
              goto LABEL_22;
            goto LABEL_15;
          }
          v13 = 1;
        }
      }
      if ( v13 >= 0 )
      {
LABEL_22:
        v18 = *(_QWORD *)(v9 + 8);
        if ( v11 )
        {
          if ( !v18 )
            goto LABEL_26;
          v18 ^= v9;
        }
        if ( !v18 )
        {
LABEL_26:
          v10 = 1;
          break;
        }
        goto LABEL_19;
      }
LABEL_15:
      v18 = *(_QWORD *)v9;
      if ( v11 )
      {
        if ( !v18 )
          goto LABEL_27;
        v18 ^= v9;
      }
      if ( !v18 )
      {
LABEL_27:
        v10 = 0;
        break;
      }
LABEL_19:
      v9 = v18;
    }
  }
  result = RtlRbInsertNodeEx((unsigned __int64)v7, v9, v10, (_QWORD *)(a2 + 88));
  if ( a3 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
