/*
 * XREFs of ?RequestCloseForView@ViewManagerBridge@@UEAAJI@Z @ 0x180289B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$RequestCloseForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x180283988 (--$RequestCloseForView@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 */

__int64 __fastcall ViewManagerBridge::RequestCloseForView(ViewManagerBridge *this, unsigned int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = a2;
  if ( *((_BYTE *)this + 145) )
  {
    v4 = -2147417848;
    v5 = 460LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  ViewManagerInteropTraceLogging::RequestCloseForView<unsigned int &>((int *)&v8);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 13) + 160LL))(
         *((_QWORD *)this + 13),
         a2,
         0LL);
  if ( v4 < 0 )
  {
    v5 = 465LL;
    goto LABEL_3;
  }
  return 0LL;
}
