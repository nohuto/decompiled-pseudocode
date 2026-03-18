/*
 * XREFs of PopDiagTracePerfTrackData @ 0x1406DD510
 * Callers:
 *     PopIssueActionRequest @ 0x1406DE870 (PopIssueActionRequest.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     KeGetPrcb @ 0x1400A62A4 (KeGetPrcb.c)
 *     EtwWrite @ 0x1400CAD00 (EtwWrite.c)
 *     PopReadRegKeyValue @ 0x140190C88 (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     PopQpcTimeInMs @ 0x140566420 (PopQpcTimeInMs.c)
 *     PopComputeDerivedHiberStats @ 0x1406DD9FC (PopComputeDerivedHiberStats.c)
 */

char __fastcall PopDiagTracePerfTrackData(__int16 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 v3; // rdi
  int v4; // ecx
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rcx
  __int64 v13; // r8
  int *v14; // rdx
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned int v16; // r14d
  unsigned __int64 v17; // rcx
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int16 v23; // cx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v24; // rcx
  __int64 v25; // r8
  int *v26; // rdx
  int v28; // [rsp+38h] [rbp-79h] BYREF
  int v29; // [rsp+3Ch] [rbp-75h] BYREF
  int v30; // [rsp+40h] [rbp-71h] BYREF
  int v31; // [rsp+44h] [rbp-6Dh] BYREF
  int v32; // [rsp+48h] [rbp-69h] BYREF
  __int64 v33; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-55h]
  int v35; // [rsp+60h] [rbp-51h] BYREF
  int v36; // [rsp+64h] [rbp-4Dh] BYREF
  int v37; // [rsp+68h] [rbp-49h] BYREF
  int v38; // [rsp+6Ch] [rbp-45h] BYREF
  int v39; // [rsp+70h] [rbp-41h] BYREF
  __int16 v40; // [rsp+74h] [rbp-3Dh]
  __int16 v41; // [rsp+76h] [rbp-3Bh]
  __int16 v42; // [rsp+78h] [rbp-39h]
  __int16 v43; // [rsp+7Ah] [rbp-37h]
  __int16 v44; // [rsp+7Ch] [rbp-35h]
  __int16 v45; // [rsp+7Eh] [rbp-33h]
  int v46; // [rsp+80h] [rbp-31h]
  __int16 v47; // [rsp+84h] [rbp-2Dh]
  __int16 v48; // [rsp+86h] [rbp-2Bh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-29h] BYREF
  int *v50; // [rsp+98h] [rbp-19h]
  __int64 v51; // [rsp+A0h] [rbp-11h]
  int *v52; // [rsp+A8h] [rbp-9h]
  __int64 v53; // [rsp+B0h] [rbp-1h]
  int *v54; // [rsp+B8h] [rbp+7h]
  __int64 v55; // [rsp+C0h] [rbp+Fh]
  int *v56; // [rsp+C8h] [rbp+17h]
  __int64 v57; // [rsp+D0h] [rbp+1Fh]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( PopDiagHandleRegistered )
  {
    LOBYTE(v1) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( (_BYTE)v1 )
    {
      v3 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
      v36 = PopQpcTimeInMs(&qword_140417B80, &qword_140417B88);
      v35 = PopQpcTimeInMs(&qword_140417B70, &qword_140417B78);
      if ( qword_140417B68 )
      {
        v33 = 0LL;
        v30 = PopQpcTimeInMs(&v33, &qword_140417B68);
        v28 = v30 + PopQpcTimeInMs(&qword_140417B48, &qword_140417B50);
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&dword_140417D28;
        v50 = &v28;
        v52 = &v30;
        v54 = &v35;
        v56 = &v36;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        v57 = 4LL;
        LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_STANDBY, 0LL, 5u, &UserData);
      }
      else
      {
        LOBYTE(v1) = dword_140417D70;
        if ( dword_140417D70 )
        {
          v4 = qword_140417BD8;
          v31 = (4 * dword_140417D70) & 0x3FFFFF;
          v38 = qword_140417BD8;
          v32 = qword_140417BB0 / v3;
          LOBYTE(v1) = qword_140417D80;
          v28 = qword_140417D80;
          if ( (a1 & 8) != 0 )
          {
            if ( !PopShutdownButtonPressTime )
              return (char)v1;
            v29 = PopQpcTimeInMs(&PopShutdownButtonPressTime, &qword_140417B28) + v4;
            if ( (int)PopReadRegKeyValue(
                        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                        L"LastLogOffEndTimePerfCounter",
                        8uLL,
                        0,
                        &v33) < 0 )
              v5 = 0;
            else
              v5 = PopQpcTimeInMs(&v33, &qword_140417BE0);
            v37 = v5;
            *(_QWORD *)&UserData.Size = 4LL;
            UserData.Ptr = (ULONGLONG)&v31;
            v51 = 4LL;
            v50 = &v29;
            v53 = 4LL;
            v52 = &v32;
            v54 = &v37;
            v55 = 4LL;
            EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN, 0LL, 4u, &UserData);
            PopComputeDerivedHiberStats(&qword_140417B98, v3, &v33);
            v39 = v28;
            v6 = (unsigned __int64)qword_140417D58 >> 8;
            v41 = -1;
            if ( (unsigned __int64)qword_140417D58 >> 8 > 0x7FFF )
              LOWORD(v6) = 0x7FFF;
            v40 = v6 & 0x7FFF;
            if ( (unsigned __int64)qword_140417D60 >> 8 <= 0xFFFF )
              v41 = (unsigned int)qword_140417D60 >> 8;
            v42 = -1;
            if ( qword_140417BF8 / v3 <= 0xFFFF )
              v42 = qword_140417BF8 / v3;
            v43 = -1;
            if ( qword_140417CE8 / v3 <= 0xFFFF )
              v43 = qword_140417CE8 / v3;
            v44 = -1;
            if ( (unsigned int)qword_140417BE8 <= 0xFFFF )
              v44 = qword_140417BE8;
            v45 = -1;
            if ( (unsigned int)dword_140417D28 <= 0xFFFF )
              v45 = dword_140417D28;
            v7 = HIDWORD(v33);
            v48 = -1;
            if ( HIDWORD(v33) > 0x3FF )
              v7 = 1023;
            v8 = v34;
            if ( v34 > 0x1FF )
              v8 = 511;
            v9 = v7 ^ (v7 ^ (v8 << 10)) & 0x7FC00;
            v10 = (qword_140417C78 - qword_140417CB0) / v3;
            if ( v10 > 0x1FFF )
              LODWORD(v10) = 0x1FFF;
            v46 = v9 & 0x7FFFF | ((_DWORD)v10 << 19);
            v11 = (unsigned __int64)qword_140417D38 >> 8;
            if ( (unsigned __int64)qword_140417D38 >> 8 > 0x7FFF )
              LOWORD(v11) = 0x7FFF;
            v47 = v11 & 0x7FFF;
            if ( (unsigned __int64)qword_140417D40 >> 8 <= 0xFFFF )
              v48 = (unsigned int)qword_140417D40 >> 8;
            p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v13 = 6LL;
            v14 = &v39;
            do
            {
              *(_QWORD *)&p_Reserved[-3].Reserved = v14++;
              *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
              p_Reserved += 4;
              --v13;
            }
            while ( v13 );
            v15 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_PERFTRACK_HYBRID_RESUME;
          }
          else
          {
            UserData.Ptr = (ULONGLONG)&v31;
            v50 = &v38;
            *(_QWORD *)&UserData.Size = 4LL;
            v52 = &v32;
            v51 = 4LL;
            v53 = 4LL;
            LOBYTE(v1) = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HIBERNATE, 0LL, 3u, &UserData);
            v16 = qword_140417BE8;
            if ( !(_DWORD)qword_140417BE8 )
              return (char)v1;
            PopComputeDerivedHiberStats(&qword_140417B98, v3, &v33);
            v39 = v28;
            v17 = (unsigned __int64)qword_140417D58 >> 8;
            if ( (unsigned __int64)qword_140417D58 >> 8 > 0x7FFF )
              LOWORD(v17) = 0x7FFF;
            v40 = (a1 << 10) ^ (v17 ^ (a1 << 10)) & 0x7FFF;
            v41 = (unsigned int)qword_140417D60 >> 8;
            if ( (unsigned __int64)qword_140417D60 >> 8 >= 0xFFFF )
              v41 = -1;
            v42 = qword_140417BF8 / v3;
            if ( qword_140417BF8 / v3 >= 0xFFFF )
              v42 = -1;
            v43 = qword_140417CE8 / v3;
            if ( qword_140417CE8 / v3 >= 0xFFFF )
              v43 = -1;
            v44 = v16;
            if ( v16 >= 0xFFFF )
              v44 = -1;
            v45 = dword_140417D28;
            if ( (unsigned int)dword_140417D28 >= 0xFFFF )
              v45 = -1;
            v18 = HIDWORD(v33);
            if ( HIDWORD(v33) > 0x3FF )
              v18 = 1023;
            v19 = v34;
            if ( v34 > 0x1FF )
              v19 = 511;
            v20 = v18 ^ (v18 ^ (v19 << 10)) & 0x7FC00;
            v21 = (qword_140417C78 - qword_140417CB0) / v3;
            if ( v21 > 0x1FFF )
              LODWORD(v21) = 0x1FFF;
            v46 = v20 & 0x7FFFF | ((_DWORD)v21 << 19);
            v22 = (unsigned __int64)qword_140417D38 >> 8;
            if ( (unsigned __int64)qword_140417D38 >> 8 > 0x7FFF )
              LOWORD(v22) = 0x7FFF;
            if ( PopEnableMinimalHiberFile )
              v23 = 0x8000;
            else
              v23 = 0;
            v47 = v23 | v22 & 0x7FFF;
            v48 = (unsigned int)qword_140417D40 >> 8;
            if ( (unsigned __int64)qword_140417D40 >> 8 >= 0xFFFF )
              v48 = -1;
            v24 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
            v25 = 6LL;
            v26 = &v39;
            do
            {
              *(_QWORD *)&v24[-3].Reserved = v26++;
              *(_QWORD *)&v24[-1].Reserved = 4LL;
              v24 += 4;
              --v25;
            }
            while ( v25 );
            v15 = &POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
          }
          LOBYTE(v1) = EtwWrite(PopDiagHandle, v15, 0LL, 6u, &UserData);
        }
      }
    }
  }
  return (char)v1;
}
