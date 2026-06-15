/*
 * XREFs of ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x1400151D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     WPP_SF_q @ 0x140037F04 (WPP_SF_q.c)
 *     WPP_SF_dq @ 0x140055F84 (WPP_SF_dq.c)
 */

void __fastcall CCrossProcessBaseServerEndpoint::ProcessingComplete(CCrossProcessBaseServerEndpoint *this)
{
  char v2; // al
  __int64 v3; // rcx
  __int64 v4; // r9

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19LL,
      &WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids,
      *((unsigned int *)this + 42),
      *((_QWORD *)this + 52));
  }
  if ( (*((_DWORD *)this + 42) & 0x40000) != 0 )
  {
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 7) + 164LL), 0, 0) & 1;
    if ( v2 )
    {
      v3 = *((_QWORD *)this + 52);
      if ( v3 )
      {
        _InterlockedExchange64((volatile __int64 *)this + 51, v3);
        *((_QWORD *)this + 52) = 0LL;
      }
    }
    v4 = *((_QWORD *)this + 51);
    if ( v4 )
    {
      if ( (*((_BYTE *)this + 168) & 1) == 0 || v2 )
      {
        if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) == 0
          || *((_BYTE *)WPP_GLOBAL_Control + 25) < 5u )
        {
          SetEvent(*((HANDLE *)this + 51));
        }
        else
        {
          WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids, v4);
          SetEvent(*((HANDLE *)this + 51));
        }
      }
    }
    else if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_66a5760bf1703aef601fd26b60b3d9f6_Traceguids);
    }
  }
}
