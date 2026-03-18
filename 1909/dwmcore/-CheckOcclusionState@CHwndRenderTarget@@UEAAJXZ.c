/*
 * XREFs of ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x1800BC5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ @ 0x18002BC20 (-ReleaseResourcesForDisplayChange@CHwndRenderTarget@@UEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z @ 0x1800CA438 (-ScheduleCompositionPass@@YAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::CheckOcclusionState(CHwndRenderTarget *this)
{
  char *v1; // rdi
  signed int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  signed int v6; // ebx
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 v11; // rax

  v1 = (char *)this - 64;
  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 8) + 368LL))((char *)this - 64);
  v6 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802BE2C0, 2u, v3, 0x6F1u, 0LL);
  }
  else if ( (*((_BYTE *)this + 384) & 0x10) != 0
         && (*((_BYTE *)this + 795) || *((_QWORD *)this + 58) != *(_QWORD *)(*((_QWORD *)this - 6) + 384LL) - 1LL) )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 14) + 264LL))(*((_QWORD *)this + 14));
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802BE2C0, 2u, v8, 0x6FEu, 0LL);
    if ( *((_BYTE *)this + 795) )
    {
      v10 = (unsigned int)(v6 - 142213121);
      if ( (unsigned int)v10 > 0x2E || (v9 = 0x400000000201LL, !_bittest64(&v9, v10)) )
      {
        if ( v6 > -1 )
          v6 = 142213129;
      }
    }
    if ( v6 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802BE2C0, 2u, v6, 0x700u, 0LL);
  }
  if ( v6 < 0 )
  {
    CHwndRenderTarget::ReleaseResourcesForDisplayChange(this);
    v1[161] = 1;
    return (unsigned int)v6;
  }
LABEL_6:
  switch ( v6 )
  {
    case 142213121:
      v1[859] = 1;
      break;
    case 142213129:
      v11 = *(_QWORD *)v1;
      LOBYTE(v4) = 1;
      v1[859] = 0;
      v1[161] = 1;
      (*(void (__fastcall **)(char *, __int64))(v11 + 272))(v1, v4);
      break;
    case 142213130:
    case 142213167:
      ScheduleCompositionPass(0LL, 0x2000LL);
      v1[857] = 1;
      break;
  }
  return (unsigned int)v6;
}
