/*
 * XREFs of HMInitHandleTable @ 0x1C021BF1C
 * Callers:
 *     Win32UserInitialize @ 0x1C021B110 (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006C820 (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 HMInitHandleTable()
{
  _WORD *v0; // rbx
  _QWORD *v1; // rdi
  __int64 result; // rax

  v0 = gpvSharedBase;
  gHandlePages = 0LL;
  qword_1C01CCB30 = 0LL;
  qword_1C01CCB28 = 0LL;
  v1 = gpKernelHandleTable;
  qword_1C01CBA58 = gpvSharedBase;
  dword_1C01CBA60 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 216) = 0;
  if ( (unsigned int)HMGrowHandleTable() )
  {
    *v1 = 0LL;
    result = 1LL;
    v0[13] = 1;
    *((_BYTE *)v0 + 24) = 0;
    qword_1C01CCB28 = 2LL;
  }
  else
  {
    qword_1C01CBA58 = 0LL;
    return 0LL;
  }
  return result;
}
