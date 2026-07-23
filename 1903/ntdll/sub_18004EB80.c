/*
 * XREFs of sub_18004EB80 @ 0x18004EB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

_BOOL8 __fastcall sub_18004EB80(PRTL_RUN_ONCE a1, _QWORD *a2, PVOID *a3)
{
  char *v4; // rbx
  void *v5; // rax
  int v6; // edi
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  memset(a2, 0, 0x28uLL);
  v8 = xmmword_1801638B0;
  v4 = (char *)sub_18004CF00(0x200uLL, 0x200uLL, 0, &v8);
  if ( v4 )
  {
    v8 = xmmword_1801638B0;
    v5 = sub_18004CF00(0x2000uLL, 0x2000uLL, 1, &v8);
    if ( v5 )
    {
      *a2 = 0LL;
      a2[3] = v5;
      *((_DWORD *)a2 + 2) = 0;
      a2[2] = v4;
      *((_DWORD *)a2 + 3) = 2048;
      if ( (v4 + 512 >= v4 ? 0x40 : 0) != 0 )
        memset64(v4, (unsigned __int64)(a2 + 1) | 1, v4 + 512 >= v4 ? 0x40 : 0);
      v4 = 0LL;
      v6 = 0;
    }
    else
    {
      v6 = -1073741801;
    }
    if ( v4 )
    {
      v8 = xmmword_1801638B0;
      sub_18004F690(v4, &v8);
    }
  }
  else
  {
    v6 = -1073741801;
  }
  return v6 >= 0;
}
