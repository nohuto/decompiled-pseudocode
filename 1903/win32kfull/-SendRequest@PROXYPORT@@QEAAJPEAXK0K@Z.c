/*
 * XREFs of ?SendRequest@PROXYPORT@@QEAAJPEAXK0K@Z @ 0x1C011771C
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall PROXYPORT::SendRequest(PROXYPORT *this, void *a2, int a3, void *a4, unsigned int a5)
{
  __int64 result; // rax
  _QWORD v10[10]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v11[86]; // [rsp+70h] [rbp-90h] BYREF

  memset(v10, 0, 0x48uLL);
  memset(v11, 0, sizeof(v11));
  LODWORD(v10[5]) = a3;
  v10[0] = 0x800000480020LL;
  v10[6] = a2;
  v10[8] = a4;
  LODWORD(v10[7]) = a4 != 0LL ? a5 : 0;
  result = LpcRequestWaitReplyPort(**(_QWORD **)this, v10, v11);
  if ( (_DWORD)result == -1073741769 )
    *(_DWORD *)(*(_QWORD *)this + 60LL) = 0;
  if ( (int)result >= 0 )
  {
    if ( (WORD2(v11[0]) & 0x7FFF) != 2 )
      return 3221225473LL;
    if ( LOWORD(v11[0]) != 32 )
      return 3221225473LL;
    if ( a4 != (void *)v11[8] )
      return 3221225473LL;
    result = (unsigned int)result;
    if ( a5 != LODWORD(v11[7]) )
      return 3221225473LL;
  }
  return result;
}
