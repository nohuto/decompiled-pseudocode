/*
 * XREFs of HMInitHandleTable @ 0x1C01F218C
 * Callers:
 *     Win32UserInitialize @ 0x1C01F2A58 (Win32UserInitialize.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C006782C (-HMGrowHandleTable@@YAHXZ.c)
 */

__int64 HMInitHandleTable()
{
  _WORD *v0; // rbx
  _QWORD *v1; // rdi
  __int64 result; // rax

  v0 = gpvSharedBase;
  gHandlePages = 0LL;
  qword_1C01A0AF8 = 0LL;
  qword_1C01A0AF0 = 0LL;
  v1 = gpKernelHandleTable;
  qword_1C01A0E28 = gpvSharedBase;
  dword_1C01A0E30 = 32;
  *((_QWORD *)gpsi + 1) = 0LL;
  *((_DWORD *)gpsi + 216) = 0;
  result = HMGrowHandleTable();
  if ( (_DWORD)result )
  {
    *v1 = 0LL;
    result = 1LL;
    v0[13] = 1;
    *((_BYTE *)v0 + 24) = 0;
    qword_1C01A0AF0 = 2LL;
  }
  else
  {
    qword_1C01A0E28 = 0LL;
  }
  return result;
}
