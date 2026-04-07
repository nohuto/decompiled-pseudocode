/*
 * XREFs of ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x1800716C8
 * Callers:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180070EE4 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator() @ 0x18006F6CC (_lambda_057488ec2a114cea6fb77af5c8c7453a_--operator().c)
 */

bool __fastcall wil::details_abi::SerializedFailure::Serialize(
        const struct FEATURE_ERROR *a1,
        unsigned __int64 *a2,
        unsigned __int16 *a3,
        unsigned __int64 a4)
{
  unsigned __int16 *v4; // r14
  unsigned __int8 *file; // rdx
  char *v9; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v10[5]; // [rsp+28h] [rbp-41h] BYREF
  char *v11; // [rsp+50h] [rbp-19h] BYREF
  char *v12; // [rsp+58h] [rbp-11h] BYREF
  char v13; // [rsp+60h] [rbp-9h] BYREF
  unsigned __int64 v14; // [rsp+E8h] [rbp+7Fh] BYREF

  v14 = a4;
  v11 = (char *)a3;
  v9 = (char *)a3;
  *a2 = 36LL;
  v4 = (unsigned __int16 *)&v13;
  v12 = (char *)a3 + a4;
  if ( a4 >= 0x24 )
    v4 = a3;
  if ( a4 >= 0x24 )
  {
    memset_0(v4, 0, 0x24uLL);
    *(_DWORD *)v4 = a1->hr;
    v4[2] = a1->lineNumber;
    *((_DWORD *)v4 + 3) = a1->callerReturnAddressOffset;
    v4[9] = a1->originLineNumber;
    *((_DWORD *)v4 + 6) = a1->originCallerReturnAddressOffset;
    v9 += 36;
  }
  file = (unsigned __int8 *)a1->file;
  v10[0] = &v11;
  v10[1] = a2;
  v10[2] = &v14;
  v10[3] = &v9;
  v10[4] = &v12;
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, file, v4 + 3, 0);
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->process, v4 + 16, 0);
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->module, v4 + 4, v4[16]);
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->callerModule, v4 + 5, v4[4]);
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->message, v4 + 8, 0);
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->originFile, v4 + 10, v4[3]);
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->callerModule, v4 + 5, v4[4]);
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->originModule,
    v4 + 11,
    v4[4]);
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
    (__int64)v10,
    (unsigned __int8 *)a1->originCallerModule,
    v4 + 14,
    v4[11]);
  lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()((__int64)v10, (unsigned __int8 *)a1->originName, v4 + 15, 0);
  return *a2 <= v14;
}
