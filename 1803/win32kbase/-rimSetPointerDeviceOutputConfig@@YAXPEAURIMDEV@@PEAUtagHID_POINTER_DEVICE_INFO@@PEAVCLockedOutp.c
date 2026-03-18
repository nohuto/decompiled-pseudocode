/*
 * XREFs of ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedOutputConfig@@PEAUCRegionConfig@@@Z @ 0x1C00551B8
 * Callers:
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     RIMGetMonitorPhysicalSize @ 0x1C00E91F0 (RIMGetMonitorPhysicalSize.c)
 *     RIMGetVirtualDesktopPhysicalSize @ 0x1C00E92F0 (RIMGetVirtualDesktopPhysicalSize.c)
 *     RIMQuirkSetPointerDeviceOutputConfig @ 0x1C0107154 (RIMQuirkSetPointerDeviceOutputConfig.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimSetPointerDeviceOutputConfig(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        __int64 **a3,
        __m128i *a4)
{
  __int128 v4; // xmm0
  __int128 v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rcx
  int v11; // eax
  __int32 v12; // r9d
  int v13; // ecx
  __int32 v14; // r8d
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  __int32 v18; // r8d
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // xmm0_8
  __int128 *v22; // rax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  __int32 v34; // r9d
  int v35; // r9d
  int v36; // r9d
  __int64 v37; // rax
  char v38[16]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v39; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 124);
  *((_DWORD *)a2 + 56) = 1;
  *((_OWORD *)a2 + 12) = v4;
  v8 = *(_OWORD *)((char *)a2 + 140);
  *((_OWORD *)a2 + 13) = v8;
  *((_OWORD *)a2 + 11) = v8;
  v9 = *a4;
  *((__m128i *)a2 + 10) = *a4;
  v10 = **a3;
  *(_QWORD *)((char *)a2 + 228) = v10;
  if ( (*((_DWORD *)a1 + 46) & 0x2000000) != 0 )
  {
    RIMQuirkSetPointerDeviceOutputConfig(a1);
    return;
  }
  v11 = *((_DWORD *)a2 + 69);
  if ( (v11 & 0x20) == 0 || (v11 & 0x8000) != 0 )
  {
    if ( *((_DWORD *)a1 + 212) )
    {
      if ( (a4[1].m128i_i32[0] & 2) == 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, a2);
      v12 = a4[2].m128i_i32[1];
      v13 = *((_DWORD *)a2 + 37);
      *((_DWORD *)a2 + 56) = v12;
      v14 = a4[3].m128i_i32[0];
      LODWORD(v39) = v13 * a4[3].m128i_i32[2] / v14;
      v15 = v13 * a4[4].m128i_i32[0];
      v16 = *((_DWORD *)a2 + 38);
      v17 = v15 / v14;
      v18 = a4[3].m128i_i32[1];
      DWORD2(v39) = v17;
      DWORD1(v39) = v16 * a4[3].m128i_i32[3] / v18;
      v19 = (_QWORD *)*((_QWORD *)a2 + 38);
      HIDWORD(v39) = v16 * a4[4].m128i_i32[1] / v18;
      *((_OWORD *)a2 + 13) = v39;
      *((_DWORD *)a2 + 46) = *((_DWORD *)a2 + 54) - *((_DWORD *)a2 + 52);
      v20 = (unsigned int)(*((_DWORD *)a2 + 55) - *((_DWORD *)a2 + 53));
      *((_DWORD *)a2 + 47) = v20;
      if ( ((v12 - 2) & 0xFFFFFFFD) == 0 )
      {
        v23 = *((_DWORD *)a2 + 45) ^ *((_DWORD *)a2 + 44);
        v24 = *((_DWORD *)a2 + 45);
        *((_DWORD *)a2 + 44) = v24;
        *((_DWORD *)a2 + 45) = v23 ^ v24;
        v25 = *((_DWORD *)a2 + 47) ^ *((_DWORD *)a2 + 46);
        v26 = *((_DWORD *)a2 + 47);
        *((_DWORD *)a2 + 46) = v26;
        *((_DWORD *)a2 + 47) = v25 ^ v26;
        v27 = *((_DWORD *)a2 + 48) ^ *((_DWORD *)a2 + 49);
        v28 = *((_DWORD *)a2 + 49);
        *((_DWORD *)a2 + 48) = v28;
        v29 = v27 ^ v28;
        v30 = *((_DWORD *)a2 + 51);
        *((_DWORD *)a2 + 49) = v29;
        v31 = *((_DWORD *)a2 + 50);
        v32 = v31 ^ v30;
        v33 = v32 ^ v31;
        *((_DWORD *)a2 + 50) = v33;
        v20 = v32 ^ (unsigned int)v33;
        *((_DWORD *)a2 + 51) = v20;
      }
      if ( v19 )
      {
        v34 = v12 - 1;
        if ( v34 )
        {
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              if ( v36 != 1 )
              {
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v19);
                return;
              }
              v37 = v19[8];
            }
            else
            {
              v37 = v19[6];
            }
          }
          else
          {
            v37 = v19[4];
          }
        }
        else
        {
          v37 = v19[2];
        }
        v19[10] = v37;
      }
    }
  }
  else
  {
    v21 = _mm_srli_si128(v9, 8).m128i_u64[0];
    *((_DWORD *)a2 + 50) = v21 - v9.m128i_i32[0];
    *((_DWORD *)a2 + 51) = HIDWORD(v21) - v9.m128i_i32[1];
    if ( *((_DWORD *)a1 + 212) )
      v22 = (__int128 *)RIMGetMonitorPhysicalSize(&v39, *((_QWORD *)a1 + 107));
    else
      v22 = (__int128 *)RIMGetVirtualDesktopPhysicalSize(v38);
    v39 = *v22;
    *((_OWORD *)a2 + 11) = v39;
  }
}
