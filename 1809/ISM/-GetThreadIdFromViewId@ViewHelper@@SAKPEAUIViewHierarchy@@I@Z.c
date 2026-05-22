/*
 * XREFs of ?GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x18000CAF4
 * Callers:
 *     ?RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@_N@Z @ 0x180042B58 (-RequestForegroundChange@MPCHolographicInputManager@@QEAAX_KIKW4InputType@@PEAUHMONITOR__@@UtagP.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x18000CEC4 (-FindWindowW@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V-$function@$$A6A_NPEAUIServerWi.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ViewHelper::GetThreadIdFromViewId(struct IViewHierarchy *a1, unsigned int a2)
{
  unsigned int v2; // edi
  int WindowW; // eax
  __int64 v4; // rbx
  int v5; // eax
  _QWORD *v6; // rcx
  _QWORD v8[9]; // [rsp+28h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  unsigned int v10; // [rsp+90h] [rbp+20h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+30h] BYREF
  _QWORD *v12; // [rsp+A8h] [rbp+38h] BYREF

  v2 = 0;
  (*(void (__fastcall **)(struct IViewHierarchy *, _QWORD **, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, &v12, a2);
  if ( v12 )
  {
    v11 = 0LL;
    v8[0] = off_1801385A8;
    v8[7] = v8;
    WindowW = ViewHelper::FindWindowW(v12, v8, &v11);
    if ( WindowW >= 0 )
    {
      v4 = v11;
      if ( v11 )
      {
        v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 112LL))(v11, &v10);
        if ( v5 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xBA,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
            (const char *)(unsigned int)v5);
          JUMPOUT(0x18000CBFDLL);
        }
        v2 = v10;
      }
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)WindowW);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v2 = 0;
    }
  }
  v6 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v6 + 16LL))(v6, *v6);
  }
  return v2;
}
