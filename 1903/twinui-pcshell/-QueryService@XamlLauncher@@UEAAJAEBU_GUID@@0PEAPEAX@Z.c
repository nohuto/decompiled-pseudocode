/*
 * XREFs of ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180041800
 * Callers:
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x180011BF8 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1802F4230 (-PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x1802F4390 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNotification@@UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180029B60 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIImmersiveShellHookNot.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall XamlLauncher::QueryService(XamlLauncher *this, const struct _GUID *a2, struct _GUID *a3, void **a4)
{
  int v4; // ebx
  __int64 v6; // rax
  char *v7; // rcx
  int CanCastTo; // edi
  __int64 v10; // r8
  _QWORD *v11; // r9
  _DWORD *v12; // r10
  IUnknown *v13; // rcx

  v4 = 0;
  *a4 = 0LL;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveLauncher.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveLauncher.Revision )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveLauncher.SubAuthority;
  if ( v6 )
  {
    v13 = (IUnknown *)*((_QWORD *)this - 4);
    if ( v13 )
      return IUnknown_QueryService(v13, a2, a3, a4);
    else
      return -2147467262;
  }
  else
  {
    v7 = (char *)this - 48;
    if ( !a3->Data1
      && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
      && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a4 = v7;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      if ( a3->Data1 == -62389853
        && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4]
        || (v7 += 24, a3->Data1 == -657063015)
        && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data2
        && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data4
        && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data4[4] )
      {
        *a4 = v7;
        CanCastTo = 0;
      }
      else
      {
        if ( InlineIsEqualGUID(a3, &GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d) )
        {
          *v11 = v10;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveShellHookNotification,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback,IPrivilegedOperationsConsumer>::CanCastTo(
                        v10 + 8,
                        v12,
                        a4);
        }
        if ( CanCastTo == -2147467262 )
          CanCastTo = -2147467262;
      }
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
      return CanCastTo;
    }
    return v4;
  }
}
