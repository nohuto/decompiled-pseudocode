/*
 * XREFs of ?QueryCurrentMemoryUsage@ModernResourceEnforcer@@QEAAJPEBGPEAT_RM_SID@@KK_KPEA_K3@Z @ 0x18001A020
 * Callers:
 *     ?RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z @ 0x180019DA0 (-RmpActivityHostQueryCommit@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K11@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryCurrentMemoryUsage(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8)
{
  unsigned __int64 *v8; // rbx
  unsigned __int64 *v12; // rdi
  unsigned int v14; // r10d
  unsigned __int64 v15; // rcx
  UINT32 cData; // r9d
  UINT32 v18; // r9d
  int v19; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v20; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-49h] BYREF
  int *v23; // [rsp+80h] [rbp-29h]
  UINT32 v24; // [rsp+88h] [rbp-21h]
  int v25; // [rsp+8Ch] [rbp-1Dh]
  unsigned __int64 *v26; // [rsp+90h] [rbp-19h]
  int v27; // [rsp+98h] [rbp-11h]
  int v28; // [rsp+9Ch] [rbp-Dh]

  v8 = a7;
  v12 = a8;
  v19 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *, _QWORD))this
         + 3))(
          a3,
          a4,
          a2,
          a5,
          a6,
          &v21,
          0LL);
  v14 = v19;
  if ( v19 < 0 )
  {
    if ( hProvider <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      return v14;
    v25 = 0;
    v28 = 0;
    v23 = &v19;
    v26 = &a6;
    v24 = cData;
    v27 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800928D5, 0LL, 0LL, cData, &pData);
    return (unsigned int)v19;
  }
  v19 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned __int64 *))this
         + 12))(
          a3,
          a4,
          a2,
          a5,
          a6,
          &v20);
  v14 = v19;
  if ( v19 < 0 )
  {
    if ( hProvider <= 4u || !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      return v14;
    v25 = 0;
    v28 = 0;
    v23 = &v19;
    v26 = &a6;
    v24 = v18;
    v27 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009291D, 0LL, 0LL, v18, &pData);
    return (unsigned int)v19;
  }
  v15 = v20 << 12;
  if ( is_mul_ok(v20, 0x1000uLL) )
  {
    v14 = 0;
  }
  else
  {
    v15 = -1LL;
    v14 = -1073741675;
  }
  *v8 = v21;
  *v12 = v15;
  return v14;
}
