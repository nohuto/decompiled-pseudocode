/*
 * XREFs of sub_180004020 @ 0x180004020
 * Callers:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 * Callees:
 *     sub_180003EB8 @ 0x180003EB8 (sub_180003EB8.c)
 *     sub_180004168 @ 0x180004168 (sub_180004168.c)
 *     sub_1800041A8 @ 0x1800041A8 (sub_1800041A8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180004020(_OWORD *a1, _DWORD *a2, _QWORD *a3, _OWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v13[80]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v14[80]; // [rsp+98h] [rbp-70h] BYREF

  *a2 = 0;
  memset(v13, 0, 0x4CuLL);
  memset(v14, 0, 0x4CuLL);
  LODWORD(v11[0]) = 4980812;
  v11[1] = v13;
  result = sub_1800041A8(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control", L"ContainerId", v13);
  if ( !(_DWORD)result || (_DWORD)result == -1073741772 )
  {
    LODWORD(v12[0]) = 4980812;
    v12[1] = v14;
    result = sub_1800041A8(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control", L"ContainerCorrelationId", v14);
    if ( !(_DWORD)result || (_DWORD)result == -1073741772 )
    {
      result = sub_180003EB8(v10, v9, a2);
      if ( !(_DWORD)result || (_DWORD)result == -1073741772 )
      {
        *a3 = 0LL;
        if ( (unsigned int)sub_180004168(v11, a1) )
          *a1 = xmmword_180120C08;
        result = sub_180004168(v12, a4);
        if ( (_DWORD)result )
        {
          *a4 = xmmword_180120C08;
          return 0LL;
        }
      }
    }
  }
  return result;
}
