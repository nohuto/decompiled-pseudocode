/*
 * XREFs of KiInsertSchedulingGroupQueue @ 0x14011710C
 * Callers:
 *     KiInsertNonMaxOverQuotaScb @ 0x1401170AC (KiInsertNonMaxOverQuotaScb.c)
 *     KiResortScbQueue @ 0x140117220 (KiResortScbQueue.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall KiInsertSchedulingGroupQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  _RTL_RB_TREE *v3; // rax
  __int64 v4; // r9
  _RTL_RB_TREE *v7; // rcx
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rdx
  BOOLEAN v10; // r8
  int v11; // r9d
  int v12; // r11d
  int v13; // eax
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // r8
  int v16; // r10d
  int v17; // eax
  _RTL_BALANCED_NODE *v18; // rax
  BOOLEAN result; // al

  *(_BYTE *)(a2 + 112) |= 1u;
  v3 = a1 + 1431;
  v4 = *(_QWORD *)(a2 + 408);
  v7 = (_RTL_RB_TREE *)(v4 + 392);
  if ( !v4 )
    v7 = v3;
  Min = v7->Min;
  Root = (unsigned __int64)v7->Root;
  if ( ((unsigned __int8)Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)v7;
  v10 = 0;
  v11 = (unsigned __int8)Min & 1;
  if ( Root )
  {
    v12 = *(_DWORD *)(a2 + 116);
    while ( 1 )
    {
      v13 = v12 - *(_DWORD *)(Root + 28);
      if ( v12 == *(_DWORD *)(Root + 28) )
      {
        v14 = *(_WORD *)(a2 + 114);
        if ( v14 )
        {
          v15 = *(_WORD *)(Root + 26);
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
            if ( *(_QWORD *)a2 > *(_QWORD *)(Root - 88) )
              goto LABEL_22;
            goto LABEL_15;
          }
          v13 = 1;
        }
      }
      if ( v13 >= 0 )
      {
LABEL_22:
        v18 = *(_RTL_BALANCED_NODE **)(Root + 8);
        if ( v11 )
        {
          if ( !v18 )
            goto LABEL_26;
          v18 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v18);
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
      v18 = *(_RTL_BALANCED_NODE **)Root;
      if ( v11 )
      {
        if ( !v18 )
          goto LABEL_27;
        v18 = (_RTL_BALANCED_NODE *)(Root ^ (unsigned __int64)v18);
      }
      if ( !v18 )
      {
LABEL_27:
        v10 = 0;
        break;
      }
LABEL_19:
      Root = (unsigned __int64)v18;
    }
  }
  result = RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)Root, v10, (PRTL_BALANCED_NODE)(a2 + 88));
  if ( a3 )
  {
    result = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a2 + 64) = MEMORY[0xFFFFF78000000008];
  }
  return result;
}
