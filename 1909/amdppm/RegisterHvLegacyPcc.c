/*
 * XREFs of RegisterHvLegacyPcc @ 0x1C0020EB0
 * Callers:
 *     <none>
 * Callees:
 *     ResetEnumerationContext @ 0x1C00025D4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C00025F0 (EnumerateNextDevice.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     GetPerfDomain @ 0x1C002D710 (GetPerfDomain.c)
 */

__int64 __fastcall RegisterHvLegacyPcc(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  char v4; // r15
  __int64 v5; // r14
  __int64 v6; // r8
  unsigned int PerfDomain; // r10d
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rcx
  unsigned __int8 v12; // r11
  unsigned __int8 v13; // r13
  int v14; // eax
  __int64 v16; // [rsp+30h] [rbp-81h]
  _QWORD v17[2]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v18[4]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v19[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v20[10]; // [rsp+88h] [rbp-29h] BYREF

  memset(v19, 0, sizeof(v19));
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  memset(v18, 0, sizeof(v18));
  memset(v20, 0, 0x48uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C0013418,
    0LL);
  PerfDomain = GetPerfDomain(a1, v19, v17);
  if ( LODWORD(v17[0]) == 253 )
  {
    v8 = 1LL;
  }
  else
  {
    v8 = 0LL;
    if ( LODWORD(v17[0]) == 254 )
      v8 = 2LL;
  }
  v9 = 0LL;
  v10 = -1073741823;
  v17[0] = qword_1C00138A8;
  if ( (unsigned __int8)qword_1C00138A8 <= 1u )
  {
    v3 = qword_1C00138A0;
    v5 = qword_1C0013898;
    if ( (_BYTE)qword_1C00138A8 == 1 )
    {
      v11 = v17[0];
      v6 = v17[0] >> 8;
      if ( BYTE1(v17[0]) )
      {
        v17[0] = 0x20000000000000LL;
        LOWORD(v17[0]) = WORD2(v11);
        switch ( BYTE3(v11) )
        {
          case 8:
            WORD1(v17[0]) = 0;
            break;
          case 0x10:
            WORD1(v17[0]) = 1;
            break;
          case 0x20:
            WORD1(v17[0]) = 2;
            break;
        }
        v4 = BYTE2(v11);
        v10 = 0;
        v2 = ((1LL << SBYTE3(v11)) - 1) & ~(((1LL << v6) - 1) << SBYTE2(v11));
        v9 = v17[0];
      }
    }
    else if ( !(_BYTE)qword_1C00138A8 )
    {
      v10 = -1073741823;
    }
  }
  if ( v10 >= 0 )
  {
    HIDWORD(v20[0]) = dword_1C0013858;
    v20[2] = qword_1C0013888;
    LODWORD(v20[3]) = dword_1C0013890;
    v20[6] = v5 << v4;
    v20[5] = v3 << v4;
    v20[1] = __PAIR64__(v8, PerfDomain);
    v20[4] = v9;
    v20[7] = v2;
    LODWORD(v18[0]) = 62;
    ResetEnumerationContext(v19);
    if ( !(unsigned int)EnumerateNextDevice((__int64)v19, v17) )
    {
      v13 = v12;
      do
      {
        v20[8] = **(_QWORD **)(v17[0] + 568LL);
        HIDWORD(v18[0]) = *(_DWORD *)(v17[0] + 48LL);
        v18[3] = v20;
        if ( qword_1C0013688 )
          v14 = qword_1C0013688(v18);
        else
          v14 = -1073741822;
        if ( v14 < 0 )
        {
          v10 = v14;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v16) = v14;
            WPP_RECORDER_SF_D(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v13,
              3u,
              0x10u,
              (__int64)&WPP_aa6b72db0ffa30e8128541a88ae276d2_Traceguids,
              v16);
          }
        }
      }
      while ( !(unsigned int)EnumerateNextDevice((__int64)v19, v17) );
    }
    ++dword_1C0013858;
    if ( v10 < 0 )
    {
      LODWORD(v20[0]) = 1;
      v18[3] = v20;
      ResetEnumerationContext(v19);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v19, v17) )
      {
        HIDWORD(v18[0]) = *(_DWORD *)(v17[0] + 48LL);
        if ( qword_1C0013688 )
          qword_1C0013688(v18);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    qword_1C0013418,
    v6,
    v8);
  return (unsigned int)v10;
}
