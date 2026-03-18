/*
 * XREFs of ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x18005E420
 * Callers:
 *     <none>
 * Callees:
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x180097528 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x1800D8014 (-UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x1800EAA00 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::CheckOcclusionState(CHwndRenderTarget *this)
{
  CHwndRenderTarget *v1; // rdi
  int v3; // eax
  unsigned int v4; // ecx
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v9; // rax

  v1 = (CHwndRenderTarget *)((char *)this - 64);
  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 240LL))((char *)this - 64);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, &dword_1802925D8, 2u, v3, 0x6DCu);
  }
  else if ( (*((_BYTE *)this + 384) & 0x10) != 0
         && (*((_BYTE *)this + 795) || *((_QWORD *)this + 58) != *(_QWORD *)(*((_QWORD *)this - 6) + 368LL) - 1LL) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 264LL))(*((_QWORD *)this + 14));
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802925D8, 2u, v6, 0x6E9u);
    if ( *((_BYTE *)this + 795) )
    {
      v9 = (unsigned int)(v5 - 142213121);
      if ( (unsigned int)v9 > 0x2E || (v7 = 0x400000000201LL, !_bittest64(&v7, v9)) )
      {
        if ( v5 > -1 )
          v5 = 142213129;
      }
    }
    if ( v5 >= 0 )
      goto LABEL_9;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802925D8, 2u, v5, 0x6EBu);
  }
  if ( v5 < 0 )
  {
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    *((_BYTE *)v1 + 161) = 1;
    return (unsigned int)v5;
  }
LABEL_9:
  switch ( v5 )
  {
    case 142213121:
      *((_BYTE *)v1 + 859) = 1;
      break;
    case 142213129:
      *((_BYTE *)v1 + 859) = 0;
      *((_BYTE *)v1 + 161) = 1;
      CHwndRenderTarget::UpdateMPOCaps(v1, 1);
      break;
    case 142213130:
    case 142213167:
      ScheduleCompositionPass(0LL, 0x2000LL);
      *((_BYTE *)v1 + 857) = 1;
      break;
  }
  return (unsigned int)v5;
}
