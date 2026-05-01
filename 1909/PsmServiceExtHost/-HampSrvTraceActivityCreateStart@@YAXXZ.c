/*
 * XREFs of ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18001A69C
 * Callers:
 *     ?HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PEBGPEA_K@Z @ 0x18001028C (-HamSrvCreateExtendedExecution@@YAJPEAU_HAM_CLIENT_CONTEXT@@W4_HAM_EXTENDED_EXECUTION_REASON@@PE.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011F4C (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x180018D00 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x18003A3F4 (-HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K.c)
 * Callees:
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void HampSrvTraceActivityCreateStart(void)
{
  EVENT_DESCRIPTOR v0; // [rsp+38h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v1; // [rsp+48h] [rbp-30h] BYREF
  void *v2; // [rsp+58h] [rbp-20h]
  int v3; // [rsp+60h] [rbp-18h]
  int v4; // [rsp+64h] [rbp-14h]

  if ( dword_1800AB2C0 > 4u )
  {
    *(_DWORD *)&v0.Level = 260;
    v1.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&v0.Id = 184549376;
    v0.Keyword = 0LL;
    v1.Size = *(unsigned __int16 *)off_1800AB2C8;
    v1.Reserved = 2;
    v2 = &unk_180097D8B;
    v3 = 19;
    v4 = 1;
    EventWriteTransfer(RegHandle, &v0, 0LL, 0LL, 2u, &v1);
  }
}
