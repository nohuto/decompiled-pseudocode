/*
 * XREFs of PopDirectedDripsDiagRundown @ 0x14087CBB0
 * Callers:
 *     PopDirectedDripsNotify @ 0x14071F9E8 (PopDirectedDripsNotify.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopDirectedDripsDiagCreateBlockerEntryBoolean @ 0x14087C918 (PopDirectedDripsDiagCreateBlockerEntryBoolean.c)
 *     PopDirectedDripsDiagCreateBlockerEntryULong @ 0x14087C984 (PopDirectedDripsDiagCreateBlockerEntryULong.c)
 */

__int64 PopDirectedDripsDiagRundown()
{
  __int64 result; // rax
  int v1; // ett
  __int64 i; // rbx
  unsigned int v3; // ecx
  unsigned int v4; // r8d
  unsigned int v5; // r8d
  int v6; // edx
  UNICODE_STRING *p_DestinationString; // rsi
  UNICODE_STRING *v8; // rdi
  int v9; // r9d
  unsigned __int16 *v10; // r10
  unsigned __int16 *v11; // r11
  unsigned int v12; // r9d
  unsigned int v13; // r11d
  _QWORD *v14; // r10
  ULONGLONG v15; // rax
  int v16; // r8d
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  ULONGLONG v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  char v24; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  int v28; // [rsp+48h] [rbp-C0h] BYREF
  int v29; // [rsp+4Ch] [rbp-BCh] BYREF
  int v30; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  _DWORD *v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  wchar_t *Buffer; // [rsp+A8h] [rbp-60h]
  _DWORD v38[2]; // [rsp+B0h] [rbp-58h] BYREF
  _DWORD *v39; // [rsp+B8h] [rbp-50h]
  __int64 v40; // [rsp+C0h] [rbp-48h]
  wchar_t *v41; // [rsp+C8h] [rbp-40h]
  _DWORD v42[2]; // [rsp+D0h] [rbp-38h] BYREF
  _DWORD *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  __int64 v45; // [rsp+E8h] [rbp-20h]
  _DWORD v46[2]; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  __int64 v49; // [rsp+108h] [rbp+0h]
  _DWORD v50[2]; // [rsp+110h] [rbp+8h] BYREF
  int *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  int *v53; // [rsp+128h] [rbp+20h]
  __int64 v54; // [rsp+130h] [rbp+28h]
  int *v55; // [rsp+138h] [rbp+30h]
  __int64 v56; // [rsp+140h] [rbp+38h]
  int *v57; // [rsp+148h] [rbp+40h]
  __int64 v58; // [rsp+150h] [rbp+48h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+158h] [rbp+50h] BYREF
  unsigned int *v60; // [rsp+168h] [rbp+60h]
  __int64 v61; // [rsp+170h] [rbp+68h]
  _QWORD v62[28]; // [rsp+2B8h] [rbp+1B0h] BYREF

  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState;
  do
  {
    v1 = result;
    result = (unsigned int)_InterlockedCompareExchange(&PopDirectedDripsState, result, result);
  }
  while ( v1 != (_DWORD)result );
  if ( (result & 1) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, &word_140767740);
    v24 = PopWnfCsEnterScenarioId;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    for ( i = PopDirectedDripsDiagList; (__int64 *)i != &PopDirectedDripsDiagList; i = *(_QWORD *)i )
    {
      v25 = 0;
      v3 = 0;
      v4 = *(_DWORD *)(i + 112);
      if ( v4 )
      {
        PopDirectedDripsDiagCreateBlockerEntryULong((__int64)v62, (__int64)L"DFX Transition Count", v4);
        v3 = ++v25;
      }
      v5 = *(_DWORD *)(i + 116);
      if ( v5 )
      {
        PopDirectedDripsDiagCreateBlockerEntryULong((__int64)&v62[7 * v3], (__int64)L"PS4 Transition Count", v5);
        v3 = ++v25;
      }
      v6 = *(_DWORD *)(i + 108);
      if ( (_WORD)v6 )
      {
        PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v62[7 * v3], (__int64)L"Problem Device");
        v3 = ++v25;
        v6 = *(_DWORD *)(i + 108);
      }
      if ( (v6 & 0x10000) != 0 )
      {
        PopDirectedDripsDiagCreateBlockerEntryBoolean((__int64)&v62[7 * v3], (__int64)L"Initiated PS4 Transition");
        ++v25;
        v6 = *(_DWORD *)(i + 108);
      }
      if ( (v6 & 0x40000) != 0 )
      {
        p_DestinationString = &DestinationString;
        if ( *(_QWORD *)(i + 48) )
          p_DestinationString = (UNICODE_STRING *)(i + 40);
        v8 = &DestinationString;
        if ( *(_QWORD *)(i + 64) )
          v8 = (UNICODE_STRING *)(i + 56);
        if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
        {
          LOBYTE(v26) = v24;
          v27 = *(_DWORD *)(i + 104);
          v28 = *(_DWORD *)(i + 112);
          v29 = *(_DWORD *)(i + 116);
          v33 = &v26;
          v35 = v38;
          Buffer = p_DestinationString->Buffer;
          v38[0] = p_DestinationString->Length;
          v39 = v42;
          v41 = v8->Buffer;
          v42[0] = v8->Length;
          v43 = v46;
          v45 = *((_QWORD *)v11 + 1);
          v46[0] = *v11;
          v47 = v50;
          v49 = *((_QWORD *)v10 + 1);
          v50[0] = *v10;
          v51 = &v27;
          v53 = &v28;
          v55 = &v29;
          v57 = &v30;
          v30 = v9;
          v34 = 1LL;
          v36 = 2LL;
          v38[1] = 0;
          v40 = 2LL;
          v42[1] = 0;
          v44 = 2LL;
          v46[1] = 0;
          v48 = 2LL;
          v50[1] = 0;
          v52 = 4LL;
          v54 = 4LL;
          v56 = 4LL;
          v58 = 4LL;
          TlgWrite(&pCallbackContext, &unk_14037224A, 0LL, 0LL, 0xFu, &pData);
        }
      }
      *(_QWORD *)(i + 108) = 0LL;
      *(_DWORD *)(i + 116) = 0;
      v12 = v25;
      if ( v25 && PopDiagSleepStudyHandleRegistered )
      {
        *(_QWORD *)&UserData.Size = 1LL;
        UserData.Ptr = (ULONGLONG)&v24;
        v60 = &v25;
        v13 = 0;
        v61 = 4LL;
        v14 = v62;
        do
        {
          v15 = v14[1];
          v16 = 5 * v13;
          v17 = v14 + 2;
          ++v13;
          v18 = 2LL * (unsigned int)(v16 + 2);
          *(&UserData.Ptr + v18) = i + 24;
          *((_QWORD *)&UserData.Size + v18) = 16LL;
          v19 = 2LL * (unsigned int)(v16 + 3);
          *(&UserData.Ptr + v19) = (ULONGLONG)v14;
          *((_QWORD *)&UserData.Size + v19) = 4LL;
          v20 = 2LL * (unsigned int)(v16 + 4);
          *(&UserData.Ptr + v20) = v15;
          LODWORD(v15) = *(_DWORD *)v14;
          *(&UserData.Reserved + 2 * v20) = 0;
          *(&UserData.Size + 2 * v20) = 2 * v15;
          v21 = (ULONGLONG)v14 + 20;
          v14 += 7;
          v22 = 2LL * (unsigned int)(v16 + 5);
          *(&UserData.Ptr + v22) = (ULONGLONG)v17;
          *((_QWORD *)&UserData.Size + v22) = 4LL;
          v23 = 2LL * (unsigned int)(v16 + 6);
          *(&UserData.Ptr + v23) = v21;
          LODWORD(v21) = 2 * *v17;
          *(&UserData.Reserved + 2 * v23) = 0;
          *(&UserData.Size + 2 * v23) = v21;
        }
        while ( v13 < v12 );
        EtwWrite(PopDiagSleepStudyHandle, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, 0LL, 5 * v12 + 2, &UserData);
      }
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
