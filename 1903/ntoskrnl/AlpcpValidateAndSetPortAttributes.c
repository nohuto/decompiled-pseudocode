/*
 * XREFs of AlpcpValidateAndSetPortAttributes @ 0x140648BB0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140648DD8 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9518 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SeValidateSecurityQos @ 0x1405D77BC (SeValidateSecurityQos.c)
 */

__int64 __fastcall AlpcpValidateAndSetPortAttributes(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        char a7)
{
  int v11; // edx
  __int64 result; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  _QWORD v16[10]; // [rsp+30h] [rbp-31h] BYREF

  memset(v16, 0, 0x48uLL);
  if ( a2 )
  {
    if ( (unsigned __int64)(a2[2] - 40LL) > 0xFFD7 )
      return 3221225485LL;
    v11 = *(_DWORD *)a2;
    if ( (*(_DWORD *)a2 & 0x100000) != 0 )
    {
      if ( KeGetCurrentThread()->PreviousMode )
        return 3221225485LL;
    }
    *((_DWORD *)a2 + 16) &= 0xFFDu;
    *(_DWORD *)a2 = v11 & 0x3FF0000;
  }
  else
  {
    v16[4] = 0x4000LL;
    a2 = v16;
    v16[5] = 0x4000LL;
    HIDWORD(v16[1]) = 257;
    v14 = v16[0];
    if ( a7 )
      v14 = 4096;
    LODWORD(v16[0]) = v14;
    v16[2] = 512LL;
    v16[7] = 0x20000LL;
    v16[6] = 0LL;
    v16[3] = 0LL;
    *(_QWORD *)((char *)v16 + 4) = 12LL;
    LODWORD(v16[8]) = 0;
  }
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 1 )
  {
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      if ( a2 == v16 )
        *(_DWORD *)a2 |= 0x10000u;
      if ( !a7 )
      {
        v13 = *(_QWORD *)(a3 + 272);
        if ( a2[2] <= v13 )
          goto LABEL_8;
        goto LABEL_22;
      }
      *(_DWORD *)a2 |= 0x20000u;
      if ( a4 )
      {
        *(_QWORD *)((char *)a2 + 4) = *(_QWORD *)a4;
        *((_DWORD *)a2 + 3) = *(_DWORD *)(a4 + 8);
      }
    }
    else
    {
      *(_DWORD *)a2 &= ~0x20000u;
      if ( !a7 )
        goto LABEL_8;
    }
    v13 = *(_QWORD *)(a3 + 272);
LABEL_22:
    a2[2] = v13;
    goto LABEL_8;
  }
  v15 = *(_DWORD *)a2 | 0x20000;
  *(_DWORD *)a2 = v15;
  if ( a7 )
  {
    if ( a5 > LpcLegacyMaxMessageLength )
      return 3221225485LL;
    if ( a6 )
      *(_DWORD *)a2 = v15 | 0x40000;
    a2[2] = a5;
  }
LABEL_8:
  result = SeValidateSecurityQos((__int64)a2 + 4);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *(_OWORD *)(a1 + 256) = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 272) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(a1 + 288) = *((_OWORD *)a2 + 2);
    *(_OWORD *)(a1 + 304) = *((_OWORD *)a2 + 3);
    *(_QWORD *)(a1 + 320) = a2[8];
  }
  return result;
}
