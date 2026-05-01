/*
 * XREFs of ?RuntimeClassInitialize@JointResizeAcc@@QEAAJXZ @ 0x1803D1E74
 * Callers:
 *     ??$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z @ 0x1803D18D4 (--$MakeAndInitialize@VJointResizeAcc@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVJointResizeAcc@@@Z.c)
 * Callees:
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B8A4 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall JointResizeAcc::RuntimeClassInitialize(JointResizeAcc *this)
{
  LPVOID *v1; // rdi
  unsigned __int64 v3; // rcx
  __int64 v4; // rsi
  int v5; // ebx
  _WORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  LPVOID v11; // rax
  _WORD *v13; // rcx
  char *v14; // rax
  __int64 v15; // rdx
  __int16 v16; // r8
  _WORD *v17; // rax
  const char *v18; // r9
  WNDCLASSEXW v19; // [rsp+60h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v1 = (LPVOID *)((char *)this + 72);
  v3 = *((_QWORD *)this + 11);
  if ( v3 == -1LL )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(v1);
    if ( *v1 )
      v3 = (unsigned __int64)v1[1] + 1;
    else
      v3 = 0LL;
    v1[2] = (LPVOID)v3;
  }
  v4 = 21LL;
  if ( v3 )
  {
    if ( v3 >= 0x15 )
      goto LABEL_25;
    v7 = 2 * v3;
    if ( is_mul_ok(v3, 2uLL) )
    {
      v5 = 0;
    }
    else
    {
      v7 = -1LL;
      v5 = -2147024362;
    }
    if ( v5 < 0 )
      goto LABEL_24;
    v8 = 21LL;
    v9 = v7 - v3;
    v10 = v3 + 2048;
    if ( v9 <= 0x800 )
      v10 = v7;
    if ( v10 >= 0x15 )
      v8 = v10;
    v11 = CoTaskMemRealloc(*v1, 2 * v8);
    if ( v11 )
    {
      v1[2] = (LPVOID)v8;
      *v1 = v11;
      goto LABEL_23;
    }
  }
  else
  {
    if ( !is_mul_ok(0x15uLL, 2uLL) )
    {
      v5 = -2147024362;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37,
        (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v5 = 0;
    v6 = CoTaskMemAlloc(0x2AuLL);
    if ( v6 )
    {
      v1[2] = (LPVOID)21;
      *v1 = v6;
      *v6 = 0;
      goto LABEL_23;
    }
  }
  v5 = -2147024882;
LABEL_23:
  if ( v5 < 0 )
    goto LABEL_24;
LABEL_25:
  v13 = *v1;
  v14 = (char *)((char *)L"Joint Resize Divider" - (_BYTE *)*v1);
  do
  {
    v15 = v4 - 1;
    if ( v4 == 1 )
      break;
    v16 = *(_WORD *)((char *)v13 + (_QWORD)v14);
    if ( !v16 )
      break;
    *v13 = v16;
    --v4;
    ++v13;
  }
  while ( v15 );
  v17 = v13 - 1;
  if ( v4 )
    v17 = v13;
  *v17 = 0;
  v1[1] = (LPVOID)20;
  v19.cbSize = 80;
  memset_0(&v19.style, 0, 0x4CuLL);
  v19.cbWndExtra = 8;
  v19.lpfnWndProc = (WNDPROC)CWRLImpWndProc<JointResizeAcc>::s_WndProcBase;
  v19.hInstance = &_ImageBase;
  v19.lpszClassName = L"JointResizeAcc";
  RegisterClassExW(&v19);
  CreateWindowExW(0x8200000u, L"JointResizeAcc", 0LL, 0x80000000, 0, 0, 0, 0, HWND_MESSAGE, 0LL, &_ImageBase, this);
  if ( *((_QWORD *)this + 5) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x4B,
             (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresizeacc.cpp",
             v18);
}
