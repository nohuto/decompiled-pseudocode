/*
 * XREFs of sub_1800836C4 @ 0x1800836C4
 * Callers:
 *     _initp_eh_hooks @ 0x180002350 (_initp_eh_hooks.c)
 *     _initp_eh_hooks_0 @ 0x1800023B0 (_initp_eh_hooks_0.c)
 *     sub_180075610 @ 0x180075610 (sub_180075610.c)
 *     sub_1800BE6F0 @ 0x1800BE6F0 (sub_1800BE6F0.c)
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 *     sub_1800DC36C @ 0x1800DC36C (sub_1800DC36C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800836C4(_QWORD *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d

  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  v1 = 0;
  if ( a1 )
  {
    v2 = 5381;
    while ( *(_BYTE *)a1 )
    {
      v2 = *(char *)a1 + 33 * v2;
      a1 = (_QWORD *)((char *)a1 + 1);
    }
    return v2;
  }
  return v1;
}
