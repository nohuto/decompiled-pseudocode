/*
 * XREFs of ?OnAutoUnduckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x18000B2A8
 * Callers:
 *     ?OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000ADF0 (-OnDuckWorkItem@CDuckingManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800041BC (WPP_SF_.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180004B98 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     WPP_SF_S @ 0x1800087E4 (WPP_SF_S.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000A770 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18000AA70 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x18000B88C (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z @ 0x18000BA08 (-RemoveDuckingGainStages@CDuckingManager@@AEAAJPEBGAEA_J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800359C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDuckingManager::OnAutoUnduckWorkItem(CDuckingManager *this, struct CDuckWorkItem *a2)
{
  int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  const wchar_t *v6; // rax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v8; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  struct _RTL_CRITICAL_SECTION *v10; // rbp
  const unsigned __int16 *v11; // rbx
  const unsigned __int16 *v12; // rax
  const unsigned __int16 *v13; // rax
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids);
  }
  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2) || *((_DWORD *)a2 + 4) )
  {
    Sleep(0x1F4u);
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
    v11 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 72LL))(*(_QWORD *)a2);
    if ( (int)CDuckingManager::RemoveDuckingGainStages(this, v11, &v15) >= 0 )
      CDuckingManager::RecalculateSessionVolumes(this, v11, &v15);
    if ( !*((_DWORD *)this + 76) )
    {
      v12 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
      CDuckingManager::NotifyFilteredClientsAutoUnduck(this, v12);
    }
    v13 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
    v4 = CDuckingManager::NotifyUnfilteredClientsAutoUnduck(this, v13);
    if ( !v10 )
      goto LABEL_25;
    v9 = v10;
    goto LABEL_24;
  }
  if ( !*((_DWORD *)this + 76) )
    return (unsigned int)v4;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v6 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)a2 + 64LL))(*(_QWORD *)a2);
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x33u, &WPP_2f08ed43560a3dfd6165ccd158e2df11_Traceguids, v6);
  }
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2;
  v15 = 0LL;
  v4 = (**v7)(v7, &GUID_766f2bf0_bcaf_4cd0_a45e_0a166fb7e35c, &v15);
  if ( v4 >= 0 )
  {
    LOBYTE(v8) = 1;
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 48LL))(v15, v8, 0LL);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v5 )
  {
    v9 = v5;
LABEL_24:
    LeaveCriticalSection(v9);
  }
LABEL_25:
  if ( v4 < 0 )
    AudPolicyLogError("CDuckingManager::OnAutoUnduckWorkItem", 1379, v4);
  return (unsigned int)v4;
}
