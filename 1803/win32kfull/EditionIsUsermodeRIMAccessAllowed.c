/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x1C010E920
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0011D40 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 EditionIsUsermodeRIMAccessAllowed()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  int v9; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
  CurrentProcess = PsGetCurrentProcess(v1, v0);
  v5 = IsProcessDwm(CurrentProcess);
  if ( !v9 )
    UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v5;
}
