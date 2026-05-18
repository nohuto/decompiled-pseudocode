/*
 * XREFs of sub_180078158 @ 0x180078158
 * Callers:
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_180076FD4 @ 0x180076FD4 (sub_180076FD4.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180078158(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r8
  __int64 v4; // r9
  signed __int32 v5; // eax

  v3 = (_QWORD *)(*(_QWORD *)(a1 + 888) + 16 * a3);
  *a2 = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v4 = v3[1];
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      if ( !v5 )
        break;
      if ( v5 == _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5) )
      {
        *a2 = *v3;
        a2[1] = v3[1];
        return a2;
      }
    }
  }
  return a2;
}
