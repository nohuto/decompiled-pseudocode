/*
 * XREFs of ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C0135CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C0009C90 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C006A180 (IsShellWndManagementBehaviorEnabled.c)
 *     IAMThreadAccessGranted @ 0x1C0071900 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C0225904 (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z.c)
 */

__int64 __fastcall _EnableShellWindowManagementBehavior()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r10d
  int v4; // r11d
  int v5; // eax
  __int64 v7; // rcx
  int v8; // eax
  unsigned __int64 v9; // rdx
  WindowGroupingFeature **v10; // r9
  WindowGroupingFeature *v11; // rcx

  if ( !IAMThreadAccessGranted(gptiCurrent) )
  {
    v7 = 5LL;
LABEL_9:
    UserSetLastError(v7, v0, v1, v2);
    return 0LL;
  }
  if ( (v4 & 0xFFFFFF00) != 0 )
  {
    v7 = 87LL;
    goto LABEL_9;
  }
  v5 = v4 & v3 | v2 & ~v3;
  if ( v5 && !*(_QWORD *)(v1 + 328) )
  {
    *(_DWORD *)(v1 + 336) = 0;
    v7 = 5023LL;
    goto LABEL_9;
  }
  *(_DWORD *)(v1 + 336) = v5;
  if ( ((v5 ^ v2) & 0x80u) != 0LL )
  {
    v8 = IsShellWndManagementBehaviorEnabled(v1, 128);
    v11 = *v10;
    if ( v8 )
      WindowGroupingFeature::InitializeWindowGroupFunctionality(v11, v9);
    else
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(v11);
  }
  return 1LL;
}
