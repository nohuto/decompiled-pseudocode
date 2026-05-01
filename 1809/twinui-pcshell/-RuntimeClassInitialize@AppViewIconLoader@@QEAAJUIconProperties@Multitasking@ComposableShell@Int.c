/*
 * XREFs of ?RuntimeClassInitialize@AppViewIconLoader@@QEAAJUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Z @ 0x1802AEFC0
 * Callers:
 *     ??$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@PEAUIApplicationView@@PEAUIWriteableBitmap@Imaging@Media@Xaml@UI@6@PEAUIApplicationViewIconLoader@@@Details@WRL@Microsoft@@YAJPEAPEAVAppViewIconLoader@@AEAUIconProperties@Multitasking@ComposableShell@Internal@Windows@@$$QEAPEAUIApplicationView@@$$QEAPEAUIWriteableBitmap@Imaging@Media@Xaml@UI@8@$$QEAPEAUIApplicationViewIconLoader@@@Z @ 0x1802A875C (--$MakeAndInitialize@VAppViewIconLoader@@V1@AEAUIconProperties@Multitasking@ComposableShell@Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ConvertSize@AppViewIconLoader@@CA?AUtagSIZE@@HUSize@Foundation@Windows@@@Z @ 0x1802AB690 (-ConvertSize@AppViewIconLoader@@CA-AUtagSIZE@@HUSize@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall AppViewIconLoader::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rbx
  __int64 v9; // rbx
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = a4;
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v9 = AppViewIconLoader::ConvertSize(*(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 16));
  v10 = AppViewIconLoader::ConvertSize(*(_DWORD *)(a2 + 24), *(_QWORD *)(a2 + 8));
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64))(*(_QWORD *)a5 + 24LL))(
          a5,
          a3,
          v10,
          v9,
          *(_DWORD *)(a2 + 24),
          (a1 + 8) & -(__int64)(a1 != 0));
  v12 = v11;
  if ( v11 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16,
      (__int64)"internal\\pcshellshell\\private\\inc\\appviewdatasource\\appviewiconfactory.h",
      (const char *)(unsigned int)v11);
  return v12;
}
