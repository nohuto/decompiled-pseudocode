/*
 * XREFs of ?IsDeviceAttached@Win32kInterop@@AEAA_NK_N@Z @ 0x1800823AC
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z @ 0x18008253C (-ProcessDeviceArrival@Win32kInterop@@AEAAXKW4_KnownRIMDeviceKind@@@Z.c)
 *     ?ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z @ 0x18008262C (-ProcessDeviceRemoval@Win32kInterop@@AEAAXK@Z.c)
 *     ?ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x180082854 (-ProcessKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z.c)
 *     ?ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterceptionCallout@@@Z @ 0x180082A10 (-ProcessInterceptMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@PEAU_MouseProcessorInterce.c)
 *     ?ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotification@@@Z @ 0x180082C08 (-ProcessCursorPosMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_CursorPositionNotific.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x180082DC4 (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@@Z @ 0x1800834A4 (-ProcessRawInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_RawMouseInputMessage@@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall Win32kInterop::IsDeviceAttached(Win32kInterop *this, unsigned int a2, char a3)
{
  __int64 v6; // r9
  unsigned __int64 i; // r10
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r10
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r11
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  _QWORD *v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v25; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+58h] [rbp+10h]
  char v27; // [rsp+68h] [rbp+20h] BYREF

  v26 = a2;
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)&v26 + i) ^ (unsigned __int64)v6);
  v8 = v6 & *((_QWORD *)this + 14);
  v9 = 2 * (v6 & *((_QWORD *)this + 14));
  v10 = *((_QWORD *)this + 11);
  v11 = *(_QWORD **)(v10 + 16 * (v6 & *((_QWORD *)this + 14)));
  v12 = 2 * v8;
  v13 = *((_QWORD *)this + 9);
  v14 = *(_QWORD *)(v10 + 16 * v8);
  while ( 1 )
  {
    if ( v14 == v13 )
      v15 = (_QWORD *)*((_QWORD *)this + 9);
    else
      v15 = **(_QWORD ***)(v10 + 8 * v12 + 8);
    if ( v11 == v15 )
      goto LABEL_18;
    if ( *((_DWORD *)v11 + 4) == a2 )
      break;
    v11 = (_QWORD *)*v11;
  }
  v16 = v11;
  v17 = v11;
  while ( 1 )
  {
    v18 = v14 == v13 ? (_QWORD *)*((_QWORD *)this + 9) : **(_QWORD ***)(v10 + 8 * v9 + 8);
    if ( v11 == v18 || a2 != *((_DWORD *)v11 + 4) )
      break;
    v11 = (_QWORD *)*v11;
  }
  if ( v16 == v11 )
  {
LABEL_18:
    v17 = (_QWORD *)*((_QWORD *)this + 9);
    v11 = v17;
  }
  v19 = 0LL;
  if ( v17 == v11 )
    goto LABEL_22;
  do
  {
    ++v19;
    v17 = (_QWORD *)*v17;
  }
  while ( v17 != v11 );
  if ( !v19 )
  {
LABEL_22:
    if ( !a3 )
      return 0;
    v25 = 0LL;
    v20 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 6))(
            *((_QWORD *)this + 6),
            &GUID_b9402cea_5976_45e1_baa3_22754843b1af,
            &v25);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xFD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v20);
      JUMPOUT(0x180082533LL);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v25 + 24LL))(v25, a2, &v27);
    v22 = v25;
    if ( v21 < 0 )
    {
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      return 0;
    }
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
  }
  return 1;
}
