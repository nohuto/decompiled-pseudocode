/*
 * XREFs of ?OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FB840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000DFD4 (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?IsViewPartOfForegroundApplication@ViewHelper@@SA_NPEAUIViewHierarchy@@I@Z @ 0x18005885C (-IsViewPartOfForegroundApplication@ViewHelper@@SA_NPEAUIViewHierarchy@@I@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ActivationProcessor::OnInput(
        ActivationProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  char v13; // di
  char v14; // al
  int v15; // edi
  unsigned int v16; // ebx
  struct IViewHierarchy *ViewHierarchy; // rax
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _QWORD v23[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v25; // [rsp+88h] [rbp+20h] BYREF

  v23[1] = -2LL;
  v25 = 0LL;
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)a4 + 1);
  v9 = **v8;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v25);
  v10 = v9(v8, &GUID_9a8e3fb8_36b5_4c0c_9118_1aa39b5b35fc, &v25);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v25 + 24LL))(v25) )
    {
      *(_DWORD *)a4 = 3;
LABEL_17:
      v11 = 0;
      goto LABEL_18;
    }
    *(_DWORD *)a4 = 0;
    v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 40LL))(v25);
    v14 = 1;
    if ( (v13 & 1) != 0 )
    {
      v15 = v13 & 4;
      goto LABEL_15;
    }
    if ( (v13 & 2) != 0 )
    {
      v16 = *((_DWORD *)a3 + 20);
      ViewHierarchy = ISMStatics::GetViewHierarchy();
      if ( !ViewHelper::IsViewPartOfForegroundApplication(ViewHierarchy, v16) )
      {
        v15 = v13 & 4;
        goto LABEL_12;
      }
      v14 = 0;
    }
    v15 = v13 & 4;
    if ( !v14 )
    {
LABEL_15:
      if ( v15 )
      {
        v21 = v25;
        *(_DWORD *)a4 = 3;
        LOBYTE(v12) = 1;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v12);
      }
      goto LABEL_17;
    }
LABEL_12:
    v18 = 0LL;
    v23[0] = 0LL;
    v19 = *((_QWORD *)a2 + 33);
    v20 = *((_QWORD *)a3 + 9);
    if ( v20 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v20 + 24LL))(v20, v23);
      v18 = v23[0];
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64))(**((_QWORD **)this + 8)
                                                                                              + 88LL))(
            *((_QWORD *)this + 8),
            *((_QWORD *)a3 + 10),
            *((unsigned int *)a2 + 1),
            *(unsigned int *)a2,
            v18,
            v19) )
      goto LABEL_17;
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x58,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\activa"
             "tionprocessor.cpp",
    (const char *)(unsigned int)v10);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v25);
  return v11;
}
