/*
 * XREFs of ?SetViewPresentationMode@CToastCenterExperienceManager@@AEAAJW4PresentationMode@UI@Holographic@Internal@Windows@@@Z @ 0x1801899D4
 * Callers:
 *     ?MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ @ 0x180186538 (-MoveToastCenterViewToDesktop@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801865C4 (-MoveToastCenterViewToHolographic@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CToastCenterExperienceManager::SetViewPresentationMode(__int64 a1, int a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, int *); // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v10[4]; // [rsp+20h] [rbp-98h] BYREF
  __int128 v11; // [rsp+30h] [rbp-88h]
  __int128 v12; // [rsp+40h] [rbp-78h]
  __int128 v13; // [rsp+50h] [rbp-68h]
  int v14[4]; // [rsp+60h] [rbp-58h] BYREF
  __int128 v15; // [rsp+70h] [rbp-48h]
  __int128 v16; // [rsp+80h] [rbp-38h]
  __int128 v17; // [rsp+90h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a1 + 128) + 488LL))(*(_QWORD *)(a1 + 128), v14);
  v4 = *(__int64 **)(a1 + 128);
  LODWORD(v16) = a2;
  *(_OWORD *)v10 = *(_OWORD *)v14;
  v5 = *v4;
  v11 = v15;
  v12 = v16;
  v6 = *(__int64 (__fastcall **)(__int64 *, int *))(v5 + 496);
  v13 = v17;
  v7 = v6(v4, v10);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x556,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
