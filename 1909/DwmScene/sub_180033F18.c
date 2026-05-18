/*
 * XREFs of sub_180033F18 @ 0x180033F18
 * Callers:
 *     sub_1800332B0 @ 0x1800332B0 (sub_1800332B0.c)
 *     sub_1800355F0 @ 0x1800355F0 (sub_1800355F0.c)
 *     sub_1800357C0 @ 0x1800357C0 (sub_1800357C0.c)
 *     sub_180035E70 @ 0x180035E70 (sub_180035E70.c)
 *     sub_1800360B0 @ 0x1800360B0 (sub_1800360B0.c)
 *     sub_180037620 @ 0x180037620 (sub_180037620.c)
 *     sub_18009EC74 @ 0x18009EC74 (sub_18009EC74.c)
 *     sub_18009F9A4 @ 0x18009F9A4 (sub_18009F9A4.c)
 *     sub_1800AE9F0 @ 0x1800AE9F0 (sub_1800AE9F0.c)
 *     sub_1800CE4B8 @ 0x1800CE4B8 (sub_1800CE4B8.c)
 *     sub_1800D1FE4 @ 0x1800D1FE4 (sub_1800D1FE4.c)
 *     sub_1800D289C @ 0x1800D289C (sub_1800D289C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180033F18(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rcx

  v3 = (__int64 *)*a1;
  v4 = (__int64 *)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v5 + 25) )
    goto LABEL_8;
  do
  {
    if ( *((_DWORD *)v5 + 8) >= a3 )
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
    else
    {
      v5 = (__int64 *)v5[2];
    }
  }
  while ( !*((_BYTE *)v5 + 25) );
  if ( v4 == v3 || a3 < *((_DWORD *)v4 + 8) )
LABEL_8:
    v4 = v3;
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 != v3 )
  {
    v6 = v4[6];
    if ( v6 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
    *a2 = v4[5];
    a2[1] = v4[6];
  }
  return a2;
}
