/*
 * XREFs of RegisterHvLegacyPcc @ 0x1C001ACA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     ResetEnumerationContext @ 0x1C0003CB4 (ResetEnumerationContext.c)
 *     EnumerateNextDevice @ 0x1C0003CD0 (EnumerateNextDevice.c)
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 *     GetPerfDomain @ 0x1C0022064 (GetPerfDomain.c)
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
  int v12; // eax
  __int64 v14; // [rsp+30h] [rbp-81h]
  _QWORD v15[2]; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v16[4]; // [rsp+48h] [rbp-69h] BYREF
  __int64 v17[4]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v18[10]; // [rsp+88h] [rbp-29h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  memset(v18, 0, 0x48uLL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  PerfDomain = GetPerfDomain(a1, v17, v15);
  if ( LODWORD(v15[0]) == 253 )
  {
    v8 = 1LL;
  }
  else
  {
    v8 = 0LL;
    if ( LODWORD(v15[0]) == 254 )
      v8 = 2LL;
  }
  v9 = 0LL;
  v10 = -1073741823;
  v15[0] = qword_1C0011868;
  if ( (unsigned __int8)qword_1C0011868 <= 1u )
  {
    v3 = qword_1C0011860;
    v5 = qword_1C0011858;
    if ( (_BYTE)qword_1C0011868 == 1 )
    {
      v11 = v15[0];
      v6 = v15[0] >> 8;
      if ( BYTE1(v15[0]) )
      {
        v15[0] = 0x20000000000000LL;
        LOWORD(v15[0]) = WORD2(v11);
        switch ( BYTE3(v11) )
        {
          case 8:
            WORD1(v15[0]) = 0;
            break;
          case 0x10:
            WORD1(v15[0]) = 1;
            break;
          case 0x20:
            WORD1(v15[0]) = 2;
            break;
        }
        v4 = BYTE2(v11);
        v10 = 0;
        v2 = ((1LL << SBYTE3(v11)) - 1) & ~(((1LL << v6) - 1) << SBYTE2(v11));
        v9 = v15[0];
      }
    }
    else if ( !(_BYTE)qword_1C0011868 )
    {
      v10 = -1073741823;
    }
  }
  if ( v10 >= 0 )
  {
    HIDWORD(v18[0]) = dword_1C0011818;
    v18[2] = qword_1C0011848;
    LODWORD(v18[3]) = dword_1C0011850;
    v18[6] = v5 << v4;
    v18[5] = v3 << v4;
    LODWORD(v18[0]) = 0;
    v18[1] = __PAIR64__(v8, PerfDomain);
    v18[4] = v9;
    v18[7] = v2;
    memset(v16, 0, sizeof(v16));
    LODWORD(v16[0]) = 60;
    ResetEnumerationContext(v17);
    while ( !(unsigned int)EnumerateNextDevice((__int64)v17, v15) )
    {
      v18[8] = **(_QWORD **)(v15[0] + 552LL);
      HIDWORD(v16[0]) = *(_DWORD *)(v15[0] + 48LL);
      v16[3] = v18;
      if ( qword_1C0011648 )
        v12 = qword_1C0011648(v16);
      else
        v12 = -1073741822;
      if ( v12 < 0 )
      {
        v10 = v12;
        LODWORD(v14) = v12;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0xEu,
          (__int64)&WPP_15b16aaf01ba346f37f33139b3211597_Traceguids,
          v14);
      }
    }
    ++dword_1C0011818;
    if ( v10 < 0 )
    {
      LODWORD(v18[0]) = 1;
      v16[3] = v18;
      ResetEnumerationContext(v17);
      while ( !(unsigned int)EnumerateNextDevice((__int64)v17, v15) )
      {
        HIDWORD(v16[0]) = *(_DWORD *)(v15[0] + 48LL);
        if ( qword_1C0011648 )
          qword_1C0011648(v16);
      }
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    qword_1C00113E8,
    v6,
    v8);
  return (unsigned int)v10;
}
