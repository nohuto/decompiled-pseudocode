/*
 * XREFs of ?GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x140030CA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Ds @ 0x14002F404 (WPP_SF_Ds.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::GetFormat(
        CSystemAudioDeviceExclusive *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  int v5; // eax
  struct _RTL_CRITICAL_SECTION *v6; // rcx
  int v7; // edi
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF

  v9 = *(_OWORD *)((char *)this + 248);
  EtwEventActivityIdControl(4LL, &v9);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  v5 = (*(__int64 (__fastcall **)(_QWORD, struct tWAVEFORMATEX **))(**((_QWORD **)this + 29) + 24LL))(
         *((_QWORD *)this + 29),
         a3);
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 184);
  v7 = v5;
  LeaveCriticalSection(v6);
  if ( v7 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_Ds(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xEu,
        (__int64)&WPP_f0d7d168ecd8305ac247a74819cf4a63_Traceguids,
        v7,
        (__int64)"CSystemAudioDeviceExclusive::GetFormat");
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceExclusive::GetFormat", 0x1C4u, v7);
  }
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v7;
}
