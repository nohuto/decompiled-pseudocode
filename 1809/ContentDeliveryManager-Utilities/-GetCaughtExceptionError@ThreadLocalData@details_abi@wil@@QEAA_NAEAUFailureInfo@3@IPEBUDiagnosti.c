/*
 * XREFs of ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180004270
 * Callers:
 *     ?GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J@Z @ 0x18000454C (-GetCaughtExceptionError@ThreadErrorContext@wil@@QEAA_NAEAUFailureInfo@2@PEBUDiagnosticsInfo@2@J.c)
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180002988 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ?ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4SupportedExceptions@2@@Z @ 0x180003114 (-ReportFailure_CaughtExceptionCommon@details@wil@@YAJPEAXIPEBD110W4FailureType@2@PEAG_KW4Support.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x18000416C (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 *     _alloca_probe @ 0x1800C7E10 (_alloca_probe.c)
 */

char __fastcall wil::details_abi::ThreadLocalData::GetCaughtExceptionError(
        wil::details_abi::ThreadLocalData *this,
        struct wil::FailureInfo *a2,
        unsigned int a3,
        const struct DiagnosticsInfo *a4)
{
  char v8; // di
  void *v9; // rdx
  wil *v10; // rcx
  unsigned int v11; // r8d
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  char result; // al
  unsigned __int16 v20; // ax
  int v21; // eax
  __int128 v22; // [rsp+50h] [rbp-B0h]
  _OWORD v23[9]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v24; // [rsp+100h] [rbp+0h]

  memset_0(v23, 0, sizeof(v23));
  v8 = 0;
  if ( *((_QWORD *)this + 3)
    && wil::details_abi::ThreadLocalData::GetLastError(this, (struct wil::FailureInfo *)v23, a3, 0)
    && (v12 = wil::ResultFromCaughtException(v10, v9, v11), DWORD1(v23[0]) == v12) )
  {
    v13 = v23[1];
    *(_OWORD *)a2 = v23[0];
    v14 = v23[2];
    *((_OWORD *)a2 + 1) = v13;
    v15 = v23[3];
    *((_OWORD *)a2 + 2) = v14;
    v16 = v23[4];
    *((_OWORD *)a2 + 3) = v15;
    v17 = v23[5];
    *((_OWORD *)a2 + 4) = v16;
    v18 = v23[6];
    *((_OWORD *)a2 + 5) = v17;
    *((_OWORD *)a2 + 6) = v18;
    *((_OWORD *)a2 + 7) = v23[7];
    result = 1;
    *((_OWORD *)a2 + 8) = v23[8];
  }
  else
  {
    v20 = 0;
    v22 = 0LL;
    if ( a4 )
    {
      v20 = (unsigned __int16)a4[3];
      v22 = *(_OWORD *)&a4->cost;
    }
    v24 = 0;
    v21 = wil::details::ReportFailure_CaughtExceptionCommon(v22, v20, *((__int64 *)&v22 + 1));
    if ( *((_QWORD *)this + 3) )
      return wil::details_abi::ThreadLocalData::GetLastError(this, a2, a3, v21);
    return v8;
  }
  return result;
}
