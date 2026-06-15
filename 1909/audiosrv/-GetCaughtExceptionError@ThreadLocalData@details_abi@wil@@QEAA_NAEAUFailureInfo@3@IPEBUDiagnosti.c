/*
 * XREFs of ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x1800BEDF0
 * Callers:
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x1800BEDBC (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 * Callees:
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x1800BEFDC (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x1800C0C10 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1800C0DBC (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

bool __fastcall wil::details_abi::ThreadLocalData::GetCaughtExceptionError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        const struct DiagnosticsInfo *a4)
{
  wil *v8; // rcx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  bool result; // al
  unsigned __int16 v17; // ax
  int v18; // eax
  __int128 v19; // [rsp+50h] [rbp-B0h]
  _OWORD v20[9]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v21; // [rsp+100h] [rbp+0h]

  memset_0(v20, 0, sizeof(v20));
  if ( wil::details_abi::ThreadLocalData::GetLastError(this, (struct wil::FailureInfo *)v20, a3, 0)
    && (v9 = wil::ResultFromCaughtException(v8), DWORD1(v20[0]) == v9) )
  {
    v10 = v20[1];
    *(_OWORD *)a2 = v20[0];
    v11 = v20[2];
    *((_OWORD *)a2 + 1) = v10;
    v12 = v20[3];
    *((_OWORD *)a2 + 2) = v11;
    v13 = v20[4];
    *((_OWORD *)a2 + 3) = v12;
    v14 = v20[5];
    *((_OWORD *)a2 + 4) = v13;
    v15 = v20[6];
    *((_OWORD *)a2 + 5) = v14;
    *((_OWORD *)a2 + 6) = v15;
    *((_OWORD *)a2 + 7) = v20[7];
    result = 1;
    *((_OWORD *)a2 + 8) = v20[8];
  }
  else
  {
    v17 = 0;
    v19 = 0LL;
    if ( a4 )
    {
      v17 = (unsigned __int16)a4[3];
      v19 = *(_OWORD *)&a4->cost;
    }
    v21 = 0;
    v18 = wil::details::ReportFailure_CaughtExceptionCommon(v19, v17, *((_QWORD *)&v19 + 1));
    return wil::details_abi::ThreadLocalData::GetLastError(this, a2, a3, v18);
  }
  return result;
}
