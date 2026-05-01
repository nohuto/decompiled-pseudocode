/*
 * XREFs of ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18002EAF4
 * Callers:
 *     ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x18002EA7C (-HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18002ED34 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HampAppQueryTerminateReason(struct _HAM_APPLICATION *a1, enum _HAM_TERMINATE_REASON *a2)
{
  unsigned int v4; // r9d
  int RegistryTerminateReason; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v7[3]; // [rsp+34h] [rbp-74h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-68h] BYREF
  int *p_RegistryTerminateReason; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+6Ch] [rbp-3Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+80h] [rbp-28h] BYREF

  if ( (*((_DWORD *)a1 + 152) & 0x80000) != 0 )
  {
    *(_DWORD *)a2 = 0;
    return 0;
  }
  RegistryTerminateReason = HampUtilQueryRegistryTerminateReason(
                              (const unsigned __int16 *)a1 + 48,
                              (void *)(*((_QWORD *)a1 + 11) + 228LL),
                              (enum _HAM_TERMINATE_REASON *)v7);
  v4 = RegistryTerminateReason;
  if ( RegistryTerminateReason >= 0 )
  {
    *(_DWORD *)a2 = v7[0];
    return 0;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
  {
    v11 = 0;
    p_RegistryTerminateReason = &RegistryTerminateReason;
    v10 = 4;
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 48);
    TlgCreateSid(&v13, (const SID *)(*((_QWORD *)a1 + 11) + 228LL));
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008B933, 0LL, 0LL, 5u, &pData);
    return (unsigned int)RegistryTerminateReason;
  }
  return v4;
}
