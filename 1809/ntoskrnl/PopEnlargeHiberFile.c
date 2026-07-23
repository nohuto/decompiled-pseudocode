/*
 * XREFs of PopEnlargeHiberFile @ 0x1406E0EF4
 * Callers:
 *     PopTransitionToSleep @ 0x14056D0F0 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x1406E0F88 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  qword_140419548 = qword_1404188D0;
  v2 = *(_QWORD *)(*(_QWORD *)qword_14043B808 + 7120LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_140419558 = v5;
    qword_140419560 = v6;
    qword_140419550 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
