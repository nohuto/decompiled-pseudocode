/*
 * XREFs of PopPepCancelActivities @ 0x1400B1DF0
 * Callers:
 *     PopPepTriggerActivity @ 0x1400B25E8 (PopPepTriggerActivity.c)
 * Callees:
 *     PopPepCancelActivityRange @ 0x1400B1D88 (PopPepCancelActivityRange.c)
 */

void __fastcall PopPepCancelActivities(__int64 a1, __int64 a2, int a3)
{
  int v4; // eax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdi

  v4 = *((_DWORD *)&unk_14036FCF4 + 34 * a3);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = (volatile signed __int32 *)(a1 + 120);
      v6 = a1 + 72;
      PopPepCancelActivityRange(a1 + 72, a3, 0, 0, (volatile signed __int32 *)(a1 + 120));
      PopPepCancelActivityRange(v6, a3, 4, 5, v5);
    }
    else if ( v4 == 2 )
    {
      PopPepCancelActivityRange(a2 + 56, a3, 0, 5, (volatile signed __int32 *)(a2 + 104));
    }
  }
}
