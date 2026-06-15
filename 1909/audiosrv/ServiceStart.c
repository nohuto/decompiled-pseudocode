/*
 * XREFs of ServiceStart @ 0x180060AA0
 * Callers:
 *     ?AudioSrvStartupThread@@YAKPEAX@Z @ 0x180060A20 (-AudioSrvStartupThread@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ReportStatusToSCMgr @ 0x180060B78 (ReportStatusToSCMgr.c)
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180060BE0 (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 *     ??0CAudioSrv@@QEAA@XZ @ 0x180060EA0 (--0CAudioSrv@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall ServiceStart(struct SERVICE_STATUS_HANDLE__ *a1, int a2, __int64 a3, __int64 a4)
{
  CAudioSrv *v5; // rax
  unsigned int v6; // edx
  const unsigned __int16 **v7; // r8
  CAudioSrv *v8; // rbx
  unsigned int result; // eax
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]
  int v16; // [rsp+64h] [rbp-14h]

  if ( !a2 )
    ReportStatusToSCMgr(1LL, 2147500037LL, 0LL, a4);
  v5 = (CAudioSrv *)operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v5;
  if ( v5 )
  {
    memset_0(v5, 0, 0x178uLL);
    v5 = CAudioSrv::CAudioSrv(v8);
  }
  g_AudioService = (unsigned __int64)v5;
  if ( !v5 )
    return 14;
  result = MyServiceInitialization(a1, v6, v7);
  v12 = result;
  if ( !result )
  {
    ReportStatusToSCMgr(4LL, 0LL, 0LL, v11);
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 104LL))(g_AudioService);
    result = 0;
  }
  if ( (unsigned int)dword_1801B54B8 > 4 )
  {
    v16 = 0;
    v14 = &v12;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1801B54B8, &unk_180178CED, v10, v11, 3u, &pData);
    return v12;
  }
  return result;
}
