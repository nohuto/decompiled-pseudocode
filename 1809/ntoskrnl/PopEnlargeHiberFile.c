/*
 * XREFs of PopEnlargeHiberFile @ 0x1406DFC54
 * Callers:
 *     PopTransitionToSleep @ 0x14056C0F0 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x1406DFCE8 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  qword_1404184A8 = qword_140417830;
  v2 = *(_QWORD *)(*(_QWORD *)qword_14043A748 + 7120LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_1404184B8 = v5;
    qword_1404184C0 = v6;
    qword_1404184B0 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
