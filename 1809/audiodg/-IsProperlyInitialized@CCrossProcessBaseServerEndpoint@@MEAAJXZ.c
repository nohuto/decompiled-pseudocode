/*
 * XREFs of ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140051BF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 */

__int64 __fastcall CCrossProcessBaseServerEndpoint::IsProperlyInitialized(CCrossProcessBaseServerEndpoint *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 53);
  if ( v1 )
  {
    _InterlockedExchange64((volatile __int64 *)this + 52, v1);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_8c7d5060b2be33924f816ff2c067e6b5_Traceguids,
        *((_QWORD *)this + 52));
    }
    if ( !*((_QWORD *)this + 52) )
      return 2147500037LL;
    *((_QWORD *)this + 53) = 0LL;
  }
  else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xBu, (__int64)&WPP_8c7d5060b2be33924f816ff2c067e6b5_Traceguids);
  }
  return 0LL;
}
