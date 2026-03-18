/*
 * XREFs of SendBDDDiagTelemetry @ 0x1C0022CFC
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01631F8 (DpiFdoStartAdapter.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00036AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C000E9D0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SendBDDDiagTelemetry(__int64 a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  const GUID *v5; // r9
  char v6; // [rsp+30h] [rbp-D0h] BYREF
  char v7; // [rsp+31h] [rbp-CFh] BYREF
  char v8; // [rsp+32h] [rbp-CEh] BYREF
  char v9; // [rsp+33h] [rbp-CDh] BYREF
  char v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  _QWORD v13[6]; // [rsp+40h] [rbp-C0h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-80h] BYREF
  char *v16; // [rsp+A0h] [rbp-60h]
  __int64 v17; // [rsp+A8h] [rbp-58h]
  _QWORD *v18; // [rsp+B0h] [rbp-50h]
  __int64 v19; // [rsp+B8h] [rbp-48h]
  char *v20; // [rsp+C0h] [rbp-40h]
  _QWORD v21[19]; // [rsp+C8h] [rbp-38h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x86E8uLL, 0x74727044u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v13[1] = 0LL;
    v13[3] = 34536LL;
    v13[5] = 0LL;
    v13[0] = 0LL;
    v13[2] = PoolWithTag;
    v13[4] = 0LL;
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(v4 + 408))(v4, v13) >= 0 )
    {
      *(_QWORD *)&ActivityId.Data1 = 0LL;
      *(_QWORD *)ActivityId.Data4 = 0LL;
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C00A1888 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C00A1888, 0x400000000000uLL) )
        {
          v6 = 1;
          v16 = &v6;
          v18 = v21;
          v20 = (char *)(v3 + 8608);
          v21[1] = v3 + 8624;
          v21[3] = v3 + 8625;
          v11 = v3[8627];
          v21[5] = &v11;
          v12 = v3[8628];
          v21[7] = &v12;
          v7 = *((_BYTE *)v3 + 34504);
          v21[9] = &v7;
          v8 = *((_BYTE *)v3 + 34516);
          v21[11] = &v8;
          v9 = *((_BYTE *)v3 + 34520);
          v21[13] = &v9;
          v10 = *((_BYTE *)v3 + 34524);
          v21[15] = &v10;
          v21[17] = v3 + 8632;
          v17 = 1LL;
          v19 = 2LL;
          v21[0] = 64LL;
          v21[2] = 4LL;
          v21[4] = 4LL;
          v21[6] = 4LL;
          v21[8] = 4LL;
          v21[10] = 1LL;
          v21[12] = 1LL;
          v21[14] = 1LL;
          v21[16] = 1LL;
          v21[18] = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C00A1888, &unk_1C007403B, &ActivityId, v5, 0xEu, &pData);
        }
      }
    }
    ExFreePoolWithTag(v3, 0x74727044u);
  }
}
