/*
 * XREFs of ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAXE@Z @ 0x1C0242374
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C02434B0 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0ujqzr2jx @ 0x1C004291C (McTemplateK0ujqzr2jx.c)
 *     ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAGII@Z @ 0x1C0242180 (-EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAGII@Z.c)
 *     ?EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@AEAAXEPEAGI_KPEAX@Z @ 0x1C0242804 (-EmitSleepStudyBlockerMetadataEvent@DripsBlockerTrackingHelper@@AEAAXEPEAGI_KPEAX@Z.c)
 *     ?EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAU_UNICODE_STRING@@I@Z @ 0x1C0242974 (-EmitSleepStudyBlockerTelemetry@DripsBlockerTrackingHelper@@AEAAXEAEB_KPEAU_UNICODE_STRING@@I@Z.c)
 *     ?EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@AEAAXE@Z @ 0x1C0242B1C (-EmitSleepStudyTotalTimeModernStandbyTelemetry@DripsBlockerTrackingHelper@@AEAAXE@Z.c)
 *     ?EtwProfilerTypeName@DXGGLOBAL@@SAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z @ 0x1C0298BF4 (-EtwProfilerTypeName@DXGGLOBAL@@SAPEAGW4_DXGKETW_PROFILER_TYPE@@PEAI@Z.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerDataEvents(
        DripsBlockerTrackingHelper *this,
        unsigned __int8 a2)
{
  DripsBlockerTrackingHelper *v3; // r15
  const char *v4; // r13
  unsigned int v5; // r14d
  char *v6; // rbx
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  ULONGLONG Value; // rax
  DripsBlockerTrackingHelper *v14; // rcx
  unsigned __int64 v15; // r8
  ULONGLONG v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r15
  DripsBlockerTrackingHelper *v20; // r13
  __int64 v21; // rax
  DripsBlockerTrackingHelper *v22; // rcx
  const GUID *v23; // r8
  unsigned __int16 *v24; // r12
  ULONGLONG v25; // rax
  __int64 v26; // r8
  __int64 v27; // rdx
  ULONGLONG v28; // rax
  ULONGLONG v29; // rax
  unsigned __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  DripsBlockerTrackingHelper *v31; // [rsp+58h] [rbp-A8h]
  struct _UNICODE_STRING v32; // [rsp+60h] [rbp-A0h] BYREF
  const char *v33; // [rsp+70h] [rbp-90h]
  struct _STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  GUID ActivityId; // [rsp+88h] [rbp-78h] BYREF
  GUID v36; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v37[3]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v38[80]; // [rsp+C0h] [rbp-40h] BYREF

  v31 = this;
  v3 = this;
  memset(v38, 0, 0x42uLL);
  *(_QWORD *)&v32.Length = 4325376LL;
  v32.Buffer = (wchar_t *)v38;
  *(_QWORD *)&v36.Data1 = 0LL;
  *(_QWORD *)v36.Data4 = 0LL;
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  v37[0] = 0LL;
  v37[1] = 0LL;
  DripsBlockerTrackingHelper::EmitSleepStudyTotalTimeModernStandbyTelemetry(v3, a2);
  v4 = (char *)v3 + 8;
  v5 = 0;
  v33 = (char *)v3 + 8;
  v6 = (char *)v3 + 64;
  do
  {
    if ( v6[36] )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      RtlInitAnsiString(&DestinationString, v4);
      v7 = RtlAnsiStringToUnicodeString(&v32, &DestinationString, 0);
      v11 = v7;
      if ( v7 >= 0 )
      {
        v37[0] = *((_QWORD *)v6 - 8);
        *(_QWORD *)ActivityId.Data4 = (v5 << 6) + v37[0] + 1LL;
        if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
          McTemplateK0ujqzr2jx(
            (v32.Length >> 1) + 1,
            v8,
            v10,
            a2,
            (__int64)v37,
            (v32.Length >> 1) + 1,
            (__int64)v32.Buffer,
            (__int64)&ActivityId,
            *v6 + v6[8] + *(v6 - 8) + v6[16]);
        Value = *((unsigned int *)v6 + 7);
        if ( (_DWORD)Value )
          DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
            (DripsBlockerTrackingHelper *)&ActivityId,
            a2,
            L"Count of core access locks",
            0x1Bu,
            Value,
            &ActivityId);
        v14 = (DripsBlockerTrackingHelper *)*((_QWORD *)v6 - 2);
        if ( (unsigned __int64)v14 >= 0x2710 )
          DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
            v14,
            a2,
            L"GPU Total Time(ms)",
            0x13u,
            (unsigned __int64)v14 / 0x2710,
            &ActivityId);
        v15 = *((_QWORD *)v6 + 1);
        if ( v15 >= 0x2710 || *((_QWORD *)v6 + 2) >= 0x2710uLL )
          DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
            (DripsBlockerTrackingHelper *)(v15 / 0x2710 + *((_QWORD *)v6 + 2) / 0x2710uLL),
            a2,
            L"D0 Total Lag Time(ms)",
            0x16u,
            v15 / 0x2710 + *((_QWORD *)v6 + 2) / 0x2710uLL,
            &ActivityId);
        v16 = *((unsigned int *)v6 + 6);
        if ( (_DWORD)v16 )
          DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
            (DripsBlockerTrackingHelper *)&ActivityId,
            a2,
            L"Count of D3 wake ups",
            0x15u,
            v16,
            &ActivityId);
        v30 = *(_QWORD *)ActivityId.Data4;
        DripsBlockerTrackingHelper::EmitSleepStudyBlockerTelemetry(v3, a2, &v30, &v32, v5);
        v19 = 0LL;
        if ( *((_DWORD *)v6 - 5) )
        {
          v20 = v31;
          do
          {
            LODWORD(v30) = 0;
            DXGGLOBAL::GetGlobal(v18, v17);
            v21 = DXGGLOBAL::EtwProfilerTypeName(*(unsigned int *)&v6[72 * v19 + 108], &v30);
            v24 = (unsigned __int16 *)v21;
            *(_QWORD *)v36.Data4 = (char *)&v23->Data1 + *(_QWORD *)ActivityId.Data4 + 1;
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
              McTemplateK0ujqzr2jx(
                *(_QWORD *)&v6[72 * v19 + 64]
              + *(_QWORD *)&v6[72 * v19 + 72]
              + *(_QWORD *)&v6[72 * v19 + 88]
              + *(_QWORD *)&v6[72 * v19 + 96],
                (__int64)&v23->Data1 + *(_QWORD *)ActivityId.Data4 + 1,
                v23,
                a2,
                (__int64)&ActivityId,
                v30,
                v21,
                (__int64)&v36,
                v6[72 * v19 + 64] + v6[72 * v19 + 72] + v6[72 * v19 + 88] + v6[72 * v19 + 96]);
            v25 = *(unsigned int *)&v6[72 * v19 + 84];
            if ( (_DWORD)v25 )
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                (DripsBlockerTrackingHelper *)&v36,
                a2,
                L"Count of core access locks",
                0x1Bu,
                v25,
                &v36);
            v26 = *(_QWORD *)&v6[72 * v19 + 88] / 10000LL;
            if ( v26 > 0 || (v27 = *(_QWORD *)&v6[72 * v19 + 96] / 10000LL, v27 > 0) )
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                v22,
                a2,
                L"D0 Lag Time(ms)",
                0x10u,
                v26 + *(_QWORD *)&v6[72 * v19 + 96] / 10000LL,
                &v36);
            v28 = *(unsigned int *)&v6[72 * v19 + 104];
            if ( (_DWORD)v28 )
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                (DripsBlockerTrackingHelper *)&v36,
                a2,
                L"Count of D3 wake ups",
                0x15u,
                v28,
                &v36);
            v29 = *(unsigned int *)&v6[72 * v19 + 112];
            if ( (_DWORD)v29 )
              DripsBlockerTrackingHelper::EmitSleepStudyBlockerMetadataEvent(
                (DripsBlockerTrackingHelper *)&v36,
                a2,
                L"Count of DFx blocks",
                0x14u,
                v29,
                &v36);
            LOBYTE(v27) = a2;
            v30 = *(_QWORD *)ActivityId.Data4;
            DripsBlockerTrackingHelper::EmitSleepStudyBlockerActivationTelemetry(v20, v27, &v30, v24, v5, v19);
            v19 = (unsigned int)(v19 + 1);
          }
          while ( (unsigned int)v19 < *((_DWORD *)v6 - 5) );
          v4 = v33;
        }
        v3 = v31;
      }
      else
      {
        v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
        *(_QWORD *)(v12 + 24) = v11;
        WdLogEvent5_WdWarning(v12);
      }
    }
    v4 += 4720;
    ++v5;
    v6 += 4720;
    v33 = v4;
  }
  while ( v5 < 0x40 );
}
