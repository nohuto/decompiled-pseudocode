/*
 * XREFs of ?HampSessionCheckBackgroundAccessAllowed@@YAJPEAU_HAM_SESSION@@PEAU_HAM_PACKAGE_INFO@@PEAW4BACKGROUND_ACCESS_STATE@@@Z @ 0x18000A1B8
 * Callers:
 *     ?HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z @ 0x18000A044 (-HampPkgQueryBackgroundAccessState@@YAJPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HampSessionCheckBackgroundAccessAllowed(
        struct _HAM_SESSION *a1,
        struct _HAM_PACKAGE_INFO *a2,
        enum BACKGROUND_ACCESS_STATE *a3)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rcx
  int v9; // r9d
  int v10; // r10d
  int v11; // [rsp+30h] [rbp-59h] BYREF
  int v12; // [rsp+34h] [rbp-55h] BYREF
  int v13; // [rsp+38h] [rbp-51h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v16; // [rsp+70h] [rbp-19h]
  int v17; // [rsp+78h] [rbp-11h]
  int v18; // [rsp+7Ch] [rbp-Dh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-9h] BYREF
  int *v20; // [rsp+90h] [rbp+7h]
  int v21; // [rsp+98h] [rbp+Fh]
  int v22; // [rsp+9Ch] [rbp+13h]
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+A0h] [rbp+17h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = RtlConvertSidToUnicodeString(&DestinationString, (char *)a2 + 132, 1u);
  if ( v6 >= 0 )
  {
    v7 = *((_QWORD *)a1 + 14);
    v11 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, PWSTR, struct _HAM_PACKAGE_INFO *, int *))(*(_QWORD *)v7 + 224LL))(
            v7,
            DestinationString.Buffer,
            a2,
            &v11);
    if ( v12 < 0 && hProvider > 4u )
    {
      v18 = 0;
      v16 = &v12;
      v17 = 4;
      TlgCreateWsz(&pDesc, (LPCWSTR)a2);
      v9 = *((_DWORD *)a2 + 50);
      v22 = 0;
      v20 = &v13;
      v13 = v9;
      v21 = v10;
      TlgCreateSid(&v23, (const SID *)a2 + 11);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BAFD, 0LL, 0LL, 6u, &pData);
    }
    v6 = 0;
    *(_DWORD *)a3 = v11;
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v6;
}
