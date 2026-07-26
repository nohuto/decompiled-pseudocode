/*
 * XREFs of ndisPublishSleepStudyNapsCustomData @ 0x1C011CA40
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C011CEA0 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     ndisSleepStudyGetNameFromReasonCode @ 0x1C00BD234 (ndisSleepStudyGetNameFromReasonCode.c)
 *     McTemplateK0ujqzr2jx @ 0x1C00BDFFC (McTemplateK0ujqzr2jx.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z @ 0x1C011C748 (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z.c)
 */

unsigned int *__fastcall ndisPublishSleepStudyNapsCustomData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7)
{
  unsigned __int16 v7; // ax
  ULONGLONG v8; // r12
  __int64 v9; // r11
  char v10; // r14
  unsigned int *result; // rax
  int v13; // r8d
  unsigned int v14; // esi
  unsigned int *v15; // rbx
  __int64 v16; // r15
  __int64 v17; // rcx
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // rdx
  int v21; // [rsp+50h] [rbp-61h]
  __int128 v22; // [rsp+58h] [rbp-59h] BYREF
  __int64 v23; // [rsp+68h] [rbp-49h]
  __int64 v24; // [rsp+70h] [rbp-41h]
  unsigned int *v25; // [rsp+78h] [rbp-39h]
  struct _GUID v26; // [rsp+80h] [rbp-31h] BYREF
  struct _GUID v27; // [rsp+90h] [rbp-21h] BYREF

  v7 = *(_WORD *)(a1 + 4056);
  v8 = 0LL;
  v9 = a3;
  v10 = a2;
  v26 = GUID_CS_BLOCKER_GEN;
  v26.Data3 = v7;
  v27 = GUID_CS_BLOCKER_GEN;
  v27.Data3 = v7;
  result = (unsigned int *)(a6 + 4);
  v24 = a3;
  v13 = 1;
  v25 = (unsigned int *)(a6 + 4);
  v14 = 1;
  v23 = a4;
  v21 = 1;
  do
  {
    v15 = result;
    v16 = 49LL;
    do
    {
      v17 = *v15;
      if ( (_DWORD)v17 )
      {
        if ( v14 == 1 )
        {
          v8 += *(_QWORD *)(v15 + 1);
        }
        else
        {
          v22 = 0uLL;
          if ( v13 )
          {
            v18 = *a7;
            ++*(_DWORD *)a7;
            v27.Data4[0] = v18 | 0x80;
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
              McTemplateK0ujqzr2jx(
                v17,
                a2,
                (const GUID *)(a1 + 4008),
                v10,
                v9,
                *(_DWORD *)(a4 + 8),
                *(_QWORD *)a4,
                (__int64)&v27,
                0);
            ndisPublishSleepStudyCustomData(v10, &v27, L"Total Time (ms)", v8);
            v21 = 0;
            LODWORD(v17) = *v15;
          }
          ndisSleepStudyGetNameFromReasonCode(v17, &v22);
          LOBYTE(v20) = *a7;
          ++*(_DWORD *)a7;
          LOBYTE(v20) = v20 | 0x80;
          v26.Data4[0] = v20;
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            McTemplateK0ujqzr2jx(
              v19,
              v20,
              (const GUID *)(a1 + 4008),
              v10,
              (__int64)&v27,
              SDWORD2(v22),
              v22,
              (__int64)&v26,
              0);
          ndisPublishSleepStudyCustomData(v10, &v26, L"Reason", *v15);
          ndisPublishSleepStudyCustomData(v10, &v26, L"WakeCount", *((unsigned __int16 *)v15 - 2));
          ndisPublishSleepStudyCustomData(v10, &v26, L"BusyCount", *((unsigned __int16 *)v15 - 1));
          ndisPublishSleepStudyCustomData(v10, &v26, L"Total Time (ms)", *(_QWORD *)(v15 + 1));
          v13 = v21;
          a4 = v23;
          v9 = v24;
        }
      }
      v15 += 4;
      --v16;
    }
    while ( v16 );
    result = v25;
    ++v14;
  }
  while ( v14 <= 2 );
  return result;
}
