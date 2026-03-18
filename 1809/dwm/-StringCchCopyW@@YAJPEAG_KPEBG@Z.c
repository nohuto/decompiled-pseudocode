/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x140005268
 * Callers:
 *     ?ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z @ 0x1400055C0 (-ConnectWithNameNative@CPortClient@@AEAAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // rdx
  signed __int64 v4; // r8
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 result; // rax

  v3 = 94LL;
  v4 = a3 - a1;
  do
  {
    if ( v3 == -2147483552 )
      break;
    v5 = *(_WORD *)&a1[v4];
    if ( !v5 )
      break;
    *(_WORD *)a1 = v5;
    a1 += 2;
    --v3;
  }
  while ( v3 );
  v6 = (unsigned __int16 *)(a1 - 2);
  if ( v3 )
    v6 = (unsigned __int16 *)a1;
  *v6 = 0;
  result = 2147942522LL;
  if ( v3 )
    return 0LL;
  return result;
}
