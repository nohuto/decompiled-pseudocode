/*
 * XREFs of ?_EnableShellWindowManagementBehavior@@YAH_K0@Z @ 0x1C011AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z @ 0x1C000E874 (-UnInitializeWindowGroupFunctionality@WindowGroupingFeature@@YAX_K@Z.c)
 *     IsShellWndManagementBehaviorEnabled @ 0x1C0023EEC (IsShellWndManagementBehaviorEnabled.c)
 *     IAMThreadAccessGranted @ 0x1C0027D6C (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z @ 0x1C023D78C (-InitializeWindowGroupFunctionality@WindowGroupingFeature@@YAJ_K@Z.c)
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
  unsigned __int64 v8; // rdx
  WindowGroupingFeature *v9; // r10

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
  v5 = v4 & v3 | v1 & ~v3;
  if ( v5 && !*(_QWORD *)(v2 + 328) )
  {
    *(_DWORD *)(v2 + 336) = 0;
    v7 = 5023LL;
    goto LABEL_9;
  }
  *(_DWORD *)(v2 + 336) = v5;
  if ( ((v5 ^ v1) & 0x80u) != 0LL )
  {
    if ( (unsigned int)IsShellWndManagementBehaviorEnabled(v2, 128) )
      WindowGroupingFeature::InitializeWindowGroupFunctionality(v9, v8);
    else
      WindowGroupingFeature::UnInitializeWindowGroupFunctionality(v9);
  }
  return 1LL;
}
