/*
 * XREFs of ?OnDeviceAttach@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180028CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x180028D24 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 *     ??R?$_Func_class@XPEAUInputContext@@@std@@QEBAXPEAUInputContext@@@Z @ 0x1800BB404 (--R-$_Func_class@XPEAUInputContext@@@std@@QEBAXPEAUInputContext@@@Z.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceAttach(DWMInputRouter *this, struct DeviceInfo *a2)
{
  int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = DWMInputRouter::OnDeviceChange(this, a2, 1);
  v5 = 0LL;
  v6 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x450,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v4);
    return v6;
  }
  else
  {
    v7 = (_QWORD *)*((_QWORD *)this + 95);
    v8 = (unsigned __int64)(*((_QWORD *)this + 96) - (_QWORD)v7 + 7LL) >> 3;
    if ( (unsigned __int64)v7 > *((_QWORD *)this + 96) )
      v8 = 0LL;
    if ( v8 )
    {
      do
      {
        std::_Func_class<void,InputContext *>::operator()(*v7, a2);
        ++v5;
        ++v7;
      }
      while ( v5 != v8 );
    }
    return 0LL;
  }
}
