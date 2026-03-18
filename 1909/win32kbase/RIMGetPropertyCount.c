/*
 * XREFs of RIMGetPropertyCount @ 0x1C013E0D4
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C013B548 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C013F010 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0142CBC (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int16 v12; // r15
  int SpecificValueCaps; // ebx
  __int64 v14; // rax
  unsigned __int16 v15; // di
  unsigned __int16 v16; // cx
  int v17; // edx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  _BYTE *v22; // rax
  __int64 v24; // rax
  unsigned __int16 v25; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v26; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v27[2]; // [rsp+50h] [rbp-69h] BYREF
  __int16 v28; // [rsp+54h] [rbp-65h] BYREF
  unsigned __int16 v29; // [rsp+58h] [rbp-61h]
  int v30; // [rsp+5Ch] [rbp-5Dh]
  __int64 v31; // [rsp+60h] [rbp-59h]
  _BYTE v32[80]; // [rsp+70h] [rbp-49h] BYREF

  v29 = a2;
  v31 = a1;
  v26 = a3;
  v6 = a1;
  v25 = a3;
  v8 = 0;
  memset(v32, 0, 0x48uLL);
  v27[0] = 0;
  v28 = 1;
  v12 = a2;
  v30 = 0;
  SpecificValueCaps = -1073741668;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v14 = *(_QWORD *)(v6 + 712);
  v15 = a3;
  if ( v14 )
  {
    v16 = *(_WORD *)(v14 + 8);
    if ( v16 )
    {
      v12 = *(_WORD *)(v14 + 8);
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v16, 0, 0LL, (__int64)v27, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v24 = *(_QWORD *)(v6 + 712);
        v15 = v27[0] + v26;
        v25 = v27[0];
        v30 = 1;
        *(_WORD *)(v24 + 10) = v27[0];
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v17) = 3;
          WPP_RECORDER_SF_((_DWORD)gRimLog, v17, 1, 31, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids);
        }
        v15 = a3;
      }
    }
  }
  if ( v15 > 1u )
  {
    v18 = Win32AllocPool(72LL * v15, 0x63707352u);
    if ( v18 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 1, v12, 48, (__int64)v32, (__int64)&v28, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v6 + 776) = v32[2];
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v12, 0, v18, (__int64)&v25, a4);
        if ( SpecificValueCaps >= 0 )
        {
          v21 = v25;
          if ( v25 )
          {
            LOBYTE(v20) = v32[2];
            v22 = (_BYTE *)(v18 + 2);
            v19 = v25;
            do
            {
              if ( *v22 == v32[2] )
                ++v8;
              v22 += 72;
              --v19;
            }
            while ( v19 );
          }
          if ( v30 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v29, 0, v18 + 72LL * v25, (__int64)&v26, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v20 = v26;
              v19 = v25;
              if ( v26 )
              {
                do
                {
                  if ( (unsigned __int16)v19 >= v15 )
                    break;
                  v21 = 9LL * (unsigned __int16)v19;
                  if ( *(_BYTE *)(v18 + 72LL * (unsigned __int16)v19 + 2) == v32[2] )
                    ++v8;
                  LOWORD(v19) = v19 + 1;
                }
                while ( (unsigned __int16)(v19 - v25) < v26 );
                v6 = v31;
              }
            }
          }
          if ( v8 <= 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v19, v20);
          *(_DWORD *)(v6 + 336) = v8;
        }
      }
      Win32FreePool(v18);
    }
  }
  return SpecificValueCaps >= 0;
}
