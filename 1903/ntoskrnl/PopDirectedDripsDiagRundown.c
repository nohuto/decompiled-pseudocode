/*
 * XREFs of PopDirectedDripsDiagRundown @ 0x1408B7F64
 * Callers:
 *     PopDirectedDripsNotify @ 0x140747380 (PopDirectedDripsNotify.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     _TlgKeywordOn @ 0x14008A6D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x1408B7C38 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x1408B7CA4 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 */

char PopDirectedDripsDiagRundown()
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int64 v2; // rbx
  unsigned int v3; // r11d
  unsigned int v4; // ecx
  unsigned int v5; // r8d
  unsigned int v6; // r8d
  unsigned int *v7; // rdi
  unsigned int v8; // edx
  UNICODE_STRING *p_DestinationString; // r13
  UNICODE_STRING *v10; // r15
  UNICODE_STRING *v11; // r14
  UNICODE_STRING *v12; // rsi
  int v13; // r9d
  unsigned __int16 *v14; // r10
  REGHANDLE v15; // r12
  BOOLEAN v16; // al
  int Length; // ecx
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  unsigned int v21; // r9d
  _QWORD *v22; // r10
  ULONGLONG v23; // rax
  int v24; // r8d
  _DWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  ULONGLONG v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  _BYTE v33[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v34; // [rsp+3Ch] [rbp-CCh] BYREF
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  int v36; // [rsp+44h] [rbp-C4h] BYREF
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  int v38; // [rsp+4Ch] [rbp-BCh] BYREF
  int v39; // [rsp+50h] [rbp-B8h] BYREF
  int v40; // [rsp+54h] [rbp-B4h] BYREF
  int v41; // [rsp+58h] [rbp-B0h] BYREF
  int v42; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v43; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h]
  __int64 v46; // [rsp+80h] [rbp-88h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  int *v48; // [rsp+A8h] [rbp-60h]
  __int64 v49; // [rsp+B0h] [rbp-58h]
  _DWORD *v50; // [rsp+B8h] [rbp-50h]
  __int64 v51; // [rsp+C0h] [rbp-48h]
  wchar_t *Buffer; // [rsp+C8h] [rbp-40h]
  _DWORD v53[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v54; // [rsp+D8h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-28h]
  wchar_t *v56; // [rsp+E8h] [rbp-20h]
  _DWORD v57[2]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD *v58; // [rsp+F8h] [rbp-10h]
  __int64 v59; // [rsp+100h] [rbp-8h]
  wchar_t *v60; // [rsp+108h] [rbp+0h]
  _DWORD v61[2]; // [rsp+110h] [rbp+8h] BYREF
  _DWORD *v62; // [rsp+118h] [rbp+10h]
  __int64 v63; // [rsp+120h] [rbp+18h]
  wchar_t *v64; // [rsp+128h] [rbp+20h]
  _DWORD v65[2]; // [rsp+130h] [rbp+28h] BYREF
  int *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]
  int *v68; // [rsp+148h] [rbp+40h]
  __int64 v69; // [rsp+150h] [rbp+48h]
  int *v70; // [rsp+158h] [rbp+50h]
  __int64 v71; // [rsp+160h] [rbp+58h]
  int *v72; // [rsp+168h] [rbp+60h]
  __int64 v73; // [rsp+170h] [rbp+68h]
  _DWORD *v74; // [rsp+178h] [rbp+70h]
  __int64 v75; // [rsp+180h] [rbp+78h]
  __int64 v76; // [rsp+188h] [rbp+80h]
  _DWORD v77[2]; // [rsp+190h] [rbp+88h] BYREF
  __int64 *v78; // [rsp+198h] [rbp+90h]
  __int64 v79; // [rsp+1A0h] [rbp+98h]
  _QWORD v80[28]; // [rsp+1A8h] [rbp+A0h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  _m_prefetchw(PopDirectedDripsState);
  v0 = PopDirectedDripsState[0];
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange(PopDirectedDripsState, v0, v0);
  }
  while ( v1 != v0 );
  if ( (v0 & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, &word_14078CDD0);
    v33[0] = PopWnfCsEnterScenarioId;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    v2 = PopDirectedDripsDiagList;
    v45 = PopDirectedDripsDiagList;
    if ( (__int64 *)PopDirectedDripsDiagList != &PopDirectedDripsDiagList )
    {
      v3 = 0;
      do
      {
        v34 = v3;
        v4 = v3;
        v5 = *(_DWORD *)(v2 + 128);
        if ( v5 )
        {
          PopDirectedDripsDiagCreateBlockerEntryULong((__int64)v80, (__int64)L"DFX Transition Count", v5);
          v4 = ++v34;
        }
        v6 = *(_DWORD *)(v2 + 132);
        if ( v6 )
        {
          PopDirectedDripsDiagCreateBlockerEntryULong((__int64)&v80[7 * v4], (__int64)L"PS4 Transition Count", v6);
          v4 = ++v34;
        }
        v7 = (unsigned int *)(v2 + 124);
        v8 = *(_DWORD *)(v2 + 124);
        if ( (_WORD)v8 )
        {
          PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v80[7 * v4], (__int64)L"Problem Device");
          v4 = ++v34;
          v8 = *v7;
        }
        if ( (v8 & 0x10000) != 0 )
        {
          PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v80[7 * v4], (__int64)L"Initiated PS4 Transition");
          ++v34;
          v8 = *v7;
        }
        v3 = 0;
        if ( (v8 & 0x40000) != 0 )
        {
          p_DestinationString = &DestinationString;
          if ( *(_QWORD *)(v2 + 48) )
            p_DestinationString = (UNICODE_STRING *)(v2 + 40);
          v10 = &DestinationString;
          if ( *(_QWORD *)(v2 + 64) )
            v10 = (UNICODE_STRING *)(v2 + 56);
          v11 = &DestinationString;
          if ( *(_QWORD *)(v2 + 80) )
            v11 = (UNICODE_STRING *)(v2 + 72);
          v12 = &DestinationString;
          if ( *(_QWORD *)(v2 + 96) )
            v12 = (UNICODE_STRING *)(v2 + 88);
          if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
          {
            LOBYTE(v35) = v33[0];
            v36 = *(_DWORD *)(v2 + 120);
            v37 = *(_DWORD *)(v2 + 128);
            v38 = *(_DWORD *)(v2 + 132);
            v48 = &v35;
            v50 = v53;
            Buffer = p_DestinationString->Buffer;
            v53[0] = p_DestinationString->Length;
            v54 = v57;
            v56 = v10->Buffer;
            v57[0] = v10->Length;
            v58 = v61;
            v60 = v11->Buffer;
            v61[0] = v11->Length;
            v62 = v65;
            v64 = v12->Buffer;
            v65[0] = v12->Length;
            v66 = &v36;
            v68 = &v37;
            v70 = &v38;
            v72 = &v39;
            v74 = v77;
            v76 = *((_QWORD *)v14 + 1);
            v77[0] = *v14;
            v78 = &v46;
            v39 = v13;
            v46 = 0x1000000LL;
            v49 = 1LL;
            v51 = 2LL;
            v53[1] = v3;
            v55 = 2LL;
            v57[1] = v3;
            v59 = 2LL;
            v61[1] = v3;
            v63 = 2LL;
            v65[1] = v3;
            v67 = 4LL;
            v69 = 4LL;
            v71 = 4LL;
            v73 = 4LL;
            v75 = 2LL;
            v77[1] = v3;
            v79 = 8LL;
            TlgWrite(&pCallbackContext, &unk_140391309, 0LL, 0LL, 0x12u, &pData);
            v3 = 0;
          }
          if ( PopDiagHandleRegistered != (_BYTE)v3 )
          {
            v15 = PopDiagHandle;
            v16 = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS);
            v3 = 0;
            if ( v16 )
            {
              *(_QWORD *)&PopDirectedDripsDiagEventData.Size = 1LL;
              PopDirectedDripsDiagEventData.Ptr = (ULONGLONG)v33;
              qword_140436E98 = 8LL;
              qword_140436E90 = v2 + 16;
              v40 = p_DestinationString->Length >> 1;
              qword_140436EA0 = (__int64)&v40;
              qword_140436EA8 = 4LL;
              Length = p_DestinationString->Length;
              qword_140436EB0 = (__int64)p_DestinationString->Buffer;
              dword_140436EB8 = Length;
              dword_140436EBC = 0;
              v41 = v10->Length >> 1;
              qword_140436EC0 = (__int64)&v41;
              qword_140436EC8 = 4LL;
              v18 = v10->Length;
              qword_140436ED0 = (__int64)v10->Buffer;
              dword_140436ED8 = v18;
              dword_140436EDC = 0;
              v42 = v11->Length >> 1;
              qword_140436EE0 = (__int64)&v42;
              qword_140436EE8 = 4LL;
              v19 = v11->Length;
              qword_140436EF0 = (__int64)v11->Buffer;
              dword_140436EF8 = v19;
              dword_140436EFC = 0;
              LODWORD(v43) = v12->Length >> 1;
              qword_140436F00 = (__int64)&v43;
              qword_140436F08 = 4LL;
              v20 = v12->Length;
              qword_140436F10 = (__int64)v12->Buffer;
              qword_140436F20 = v2 + 120;
              qword_140436F30 = v2 + 128;
              dword_140436F18 = v20;
              qword_140436F40 = v2 + 132;
              dword_140436F1C = 0;
              qword_140436F28 = 4LL;
              qword_140436F38 = 4LL;
              qword_140436F48 = 4LL;
              qword_140436F50 = v2 + 124;
              qword_140436F58 = 4LL;
              EtwWrite(v15, &POP_ETW_EVENT_DIRECTED_DRIPS_DEVICE_STATS, 0LL, 0xEu, &PopDirectedDripsDiagEventData);
              v3 = 0;
            }
          }
        }
        *(_QWORD *)(v2 + 128) = 0LL;
        *v7 = v3;
        v21 = v34;
        if ( v34 && PopDiagSleepStudyHandleRegistered != (_BYTE)v3 )
        {
          *(_QWORD *)&PopDirectedDripsDiagEventData.Size = 1LL;
          PopDirectedDripsDiagEventData.Ptr = (ULONGLONG)v33;
          qword_140436E90 = (__int64)&v34;
          qword_140436E98 = 4LL;
          v22 = v80;
          do
          {
            v23 = v22[1];
            v24 = 5 * v3;
            v25 = v22 + 2;
            ++v3;
            v26 = 2LL * (unsigned int)(v24 + 2);
            *(&PopDirectedDripsDiagEventData.Ptr + v26) = v2 + 24;
            *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v26) = 16LL;
            v27 = 2LL * (unsigned int)(v24 + 3);
            *(&PopDirectedDripsDiagEventData.Ptr + v27) = (ULONGLONG)v22;
            *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v27) = 4LL;
            v28 = 2LL * (unsigned int)(v24 + 4);
            *(&PopDirectedDripsDiagEventData.Ptr + v28) = v23;
            LODWORD(v23) = *(_DWORD *)v22;
            *(&PopDirectedDripsDiagEventData.Reserved + 2 * v28) = 0;
            *(&PopDirectedDripsDiagEventData.Size + 2 * v28) = 2 * v23;
            v29 = (ULONGLONG)v22 + 20;
            v22 += 7;
            v30 = 2LL * (unsigned int)(v24 + 5);
            *(&PopDirectedDripsDiagEventData.Ptr + v30) = (ULONGLONG)v25;
            *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v30) = 4LL;
            v31 = 2LL * (unsigned int)(v24 + 6);
            *(&PopDirectedDripsDiagEventData.Ptr + v31) = v29;
            *((_QWORD *)&PopDirectedDripsDiagEventData.Size + v31) = (unsigned int)(2 * *v25);
          }
          while ( v3 < v21 );
          v2 = v45;
          EtwWrite(
            PopDiagSleepStudyHandle,
            &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA,
            0LL,
            5 * v21 + 2,
            &PopDirectedDripsDiagEventData);
          v3 = 0;
        }
        v2 = *(_QWORD *)v2;
        v45 = v2;
      }
      while ( (__int64 *)v2 != &PopDirectedDripsDiagList );
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopDirectedDripsDiagLock);
    LOBYTE(v0) = KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return v0;
}
