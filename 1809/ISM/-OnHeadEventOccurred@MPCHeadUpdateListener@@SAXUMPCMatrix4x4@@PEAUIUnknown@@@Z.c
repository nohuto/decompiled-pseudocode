/*
 * XREFs of ?OnHeadEventOccurred@MPCHeadUpdateListener@@SAXUMPCMatrix4x4@@PEAUIUnknown@@@Z @ 0x18005AE40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003618 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18005ABA0 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
BOOL __fastcall MPCHeadUpdateListener::OnHeadEventOccurred(
        _OWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, char *))
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  struct MPCHeadUpdateListener *Instance; // rax
  char *v6; // rbx
  __int64 v7; // rcx
  int v8; // eax
  struct MPCHeadUpdateListener *v9; // rax
  BOOL result; // eax
  const char *v11; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)MPCHeadUpdateListener::GetInstance() + 152);
  EnterCriticalSection(v4);
  Instance = MPCHeadUpdateListener::GetInstance();
  *(_OWORD *)((char *)Instance + 88) = *a1;
  *(_OWORD *)((char *)Instance + 104) = a1[1];
  *(_OWORD *)((char *)Instance + 120) = a1[2];
  *(_OWORD *)((char *)Instance + 136) = a1[3];
  v6 = (char *)Instance + 80;
  v7 = *((_QWORD *)Instance + 10);
  *((_QWORD *)Instance + 10) = 0LL;
  if ( a2 )
  {
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    v8 = (**a2)(a2, &GUID_87c24804_a22e_4adb_ba26_d78ef639bcf4, v6);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadupdatelistener.cpp",
        (const char *)(unsigned int)v8);
  }
  else if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  v9 = MPCHeadUpdateListener::GetInstance();
  result = SetEvent(*(HANDLE *)(*((_QWORD *)v9 + 9) + 112LL));
  if ( !result )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x904,
      (__int64)"internal\\sdk\\inc\\wil\\Resource.h",
      v11);
    JUMPOUT(0x18005AF58LL);
  }
  return result;
}
