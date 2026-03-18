/*
 * XREFs of RIMGetPropertyCount @ 0x1C0118004
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0115410 (RIMCreatePointerDeviceInfo.c)
 *     RIMRetrieveLinkCollection @ 0x1C0118EA0 (RIMRetrieveLinkCollection.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C011DB0C (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C011C844 (rimHidP_GetSpecificValueCaps.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMGetPropertyCount(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v5; // r13
  unsigned int v7; // esi
  unsigned __int16 v8; // r15
  int SpecificValueCaps; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // di
  unsigned __int16 v12; // cx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  _BYTE *v17; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // [rsp+40h] [rbp-79h] BYREF
  unsigned __int16 v21; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v22[2]; // [rsp+50h] [rbp-69h] BYREF
  __int16 v23; // [rsp+54h] [rbp-65h] BYREF
  unsigned __int16 v24; // [rsp+58h] [rbp-61h]
  int v25; // [rsp+5Ch] [rbp-5Dh]
  __int64 v26; // [rsp+60h] [rbp-59h]
  char v27[2]; // [rsp+70h] [rbp-49h] BYREF
  char v28; // [rsp+72h] [rbp-47h]

  v21 = a3;
  v20 = a3;
  v5 = a1;
  v26 = a1;
  v24 = a2;
  v22[0] = 0;
  v7 = 0;
  v25 = 0;
  v8 = a2;
  SpecificValueCaps = -1073741668;
  v23 = 1;
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL, a2, 0LL);
  v10 = *(_QWORD *)(v5 + 704);
  v11 = a3;
  if ( v10 )
  {
    v12 = *(_WORD *)(v10 + 8);
    if ( v12 )
    {
      v8 = *(_WORD *)(v10 + 8);
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v12, 0, 0LL, (__int64)v22, a4);
      if ( SpecificValueCaps == -1072627705 )
      {
        v19 = *(_QWORD *)(v5 + 704);
        v11 = v22[0] + v21;
        v20 = v22[0];
        v25 = 1;
        *(_WORD *)(v19 + 10) = v22[0];
      }
      else
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x1Fu, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids);
      }
    }
  }
  if ( v11 > 1u )
  {
    v13 = Win32AllocPool(72LL * v11, 0x63707352u);
    if ( v13 )
    {
      SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 1, v8, 48, (__int64)v27, (__int64)&v23, a4);
      if ( SpecificValueCaps >= 0 )
      {
        *(_BYTE *)(v5 + 768) = v28;
        SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v8, 0, v13, (__int64)&v20, a4);
        if ( SpecificValueCaps >= 0 )
        {
          v16 = v20;
          if ( v20 )
          {
            LOBYTE(v15) = v28;
            v17 = (_BYTE *)(v13 + 2);
            v14 = v20;
            do
            {
              if ( *v17 == v28 )
                ++v7;
              v17 += 72;
              --v14;
            }
            while ( v14 );
          }
          if ( v25 )
          {
            SpecificValueCaps = rimHidP_GetSpecificValueCaps(0, 0, v24, 0, v13 + 72LL * v20, (__int64)&v21, a4);
            if ( SpecificValueCaps >= 0 )
            {
              v15 = v21;
              v14 = v20;
              if ( v21 )
              {
                do
                {
                  if ( (unsigned __int16)v14 >= v11 )
                    break;
                  v16 = 9LL * (unsigned __int16)v14;
                  if ( *(_BYTE *)(v13 + 72LL * (unsigned __int16)v14 + 2) == v28 )
                    ++v7;
                  LOWORD(v14) = v14 + 1;
                }
                while ( (unsigned __int16)(v14 - v20) < v21 );
                v5 = v26;
              }
            }
          }
          if ( v7 <= 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v14, v15);
          *(_DWORD *)(v5 + 328) = v7;
        }
      }
      Win32FreePool(v13);
    }
  }
  return SpecificValueCaps >= 0;
}
