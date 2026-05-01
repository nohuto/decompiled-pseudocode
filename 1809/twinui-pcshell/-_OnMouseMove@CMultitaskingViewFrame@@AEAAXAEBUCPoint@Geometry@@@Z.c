/*
 * XREFs of ?_OnMouseMove@CMultitaskingViewFrame@@AEAAXAEBUCPoint@Geometry@@@Z @ 0x1802FC964
 * Callers:
 *     ?v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x1802FCF00 (-v_WndProc@CMultitaskingViewFrame@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::_OnMouseMove(CMultitaskingViewFrame *this, const struct Geometry::CPoint *a2)
{
  HWND v4; // rax
  HWND v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  tagTRACKMOUSEEVENT EventTrack; // [rsp+20h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 2552) )
  {
    v4 = (HWND)*((_QWORD *)this + 5);
    EventTrack.dwHoverTime = 0;
    EventTrack.hwndTrack = v4;
    EventTrack.cbSize = 24;
    EventTrack.dwFlags = 2;
    *((_BYTE *)this + 2552) = TrackMouseEvent(&EventTrack);
  }
  if ( !*((_BYTE *)this + 2553) )
  {
    v5 = (HWND)*((_QWORD *)this + 5);
    EventTrack.dwHoverTime = -1;
    EventTrack.hwndTrack = v5;
    EventTrack.cbSize = 24;
    EventTrack.dwFlags = 1;
    *((_BYTE *)this + 2553) = TrackMouseEvent(&EventTrack);
  }
  v6 = *((_QWORD *)this + 313);
  if ( v6 )
  {
    v7 = *(_QWORD *)a2;
    EventTrack.hwndTrack = 0LL;
    *(_QWORD *)&EventTrack.cbSize = v7;
    EventTrack.dwHoverTime = 4;
    (*(void (__fastcall **)(__int64, tagTRACKMOUSEEVENT *))(*(_QWORD *)v6 + 200LL))(v6, &EventTrack);
  }
}
