/*
 * XREFs of ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x1800C4488
 * Callers:
 *     ?OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C4430 (-OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x1800C46A0 (-ProviderFinalRelease@CMuteSoftware@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_Sl @ 0x1800C4CA4 (WPP_SF_Sl.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMuteSoftware::PersistMuteState(const wchar_t **this)
{
  int v2; // r8d
  PROPVARIANT pvar; // [rsp+38h] [rbp-18h] BYREF
  __int64 v4; // [rsp+40h] [rbp-10h]
  __int64 v5; // [rsp+48h] [rbp-8h]
  __int64 v6; // [rsp+70h] [rbp+20h] BYREF
  __int64 v7; // [rsp+78h] [rbp+28h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x18u,
      (__int64)&WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids,
      this[4]);
  }
  if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         this[4],
         &v7) >= 0
    && (*(int (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 1LL, &v6) >= 0 )
  {
    pvar = (PROPVARIANT)11;
    v4 = 0LL;
    v5 = 0LL;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sl(*((_QWORD *)WPP_GLOBAL_Control + 2), 25, v2, (unsigned int)this[4], *((_DWORD *)this + 6));
    }
    if ( *((_DWORD *)this + 6) )
      LOWORD(v4) = -1;
    else
      LOWORD(v4) = 0;
    (*(void (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v6 + 48LL))(v6, &PKEY_APO_MasterMute, &pvar);
    PropVariantClear(&pvar);
    *((_BYTE *)this + 104) = 0;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
}
