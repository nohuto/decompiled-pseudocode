/*
 * XREFs of ?CreateProcessorForDevice@InputStateManager@@AEAAJPEAUDeviceInfo@@PEAPEAUIInputProcessor@@@Z @ 0x1800122FC
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180012820 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputStateManager::CreateProcessorForDevice(
        InputStateManager *this,
        struct DeviceInfo *a2,
        struct IInputProcessor **a3)
{
  char *v4; // rax
  int v5; // edi
  __int64 (__fastcall **i)(const struct DeviceInfo *); // rbx
  __int64 v7; // rsi
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IInputProcessor *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = 0LL;
  v9[2] = 0LL;
  v9[0] = a2;
  if ( this )
    v4 = (char *)this + 8;
  else
    v4 = 0LL;
  v9[1] = v4;
  if ( !a2 || !v4 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xDB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
      (const char *)0x80070057LL,
      v9[0]);
    __debugbreak();
  }
  v5 = 0;
  for ( i = &off_1801DE020; ; i += 6 )
  {
    v7 = (__int64)*(i - 1);
    if ( !InitOnceExecuteOnce(&gInitOnce, InitEditionOnceCallback, 0LL, 0LL) )
      __fastfail(7u);
    if ( _bittest64(&v7, gdwDeviceFamily)
      && (!*i || (unsigned int)(*i)((const struct DeviceInfo *)v9[0]))
      && ((int (__fastcall *)(_QWORD *, struct IInputProcessor **))i[1])(v9, &v11) >= 0 )
    {
      break;
    }
    if ( (unsigned int)++v5 >= 0x12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xDE,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\factory\\lib\\inputprocessorfactory.cpp",
        (const char *)0x80070490LL);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x235,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputstatemanager\\lib\\inputstatemanager.cpp",
        (const char *)0x80070490LL);
      return 2147943568LL;
    }
  }
  *a3 = v11;
  return 0LL;
}
