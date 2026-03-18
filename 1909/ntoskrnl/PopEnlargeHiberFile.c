/*
 * XREFs of PopEnlargeHiberFile @ 0x14072B494
 * Callers:
 *     PopTransitionToSleep @ 0x14059D270 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x14072B528 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  qword_140443DE8 = qword_140443390;
  v2 = *(_QWORD *)(*(_QWORD *)qword_140465E88 + 7888LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_140443DF8 = v5;
    qword_140443E00 = v6;
    qword_140443DF0 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
