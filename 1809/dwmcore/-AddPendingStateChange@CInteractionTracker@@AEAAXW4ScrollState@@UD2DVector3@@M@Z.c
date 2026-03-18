/*
 * XREFs of ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18019DFA8
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x18019DE80 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x1801A047C (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801A285C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::AddPendingStateChange(__int64 a1, int a2, __int64 *a3, float a4)
{
  __int64 v4; // r10
  __int64 v5; // xmm0_8
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  float v13; // [rsp+40h] [rbp-18h]

  v4 = a1;
  if ( !*(_DWORD *)(a1 + 496)
    || (a1 = 5LL * (unsigned int)(*(_DWORD *)(a1 + 496) - 1), *(_DWORD *)(*(_QWORD *)(v4 + 472) + 4 * a1) != a2) )
  {
    v5 = *a3;
    HIDWORD(v12) = *((_DWORD *)a3 + 2);
    v6 = *(unsigned int *)(v4 + 496);
    v13 = a4;
    LODWORD(v12) = a2;
    *(_QWORD *)((char *)&v12 + 4) = v5;
    v7 = v6 + 1;
    if ( (int)v6 + 1 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, (int)v6 + 1 < (unsigned int)v6 ? 0x80070216 : 0, 0xB5u);
    }
    else if ( v7 > *(_DWORD *)(v4 + 492) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 472, 20, 1, &v12);
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      v8 = *(_QWORD *)(v4 + 472);
      v9 = 5 * v6;
      *(_OWORD *)(v8 + 4 * v9) = v12;
      *(float *)(v8 + 4 * v9 + 16) = v13;
      *(_DWORD *)(v4 + 496) = v7;
    }
  }
}
