/*
 * XREFs of _lambda_4181134c5161f261fff3e61f273c9fd8_::operator() @ 0x180029270
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___::Invoke @ 0x18007C690 (CAsyncCallbackWithLambda__lambda_829df63d4f4da6954880c71339f9350f___--Invoke.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18005DDFC (-Stop@-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18008D9EC (-ContinueOnCurrentThread@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_P.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180114568 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall lambda_4181134c5161f261fff3e61f273c9fd8_::operator()(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  HANDLE ProcessHeap; // rax
  int v8; // [rsp+20h] [rbp-88h]
  _BYTE v9[16]; // [rsp+40h] [rbp-68h] BYREF
  LPVOID lpMem; // [rsp+50h] [rbp-58h]
  char v11; // [rsp+58h] [rbp-50h]
  _QWORD **v12; // [rsp+60h] [rbp-48h] BYREF
  __int64 v13; // [rsp+70h] [rbp-38h]
  int v14; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v16; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+10h] BYREF

  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 32),
    (wil::ActivityThreadWatcher *)v9);
  if ( (*(int (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24), &v16) >= 0 )
  {
    for ( i = 0; i < v16; ++i )
    {
      v17 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 24) + 32LL))(
             *(_QWORD *)(a1 + 24),
             i,
             &GUID_727f9e97_76ee_497b_a942_b6371328485c,
             &v17) >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v17 + 24LL))(
          v17,
          *(_QWORD *)a1,
          *(unsigned int *)(a1 + 8),
          *(_QWORD *)(a1 + 16));
      v3 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
    }
  }
  LODWORD(v4) = wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 32);
  if ( v14 )
  {
    if ( v14 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v8);
    v14 = 0;
    v5 = v12;
    v4 = *v12;
    if ( *v12 )
    {
      while ( v4 != &v12 )
      {
        v5 = v4 + 2;
        v12 = (_QWORD **)(v4 + 2);
        v4 = (_QWORD *)v4[2];
        if ( !v4 )
          goto LABEL_14;
      }
      LODWORD(v4) = v13;
      *v5 = v13;
    }
LABEL_14:
    v12 = 0LL;
  }
  if ( v11 )
  {
    ProcessHeap = GetProcessHeap();
    LODWORD(v4) = HeapFree(ProcessHeap, 0, lpMem);
  }
  return (int)v4;
}
