/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlockInternal @ 0x1800025C4
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x180002358 (RtlpHpLfhSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(__int64 a1, __int64 a2, int a3, int *a4)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // rdx
  unsigned int v7; // eax
  __int16 v8; // r8
  int v9; // eax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = (unsigned __int16)qword_1801634A8 ^ (unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
  if ( ((*(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)(2 * a3) >> 6) + 48) >> ((2 * a3) & 0x3F)) & 2) != 0 )
  {
    v6 = (unsigned __int16)qword_1801634A8 ^ (unsigned __int64)(unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
    v7 = *(unsigned __int16 *)(v6 + a2 - 2);
    v8 = *(_WORD *)(v6 + a2 - 2);
    if ( (v7 & 0x4000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v8 = *(_WORD *)(v6 + a2 - 2);
    }
    v9 = (v7 >> 14) & 1;
    if ( v8 < 0 )
      --v5;
    else
      v5 -= v8 & 0x3FFF;
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
    *a4 = v9;
  return v5;
}
