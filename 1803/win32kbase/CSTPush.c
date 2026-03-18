/*
 * XREFs of CSTPush @ 0x1C00A7B20
 * Callers:
 *     InitCreateSystemThreadsMsg @ 0x1C00B1650 (InitCreateSystemThreadsMsg.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSTPush(int a1, __int64 a2)
{
  _QWORD *v3; // r8
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rdx

  v3 = &gCSTParam;
  v4 = 0LL;
  while ( *v3 )
  {
    v4 = (unsigned int)(v4 + 1);
    v3 += 3;
    if ( (unsigned int)v4 >= 0x1E )
      return 0LL;
  }
  v6 = 3 * v4;
  result = 1LL;
  *((_QWORD *)&gCSTParam + v6) = a2;
  *((_DWORD *)&gCSTParam + 2 * v6 + 4) = a1;
  return result;
}
