/*
 * XREFs of PiCMSetDeviceProblem @ 0x140839F34
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PiCMReturnBasicResultData @ 0x1405A060C (PiCMReturnBasicResultData.c)
 *     _CmValidateDeviceName @ 0x1405C86D0 (_CmValidateDeviceName.c)
 *     PiAuDoesClientHaveAccess @ 0x140700A2C (PiAuDoesClientHaveAccess.c)
 *     PiAuDoesClientHavePrivilege @ 0x14082B2B8 (PiAuDoesClientHavePrivilege.c)
 *     PiCMCaptureProblemInputData @ 0x140837608 (PiCMCaptureProblemInputData.c)
 *     PiCMSetProblem @ 0x14083A018 (PiCMSetProblem.c)
 */

__int64 __fastcall PiCMSetDeviceProblem(
        _OWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 result; // rax
  __int64 v9; // rcx
  int v10; // eax
  _OWORD v11[25]; // [rsp+30h] [rbp-1D8h] BYREF
  int v12; // [rsp+1CCh] [rbp-3Ch]

  *a6 = 0;
  result = PiCMCaptureProblemInputData(a1, a2, (__int64)a3, v11);
  if ( (int)result >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(4u) && PiAuDoesClientHavePrivilege(0xAu) )
    {
      if ( WORD4(v11[0]) && a3 && a4 >= 8 && (unsigned int)(DWORD1(v11[0]) - 1) <= 1 )
      {
        v10 = CmValidateDeviceName(v9, (const wchar_t *)v11 + 4);
        if ( v10 >= 0 )
          v10 = PiCMSetProblem((PCWSTR)v11 + 4);
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
    return PiCMReturnBasicResultData(v10, v12, a3, a4, a6);
  }
  return result;
}
