/*
 * XREFs of RIMGetPointerDeviceProperties @ 0x1C013DB30
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     GetPreparsedData @ 0x1C013A960 (GetPreparsedData.c)
 *     _PopulatePropertyUsageValues @ 0x1C013A9FC (_PopulatePropertyUsageValues.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C0142C68 (rimHidP_GetSpecificButtonCaps.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetPointerDeviceProperties(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebx
  _WORD *v5; // r14
  unsigned __int16 v6; // r12
  unsigned __int16 v7; // r13
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // r15
  void *v15; // r13
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _WORD *v24; // rdi
  unsigned int v25; // r8d
  _WORD *v26; // rdx
  __int64 v27; // rax
  unsigned __int16 v29[2]; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int16 v30; // [rsp+54h] [rbp-1Ch]
  unsigned int v31; // [rsp+58h] [rbp-18h] BYREF
  int v32; // [rsp+5Ch] [rbp-14h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h] BYREF

  v4 = 0;
  v32 = 0;
  v5 = 0LL;
  v31 = 0;
  v6 = 0;
  v29[0] = 0;
  v7 = 0;
  v30 = 0;
  v33 = 0LL;
  if ( !(unsigned int)GetPreparsedData(a1, &v33, a3) )
    return 0LL;
  v13 = *(_DWORD *)(a1 + 312);
  if ( (v13 & 2) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 712);
    if ( !v11 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, v10, v12);
      v11 = *(_QWORD *)(a1 + 712);
      v13 = *(_DWORD *)(a1 + 312);
    }
    v7 = *(_WORD *)(v11 + 10);
    v6 = *(_WORD *)(v11 + 4);
    v30 = v7;
  }
  if ( (v13 & 0x20) != 0 )
    v6 = *(_WORD *)(a1 + 728);
  if ( !a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v10, v12);
  v14 = v33;
  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 0, v6, 0, 0LL, (__int64)v29, v33) != -1072627705 )
    return 0LL;
  v15 = Win32AllocPoolZInit(72LL * (v29[0] + (unsigned int)v7), 1668707157LL);
  if ( v15 )
  {
    if ( (unsigned int)PopulatePropertyUsageValues(a1, &v31, a4, v6, v29[0], (__int64)v15, a2, a3, v14) )
    {
      v18 = *(_QWORD *)(a1 + 712);
      if ( !v18 || !*(_WORD *)(v18 + 8) )
        goto LABEL_20;
      if ( v31 >= a4 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v18, v17);
        v18 = *(_QWORD *)(a1 + 712);
      }
      if ( !*(_WORD *)(v18 + 10) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v18, v17);
        v18 = *(_QWORD *)(a1 + 712);
      }
      if ( (unsigned int)PopulatePropertyUsageValues(
                           a1,
                           &v31,
                           a4,
                           *(_WORD *)(v18 + 8),
                           v30,
                           (__int64)v15 + 72 * v31,
                           a2,
                           a3,
                           v14) )
      {
LABEL_20:
        v19 = a2 - v31;
        v32 = a2 - v31;
        if ( a2 == v31 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v18, v17);
        }
        else
        {
          v20 = (unsigned int)v19;
          v5 = Win32AllocPoolZInit(72 * v19, 1668707157LL);
          if ( v5 )
          {
            if ( *(_DWORD *)(a1 + 24) == 7 )
              v6 = 0;
            if ( (int)rimHidP_GetSpecificButtonCaps(0, 0, v6, 0, (__int64)v5, (__int64)&v32, v33) >= 0 )
            {
              if ( (_DWORD)v19 == v32 || (MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23), (_DWORD)v19 == v32) )
              {
                v24 = (_WORD *)(a3 + 28LL * v31);
                memset(v24, 0, 28LL * (unsigned int)v19);
                v25 = 0;
                v4 = 1;
                if ( v31 < a2 )
                {
                  v26 = v24 + 13;
                  do
                  {
                    v27 = v25++;
                    *(v26 - 1) = v5[36 * v27];
                    *v26 = v5[36 * v27 + 28];
                    *(_DWORD *)(v26 - 11) = 1;
                    v26 += 14;
                    --v20;
                  }
                  while ( v20 );
                }
              }
            }
          }
        }
      }
    }
    Win32FreePool((__int64)v15);
  }
  if ( v5 )
    Win32FreePool((__int64)v5);
  return v4;
}
