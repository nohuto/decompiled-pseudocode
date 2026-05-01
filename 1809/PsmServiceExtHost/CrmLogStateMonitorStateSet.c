/*
 * XREFs of CrmLogStateMonitorStateSet @ 0x180032764
 * Callers:
 *     CrmStateMonitorStateSet @ 0x180032410 (CrmStateMonitorStateSet.c)
 *     CrmStateMonitorCPUUsageTimerCallback @ 0x1800324D0 (CrmStateMonitorCPUUsageTimerCallback.c)
 *     CrmStateMonitorSystemDiskUsageTimerCallback @ 0x180032620 (CrmStateMonitorSystemDiskUsageTimerCallback.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     CrmStateMonitorStateSizeGet @ 0x180032AB8 (CrmStateMonitorStateSizeGet.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStateSet(unsigned int *a1)
{
  unsigned __int16 v1; // ax
  int v2; // r9d
  __int64 v3; // r10
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // r10
  unsigned __int16 v7; // r11
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp-90h] BYREF
  void *v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+88h] [rbp-78h]
  int v19; // [rsp+8Ch] [rbp-74h]
  UUID *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  int *v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  _DWORD *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  __int64 v26; // [rsp+C0h] [rbp-40h]
  _DWORD v27[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  _DWORD *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 v32; // [rsp+F0h] [rbp-10h]
  _DWORD v33[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp+10h] BYREF
  UUID *v37; // [rsp+130h] [rbp+30h]
  __int64 v38; // [rsp+138h] [rbp+38h]
  int *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  _DWORD *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  __int64 v43; // [rsp+160h] [rbp+60h]
  _DWORD v44[2]; // [rsp+168h] [rbp+68h] BYREF
  __int64 *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]
  _DWORD *v47; // [rsp+180h] [rbp+80h]
  __int64 v48; // [rsp+188h] [rbp+88h]
  __int64 v49; // [rsp+190h] [rbp+90h]
  _DWORD v50[2]; // [rsp+198h] [rbp+98h] BYREF
  __int64 *v51; // [rsp+1A0h] [rbp+A0h]
  __int64 v52; // [rsp+1A8h] [rbp+A8h]

  v1 = CrmStateMonitorStateSizeGet(*a1);
  if ( v4 )
  {
    if ( dword_18009B128 > 5u )
    {
      LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_18009B128, 0x400000000000uLL);
      if ( (_BYTE)v1 )
      {
        v11 = *(_QWORD *)(v6 + 40);
        v12 = *(_QWORD *)(v6 + 32);
        v37 = &Uuid;
        v39 = &v9;
        v41 = v44;
        v43 = v6 + 16;
        v44[0] = v7;
        v50[0] = v7;
        v45 = &v11;
        v51 = &v12;
        v9 = v5;
        v38 = 16LL;
        v40 = 4LL;
        v42 = 2LL;
        v44[1] = 0;
        v46 = 8LL;
        v47 = v50;
        v48 = 2LL;
        v49 = v6;
        v50[1] = 0;
        v52 = 8LL;
        LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_18009B128, &unk_18008D49A, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
  else if ( dword_18009B128 > 5u )
  {
    v13 = *(_QWORD *)(v3 + 40);
    v14 = *(_QWORD *)(v3 + 32);
    v20 = &Uuid;
    v22 = &v10;
    v24 = v27;
    v26 = v3 + 16;
    v27[0] = v1;
    v33[0] = v1;
    v28 = &v13;
    v34 = &v14;
    v10 = v2;
    v21 = 16LL;
    v23 = 4LL;
    v25 = 2LL;
    v27[1] = 0;
    v29 = 8LL;
    v30 = v33;
    v31 = 2LL;
    v32 = v3;
    v33[1] = 0;
    v35 = 8LL;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_18009B130;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18008D1FE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18009B130;
    v17 = &unk_18008D209;
    UserData.Reserved = 2;
    v18 = 96;
    v19 = 1;
    LOBYTE(v1) = EventWriteTransfer(qword_18009B148, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
  }
  return v1;
}
