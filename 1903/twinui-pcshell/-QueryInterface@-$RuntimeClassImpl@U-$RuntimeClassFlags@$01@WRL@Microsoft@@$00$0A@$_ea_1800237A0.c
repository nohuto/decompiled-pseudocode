/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800237A0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0210 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800C0210.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0220 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800C0220.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithSite@@UIPerMonitorShellPositionerManager@@@Details@WRL@Microsoft@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0230 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1800C0230.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithSite,IPerMonitorShellPositionerManager>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // r8
  _DWORD *v10; // r9
  __int64 v11; // r10
  _QWORD *v12; // r11
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // ebx
  __int64 v17; // rcx

  *a3 = 0LL;
  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3, a2) )
  {
    *v4 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    return 0;
  }
  if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352, v4, v5) )
  {
    *v9 = v11;
    v16 = 0;
    v14 = v11;
  }
  else if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4, v11 + 24, v10) )
  {
    *v12 = v14;
    v16 = 0;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v13, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, v14, v10) )
    {
      v14 = v15 + 8;
      *v12 = v14;
      v16 = 0;
    }
    else
    {
      v16 = -2147467262;
      v14 = 0LL;
    }
    if ( v16 != -2147467262 )
    {
LABEL_17:
      v17 = v14;
      if ( v16 < 0 )
        return (unsigned int)v16;
      goto LABEL_14;
    }
    v16 = -2147467262;
  }
  if ( v16 != -2147467262 )
    goto LABEL_17;
  v17 = v11 + 88;
  v7 = v14;
  if ( *v10 != -573495254
    || v10[1] != *(_DWORD *)&GUID_ddd1282a_db1a_46e0_8622_309920263baf.Data2
    || v10[2] != *(_DWORD *)GUID_ddd1282a_db1a_46e0_8622_309920263baf.Data4
    || v10[3] != *(_DWORD *)&GUID_ddd1282a_db1a_46e0_8622_309920263baf.Data4[4] )
  {
    v16 = -2147467262;
    goto LABEL_17;
  }
  *v12 = v17;
  v16 = 0;
LABEL_14:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 8LL))(v17, v7);
  return (unsigned int)v16;
}
