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
 *     SbpUpdateCache @ 0x180075D9C (SbpUpdateCache.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
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
  __int64 *v13; // r15
  __int64 v14; // r13
  _DWORD *v15; // rcx
  char *v16; // r14
  __int64 *v17; // rdi
  _QWORD *v18; // rcx
  volatile signed __int64 *v19; // rsi
  signed __int64 v21; // rcx
  _RTL_USER_PROCESS_PARAMETERS *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // eax
  signed __int64 v29; // r15
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // eax
  __int16 v35; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v36; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v37; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v38; // [rsp+3Ch] [rbp-C4h] BYREF
  signed __int64 v39; // [rsp+40h] [rbp-C0h] BYREF
  signed __int64 v40; // [rsp+48h] [rbp-B8h] BYREF
  signed __int64 v41; // [rsp+50h] [rbp-B0h]
  signed __int64 v42; // [rsp+58h] [rbp-A8h]
  _QWORD v43[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v44[16]; // [rsp+E0h] [rbp-20h] BYREF

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
    v13 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(v43, 0, sizeof(v43));
    v14 = -1LL;
    v35 = 0;
    v36 = 0;
    if ( !*((_DWORD *)v13 + 11)
      || (v39 = 0LL, (v15 = NtCurrentPeb()->pShimData) == 0LL)
      || (v16 = (char *)(v15 + 504), v15 == (_DWORD *)-2016LL)
      || !v15[516]
      || !v15[507] )
    {
LABEL_16:
      v17 = *(__int64 **)(v5 + 8 * v7 + 16);
      memset(v44, 0, sizeof(v44));
      v37 = 0;
      v38 = 0;
      if ( *((_DWORD *)v17 + 10) )
      {
        v40 = 0LL;
        v18 = NtCurrentPeb()->pShimData;
        if ( v18 )
        {
          v19 = v18 + 252;
          if ( v18 != (_QWORD *)-2016LL && *((_DWORD *)v18 + 516) && *((_DWORD *)v18 + 507) )
          {
            v29 = v18[254];
            if ( v29 )
              goto LABEL_48;
            if ( !(unsigned int)EtwEventRegister(MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, (unsigned __int64 *)&v40) )
            {
              v29 = _InterlockedCompareExchange64(v19 + 2, v40, 0LL);
              if ( v29 )
              {
                EtwNotificationUnregister(v40, 0LL);
              }
              else
              {
                v42 = v40;
                ProcessParameters = NtCurrentPeb()->ProcessParameters;
                SbpTraceContextUpdate(
                  v40,
                  (_DWORD)v19 + 48,
                  0,
                  ProcessParameters->ImagePathName.Length,
                  (__int64)ProcessParameters->ImagePathName.Buffer);
                v29 = v42;
              }
              if ( v29 )
              {
LABEL_48:
                v31 = *v17;
                v44[0] = v17 + 14;
                v32 = -1LL;
                v44[1] = 16LL;
                do
                  ++v32;
                while ( *(_WORD *)(v31 + 2 * v32) );
                v44[4] = v31;
                v33 = v17[3];
                v44[2] = &v37;
                v34 = (unsigned __int16)(2 * (v32 + 1));
                v37 = v34;
                v44[5] = v34;
                v44[3] = 2LL;
                do
                  ++v14;
                while ( *(_WORD *)(v33 + 2 * v14) );
                v44[8] = v33;
                v44[7] = 2LL;
                v44[6] = &v38;
                v38 = 2 * (v14 + 1);
                v44[9] = v38;
                EtwEventWrite(v29, &AeSbImplEvent, 5LL, v44);
              }
            }
          }
        }
      }
      return v17[1];
    }
    v21 = *((_QWORD *)v15 + 254);
    if ( v21 )
    {
      v41 = *((_QWORD *)v16 + 2);
    }
    else
    {
      if ( (unsigned int)EtwEventRegister(MS_Windows_AeSwitchBack_Provider, 0LL, 0LL, (unsigned __int64 *)&v39) )
        goto LABEL_16;
      v41 = _InterlockedCompareExchange64((volatile signed __int64 *)v16 + 2, v39, 0LL);
      if ( v41 )
      {
        EtwNotificationUnregister(v39, 0LL);
      }
      else
      {
        v41 = v39;
        v22 = NtCurrentPeb()->ProcessParameters;
        SbpTraceContextUpdate(v39, (_DWORD)v16 + 48, 0, v22->ImagePathName.Length, (__int64)v22->ImagePathName.Buffer);
      }
      v21 = v41;
    }
    if ( v21 )
    {
      v23 = *v13;
      v43[0] = (char *)v13 + 52;
      v24 = -1LL;
      v43[1] = 16LL;
      do
        ++v24;
      while ( *(_WORD *)(v23 + 2 * v24) );
      v43[4] = v23;
      v25 = v13[1];
      v43[2] = &v35;
      v26 = (unsigned __int16)(2 * (v24 + 1));
      v35 = v26;
      v43[5] = v26;
      v27 = -1LL;
      v43[3] = 2LL;
      do
        ++v27;
      while ( *(_WORD *)(v25 + 2 * v27) );
      v43[8] = v25;
      v43[7] = 2LL;
      v28 = (unsigned __int16)(2 * (v27 + 1));
      v43[6] = &v36;
      v36 = v28;
      v43[9] = v28;
      EtwEventWrite(v21, &AeSbCallEvent, 5LL, v43);
    }
    goto LABEL_16;
  }
  return 0LL;
}
