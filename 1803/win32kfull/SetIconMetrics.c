/*
 * XREFs of SetIconMetrics @ 0x1C0053A98
 * Callers:
 *     UserOnGreTextReady @ 0x1C0050168 (UserOnGreTextReady.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C0050D10 (xxxUpdatePerUserSystemParameters.c)
 *     xxxInitWindowStation @ 0x1C00B3FAC (xxxInitWindowStation.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01A3F40 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C0053FE8 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     ?GetLocalizedInt@@YAHIH@Z @ 0x1C0054050 (-GetLocalizedInt@@YAHIH@Z.c)
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C00540D0 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetAltScaleFont @ 0x1C00545A4 (UserSetAltScaleFont.c)
 *     UserSetFont @ 0x1C005466C (UserSetFont.c)
 *     GreMarkDeletableFont @ 0x1C0054A2C (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, char *a2)
{
  struct HLFONT__ **v4; // rbx
  int v5; // esi
  __int64 v6; // rax
  int v7; // edx
  int LocalizedInt; // eax
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // r8d
  _DWORD v14[4]; // [rsp+30h] [rbp-A8h] BYREF
  char v15; // [rsp+40h] [rbp-98h] BYREF
  int TWIPSMetricById; // [rsp+44h] [rbp-94h]
  int v17; // [rsp+48h] [rbp-90h]
  int v18; // [rsp+4Ch] [rbp-8Ch]

  v4 = (struct HLFONT__ **)(GetSessionDpiMetrics() + 64);
  v5 = UserSetFont(
         a1,
         (unsigned __int64)(a2 + 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
         154LL,
         v4);
  if ( v5 )
  {
    v6 = Get96DpiMetrics();
    v5 = UserSetAltScaleFont(*v4, v6 + 64);
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
    FastGetProfileIntFromID(a1, 23LL, 66LL, 1LL, v14, 0);
    v18 = v14[0];
    LocalizedInt = GetLocalizedInt(0x71u, v7);
    TWIPSMetricById = GetTWIPSMetricById(a1, 0x40u, LocalizedInt);
    v10 = GetLocalizedInt(0x72u, v9);
    v17 = GetTWIPSMetricById(a1, 0x41u, v10);
    a2 = &v15;
  }
  v11 = *((_DWORD *)a2 + 1);
  v12 = *((_DWORD *)a2 + 2);
  if ( v11 <= *(_DWORD *)(gpsi + 2304LL) )
    v11 = *(_DWORD *)(gpsi + 2304LL);
  *((_DWORD *)a2 + 1) = v11;
  if ( v12 <= *(_DWORD *)(gpsi + 2308LL) )
    v12 = *(_DWORD *)(gpsi + 2308LL);
  *((_DWORD *)a2 + 2) = v12;
  SetDpiDepSysMet(18LL);
  SetDpiDepSysMet(19LL);
  *(_DWORD *)(gpsi + 2476LL) = EngMulDiv(*(_DWORD *)(gpsi + 2356LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  *(_DWORD *)(gpsi + 2480LL) = EngMulDiv(*(_DWORD *)(gpsi + 2360LL), 96, *(unsigned __int16 *)(gpsi + 6998LL));
  if ( *((_DWORD *)a2 + 3) )
    gdwPUDFlags |= 0x200000u;
  else
    gdwPUDFlags &= ~0x200000u;
  return 1LL;
}
