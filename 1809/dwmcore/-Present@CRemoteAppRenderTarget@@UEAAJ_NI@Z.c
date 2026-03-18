/*
 * XREFs of ?Present@CRemoteAppRenderTarget@@UEAAJ_NI@Z @ 0x18015FB40
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180097528 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::Present(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx
  __int64 result; // rax

  v1 = 0;
  if ( *((_BYTE *)this + 240) && *(_DWORD *)(*((_QWORD *)this - 6) + 1080LL) == 6 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 176LL))(*((_QWORD *)this + 14));
    v1 = v3;
    if ( v3 == -2005270518 )
    {
      ScheduleCompositionPass(0, 0x2000u);
      v1 = 0;
      *((_BYTE *)this + 97) = 1;
    }
    else if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xC4u);
    }
  }
  result = v1;
  *((_BYTE *)this + 240) = 0;
  return result;
}
