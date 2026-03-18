/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1C004D5E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C004DA3C (rimHidP_GetSpecificButtonCaps.c)
 *     _PopulatePropertyUsageValues @ 0x1C004DA90 (_PopulatePropertyUsageValues.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C004DD00 (rimHidP_GetSpecificValueCaps.c)
 *     GetPreparsedData @ 0x1C004DD54 (GetPreparsedData.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned __int16 v6; // r12
  unsigned __int16 v7; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  _WORD *v21; // rdi
  unsigned int v22; // r8d
  _WORD *v23; // rdx
  __int64 v24; // rax
  unsigned __int16 v26[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v27; // [rsp+54h] [rbp-1Ch]
  unsigned int v28; // [rsp+58h] [rbp-18h] BYREF
  unsigned int v29; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF

  v4 = 0;
  v29 = 0;
  v5 = 0LL;
  v28 = 0;
  v6 = 0;
  v26[0] = 0;
  v7 = 0;
  v27 = 0;
  v30 = 0LL;
  if ( !(unsigned int)GetPreparsedData(a1, &v30) )
    return 0LL;
  v12 = *(_DWORD *)(a1 + 276);
  if ( (v12 & 8) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 672);
    if ( !v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v10);
      v11 = *(_QWORD *)(a1 + 672);
      v12 = *(_DWORD *)(a1 + 276);
    }
    v7 = *(_WORD *)(v11 + 10);
    v6 = *(_WORD *)(v11 + 4);
    v27 = v7;
  }
  if ( (v12 & 0x80u) != 0 )
    v6 = *(_WORD *)(a1 + 688);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10);
  v13 = v30;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 0, v6, 0, 0LL, (__int64)v26, v30) != -1072627705 )
    return 0LL;
  v14 = Win32AllocPoolZInit(72LL * (v26[0] + (unsigned int)v7));
  if ( v14 )
  {
    if ( (unsigned int)PopulatePropertyUsageValues(a1, (unsigned int)&v28, a4, v6, v26[0], v14, a2, a3, v13) )
    {
      v16 = *(_QWORD *)(a1 + 672);
      if ( !v16 || !*(_WORD *)(v16 + 8) )
        goto LABEL_12;
      if ( v28 >= a4 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v16);
        v16 = *(_QWORD *)(a1 + 672);
      }
      if ( !*(_WORD *)(v16 + 10) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v16);
        v16 = *(_QWORD *)(a1 + 672);
      }
      if ( (unsigned int)PopulatePropertyUsageValues(
                           a1,
                           (unsigned int)&v28,
                           a4,
                           *(unsigned __int16 *)(v16 + 8),
                           v27,
                           v14 + 72LL * v28,
                           a2,
                           a3,
                           v13) )
      {
LABEL_12:
        v17 = a2 - v28;
        v29 = a2 - v28;
        if ( a2 == v28 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v16);
        }
        else
        {
          v18 = (unsigned int)v17;
          v5 = Win32AllocPoolZInit(72 * v17);
          if ( v5 )
          {
            if ( *(_DWORD *)(a1 + 24) == 7 )
              v6 = 0;
            if ( (int)rimHidP_GetSpecificButtonCaps(0, 0, v6, 0, v5, (__int64)&v29, v30) >= 0 )
            {
              if ( (_DWORD)v17 == v29 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19), (_DWORD)v17 == v29) )
              {
                v21 = (_WORD *)(a3 + 28LL * v28);
                memset(v21, 0, 28LL * (unsigned int)v17);
                v22 = 0;
                v4 = 1;
                if ( v28 < a2 )
                {
                  v23 = v21 + 13;
                  do
                  {
                    v24 = v22++;
                    *(v23 - 1) = *(_WORD *)(v5 + 72 * v24);
                    *v23 = *(_WORD *)(v5 + 72 * v24 + 56);
                    *(_DWORD *)(v23 - 11) = 1;
                    v23 += 14;
                    --v18;
                  }
                  while ( v18 );
                }
              }
            }
          }
        }
      }
    }
    Win32FreePool(v14);
  }
  if ( v5 )
    Win32FreePool(v5);
  return v4;
}
