/*
 * XREFs of ?OnFlick@EdgyProcessorTarget@@AEAAJXZ @ 0x18010377C
 * Callers:
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x18010386C (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     atan2f_0 @ 0x18003781F (atan2f_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?OnSwipe@EdgyProcessorTarget@@AEAA?AW4State@1@_NH@Z @ 0x180103A1C (-OnSwipe@EdgyProcessorTarget@@AEAA-AW4State@1@_NH@Z.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnFlick(EdgyProcessorTarget *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  float v7; // xmm0_4
  __int64 v8; // r8
  int v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+24h] [rbp-24h]
  int v11; // [rsp+28h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v9 = 12;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**((_QWORD **)this + 19) + 88LL))(
         *((_QWORD *)this + 19),
         7LL,
         &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v5 = v11;
    if ( v10 || v11 )
    {
      v7 = atan2f_0((float)v11, (float)v10);
      if ( (v7 < 0.78539819 || v7 > 2.3561945) && (v7 < -2.3561945 || v7 > -0.78539819) )
      {
        v8 = (unsigned int)v10;
        LOBYTE(v6) = 1;
      }
      else
      {
        v8 = v5;
        v6 = 0LL;
      }
      *((_DWORD *)this + 8) = EdgyProcessorTarget::OnSwipe(this, v6, v8);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2E5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
