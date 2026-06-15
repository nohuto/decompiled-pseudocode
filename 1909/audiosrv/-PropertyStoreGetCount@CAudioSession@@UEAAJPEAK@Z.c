/*
 * XREFs of ?PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z @ 0x1800D0760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::PropertyStoreGetCount(CAudioSession *this, unsigned int *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x84u, (__int64)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, 0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 61) + 24LL))(
           *((_QWORD *)this + 61),
           a2);
}
