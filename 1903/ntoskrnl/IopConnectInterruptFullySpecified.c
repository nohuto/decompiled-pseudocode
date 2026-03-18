/*
 * XREFs of IopConnectInterruptFullySpecified @ 0x140783294
 * Callers:
 *     IoConnectInterruptEx @ 0x140741210 (IoConnectInterruptEx.c)
 *     IoConnectInterrupt @ 0x140783220 (IoConnectInterrupt.c)
 * Callees:
 *     KeVerifyGroupAffinity @ 0x14015A778 (KeVerifyGroupAffinity.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopConnectInterrupt @ 0x14074148C (IopConnectInterrupt.c)
 */

__int64 __fastcall IopConnectInterruptFullySpecified(
        _QWORD *a1,
        __int64 (__fastcall *a2)(__int64 a1, __int64 a2),
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        int a8,
        char a9,
        __int128 *a10)
{
  char v14; // bl
  __int128 v15; // xmm0
  char v16; // di
  __int64 result; // rax
  char v18; // al
  int v19; // ecx
  unsigned int v20; // eax
  __int64 v21; // [rsp+48h] [rbp-89h]
  unsigned int v22; // [rsp+58h] [rbp-79h] BYREF
  int v23; // [rsp+5Ch] [rbp-75h] BYREF
  __int64 v24; // [rsp+60h] [rbp-71h] BYREF
  _OWORD v25[6]; // [rsp+68h] [rbp-69h] BYREF

  memset(v25, 0, sizeof(v25));
  if ( !a2 || !KeVerifyGroupAffinity((__int64)a10, 0) )
    return 3221225485LL;
  v14 = a7;
  if ( a7 )
  {
    if ( a7 >= a6 )
      goto LABEL_5;
    return 3221225485LL;
  }
  v14 = a6;
LABEL_5:
  v15 = *a10;
  DWORD2(v25[0]) = 0;
  LOBYTE(v25[1]) = a6;
  v16 = 1;
  DWORD2(v25[1]) = a8;
  LODWORD(v25[0]) = 1;
  HIDWORD(v25[0]) = a5;
  v25[2] = v15;
  result = HalGetVectorInput(a5, &v25[2], &v22, &v23, &v25[3]);
  if ( (int)result >= 0 )
  {
    v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD))off_1404244C0[0])(0LL, v22);
    v19 = v23;
    if ( v18 || (unsigned int)(v23 - 3) > 1 )
    {
      v20 = v22;
      *a1 = 0LL;
      LODWORD(v25[4]) = v20;
      if ( (BYTE4(v25[4]) & 1) == 0 )
        v16 = a9;
      DWORD1(v25[1]) = v19;
      result = IopConnectInterrupt(&v24, a2, 0LL, a3, 0, a4, v14, v16, v21, (__int64)v25);
      if ( (int)result >= 0 )
        *a1 = v24 + 112;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
