/*
 * XREFs of ?Serialize@SerializedFailure@details_abi@wil@@SA_NAEBUFEATURE_ERROR@@PEA_KPEAX_K@Z @ 0x180007904
 * Callers:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x180008434 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 * Callees:
 *     _lambda_057488ec2a114cea6fb77af5c8c7453a_::operator() @ 0x180007AD8 (_lambda_057488ec2a114cea6fb77af5c8c7453a_--operator().c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C71FD (memset_0.c)
 */

bool __fastcall wil::details_abi::SerializedFailure::Serialize(
        const struct FEATURE_ERROR *a1,
        unsigned __int64 *a2,
        char *a3,
        unsigned __int64 a4)
{
  char *v4; // rbx
  PCSTR file; // rdx
  PCSTR process; // rdx
  PCSTR module; // rdx
  PCSTR callerModule; // rdx
  PCSTR message; // rdx
  PCSTR originFile; // rdx
  PCSTR v13; // rdx
  PCSTR originModule; // rdx
  PCSTR originCallerModule; // rdx
  PCSTR originName; // rdx
  char *v18; // [rsp+20h] [rbp-49h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-41h] BYREF
  _QWORD v20[5]; // [rsp+30h] [rbp-39h] BYREF
  char *v21; // [rsp+58h] [rbp-11h] BYREF
  char *v22; // [rsp+60h] [rbp-9h] BYREF
  char v23; // [rsp+68h] [rbp-1h] BYREF

  v19 = a4;
  v21 = a3;
  v4 = &v23;
  v18 = a3;
  if ( a4 >= 0x24 )
    v4 = a3;
  v22 = &a3[a4];
  *a2 = 36LL;
  if ( a4 >= 0x24 )
  {
    memset_0(v4, 0, 0x24uLL);
    *(_DWORD *)v4 = a1->hr;
    *((_WORD *)v4 + 2) = a1->lineNumber;
    *((_DWORD *)v4 + 3) = a1->callerReturnAddressOffset;
    *((_WORD *)v4 + 9) = a1->originLineNumber;
    *((_DWORD *)v4 + 6) = a1->originCallerReturnAddressOffset;
    v18 += 36;
  }
  file = a1->file;
  v20[0] = &v21;
  v20[2] = &v19;
  v20[3] = &v18;
  v20[4] = &v22;
  v20[1] = a2;
  if ( file )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, file, v4 + 6, 0LL);
  process = a1->process;
  if ( process )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, process, v4 + 32, 0LL);
  module = a1->module;
  if ( module )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, module, v4 + 8, *((unsigned __int16 *)v4 + 16));
  callerModule = a1->callerModule;
  if ( callerModule )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, callerModule, v4 + 10, *((unsigned __int16 *)v4 + 4));
  message = a1->message;
  if ( message )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, message, v4 + 16, 0LL);
  originFile = a1->originFile;
  if ( originFile )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, originFile, v4 + 20, *((unsigned __int16 *)v4 + 3));
  v13 = a1->callerModule;
  if ( v13 )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, v13, v4 + 10, *((unsigned __int16 *)v4 + 4));
  originModule = a1->originModule;
  if ( originModule )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, originModule, v4 + 22, *((unsigned __int16 *)v4 + 4));
  originCallerModule = a1->originCallerModule;
  if ( originCallerModule )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(
      v20,
      originCallerModule,
      v4 + 28,
      *((unsigned __int16 *)v4 + 11));
  originName = a1->originName;
  if ( originName )
    lambda_057488ec2a114cea6fb77af5c8c7453a_::operator()(v20, originName, v4 + 30, 0LL);
  return *a2 <= v19;
}
