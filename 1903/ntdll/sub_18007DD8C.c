/*
 * XREFs of sub_18007DD8C @ 0x18007DD8C
 * Callers:
 *     sub_18007DC6C @ 0x18007DC6C (sub_18007DC6C.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_18007DD8C(int a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rdx

  v1 = off_18015F600;
  v2 = 0LL;
  while ( v1 != (_DWORD *)&off_18015F600 )
  {
    if ( v1[4] == a1 )
      return (char *)(v1 + 6);
    v1 = *(_DWORD **)v1;
  }
  return (char *)v2;
}
