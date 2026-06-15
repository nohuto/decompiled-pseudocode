/*
 * XREFs of ?CheckADGStartupStatus@CAudioDGProcess@@QEAAJXZ @ 0x180042D40
 * Callers:
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180042C50 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z @ 0x180042DB0 (-AudioDGGetStartupStatus_RPC_WithWait@@YAJPEAX@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x180042E34 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::CheckADGStartupStatus(HANDLE *this)
{
  int ADGProcessBindingHandle; // eax
  signed int v3; // ebx
  DWORD v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RPC_BINDING_HANDLE Binding; // [rsp+48h] [rbp+10h] BYREF
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = 0LL;
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&v9);
  v3 = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)(unsigned int)ADGProcessBindingHandle,
      -2);
  }
  else
  {
    while ( 1 )
    {
      v3 = AudioDGGetStartupStatus_RPC_WithWait(v9);
      if ( v3 >= 0 )
        break;
      v5 = WaitForSingleObjectEx(this[11], 0, 0);
      if ( v5 != 258 )
      {
        if ( !v5 )
        {
          v6 = GetExitCodeProcess(this[11], (LPDWORD)&Binding) ? (int)Binding : GetLastError();
          if ( v6 != 259 )
          {
            if ( v6 > 0 )
              v3 = (unsigned __int16)v6 | 0x80070000;
            else
              v3 = v6;
          }
        }
        break;
      }
    }
  }
  if ( v9 )
  {
    Binding = v9;
    RpcBindingFree(&Binding);
  }
  return (unsigned int)v3;
}
