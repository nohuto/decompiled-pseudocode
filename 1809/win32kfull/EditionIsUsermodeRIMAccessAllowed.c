/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x1C012CA30
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00B2690 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 EditionIsUsermodeRIMAccessAllowed()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v7 = IsProcessDwm(CurrentProcess);
  if ( !v11 )
    UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v7;
}
