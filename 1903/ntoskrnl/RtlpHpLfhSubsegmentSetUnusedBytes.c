/*
 * XREFs of RtlpHpLfhSubsegmentSetUnusedBytes @ 0x14016F264
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x140038A80 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentSetUnusedBytes(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int16 v4; // r8

  result = (unsigned __int16)qword_1404367A8;
  if ( a3 == 1 )
  {
    v4 = 0x8000;
  }
  else
  {
    result = 0x3FFFLL;
    v4 = a3 & 0x3FFF;
  }
  *(_WORD *)(((unsigned __int16)qword_1404367A8 ^ *(unsigned __int16 *)(a1 + 40) ^ (unsigned __int64)(unsigned __int16)((unsigned int)a1 >> 12))
           + a2
           - 2) = v4;
  return result;
}
