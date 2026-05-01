/*
 * XREFs of ?RuntimeClassInitialize@AppViewIconLoader@@QEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Z @ 0x180326A90
 * Callers:
 *     ??$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x180320254 (--$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?ConvertSize@AppViewIconLoader@@CA?AUtagSIZE@@HUSize@Foundation@Windows@@@Z @ 0x180323040 (-ConvertSize@AppViewIconLoader@@CA-AUtagSIZE@@HUSize@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall AppViewIconLoader::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v9 = *(_DWORD *)(a2 + 24);
  v10 = AppViewIconLoader::ConvertSize(v9, *(_QWORD *)(a2 + 16));
  v11 = AppViewIconLoader::ConvertSize(v9, *(_QWORD *)(a2 + 8));
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, __int64))(*(_QWORD *)a5 + 24LL))(
          a5,
          a3,
          v11,
          v10,
          v9,
          (a1 + 8) & -(__int64)(a1 != 0));
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
      (const char *)(unsigned int)v12);
  return v13;
}
