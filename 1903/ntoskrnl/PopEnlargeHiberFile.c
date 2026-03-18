/*
 * XREFs of PopEnlargeHiberFile @ 0x1407271D4
 * Callers:
 *     PopTransitionToSleep @ 0x14059BD10 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x140726EE8 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  signed __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h]

  qword_140443E68 = qword_140443410;
  v2 = *(_QWORD *)(*(_QWORD *)qword_140466188 + 7888LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5);
  if ( v3 >= 0 )
  {
    qword_140443E78 = v5;
    qword_140443E80 = v6;
    qword_140443E70 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
