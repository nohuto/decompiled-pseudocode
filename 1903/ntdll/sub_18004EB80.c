/*
 * XREFs of sub_18004EB80 @ 0x18004EB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

_BOOL8 __fastcall sub_18004EB80(__int64 a1, _QWORD *a2)
{
  char *v3; // rbx
  void *v4; // rax
  int v5; // edi
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  memset(a2, 0, 0x28uLL);
  v7 = xmmword_1801638B0;
  v3 = (char *)sub_18004CF00(0x200uLL, 0x200uLL, 0, &v7);
  if ( v3 )
  {
    v7 = xmmword_1801638B0;
    v4 = sub_18004CF00(0x2000uLL, 0x2000uLL, 1, &v7);
    if ( v4 )
    {
      *a2 = 0LL;
      a2[3] = v4;
      *((_DWORD *)a2 + 2) = 0;
      a2[2] = v3;
      *((_DWORD *)a2 + 3) = 2048;
      if ( (v3 + 512 >= v3 ? 0x40 : 0) != 0 )
        memset64(v3, (unsigned __int64)(a2 + 1) | 1, v3 + 512 >= v3 ? 0x40 : 0);
      v3 = 0LL;
      v5 = 0;
    }
    else
    {
      v5 = -1073741801;
    }
    if ( v3 )
    {
      v7 = xmmword_1801638B0;
      sub_18004F690(v3, &v7);
    }
  }
  else
  {
    v5 = -1073741801;
  }
  return v5 >= 0;
}
