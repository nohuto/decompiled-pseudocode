/*
 * XREFs of MapScenarioToErrorCodeForView @ 0x180232278
 * Callers:
 *     ?CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z @ 0x180230120 (-CloseViewForScenario@ViewManagerBridge@@UEAAXIPEAUIUnknown@@W4ViewCloseScenario@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MapScenarioToErrorCodeForView(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  int v4; // edx
  int v5; // edx
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = -2144927437;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          v3 = -2144927436;
      }
      else
      {
        v3 = -2144927438;
      }
    }
    else
    {
      v3 = -2144927439;
    }
  }
  else
  {
    v3 = -2144927440;
  }
  v10 = 0LL;
  v6 = MsgStringCreateShared(L"ValidationError", 0xFFFFFFFFLL, &v10);
  v7 = retaddr;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 704LL))(a1, v10, v3);
    v7 = retaddr;
    if ( v6 >= 0 )
      goto LABEL_14;
    v8 = 153LL;
  }
  else
  {
    v8 = 151LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v7,
    v8,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
    (const char *)(unsigned int)v6);
LABEL_14:
  if ( v10 )
    MsgRelease(v10);
}
