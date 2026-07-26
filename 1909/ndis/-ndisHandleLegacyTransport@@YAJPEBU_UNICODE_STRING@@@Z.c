/*
 * XREFs of ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C0019BA0
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisHandleLegacyTransport(const struct _UNICODE_STRING *a1)
{
  wchar_t *Buffer; // rdx
  NTSTATUS v3; // eax
  int v4; // ebx
  PCWSTR v6; // rdi
  PCWSTR SourceString; // [rsp+38h] [rbp-D0h] BYREF
  __int64 Context; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v10[16]; // [rsp+58h] [rbp-B0h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+68h] [rbp-A0h] BYREF
  void *v12; // [rsp+A0h] [rbp-68h]
  int v13; // [rsp+A8h] [rbp-60h]
  const wchar_t *v14; // [rsp+B0h] [rbp-58h]
  PCWSTR *p_SourceString; // [rsp+B8h] [rbp-50h]
  int v16; // [rsp+C0h] [rbp-48h]
  __int64 v17; // [rsp+D8h] [rbp-30h]
  int v18; // [rsp+E0h] [rbp-28h]
  __int64 v19; // [rsp+E8h] [rbp-20h]

  SourceString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      5,
      38,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1);
  Context = 0LL;
  if ( ndisTdiRegisterCallback )
  {
    Buffer = a1->Buffer;
    QueryTable.Name = L"Linkage";
    QueryTable.QueryRoutine = 0LL;
    v12 = &ndisReadParameter;
    v13 = 20;
    v14 = L"Export";
    QueryTable.Flags = 1;
    p_SourceString = &SourceString;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    v16 = 0;
    v17 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v3 = RtlQueryRegistryValuesEx(1u, (PCWSTR)Buffer, &QueryTable, &Context, 0LL);
    v4 = v3;
    if ( v3 >= 0 )
    {
      if ( (_DWORD)Context == 7 )
      {
        v6 = SourceString;
        if ( !SourceString )
        {
LABEL_9:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4,
              5,
              40,
              (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
          return (unsigned int)v4;
        }
        do
        {
          if ( !*v6 )
            break;
          RtlInitUnicodeString(&DestinationString, v6);
          v4 = ((__int64 (__fastcall *)(_UNICODE_STRING *, _BYTE *))ndisTdiRegisterCallback)(&DestinationString, v10);
          if ( v4 < 0 )
            break;
          v6 = (PCWSTR)((char *)v6 + DestinationString.MaximumLength);
        }
        while ( v6 );
      }
      else
      {
        v4 = -1073741823;
      }
    }
    else if ( v3 == -1073741772 )
    {
      v4 = 0;
    }
    if ( SourceString )
      ExFreePoolWithTag((PVOID)SourceString, 0);
    goto LABEL_9;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      5,
      39,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  return 3221225473LL;
}
