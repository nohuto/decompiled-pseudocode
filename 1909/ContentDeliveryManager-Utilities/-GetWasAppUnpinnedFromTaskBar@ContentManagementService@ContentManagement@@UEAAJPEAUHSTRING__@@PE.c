/*
 * XREFs of ?GetWasAppUnpinnedFromTaskBar@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x18002D800
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PEAPEAUICDSLocalTileProperties@CDSProperties@Shell@WindowsInternal@@@Z @ 0x18002D28C (-GetLocalTilePropertiesForApp@ContentManagementService@ContentManagement@@AEAAJPEAUHSTRING__@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::ContentManagementService::GetWasAppUnpinnedFromTaskBar(
        RTL_SRWLOCK *this,
        HSTRING a2,
        unsigned __int8 *a3)
{
  int LocalTilePropertiesForApp; // ebx
  int v5; // eax
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *v9; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v9 = 0LL;
  LocalTilePropertiesForApp = ContentManagement::ContentManagementService::GetLocalTilePropertiesForApp(
                                this - 12,
                                a2,
                                &v9);
  if ( LocalTilePropertiesForApp >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *, unsigned __int8 *))(*(_QWORD *)v9 + 80LL))(
           v9,
           a3);
    LocalTilePropertiesForApp = v5;
    if ( v5 >= 0 )
      LocalTilePropertiesForApp = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3E1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)v5);
  }
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::CDSProperties::ICDSLocalTileProperties *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return (unsigned int)LocalTilePropertiesForApp;
}
