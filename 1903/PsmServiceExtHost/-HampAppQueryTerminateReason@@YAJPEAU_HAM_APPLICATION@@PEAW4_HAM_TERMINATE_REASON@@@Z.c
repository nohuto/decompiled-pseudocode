/*
 * XREFs of ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800111E8
 * Callers:
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x18001117C (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000EBF4 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppQueryTerminateReason(struct _HAM_APPLICATION *a1, enum _HAM_TERMINATE_REASON *a2)
{
  unsigned int v4; // r9d
  int RegistryTerminateReason; // [rsp+30h] [rbp-39h] BYREF
  __int64 v7; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *p_RegistryTerminateReason; // [rsp+60h] [rbp-9h]
  int v10; // [rsp+68h] [rbp-1h]
  int v11; // [rsp+6Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+80h] [rbp+17h] BYREF
  __int64 *v14; // [rsp+90h] [rbp+27h]
  int v15; // [rsp+98h] [rbp+2Fh]
  int v16; // [rsp+9Ch] [rbp+33h]

  if ( (*((_DWORD *)a1 + 152) & 0x10000) != 0 )
  {
    *(_DWORD *)a2 = 0;
    return 0;
  }
  RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(
                              (const unsigned __int16 *)a1 + 48,
                              (void *)(*((_QWORD *)a1 + 11) + 228LL),
                              (enum _HAM_TERMINATE_REASON *)&v7);
  v4 = RegistryTerminateReason;
  if ( RegistryTerminateReason >= 0 )
  {
    *(_DWORD *)a2 = v7;
    return 0;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
  {
    v11 = 0;
    p_RegistryTerminateReason = &RegistryTerminateReason;
    v10 = 4;
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 48);
    TlgCreateSid(&v13, (const SID *)(*((_QWORD *)a1 + 11) + 228LL));
    v16 = 0;
    v14 = &v7;
    v7 = 0x1000000LL;
    v15 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800993D2, 0LL, 0LL, 6u, &pData);
    return (unsigned int)RegistryTerminateReason;
  }
  return v4;
}
