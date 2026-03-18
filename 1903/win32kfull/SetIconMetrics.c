/*
 * XREFs of SetIconMetrics @ 0x1C00E4424
 * Callers:
 *     xxxInitWindowStation @ 0x1C00E04A8 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     UserOnGreTextReady @ 0x1C00E886C (UserOnGreTextReady.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01D957C (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C00E49F8 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     ?GetLocalizedInt@@YAHIH@Z @ 0x1C00E4A68 (-GetLocalizedInt@@YAHIH@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00E4B04 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C00E5570 (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1C00E5658 (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1C00E5B2C (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, unsigned int *a2)
{
  struct HLFONT__ **v4; // rbx
  int v5; // edi
  int v6; // edx
  int LocalizedInt; // eax
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  signed int v11; // r8d
  int v12; // ecx
  int v14; // [rsp+30h] [rbp-A8h]
  _DWORD v15[28]; // [rsp+40h] [rbp-98h] BYREF

  memset(v15, 0, 0x6CuLL);
  v4 = (struct HLFONT__ **)(GetSessionDpiMetrics() + 64);
  v5 = UserSetFont(
         a1,
         (unsigned __int64)(a2 + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
         154LL,
         v4);
  if ( v5 )
  {
    Get96DpiMetrics();
    v5 = UserSetAltScaleFont((int)*v4);
    if ( !v5 )
    {
      GreMarkDeletableFont(*v4);
      GreDeleteObject(*v4);
      *v4 = 0LL;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  if ( !v5 )
    return 0LL;
  if ( !a2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 66LL);
    v15[3] = v14;
    LocalizedInt = GetLocalizedInt(0x71u, v6);
    v15[1] = GetTWIPSMetricById(a1, 0x40u, LocalizedInt);
    v9 = GetLocalizedInt(0x72u, v8);
    v15[2] = GetTWIPSMetricById(a1, 0x41u, v9);
    a2 = v15;
  }
  v10 = a2[1];
  v11 = a2[2];
  v12 = *(_DWORD *)(gpsi + 2304LL);
  if ( (int)v10 <= v12 )
    v10 = (unsigned int)v12;
  a2[1] = v10;
  if ( v11 <= *(_DWORD *)(gpsi + 2308LL) )
    v11 = *(_DWORD *)(gpsi + 2308LL);
  a2[2] = v11;
  SetDpiDepSysMet(18LL, v10);
  SetDpiDepSysMet(19LL, a2[2]);
  *(_DWORD *)(gpsi + 2476LL) = EngMulDiv(*(_DWORD *)(gpsi + 2356LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2480LL) = EngMulDiv(*(_DWORD *)(gpsi + 2360LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  if ( a2[3] )
    gdwPUDFlags |= 0x200000u;
  else
    gdwPUDFlags &= ~0x200000u;
  return 1LL;
}
