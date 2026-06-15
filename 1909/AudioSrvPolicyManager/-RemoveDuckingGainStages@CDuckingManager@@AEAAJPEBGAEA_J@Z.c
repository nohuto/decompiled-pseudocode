/*
 * XREFs of ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x18000BA08
 * Callers:
 *     ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000B2A8 (-OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x1800087E4 (WPP_SF_S.c)
 *     ?GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@@Z @ 0x18000BB48 (-GetDuckableSessionsList@CDuckingManager@@AEAAJPEBGAEAV-$CAtlList@PEAUIAudioSessionInfo@@V-$CEle.c)
 *     ?RemoveHead@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAPEAUIAudioSessionInfo@@XZ @ 0x18000C8BC (-RemoveHead@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@AT.c)
 *     ?RemoveAll@?$CAtlList@PEAUIAudioSessionInfo@@V?$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL@@QEAAXXZ @ 0x18000CE8C (-RemoveAll@-$CAtlList@PEAUIAudioSessionInfo@@V-$CElementTraits@PEAUIAudioSessionInfo@@@ATL@@@ATL.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::RemoveDuckingGainStages(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        __int64 *a3)
{
  int DuckableSessionsList; // ebx
  __int64 v5; // rbx
  const wchar_t *v6; // rax
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+38h] [rbp-18h]
  int v12; // [rsp+48h] [rbp-8h]
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF

  v10 = 0LL;
  v12 = 10;
  v9 = 0LL;
  v11 = 0LL;
  DuckableSessionsList = CDuckingManager::GetDuckableSessionsList(this, a2, &v9);
  if ( DuckableSessionsList < 0 )
    goto LABEL_15;
  while ( v10 )
  {
    v5 = ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveHead(&v9);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v6 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x35u, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, v6);
    }
    v13 = 0LL;
    v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
           v5,
           &GUID_766f2bf0_bcaf_4cd0_a45e_0a166fb7e35c,
           &v13);
    if ( v7 >= 0 )
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, 0LL, a3);
    DuckableSessionsList = 0;
    if ( v7 != -2147024894 )
      DuckableSessionsList = v7;
    if ( v13 )
      (*(void (**)(void))(*(_QWORD *)v13 + 16LL))();
  }
  if ( DuckableSessionsList < 0 )
LABEL_15:
    AudPolicyLogError("CDuckingManager::RemoveDuckingGainStages", 1601, DuckableSessionsList);
  ATL::CAtlList<IAudioSessionInfo *,ATL::CElementTraits<IAudioSessionInfo *>>::RemoveAll(&v9);
  return (unsigned int)DuckableSessionsList;
}
