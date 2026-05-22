/*
 * XREFs of ?OnInput@ActivationProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800C4E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ @ 0x18000C2CC (-GetViewHierarchy@ISMStatics@@SAPEAUIViewHierarchy@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ActivationProcessor::OnInput(
        ActivationProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  ActivationProcessor *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  char v11; // si
  bool v12; // al
  unsigned int v13; // edi
  struct IViewHierarchy *ViewHierarchy; // rbx
  unsigned int v15; // eax
  int v16; // r12d
  int v17; // eax
  bool v18; // si
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+48h] [rbp-18h]
  __int64 v26; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v29; // [rsp+B8h] [rbp+58h] BYREF

  v26 = -2LL;
  v7 = this;
  v29 = 0LL;
  v8 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a4 + 1))(
         *((_QWORD *)a4 + 1),
         &GUID_9a8e3fb8_36b5_4c0c_9118_1aa39b5b35fc,
         &v29);
  v9 = v8;
  if ( v8 >= 0 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 24LL))(v29) )
    {
      *(_DWORD *)a4 = 3;
    }
    else
    {
      *(_DWORD *)a4 = 0;
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
      v12 = 1;
      if ( (v11 & 1) != 0 )
      {
        v12 = 0;
      }
      else if ( (v11 & 2) != 0 )
      {
        v13 = *((_DWORD *)a3 + 4);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        v15 = (*(__int64 (__fastcall **)(struct IViewHierarchy *))(*(_QWORD *)ViewHierarchy + 48LL))(ViewHierarchy);
        v16 = (*(__int64 (__fastcall **)(struct IViewHierarchy *, _QWORD))(*(_QWORD *)ViewHierarchy + 64LL))(
                ViewHierarchy,
                v15);
        v17 = (*(__int64 (__fastcall **)(struct IViewHierarchy *, _QWORD))(*(_QWORD *)ViewHierarchy + 64LL))(
                ViewHierarchy,
                v13);
        v12 = !v17 || !v16 || v17 != v16;
        v7 = this;
      }
      v18 = (v11 & 4) != 0;
      if ( !v12 )
        goto LABEL_17;
      v19 = 0LL;
      v24 = 0LL;
      v25 = *((_QWORD *)a2 + 8);
      v20 = *((_QWORD *)a3 + 1);
      if ( v20 )
      {
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 24LL))(v20, &v24);
        v19 = v24;
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64))(**((_QWORD **)v7 + 8)
                                                                                               + 88LL))(
             *((_QWORD *)v7 + 8),
             *((_QWORD *)a3 + 2),
             *((unsigned int *)a2 + 1),
             *(unsigned int *)a2,
             v19,
             v25) )
      {
LABEL_17:
        if ( v18 )
        {
          v21 = v29;
          *(_DWORD *)a4 = 3;
          LOBYTE(v10) = 1;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 32LL))(v21, v10);
        }
      }
    }
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\activation\\system\\lib\\acti"
               "vationprocessor.cpp",
      (const char *)(unsigned int)v8);
  }
  v22 = v29;
  if ( v29 )
  {
    v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return v9;
}
