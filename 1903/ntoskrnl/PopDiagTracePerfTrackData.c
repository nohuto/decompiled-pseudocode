/*
 * XREFs of PopDiagTracePerfTrackData @ 0x140724B94
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     PopReadRegKeyValue @ 0x140180B5C (PopReadRegKeyValue.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopQpcTimeInMs @ 0x1405960BC (PopQpcTimeInMs.c)
 *     PopComputeDerivedHiberStats @ 0x1407250CC (PopComputeDerivedHiberStats.c)
 */

char __fastcall PopDiagTracePerfTrackData(__int16 a1)
{
  char result; // al
  unsigned __int64 v3; // rdi
  int v4; // ecx
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // ecx
  unsigned __int64 v12; // rax
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *p_Reserved; // rcx
  __int64 v14; // r8
  __int64 *v15; // rdx
  const EVENT_DESCRIPTOR *v16; // rdx
  unsigned int v17; // r14d
  unsigned __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  int v21; // ecx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int16 v24; // cx
  union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *v25; // rcx
  __int64 v26; // r8
  __int64 *v27; // rdx
  int v28; // [rsp+38h] [rbp-89h] BYREF
  int v29; // [rsp+3Ch] [rbp-85h] BYREF
  int v30; // [rsp+40h] [rbp-81h] BYREF
  int v31; // [rsp+44h] [rbp-7Dh] BYREF
  int v32; // [rsp+48h] [rbp-79h] BYREF
  __int64 v33; // [rsp+50h] [rbp-71h] BYREF
  int v34; // [rsp+58h] [rbp-69h] BYREF
  int v35; // [rsp+5Ch] [rbp-65h] BYREF
  int v36; // [rsp+60h] [rbp-61h] BYREF
  int v37; // [rsp+64h] [rbp-5Dh] BYREF
  __int64 v38; // [rsp+68h] [rbp-59h] BYREF
  __int64 v39; // [rsp+70h] [rbp-51h]
  __int64 v40; // [rsp+78h] [rbp-49h] BYREF
  __int64 v41; // [rsp+80h] [rbp-41h]
  __int64 v42; // [rsp+88h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-29h] BYREF
  int *v44; // [rsp+A8h] [rbp-19h]
  __int64 v45; // [rsp+B0h] [rbp-11h]
  int *v46; // [rsp+B8h] [rbp-9h]
  __int64 v47; // [rsp+C0h] [rbp-1h]
  int *v48; // [rsp+C8h] [rbp+7h]
  __int64 v49; // [rsp+D0h] [rbp+Fh]
  int *v50; // [rsp+D8h] [rbp+17h]
  __int64 v51; // [rsp+E0h] [rbp+1Fh]

  result = 0;
  v38 = 0LL;
  v39 = 0LL;
  v33 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_TRANSITIONTIMES);
    if ( result )
    {
      v3 = 1000LL * *(unsigned int *)(KeGetPrcb(0) + 68);
      v35 = PopQpcTimeInMs(&qword_140443540, &qword_140443548);
      v34 = PopQpcTimeInMs(&qword_140443530, &qword_140443538);
      if ( qword_140443528 )
      {
        v33 = 0LL;
        v30 = PopQpcTimeInMs(&v33, &qword_140443528);
        v28 = v30 + PopQpcTimeInMs(&qword_140443508, &qword_140443510);
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&qword_1404436E8;
        v44 = &v28;
        v46 = &v30;
        v48 = &v34;
        v50 = &v35;
        v45 = 4LL;
        v47 = 4LL;
        v49 = 4LL;
        v51 = 4LL;
        return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_STANDBY, 0LL, 5u, &UserData);
      }
      result = dword_140443730;
      if ( dword_140443730 )
      {
        v4 = qword_140443598;
        v31 = (4 * dword_140443730) & 0x3FFFFF;
        v37 = qword_140443598;
        v32 = qword_140443570 / v3;
        result = qword_140443740;
        v28 = qword_140443740;
        if ( (a1 & 8) != 0 )
        {
          if ( !PopShutdownButtonPressTime )
            return result;
          v29 = PopQpcTimeInMs(&PopShutdownButtonPressTime, &qword_1404434E8) + v4;
          if ( (int)PopReadRegKeyValue(
                      L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Winlogon",
                      L"LastLogOffEndTimePerfCounter",
                      8uLL,
                      0,
                      &v33) < 0 )
            v5 = 0;
          else
            v5 = PopQpcTimeInMs(&v33, &qword_1404435A0);
          v36 = v5;
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&v31;
          v45 = 4LL;
          v44 = &v29;
          v47 = 4LL;
          v46 = &v32;
          v48 = &v36;
          v49 = 4LL;
          EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HYBRID_SHUTDOWN, 0LL, 4u, &UserData);
          PopComputeDerivedHiberStats(&qword_140443558, v3, &v38);
          LODWORD(v40) = v28;
          v6 = (unsigned __int64)qword_140443718 >> 8;
          HIWORD(v40) = -1;
          if ( (unsigned __int64)qword_140443718 >> 8 > 0x7FFF )
            LOWORD(v6) = 0x7FFF;
          WORD2(v40) = v6 & 0x7FFF;
          if ( (unsigned __int64)qword_140443720 >> 8 <= 0xFFFF )
            HIWORD(v40) = (unsigned int)qword_140443720 >> 8;
          LOWORD(v41) = -1;
          if ( qword_1404435B8 / v3 <= 0xFFFF )
            LOWORD(v41) = qword_1404435B8 / v3;
          WORD1(v41) = -1;
          if ( qword_1404436A8 / v3 <= 0xFFFF )
            WORD1(v41) = qword_1404436A8 / v3;
          WORD2(v41) = -1;
          if ( (unsigned int)qword_1404435A8 <= 0xFFFF )
            WORD2(v41) = qword_1404435A8;
          HIWORD(v41) = -1;
          if ( (unsigned int)qword_1404436E8 <= 0xFFFF )
            HIWORD(v41) = qword_1404436E8;
          v7 = HIDWORD(v38);
          HIWORD(v42) = -1;
          if ( HIDWORD(v38) > 0x3FF )
            v7 = 1023;
          v8 = HIDWORD(v39);
          if ( HIDWORD(v39) > 0x1FF )
            v8 = 511;
          v9 = v7 ^ (v7 ^ (v8 << 10)) & 0x7FC00;
          v10 = (qword_140443638 - qword_140443670) / v3;
          if ( v10 > 0x1FFF )
            LODWORD(v10) = 0x1FFF;
          v11 = ((_DWORD)v10 << 19) | v9 & 0x7FFFF;
          v12 = (unsigned __int64)qword_1404436F8 >> 8;
          LODWORD(v42) = v11;
          if ( (unsigned __int64)qword_1404436F8 >> 8 > 0x7FFF )
            LOWORD(v12) = 0x7FFF;
          WORD2(v42) = v12 & 0x7FFF;
          if ( (unsigned __int64)qword_140443700 >> 8 <= 0xFFFF )
            HIWORD(v42) = (unsigned int)qword_140443700 >> 8;
          p_Reserved = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
          v14 = 6LL;
          v15 = &v40;
          do
          {
            *(_QWORD *)&p_Reserved[-3].Reserved = v15;
            v15 = (__int64 *)((char *)v15 + 4);
            *(_QWORD *)&p_Reserved[-1].Reserved = 4LL;
            p_Reserved += 4;
            --v14;
          }
          while ( v14 );
          v16 = (const EVENT_DESCRIPTOR *)&POP_ETW_EVENT_PERFTRACK_HYBRID_RESUME;
          return EtwWrite(PopDiagHandle, v16, 0LL, 6u, &UserData);
        }
        UserData.Ptr = (ULONGLONG)&v31;
        v44 = &v37;
        *(_QWORD *)&UserData.Size = 4LL;
        v46 = &v32;
        v45 = 4LL;
        v47 = 4LL;
        result = EtwWrite(PopDiagHandle, &POP_ETW_EVENT_PERFTRACK_HIBERNATE, 0LL, 3u, &UserData);
        v17 = qword_1404435A8;
        if ( (_DWORD)qword_1404435A8 )
        {
          PopComputeDerivedHiberStats(&qword_140443558, v3, &v38);
          LODWORD(v40) = v28;
          v18 = (unsigned __int64)qword_140443718 >> 8;
          if ( (unsigned __int64)qword_140443718 >> 8 > 0x7FFF )
            LOWORD(v18) = 0x7FFF;
          WORD2(v40) = (a1 << 10) ^ (v18 ^ (a1 << 10)) & 0x7FFF;
          HIWORD(v40) = (unsigned int)qword_140443720 >> 8;
          if ( (unsigned __int64)qword_140443720 >> 8 >= 0xFFFF )
            HIWORD(v40) = -1;
          LOWORD(v41) = qword_1404435B8 / v3;
          if ( qword_1404435B8 / v3 >= 0xFFFF )
            LOWORD(v41) = -1;
          WORD1(v41) = qword_1404436A8 / v3;
          if ( qword_1404436A8 / v3 >= 0xFFFF )
            WORD1(v41) = -1;
          WORD2(v41) = v17;
          if ( v17 >= 0xFFFF )
            WORD2(v41) = -1;
          HIWORD(v41) = qword_1404436E8;
          if ( (unsigned int)qword_1404436E8 >= 0xFFFF )
            HIWORD(v41) = -1;
          v19 = HIDWORD(v38);
          if ( HIDWORD(v38) > 0x3FF )
            v19 = 1023;
          v20 = HIDWORD(v39);
          if ( HIDWORD(v39) > 0x1FF )
            v20 = 511;
          v21 = v19 ^ (v19 ^ (v20 << 10)) & 0x7FC00;
          v22 = (qword_140443638 - qword_140443670) / v3;
          if ( v22 > 0x1FFF )
            LODWORD(v22) = 0x1FFF;
          LODWORD(v42) = v21 & 0x7FFFF | ((_DWORD)v22 << 19);
          v23 = (unsigned __int64)qword_1404436F8 >> 8;
          if ( (unsigned __int64)qword_1404436F8 >> 8 > 0x7FFF )
            LOWORD(v23) = 0x7FFF;
          if ( PopEnableMinimalHiberFile )
            v24 = 0x8000;
          else
            v24 = 0;
          WORD2(v42) = v24 | v23 & 0x7FFF;
          HIWORD(v42) = (unsigned int)qword_140443700 >> 8;
          if ( (unsigned __int64)qword_140443700 >> 8 >= 0xFFFF )
            HIWORD(v42) = -1;
          v25 = (union _EVENT_DATA_DESCRIPTOR::$535316677C6A15A6ECBA40D88E1D787B *)&UserData.Reserved;
          v26 = 6LL;
          v27 = &v40;
          do
          {
            *(_QWORD *)&v25[-3].Reserved = v27;
            v27 = (__int64 *)((char *)v27 + 4);
            *(_QWORD *)&v25[-1].Reserved = 4LL;
            v25 += 4;
            --v26;
          }
          while ( v26 );
          v16 = &POP_ETW_EVENT_PERFTRACK_RESUME_FROM_HIBERNATE;
          return EtwWrite(PopDiagHandle, v16, 0LL, 6u, &UserData);
        }
      }
    }
  }
  return result;
}
