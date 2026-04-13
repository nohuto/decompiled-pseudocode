/*
 * XREFs of ?PositionAppOnScreen@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@I@Z @ 0x18000D180
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::LaunchManager::PositionAppOnScreen(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  HRESULT v7; // eax
  int v8; // ebx
  LPVOID v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  LPVOID v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  __int64 v21; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  LPVOID v23; // [rsp+70h] [rbp+20h] BYREF

  v21 = -2LL;
  v20 = 0LL;
  v23 = 0LL;
  v7 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         0x404u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &v23);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x192,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7);
LABEL_3:
    v9 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_11;
  }
  v19 = 0LL;
  v10 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)v23 + 96LL))(
          v23,
          &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
          &GUID_ae8be46e_c53f_4d3c_bca2_52b917ba6d04,
          &v19);
  v8 = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x194,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v10);
    v11 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_3;
  }
  v12 = v19;
  v19 = 0LL;
  v20 = v12;
  v13 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v8 = 0;
LABEL_11:
  if ( v8 >= 0 )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v20 + 48LL))(v20, a2, a3, a4);
    v8 = v16;
    if ( v16 >= 0 )
      goto LABEL_16;
    v14 = (unsigned int)v16;
    v15 = 341LL;
  }
  else
  {
    v14 = (unsigned int)v8;
    v15 = 340LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)v14);
LABEL_16:
  v17 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v8;
}
