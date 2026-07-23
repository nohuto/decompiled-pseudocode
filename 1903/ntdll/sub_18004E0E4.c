/*
 * XREFs of sub_18004E0E4 @ 0x18004E0E4
 * Callers:
 *     sub_18004DE5C @ 0x18004DE5C (sub_18004DE5C.c)
 *     sub_18004F6D0 @ 0x18004F6D0 (sub_18004F6D0.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x1800380E0 (RtlRbInsertNodeEx.c)
 *     sub_18004E180 @ 0x18004E180 (sub_18004E180.c)
 */

__int64 __fastcall sub_18004E0E4(__int64 a1)
{
  __int64 v2; // r10
  unsigned __int16 v3; // r11
  _RTL_RB_TREE *v4; // rcx
  __int64 v5; // rdx
  BOOLEAN v6; // r8
  __int64 v7; // rax

  v2 = sub_18004E180();
  v3 = *(_WORD *)(v2 + 24);
  if ( v3 != *(_WORD *)(a1 + 40) )
  {
    v4 = (_RTL_RB_TREE *)(a1 + 8);
    v5 = *(_QWORD *)(a1 + 8);
    if ( (*(_BYTE *)(a1 + 16) & 1) != 0 && v5 )
      v5 ^= (unsigned __int64)v4;
    v6 = 0;
    if ( v5 )
    {
      while ( 1 )
      {
        if ( v3 < *(_WORD *)(v5 + 24) )
        {
          v7 = *(_QWORD *)v5;
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_16;
            v7 ^= v5;
          }
          if ( !v7 )
          {
LABEL_16:
            v6 = 0;
            break;
          }
        }
        else
        {
          v7 = *(_QWORD *)(v5 + 8);
          if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
          {
            if ( !v7 )
              goto LABEL_17;
            v7 ^= v5;
          }
          if ( !v7 )
          {
LABEL_17:
            v6 = 1;
            break;
          }
        }
        v5 = v7;
      }
    }
    RtlRbInsertNodeEx(v4, (PRTL_BALANCED_NODE)v5, v6, (PRTL_BALANCED_NODE)v2);
    return 0LL;
  }
  return v2;
}
