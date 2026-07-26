/*
 * XREFs of ndisPublishSleepStudyNapsCustomData @ 0x1C00FD160
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z @ 0x1C00FD5B8 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EPEBU_GUID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     ndisSleepStudyGetNameFromReasonCode @ 0x1C0079144 (ndisSleepStudyGetNameFromReasonCode.c)
 *     McTemplateK0ujqzr2jx @ 0x1C0079DD4 (McTemplateK0ujqzr2jx.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z @ 0x1C00FCE6C (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEB_W_K@Z.c)
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
  __int64 v22; // [rsp+58h] [rbp-59h]
  __int128 v24; // [rsp+70h] [rbp-41h] BYREF
  struct _GUID v25; // [rsp+80h] [rbp-31h] BYREF
  struct _GUID v26; // [rsp+90h] [rbp-21h] BYREF

  v7 = *(_WORD *)(a1 + 4088);
  v8 = 0LL;
  v9 = a3;
  v10 = a2;
  v25 = GUID_CS_BLOCKER_GEN;
  v25.Data3 = v7;
  v26 = GUID_CS_BLOCKER_GEN;
  v26.Data3 = v7;
  result = (unsigned int *)(a6 + 4);
  v13 = 1;
  v14 = 1;
  v22 = a4;
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
          if ( v13 )
          {
            v18 = *a7;
            ++*(_DWORD *)a7;
            v26.Data4[0] = v18 | 0x80;
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
              McTemplateK0ujqzr2jx(
                v17,
                a2,
                (const GUID *)(a1 + 4040),
                v10,
                v9,
                *(_DWORD *)(a4 + 8),
                *(_QWORD *)a4,
                (__int64)&v26,
                0);
            ndisPublishSleepStudyCustomData(v10, &v26, L"Total Time (ms)", v8);
            v21 = 0;
            LODWORD(v17) = *v15;
          }
          ndisSleepStudyGetNameFromReasonCode(v17, &v24);
          LOBYTE(v20) = *a7;
          ++*(_DWORD *)a7;
          LOBYTE(v20) = v20 | 0x80;
          v25.Data4[0] = v20;
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            McTemplateK0ujqzr2jx(
              v19,
              v20,
              (const GUID *)(a1 + 4040),
              v10,
              (__int64)&v26,
              SDWORD2(v24),
              v24,
              (__int64)&v25,
              0);
          ndisPublishSleepStudyCustomData(v10, &v25, L"Reason", *v15);
          ndisPublishSleepStudyCustomData(v10, &v25, L"WakeCount", *((unsigned __int16 *)v15 - 2));
          ndisPublishSleepStudyCustomData(v10, &v25, L"BusyCount", *((unsigned __int16 *)v15 - 1));
          ndisPublishSleepStudyCustomData(v10, &v25, L"Total Time (ms)", *(_QWORD *)(v15 + 1));
          v13 = v21;
          a4 = v22;
          v9 = a3;
        }
      }
      v15 += 4;
      --v16;
    }
    while ( v16 );
    result = (unsigned int *)(a6 + 4);
    ++v14;
  }
  while ( v14 <= 2 );
  return result;
}
