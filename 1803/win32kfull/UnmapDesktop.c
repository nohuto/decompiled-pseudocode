/*
 * XREFs of UnmapDesktop @ 0x1C0011AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0011D40 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C0011D80 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C010F758 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall UnmapDesktop(__int64 a1)
{
  struct tagDESKTOP *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rsi
  struct _KPROCESS *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(struct tagDESKTOP **)(a1 + 8);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 8) - 40LL) + 1;
  v3 = ReferenceDwmProcess();
  v4 = v3;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v5 = *(struct _KPROCESS **)a1;
    if ( *(_QWORD *)a1 != gpepCSRSS && v5 != (struct _KPROCESS *)v3 )
      FreeView(v5, v1);
  }
  DereferenceDwmProcess(v4);
  if ( *(_DWORD *)(a1 + 20) == 1 )
    DestroyDesktop(v1);
  if ( !v11 )
    UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return 0LL;
}
