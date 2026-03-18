/*
 * XREFs of ?xxxICO_00@@YAHPEAUtagKE@@@Z @ 0x1C0098E00
 * Callers:
 *     <none>
 * Callees:
 *     xxxKeyEventEx @ 0x1C01861D0 (xxxKeyEventEx.c)
 */

__int64 __fastcall xxxICO_00(struct tagKE *a1)
{
  __int16 v2; // cx
  __int16 v4; // ax

  v2 = *((_WORD *)a1 + 1);
  if ( (_BYTE)v2 == 0xE4 )
  {
    if ( v2 >= 0 )
    {
      xxxKeyEventEx(
        48LL,
        *(unsigned __int8 *)a1,
        *((unsigned int *)a1 + 1),
        0LL,
        *((_QWORD *)a1 + 1),
        (char *)a1 + 16,
        0,
        0,
        0LL,
        0LL);
      xxxKeyEventEx(
        32816LL,
        *(unsigned __int8 *)a1,
        *((unsigned int *)a1 + 1),
        0LL,
        *((_QWORD *)a1 + 1),
        (char *)a1 + 16,
        0,
        0,
        0LL,
        0LL);
      v4 = 304;
    }
    else
    {
      v4 = -32464;
    }
    *((_WORD *)a1 + 1) = v4;
  }
  return 1LL;
}
