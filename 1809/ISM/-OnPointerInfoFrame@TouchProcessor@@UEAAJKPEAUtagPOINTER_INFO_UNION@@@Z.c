/*
 * XREFs of ?OnPointerInfoFrame@TouchProcessor@@UEAAJKPEAUtagPOINTER_INFO_UNION@@@Z @ 0x180103DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18012DB5F (memcpy_0.c)
 */

__int64 __fastcall TouchProcessor::OnPointerInfoFrame(
        TouchProcessor *this,
        unsigned int a2,
        struct tagPOINTER_INFO_UNION *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  const char *v7; // r9
  _DWORD v9[4]; // [rsp+20h] [rbp-5C8h] BYREF
  _BYTE v10[1440]; // [rsp+30h] [rbp-5B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+5E8h] [rbp+0h]

  v4 = a2;
  memset_0(v9, 0, 0x5B0uLL);
  if ( (_DWORD)v4 )
    memcpy_0(v10, a3, 144 * v4);
  v9[3] = *((_DWORD *)this + 4);
  v6 = *((_QWORD *)this - 1);
  v9[0] = v4;
  v9[2] = 1;
  v9[1] = *(unsigned __int8 *)(v6 + 48);
  if ( (unsigned int)MITSynthesizeTouchInput(v9) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x98,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\touch\\lib\\touchprocessor.cpp",
             v7);
}
