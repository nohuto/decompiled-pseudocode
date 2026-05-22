/*
 * XREFs of ?OnInputReport@HeatDeviceCollection@@MEAAJKPEAXK@Z @ 0x180067A00
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatDeviceCollection::OnInputReport(HeatDeviceCollection *this, int a2, void *a3, int a4)
{
  DWORD TickCount; // ebx
  __int64 v9; // rcx
  int v10; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-688h] BYREF
  _DWORD v13[4]; // [rsp+30h] [rbp-678h] BYREF
  LARGE_INTEGER v14; // [rsp+40h] [rbp-668h]
  int v15; // [rsp+48h] [rbp-660h]
  int v16; // [rsp+238h] [rbp-470h]
  void *v17; // [rsp+240h] [rbp-468h]
  wil::details::in1diag3 *retaddr; // [rsp+6A8h] [rbp+0h]

  memset_0(v13, 0, 0x640uLL);
  v15 = 1600;
  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  v9 = *((_QWORD *)this + 2);
  v14 = PerformanceCount;
  v13[1] = a2;
  v13[0] = 2048;
  v13[2] = TickCount;
  v17 = a3;
  v16 = a4;
  v10 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 24LL))(v9, v13);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xAF,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\heatdevicecollection.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x180067AD6LL);
  }
  return 0LL;
}
