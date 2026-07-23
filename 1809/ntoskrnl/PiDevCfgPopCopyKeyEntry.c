/*
 * XREFs of PiDevCfgPopCopyKeyEntry @ 0x14015D130
 * Callers:
 *     PiDevCfgCopyDeviceKeys @ 0x1406F3E88 (PiDevCfgCopyDeviceKeys.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

bool __fastcall PiDevCfgPopCopyKeyEntry(_QWORD *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  _QWORD *v4; // rbx
  void **v6; // rax

  v4 = 0LL;
  if ( (_QWORD *)*a1 != a1 )
  {
    v4 = (_QWORD *)a1[1];
    if ( (_QWORD *)*v4 != a1 || (v6 = (void **)v4[1], *v6 != v4) )
      __fastfail(3u);
    a1[1] = v6;
    *v6 = a1;
    *a2 = v4[2];
    *a3 = v4[3];
    *a4 = *((_DWORD *)v4 + 8);
    ExFreePoolWithTag(v4, 0);
  }
  return v4 != 0LL;
}
