/*
 * XREFs of ?_UploadTelemetryData@DeadzonePalmTelemetry@@AEAAXH@Z @ 0x1C015A5D0
 * Callers:
 *     ?ClearSession@DeadzonePalmTelemetry@@QEAAXXZ @ 0x1C0159CD4 (-ClearSession@DeadzonePalmTelemetry@@QEAAXXZ.c)
 *     ?UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z @ 0x1C0159F20 (-UpdateTelemetryBuffer@DeadzonePalmTelemetry@@QEAAXKKH@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     _TlgCreateSz @ 0x1C010F8F0 (_TlgCreateSz.c)
 *     ?RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z @ 0x1C0159D5C (-RtlStringCchLengthA@@YAJPEBD_KPEA_K@Z.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C0159DBC (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ApiSetGetUserHandedness @ 0x1C019D434 (ApiSetGetUserHandedness.c)
 */

void __fastcall DeadzonePalmTelemetry::_UploadTelemetryData(DeadzonePalmTelemetry *this, int a2)
{
  const char *v2; // r14
  int v4; // r13d
  unsigned __int64 v5; // rbp
  unsigned int v6; // eax
  unsigned int v7; // r12d
  unsigned __int64 v8; // r15
  char *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  int UserHandedness; // eax
  __int64 v14; // rdx
  int v15; // ebp
  unsigned __int64 v16; // [rsp+40h] [rbp-A8h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-A0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR v20; // [rsp+80h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+A0h] [rbp-48h] BYREF

  v16 = 0LL;
  v2 = (char *)this + 12;
  v4 = 0;
  v5 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v17 = v5;
  if ( a2 || (unsigned int)(v5 - *((_DWORD *)this + 2)) >= 0x2710 )
  {
    v6 = *((_DWORD *)this + 1);
    if ( v6 > 0x280 )
      v6 = 640;
    v7 = 0;
    *((_DWORD *)this + 1) = v6;
    if ( v6 )
    {
      v8 = v16;
      v9 = (char *)this + 12;
      do
      {
        v10 = v7 % 0x280;
        v11 = 2 * v10;
        v12 = 2 * (v10 + 129);
        UserHandedness = ApiSetGetUserHandedness();
        RtlStringCchPrintfA(
          v9,
          2048 - v8,
          "%lu,%d,%lu,%lu,%lu;",
          UserHandedness,
          *((_DWORD *)this + 2 * v11 + 515),
          *((_DWORD *)this + 2 * v12),
          *((_DWORD *)this + 2 * v11 + 517),
          *((_DWORD *)this + 2 * v11 + 518));
        RtlStringCchLengthA(v2, v14, &v16);
        v8 = v16;
        if ( v16 + 32 >= 0x800 )
        {
          if ( dword_1C020C4C8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C4C8, 0x400000000000uLL) )
          {
            TlgCreateSz(&pDesc, v2);
            TlgWrite((TraceLoggingHProvider)&dword_1C020C4C8, &unk_1C01E3D51, 0LL, 0LL, 3u, &pData);
          }
          v8 = 0LL;
          v16 = 0LL;
          v4 = 1;
          memset((char *)this + 13, 0, 0x7FFuLL);
          *v2 = 0;
        }
        ++v7;
        v9 = (char *)&v2[v8];
      }
      while ( v7 < *((_DWORD *)this + 1) );
      v15 = v17;
      if ( v8 )
      {
        if ( dword_1C020C4C8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020C4C8, 0x400000000000uLL) )
        {
          TlgCreateSz(&v21, v2);
          TlgWrite((TraceLoggingHProvider)&dword_1C020C4C8, &unk_1C01E3D51, 0LL, 0LL, 3u, &v20);
        }
        v4 = 1;
      }
      if ( v4 )
      {
        *((_DWORD *)this + 1) = 0;
        memset((char *)this + 2060, 0, 0x2800uLL);
        memset((char *)this + 13, 0, 0x7FFuLL);
        *v2 = 0;
        *((_DWORD *)this + 2) = v15;
      }
    }
  }
}
