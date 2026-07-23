/*
 * XREFs of SbSelectProcedure @ 0x18002CE20
 * Callers:
 *     sub_180072D8C @ 0x180072D8C (sub_180072D8C.c)
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 *     SbExecuteProcedure @ 0x18010FEB0 (SbExecuteProcedure.c)
 * Callees:
 *     EtwEventRegister @ 0x18000A640 (EtwEventRegister.c)
 *     sub_18002D010 @ 0x18002D010 (sub_18002D010.c)
 *     EtwEventWrite @ 0x180052CB0 (EtwEventWrite.c)
 *     EtwNotificationUnregister @ 0x1800537B0 (EtwNotificationUnregister.c)
 *     sub_18006CB44 @ 0x18006CB44 (sub_18006CB44.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_18010FDD8 @ 0x18010FDD8 (sub_18010FDD8.c)
 */

__int64 __fastcall SbSelectProcedure(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rsi
  char *pShimData; // r8
  char *v9; // r8
  char *v10; // rax
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 *v14; // r12
  __int64 v15; // r13
  char *v16; // rsi
  char *v17; // rsi
  __int64 *v18; // rsi
  char *v19; // rdi
  char *v20; // rdi
  REGHANDLE v22; // r13
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // eax
  REGHANDLE v29; // r15
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int16 v34; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v35; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v36; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 v37; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONGLONG RegHandle; // [rsp+40h] [rbp-C0h] BYREF
  ULONGLONG v39; // [rsp+48h] [rbp-B8h] BYREF
  ULONGLONG v40; // [rsp+50h] [rbp-B0h]
  ULONGLONG v41; // [rsp+58h] [rbp-A8h]
  _QWORD v42[16]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v43[16]; // [rsp+E0h] [rbp-20h] BYREF

  v5 = *(_QWORD *)(a3 + 8);
  v6 = 0LL;
  v7 = a4;
  pShimData = (char *)NtCurrentPeb()->pShimData;
  if ( !pShimData || (v9 = pShimData + 2016) == 0LL || !*((_DWORD *)v9 + 12) )
  {
    sub_18002D010(v5, a3);
    goto LABEL_10;
  }
  v10 = (char *)NtCurrentPeb()->pShimData;
  if ( v10 && (v11 = v10 + 2016) != 0LL && *((_DWORD *)v11 + 12) )
    v12 = *(_QWORD *)v11;
  else
    v12 = 0LL;
  if ( v12 == *(_QWORD *)v5 && a2 == *(_DWORD *)(v5 + 8) || (unsigned int)sub_18006CB44(v5, a3, v9 + 24, a2) )
  {
LABEL_10:
    if ( (unsigned int)v7 >= *(_DWORD *)(v5 + 12) )
      return v6;
    _mm_lfence();
    v13 = v7;
    v14 = *(__int64 **)(*(_QWORD *)(a3 + 24) + 8 * v7 + 8);
    memset(v42, 0, sizeof(v42));
    v15 = -1LL;
    v34 = 0;
    v35 = 0;
    if ( !*((_DWORD *)v14 + 11)
      || (RegHandle = 0LL, (v16 = (char *)NtCurrentPeb()->pShimData) == 0LL)
      || (v17 = v16 + 2016) == 0LL
      || !*((_DWORD *)v17 + 12)
      || !*((_DWORD *)v17 + 3) )
    {
LABEL_16:
      v18 = *(__int64 **)(v5 + 8 * v13 + 16);
      memset(&v43[2], 0, 0x70uLL);
      v36 = 0;
      v37 = 0;
      if ( *((_DWORD *)v18 + 10) )
      {
        v39 = 0LL;
        v19 = (char *)NtCurrentPeb()->pShimData;
        if ( v19 )
        {
          v20 = v19 + 2016;
          if ( v20 )
          {
            if ( *((_DWORD *)v20 + 12) && *((_DWORD *)v20 + 3) )
            {
              v29 = *((_QWORD *)v20 + 2);
              if ( v29 )
                goto LABEL_46;
              if ( !EtwEventRegister(&stru_180120560, 0LL, 0LL, &v39) )
              {
                v29 = _InterlockedCompareExchange64((volatile signed __int64 *)v20 + 2, v39, 0LL);
                if ( v29 )
                {
                  EtwNotificationUnregister(v39, 0LL);
                }
                else
                {
                  v41 = v39;
                  sub_18010FDD8(v39, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
                  v29 = v41;
                }
                if ( v29 )
                {
LABEL_46:
                  v30 = *v18;
                  v43[0] = v18 + 14;
                  v31 = -1LL;
                  v43[1] = 16LL;
                  do
                    ++v31;
                  while ( *(_WORD *)(v30 + 2 * v31) );
                  v43[4] = v30;
                  v32 = v18[3];
                  v43[2] = &v36;
                  v33 = (unsigned __int16)(2 * (v31 + 1));
                  v36 = v33;
                  v43[5] = v33;
                  v43[3] = 2LL;
                  do
                    ++v15;
                  while ( *(_WORD *)(v32 + 2 * v15) );
                  v43[8] = v32;
                  v43[7] = 2LL;
                  v43[6] = &v37;
                  v37 = 2 * (v15 + 1);
                  v43[9] = v37;
                  EtwEventWrite(v29, &stru_180120580, 5u, (PEVENT_DATA_DESCRIPTOR)v43);
                }
              }
            }
          }
        }
      }
      return v18[1];
    }
    v22 = *((_QWORD *)v17 + 2);
    if ( v22 )
    {
      v40 = *((_QWORD *)v17 + 2);
    }
    else
    {
      if ( EtwEventRegister(&stru_180120560, 0LL, 0LL, &RegHandle) )
      {
LABEL_39:
        v15 = -1LL;
        goto LABEL_16;
      }
      v22 = _InterlockedCompareExchange64((volatile signed __int64 *)v17 + 2, RegHandle, 0LL);
      if ( v22 )
      {
        EtwNotificationUnregister(RegHandle, 0LL);
        v40 = v22;
      }
      else
      {
        v40 = RegHandle;
        sub_18010FDD8(RegHandle, (__int64)NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer);
        v22 = v40;
      }
    }
    if ( v22 )
    {
      v23 = *v14;
      v42[0] = (char *)v14 + 52;
      v24 = -1LL;
      v42[1] = 16LL;
      do
        ++v24;
      while ( *(_WORD *)(v23 + 2 * v24) );
      v42[4] = v23;
      v25 = v14[1];
      v42[2] = &v34;
      v26 = (unsigned __int16)(2 * (v24 + 1));
      v34 = v26;
      v42[5] = v26;
      v27 = -1LL;
      v42[3] = 2LL;
      do
        ++v27;
      while ( *(_WORD *)(v25 + 2 * v27) );
      v42[8] = v25;
      v42[7] = 2LL;
      v28 = (unsigned __int16)(2 * (v27 + 1));
      v42[6] = &v35;
      v35 = v28;
      v42[9] = v28;
      EtwEventWrite(v22, &EventDescriptor, 5u, (PEVENT_DATA_DESCRIPTOR)v42);
    }
    goto LABEL_39;
  }
  return 0LL;
}
