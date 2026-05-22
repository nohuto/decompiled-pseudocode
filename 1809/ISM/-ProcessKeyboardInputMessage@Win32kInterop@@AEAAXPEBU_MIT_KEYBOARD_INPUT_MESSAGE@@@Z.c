/*
 * XREFs of ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x180082854
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOARD_INPUT_MESSAGE_const_____ptr64_::_Do_call @ 0x180085D20 (std--_Func_impl_no_alloc__lambda_3055b709ad1b91436fb40d7fa280490c__void__MIT_KEYBOA_ea_180085D20.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180001D78 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800823AC (-IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18012BEBA (_invalid_parameter_noinfo.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Win32kInterop::ProcessKeyboardInputMessage(
        Win32kInterop *this,
        const struct _MIT_KEYBOARD_INPUT_MESSAGE *a2)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  _OWORD *v6; // rcx
  __int64 v7; // rdx
  _OWORD *v8; // rax
  __int64 v9; // r8
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v21[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v22; // [rsp+40h] [rbp-C0h]
  int v23; // [rsp+48h] [rbp-B8h]
  __int16 v24; // [rsp+50h] [rbp-B0h]
  __int16 v25; // [rsp+52h] [rbp-AEh]
  __int16 v26; // [rsp+54h] [rbp-ACh]
  unsigned __int16 v27[17]; // [rsp+56h] [rbp-AAh] BYREF
  _BYTE v28[256]; // [rsp+78h] [rbp-88h] BYREF
  int v29; // [rsp+178h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  memset_0(v21, 0, 0x158uLL);
  v23 = 344;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)a2;
  v21[0] = 4;
  if ( Win32kInterop::IsDeviceAttached(this, v5, 0) )
  {
    v21[1] = v4;
    v21[0] = 4;
    v21[2] = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    v22 = PerformanceCount;
    v24 = *((_WORD *)a2 + 4);
    v25 = *((_WORD *)a2 + 5);
    v26 = *((_WORD *)a2 + 6);
    v27[16] = *((_WORD *)a2 + 135);
    v29 = *((_DWORD *)a2 + 68);
    StringCchCopyW((char *)v27, 16LL, (char *)a2 + 276);
    v6 = (_OWORD *)((char *)a2 + 14);
    if ( a2 == (const struct _MIT_KEYBOARD_INPUT_MESSAGE *)-14LL )
    {
      memset_0(v28, 0, sizeof(v28));
      *(_DWORD *)_o__errno(v18, v17) = 22;
      invalid_parameter_noinfo();
    }
    else
    {
      v7 = 2LL;
      v8 = v28;
      v9 = 128LL;
      do
      {
        v10 = v6[1];
        *v8 = *v6;
        v11 = v6[2];
        v8[1] = v10;
        v12 = v6[3];
        v8[2] = v11;
        v13 = v6[4];
        v8[3] = v12;
        v14 = v6[5];
        v8[4] = v13;
        v15 = v6[6];
        v8[5] = v14;
        v16 = v6[7];
        v6 += 8;
        v8[6] = v15;
        v8 += 8;
        *(v8 - 1) = v16;
        --v7;
      }
      while ( v7 );
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64))(**((_QWORD **)this + 7) + 24LL))(
            *((_QWORD *)this + 7),
            v21,
            v9);
    if ( v19 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1EB,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v19);
      JUMPOUT(0x180082A07LL);
    }
  }
}
