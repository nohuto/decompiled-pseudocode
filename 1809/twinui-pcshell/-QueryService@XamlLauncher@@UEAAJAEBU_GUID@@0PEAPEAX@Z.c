/*
 * XREFs of ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180016910
 * Callers:
 *     ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x18000B5C8 (-DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ.c)
 *     ?PerformDelayedInitialization@XamlLauncher@@UEAAJXZ @ 0x18029C470 (-PerformDelayedInitialization@XamlLauncher@@UEAAJXZ.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIServiceProvider@@UIImmersiveShellComponent@@UIImmersiveLauncherCortana@@UIXamlLauncherStateCallback@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800346DC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIServiceProvider@@UIIm.c)
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

HRESULT __fastcall XamlLauncher::QueryService(
        XamlLauncher *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  int v4; // ebx
  __int64 v5; // rax
  char *v6; // rcx
  int CanCastTo; // edi
  __int64 v9; // rcx
  char *v10; // r8
  __int64 v11; // r10
  IUnknown *v12; // rcx

  v4 = 0;
  *a4 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&SID_ImmersiveLauncher.Revision;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&SID_ImmersiveLauncher.Revision )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)SID_ImmersiveLauncher.SubAuthority;
  if ( v5 )
  {
    v12 = (IUnknown *)*((_QWORD *)this - 4);
    if ( v12 )
      return IUnknown_QueryService(v12, a2, a3, a4);
    else
      return -2147467262;
  }
  else
  {
    v6 = (char *)this - 48;
    *a4 = 0LL;
    if ( *(_QWORD *)&a3->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
      && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a4 = v6;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      if ( a3->Data1 == -62389853
        && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data2
        && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4
        && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352.Data4[4]
        || (v6 += 24, a3->Data1 == -657063015)
        && *(_DWORD *)&a3->Data2 == *(_DWORD *)&GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data2
        && *(_DWORD *)a3->Data4 == *(_DWORD *)GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data4
        && *(_DWORD *)&a3->Data4[4] == *(_DWORD *)&GUID_d8d60399_a0f1_f987_5551_321fd1b49864.Data4[4] )
      {
        *a4 = v6;
        CanCastTo = 0;
      }
      else
      {
        if ( (unsigned int)InlineIsEqualGUID(a3, &GUID_bcf1f74f_2413_46b3_8707_ec2fca11965d)
          || (unsigned int)InlineIsEqualGUID(v9, &GUID_4b25b8ee_6129_45e4_b527_f376f89c9c8c) )
        {
          *a4 = v10;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider,IImmersiveShellComponent,IImmersiveLauncherCortana,IXamlLauncherStateCallback>::CanCastTo(
                        v10 + 8,
                        v11,
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
