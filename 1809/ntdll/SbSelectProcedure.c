/*
 * XREFs of SbSelectProcedure @ 0x180027CD0
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180062B5C (SwitchedRtlGetVersion.c)
 *     RtlInitializeHeapManager @ 0x1800F1FC4 (RtlInitializeHeapManager.c)
 *     SbExecuteProcedure @ 0x180111780 (SbExecuteProcedure.c)
 * Callees:
 *     EtwEventRegister @ 0x180021AD0 (EtwEventRegister.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x180027EF0 (SbpUpdateCacheWithCurrentImpl.c)
 *     EtwEventWrite @ 0x18004DC20 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x18004E980 (EtwNotificationUnregister.c)
 *     SbpUpdateCache @ 0x180075DAC (SbpUpdateCache.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     SbpTraceContextUpdate @ 0x1801116A8 (SbpTraceContextUpdate.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v7; // rsi
  _DWORD *pShimData; // rcx
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // r13
  char *v15; // rcx
  char *v16; // r14
  __int64 v17; // rdi
  _QWORD *v18; // rcx
  volatile signed __int64 *v19; // rsi
  REGHANDLE v21; // rcx
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // eax
  REGHANDLE v28; // r15
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned int v32; // eax
  __int16 v33; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v34; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v35; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v36; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONGLONG v37; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG RegHandle; // [rsp+48h] [rbp-B8h] BYREF
  REGHANDLE v39; // [rsp+50h] [rbp-B0h]
  ULONGLONG v40; // [rsp+58h] [rbp-A8h]
  _EVENT_DATA_DESCRIPTOR UserData[8]; // [rsp+60h] [rbp-A0h] BYREF
  _EVENT_DATA_DESCRIPTOR v42[8]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = *(_QWORD *)(a3 + 8);
  v7 = a4;
  pShimData = NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = (char *)(pShimData + 504), pShimData == (_DWORD *)-2016LL) || !pShimData[516] )
  {
    SbpUpdateCacheWithCurrentImpl(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 2016) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)SbpUpdateCache(v5, a3, v9 + 24, a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v4;
    _mm_lfence();
    v13 = *(_QWORD *)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(UserData, 0, sizeof(UserData));
    v14 = -1LL;
    v33 = 0;
    v34 = 0;
    if ( !*(_DWORD *)(v13 + 44)
      || (v37 = 0LL, (v15 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v16 = v15 + 2016, v15 == (char *)-2016LL)
      || !*((_DWORD *)v15 + 516)
      || !*((_DWORD *)v15 + 507) )
    {
LABEL_16:
      v17 = *(_QWORD *)(v5 + 8 * v7 + 16);
      memset(v42, 0, sizeof(v42));
      v35 = 0;
      v36 = 0;
      if ( *(_DWORD *)(v17 + 40) )
      {
        RegHandle = 0LL;
        v18 = NtCurrentPeb()->pShimData;
        if ( v18 )
        {
          v19 = v18 + 252;
          if ( v18 != (_QWORD *)-2016LL && *((_DWORD *)v18 + 516) && *((_DWORD *)v18 + 507) )
          {
            v28 = v18[254];
            if ( v28 )
              goto LABEL_48;
            if ( !EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &RegHandle) )
            {
              v28 = _InterlockedCompareExchange64(v19 + 2, RegHandle, 0LL);
              if ( v28 )
              {
                EtwNotificationUnregister(RegHandle, 0LL);
              }
              else
              {
                v40 = RegHandle;
                SbpTraceContextUpdate(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
                v28 = v40;
              }
              if ( v28 )
              {
LABEL_48:
                v29 = *(_QWORD *)v17;
                v42[0].Ptr = v17 + 112;
                v30 = -1LL;
                *(_QWORD *)&v42[0].Size = 16LL;
                do
                  ++v30;
                while ( *(_WORD *)(v29 + 2 * v30) );
                v42[2].Ptr = v29;
                v31 = *(_QWORD *)(v17 + 24);
                v42[1].Ptr = (unsigned __int64)&v35;
                v32 = (unsigned __int16)(2 * (v30 + 1));
                v35 = v32;
                v42[2].Size = v32;
                *(_QWORD *)&v42[1].Size = 2LL;
                v42[2].Reserved = 0;
                do
                  ++v14;
                while ( *(_WORD *)(v31 + 2 * v14) );
                v42[4].Ptr = v31;
                *(_QWORD *)&v42[3].Size = 2LL;
                v42[3].Ptr = (unsigned __int64)&v36;
                v36 = 2 * (v14 + 1);
                v42[4].Size = v36;
                v42[4].Reserved = 0;
                EtwEventWrite(v28, &AeSbImplEvent, 5u, v42);
              }
            }
          }
        }
      }
      return *(_QWORD *)(v17 + 8);
    }
    v21 = *((_QWORD *)v15 + 254);
    if ( v21 )
    {
      v39 = *((_QWORD *)v16 + 2);
    }
    else
    {
      if ( EtwEventRegister(&MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, &v37) )
        goto LABEL_16;
      v39 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 2, v37, 0LL);
      if ( v39 )
      {
        EtwNotificationUnregister(v37, 0LL);
      }
      else
      {
        v39 = v37;
        SbpTraceContextUpdate(v37, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
      }
      v21 = v39;
    }
    if ( v21 )
    {
      v22 = *(_QWORD *)v13;
      UserData[0].Ptr = v13 + 52;
      v23 = -1LL;
      *(_QWORD *)&UserData[0].Size = 16LL;
      do
        ++v23;
      while ( *(_WORD *)(v22 + 2 * v23) );
      UserData[2].Ptr = v22;
      v24 = *(_QWORD *)(v13 + 8);
      UserData[1].Ptr = (unsigned __int64)&v33;
      v25 = (unsigned __int16)(2 * (v23 + 1));
      v33 = v25;
      UserData[2].Size = v25;
      v26 = -1LL;
      *(_QWORD *)&UserData[1].Size = 2LL;
      UserData[2].Reserved = 0;
      do
        ++v26;
      while ( *(_WORD *)(v24 + 2 * v26) );
      UserData[4].Ptr = v24;
      *(_QWORD *)&UserData[3].Size = 2LL;
      v27 = (unsigned __int16)(2 * (v26 + 1));
      UserData[3].Ptr = (unsigned __int64)&v34;
      v34 = v27;
      UserData[4].Size = v27;
      UserData[4].Reserved = 0;
      EtwEventWrite(v21, &AeSbCallEvent, 5u, UserData);
    }
    goto LABEL_16;
  }
  return 0LL;
}
