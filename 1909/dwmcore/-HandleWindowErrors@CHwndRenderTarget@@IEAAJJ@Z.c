/*
 * XREFs of ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18005B568
 * Callers:
 *     ?InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z @ 0x18005B328 (-InternalPresent@CHwndRenderTarget@@QEAAJ_NAEBURenderTargetPresentParameters@@@Z.c)
 *     ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18005B500 (-GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18002BC20 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800CA438 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::HandleWindowErrors(CHwndRenderTarget *this, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax

  v2 = a2;
  if ( (int)a2 < 0 )
  {
    switch ( (_DWORD)a2 )
    {
      case 0x88980006:
        goto LABEL_14;
      case 0x8898008B:
        v2 = 0;
        break;
      case 0x8898008D:
        v2 = -2003304307;
        break;
      case 0x8898008E:
LABEL_14:
        v2 = -2003304442;
        break;
    }
    CHwndRenderTarget::ReleaseResourcesForDisplayChange((CHwndRenderTarget *)((char *)this + 64));
    *((_BYTE *)this + 161) = 1;
    return v2;
  }
  switch ( (_DWORD)a2 )
  {
    case 0x87A0001:
      *((_BYTE *)this + 859) = 1;
      return v2;
    case 0x87A0009:
      v5 = *(_QWORD *)this;
      LOBYTE(a2) = 1;
      *((_BYTE *)this + 859) = 0;
      *((_BYTE *)this + 161) = 1;
      (*(void (__fastcall **)(CHwndRenderTarget *, __int64))(v5 + 272))(this, a2);
      return 0;
    case 0x87A000A:
    case 0x87A002F:
      ScheduleCompositionPass(0LL, 0x2000LL);
      *((_BYTE *)this + 857) = 1;
      return 0;
  }
  return v2;
}
