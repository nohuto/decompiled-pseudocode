/*
 * XREFs of RtlpHpLfhSubsegmentSizeBlockInternal @ 0x180001C3C
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x1800019C8 (RtlpHpLfhSubsegmentWalk.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSizeBlockInternal(__int64 a1, __int64 a2, int a3, BOOL *a4)
{
  unsigned int v5; // r10d
  unsigned __int64 v6; // rcx
  __int16 v7; // dx
  int v8; // r8d
  __int16 v9; // cx
  BOOL v10; // edx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = (unsigned __int16)qword_180163548 ^ (unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
  if ( ((*(_QWORD *)(a1 + 8 * ((unsigned __int64)(unsigned int)(2 * a3) >> 6) + 48) >> ((2 * a3) & 0x3F)) & 2) != 0 )
  {
    v6 = (unsigned __int16)qword_180163548 ^ (unsigned __int64)(unsigned __int16)(*(_WORD *)(a1 + 40) ^ ((unsigned int)a1 >> 12));
    v7 = *(_WORD *)(v6 + a2 - 2);
    v8 = *(_WORD *)(v6 + a2 - 2) & 0x4000;
    if ( (*(_WORD *)(v6 + a2 - 2) & 0x4000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v7 = *(_WORD *)(v6 + a2 - 2);
    }
    v9 = v7;
    v10 = v8 != 0;
    if ( v9 < 0 )
      --v5;
    else
      v5 -= v9 & 0x3FFF;
  }
  else
  {
    v10 = 0;
  }
  if ( a4 )
    *a4 = v10;
  return v5;
}
