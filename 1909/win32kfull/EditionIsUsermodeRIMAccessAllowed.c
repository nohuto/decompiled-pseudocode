/*
 * XREFs of EditionIsUsermodeRIMAccessAllowed @ 0x1C0111830
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 EditionIsUsermodeRIMAccessAllowed()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 CurrentProcess; // rax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  CurrentProcess = PsGetCurrentProcess(v1, v0, v2, v3);
  v6 = IsProcessDwm(CurrentProcess);
  if ( !v8 )
    UserSessionSwitchLeaveCrit(v5);
  return v6;
}
