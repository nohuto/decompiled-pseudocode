/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x18012E960
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180003E34 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002DE20 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180042E34 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_7e4ac8d872c022a0f6fad17fde591f5d_::operator() @ 0x18012E49C (_lambda_7e4ac8d872c022a0f6fad17fde591f5d_--operator().c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18012E540 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

__int64 __fastcall s_adGetDeviceGraphWnfStateName(__int64 a1, __int64 a2, _QWORD *a3)
{
  LPCRITICAL_SECTION v3; // rdi
  int DebugInfo; // ebx
  DWORD LastError; // ebx
  int ADGProcessBindingHandle; // eax
  __int64 v8; // rdx
  LPCRITICAL_SECTION v9; // rdi
  RPC_BINDING_HANDLE Binding[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v14; // [rsp+58h] [rbp+28h] BYREF
  RPC_BINDING_HANDLE v15; // [rsp+68h] [rbp+38h] BYREF

  v14 = a2;
  v3 = g_ADGProcess;
  v15 = 0LL;
  EnterCriticalSection(g_ADGProcess);
  DebugInfo = ++LODWORD(v3[1].DebugInfo);
  if ( DebugInfo == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v3);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v3);
    DebugInfo = (int)v3[1].DebugInfo;
  }
  LeaveCriticalSection(v3);
  if ( DebugInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      826LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)(unsigned int)DebugInfo);
    goto LABEL_15;
  }
  if ( v15 )
  {
    Binding[0] = v15;
    LastError = GetLastError();
    RpcBindingFree(Binding);
    SetLastError(LastError);
  }
  v15 = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&v15);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle >= 0 )
  {
    Binding[0] = &v15;
    Binding[1] = &v14;
    ADGProcessBindingHandle = lambda_7e4ac8d872c022a0f6fad17fde591f5d_::operator()((_QWORD **)Binding);
    DebugInfo = ADGProcessBindingHandle;
    if ( ADGProcessBindingHandle >= 0 )
    {
      DebugInfo = 0;
      *a3 = *(_QWORD *)&g_ADGProcess[2].LockCount;
      goto LABEL_15;
    }
    v8 = 838LL;
  }
  else
  {
    v8 = 829LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v8,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
    (const char *)(unsigned int)ADGProcessBindingHandle);
  v9 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v9[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v9);
  LeaveCriticalSection(v9);
LABEL_15:
  if ( v15 )
  {
    Binding[0] = v15;
    RpcBindingFree(Binding);
  }
  return (unsigned int)DebugInfo;
}
