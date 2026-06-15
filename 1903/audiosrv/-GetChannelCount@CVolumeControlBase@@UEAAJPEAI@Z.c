/*
 * XREFs of ?GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z @ 0x1800C5570
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qd @ 0x1800C4024 (WPP_SF_qd.c)
 */

__int64 __fastcall CVolumeControlBase::GetChannelCount(CVolumeControlBase *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // eax
  unsigned int v5; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_DWORD *)this + 31);
    *a2 = v3;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v5 = v3;
      WPP_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x13u,
        (__int64)&WPP_34cc793d71ec3a02028bb6e14c4d6c3a_Traceguids,
        this,
        v5);
    }
  }
  else
  {
    v2 = -2147467261;
    AudSrvTraceLoggingErrorHelper("CVolumeControlBase::GetChannelCount", 381, -2147467261);
  }
  return v2;
}
