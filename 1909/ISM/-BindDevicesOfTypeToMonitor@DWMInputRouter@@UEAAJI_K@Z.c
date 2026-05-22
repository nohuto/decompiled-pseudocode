/*
 * XREFs of ?BindDevicesOfTypeToMonitor@DWMInputRouter@@UEAAJI_K@Z @ 0x1800C2C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z @ 0x180014F0C (-Create@DWMInputDisplay@@SAJPEAUHMONITOR__@@PEAPEAUIInputDisplay@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@UDeviceDisplayMapping@DWMInputRouter@@@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAAPEAUDeviceDisplayMapping@DWMInputRouter@@QEAU23@$$QEAU23@@Z @ 0x1800C1BEC (--$_Emplace_reallocate@UDeviceDisplayMapping@DWMInputRouter@@@-$vector@UDeviceDisplayMapping@DWM.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_DWMInputRouter::DeviceDisplayMapping_______lambda_94b99de26b03220c9be9e61ba1968402___ @ 0x1800C1E98 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_DWMInputRouter--DeviceD.c)
 *     ?erase@?$vector@UDeviceDisplayMapping@DWMInputRouter@@V?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UDeviceDisplayMapping@DWMInputRouter@@@std@@@std@@@2@0@Z @ 0x1800C5A44 (-erase@-$vector@UDeviceDisplayMapping@DWMInputRouter@@V-$allocator@UDeviceDisplayMapping@DWMInpu.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DWMInputRouter::BindDevicesOfTypeToMonitor(DWMInputRouter *this, int a2, HMONITOR a3)
{
  char *v5; // rsi
  int *v6; // rbx
  int **v7; // rax
  int v8; // eax
  struct IInputDisplay *v9; // rbx
  char *v10; // rdx
  __int64 *v11; // rdx
  struct IInputDisplay *v12; // rcx
  int v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct IInputDisplay *v17; // [rsp+70h] [rbp+30h] BYREF
  int *v18; // [rsp+80h] [rbp+40h] BYREF
  char v19; // [rsp+88h] [rbp+48h] BYREF

  v5 = (char *)this + 184;
  v6 = (int *)*((_QWORD *)this + 24);
  v7 = std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_DWMInputRouter::DeviceDisplayMapping_______lambda_94b99de26b03220c9be9e61ba1968402___(
         &v18,
         *((int **)this + 23),
         v6,
         a2);
  std::vector<DWMInputRouter::DeviceDisplayMapping>::erase(v5, &v19, *v7, v6, -2LL);
  v17 = 0LL;
  v8 = DWMInputDisplay::Create(a3, &v17);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1674LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v14 = a2;
  v9 = v17;
  v15[0] = (__int64)v17;
  wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(v15);
  v10 = (char *)*((_QWORD *)v5 + 1);
  if ( *((char **)v5 + 2) == v10 )
  {
    std::vector<DWMInputRouter::DeviceDisplayMapping>::_Emplace_reallocate<DWMInputRouter::DeviceDisplayMapping>(
      (char **)v5,
      v10,
      &v14);
    v9 = (struct IInputDisplay *)v15[0];
  }
  else
  {
    *(_DWORD *)v10 = a2;
    v11 = (__int64 *)(v10 + 8);
    *v11 = 0LL;
    if ( v11 != v15 )
    {
      *v11 = (__int64)v9;
      v9 = 0LL;
    }
    *((_QWORD *)v5 + 1) += 16LL;
  }
  if ( v9 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v9 + 16LL))(v9);
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
