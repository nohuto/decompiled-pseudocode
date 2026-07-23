/*
 * XREFs of _umatherr @ 0x180098BB4
 * Callers:
 *     _except1 @ 0x180098500 (_except1.c)
 *     _handle_qnan1 @ 0x180098868 (_handle_qnan1.c)
 * Callees:
 *     WinSqmCheckEscalationSetString @ 0x180002A50 (WinSqmCheckEscalationSetString.c)
 *     _set_errno_from_matherr @ 0x180098B80 (_set_errno_from_matherr.c)
 *     _ctrlfp @ 0x180098E70 (_ctrlfp.c)
 */

double __fastcall umatherr(int a1, int a2, __int64 a3, __int64 a4, double a5, __int64 a6)
{
  _DWORD *v7; // rax
  int v8; // r8d
  __int64 v9; // rax

  v7 = &unk_18015F170;
  v8 = 0;
  while ( *v7 != a2 )
  {
    ++v8;
    v7 += 4;
    if ( (__int64)v7 >= (__int64)&_lconv_c )
    {
      v9 = 0LL;
      goto LABEL_6;
    }
  }
  v9 = *((_QWORD *)&unk_18015F170 + 2 * v8 + 1);
LABEL_6:
  if ( v9 )
  {
    ctrlfp(a6, 65472LL);
    if ( !(unsigned int)WinSqmCheckEscalationSetString() )
      set_errno_from_matherr(a1);
    return a5;
  }
  else
  {
    ctrlfp(a6, 65472LL);
    set_errno_from_matherr(a1);
    return a5;
  }
}
