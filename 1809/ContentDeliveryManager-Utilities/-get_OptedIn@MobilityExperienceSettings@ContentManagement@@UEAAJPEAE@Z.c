/*
 * XREFs of ?get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x18000EBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x18000B7F8 (-CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::MobilityExperienceSettings::get_OptedIn(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  void *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = CloudExperienceHostCreateOOBEUserObject(this, a2, &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 655LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  v3 = (*(__int64 (__fastcall **)(void *, const struct _GUID *))(*(_QWORD *)v9 + 32LL))(v9, a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 656LL;
    goto LABEL_5;
  }
  v4 = 0;
LABEL_7:
  v6 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v4;
}
