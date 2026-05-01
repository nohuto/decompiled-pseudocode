/*
 * XREFs of ?UpdatePositionerPriorityForActivation@ShellPositionerManager@@AEAAJPEAUIShellPositionerPriority@@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@@Z @ 0x18003BDF4
 * Callers:
 *     ?HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplicationView@@PEAUIImmersiveMonitor@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@1PEAK@Z @ 0x18003B9C4 (-HandleActivationRequest@ShellPositionerManager@@AEAAJW4ActivationRequestType@1@PEAUIApplication.c)
 * Callees:
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x18003BF28 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::UpdatePositionerPriorityForActivation(
        ShellPositionerManager *this,
        struct IShellPositionerPriority *a2,
        struct IApplicationView *a3,
        IUnknown *a4,
        struct IUnknown *a5)
{
  HRESULT Service; // eax
  unsigned int v9; // ebx
  unsigned int i; // ebx
  bool v11; // zf
  unsigned int (__fastcall *v12)(__int64, struct IApplicationView *, struct IUnknown *); // rax
  __int64 v13; // rcx
  void *v14; // rcx
  int v16; // [rsp+20h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  void *v18[4]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v18[1] = (void *)-2LL;
  v18[0] = 0LL;
  Service = IUnknown_QueryService(
              a4,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              &GUID_ddd1282a_db1a_46e0_8622_309920263baf,
              v18);
  v9 = Service;
  if ( Service < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x447,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)Service,
      v16);
  }
  else
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( i > 1 )
      {
        v17 = 0LL;
        if ( (*(int (__fastcall **)(void *, _QWORD, GUID *, __int64 *))(*(_QWORD *)v18[0] + 24LL))(
               v18[0],
               i,
               &GUID_ee010e17_919a_4068_868b_675acf787303,
               &v17) >= 0 )
        {
          v11 = (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 32LL))(
                  a2,
                  i) == 0;
          v12 = *(unsigned int (__fastcall **)(__int64, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)v17 + 24LL);
          if ( v11 )
          {
            if ( v12(v17, a3, a5) )
              (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, i);
          }
          else if ( !v12(v17, a3, a5) )
          {
            (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)a2 + 48LL))(a2, i);
          }
        }
        v13 = v17;
        if ( v17 )
        {
          v17 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
    }
    ShellPositionerManager::PersistPositionerPriority(this, a3);
    v9 = 0;
  }
  v14 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v9;
}
