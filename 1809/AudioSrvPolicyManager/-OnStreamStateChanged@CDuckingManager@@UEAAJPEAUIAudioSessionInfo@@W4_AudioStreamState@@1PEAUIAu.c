/*
 * XREFs of ?OnStreamStateChanged@CDuckingManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000C480
 * Callers:
 *     ?OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x180009CE0 (-OnStreamStateChanged@CWindowsPolicyManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1P.c)
 * Callees:
 *     WPP_SF_ @ 0x180008164 (WPP_SF_.c)
 *     WPP_SF_d @ 0x180008188 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008498 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_ddS @ 0x18000BD10 (WPP_SF_ddS.c)
 *     ?QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z @ 0x18000DED0 (-QueueDuckingWorkItem@CDuckingManager@@AEAAJPEAUIAudioSessionInfo@@KW4DUCK_WORK_ITEM_TYPE@@H@Z.c)
 *     ?GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z @ 0x180010864 (-GetPBMRelatedAudioStreamCategory@@YAJPEAUIAudioProcess@@KPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800380A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::OnStreamStateChanged(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  _UNKNOWN **v8; // rcx
  const wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  USHORT v12; // dx
  int PBMRelatedAudioStreamCategory; // ebx
  __int64 v14; // rsi
  struct IAudioProcess *v15; // rbx
  unsigned int v16; // eax
  _UNKNOWN **v17; // rcx
  int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r9d
  struct IAudioProcess *v23; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0LL;
  v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    WPP_SF_ddS(*((_QWORD *)WPP_GLOBAL_Control + 2), v10, v11, a4, *(_DWORD *)(a1 + 292), v9);
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
  }
  if ( *(_DWORD *)(a1 + 296) )
  {
    if ( v8 == &WPP_GLOBAL_Control || (*((_DWORD *)v8 + 7) & 0x8000000) == 0 || *((_BYTE *)v8 + 25) < 4u )
      goto LABEL_16;
    v12 = 14;
LABEL_15:
    WPP_SF_((TRACEHANDLE)v8[2], v12, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids);
LABEL_16:
    PBMRelatedAudioStreamCategory = 0;
    goto LABEL_26;
  }
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
  {
    v8 = (_UNKNOWN **)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 4u )
    {
      goto LABEL_16;
    }
    v12 = 15;
    goto LABEL_15;
  }
  v14 = a5;
  PBMRelatedAudioStreamCategory = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess **))(*(_QWORD *)a5 + 24LL))(
                                    a5,
                                    &v23);
  if ( PBMRelatedAudioStreamCategory < 0 )
    goto LABEL_20;
  v15 = v23;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
  v24 = 0;
  if ( v16 >= 0x15 )
  {
    PBMRelatedAudioStreamCategory = -2147024809;
LABEL_20:
    v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
LABEL_21:
    if ( v17 != &WPP_GLOBAL_Control && (*((_DWORD *)v17 + 7) & 0x8000000) != 0 && *((_BYTE *)v17 + 25) >= 2u )
      WPP_SF_d(
        (TRACEHANDLE)v17[2],
        0x13u,
        &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids,
        PBMRelatedAudioStreamCategory);
    AudPolicyLogError("CDuckingManager::OnStreamStateChanged", 245, PBMRelatedAudioStreamCategory);
    goto LABEL_26;
  }
  PBMRelatedAudioStreamCategory = GetPBMRelatedAudioStreamCategory(v15, v16, &v24);
  if ( PBMRelatedAudioStreamCategory < 0 )
    goto LABEL_20;
  if ( v24 == 3 )
  {
    if ( a4 == 1 )
    {
      v19 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 288));
      v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, v19);
        v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( *(_DWORD *)(a1 + 292) != 3 )
      {
        v20 = *(unsigned int *)(a1 + 288);
        v21 = 1LL;
LABEL_42:
        PBMRelatedAudioStreamCategory = CDuckingManager::QueueDuckingWorkItem(a1 - 16, a2, v20, v21, 1);
LABEL_50:
        v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
    }
    else
    {
      if ( a4 )
        goto LABEL_50;
      v22 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 288));
      v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, v22);
        v17 = (_UNKNOWN **)WPP_GLOBAL_Control;
      }
      if ( *(_DWORD *)(a1 + 292) != 3 )
      {
        v21 = 2LL;
        v20 = 0LL;
        goto LABEL_42;
      }
    }
    if ( PBMRelatedAudioStreamCategory >= 0 )
      goto LABEL_26;
    goto LABEL_21;
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x10u, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids);
  }
LABEL_26:
  if ( v23 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v23 + 16LL))(v23);
  return (unsigned int)PBMRelatedAudioStreamCategory;
}
