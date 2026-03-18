/*
 * XREFs of _EnableShellWindowManagementBehavior @ 0x1C01128C0
 * Callers:
 *     <none>
 * Callees:
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0021D3C (IsShellWndManagementBehaviorEnabled.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C0108CEC (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C01FCEA0 (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z.c)
 */

__int64 EnableShellWindowManagementBehavior()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  int v2; // r9d
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
    UserSetLastError(v7, v0);
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
  if ( ((v5 ^ v2) & 0x80u) != 0 )
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
