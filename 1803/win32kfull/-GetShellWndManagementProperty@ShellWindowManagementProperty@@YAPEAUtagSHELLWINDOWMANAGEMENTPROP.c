/*
 * XREFs of ?GetShellWndManagementProperty@ShellWindowManagementProperty@@YAPEAUtagSHELLWINDOWMANAGEMENTPROP@1@PEAUtagWND@@H@Z @ 0x1C006003C
 * Callers:
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C005FFF8 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01A5A24 (xxxNotifyShellWindowBorderEnter.c)
 * Callees:
 *     DesktopAlloc @ 0x1C005E320 (DesktopAlloc.c)
 */

struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *__fastcall ShellWindowManagementProperty::GetShellWndManagementProperty(
        ShellWindowManagementProperty *this,
        struct tagWND *a2)
{
  int v2; // esi
  void *Prop; // rbx
  PVOID v6; // rax

  v2 = (int)a2;
  Prop = (void *)RealGetProp(*((_QWORD *)this + 15), (unsigned __int16)gatomShellWindowManagement, 1LL);
  if ( Prop || !v2 )
    return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)Prop;
  v6 = DesktopAlloc(*((_QWORD *)this + 3), 4u);
  Prop = v6;
  if ( v6 )
  {
    if ( (unsigned int)RealInternalSetProp((char *)this + 120, (unsigned __int16)gatomShellWindowManagement, v6, 9LL) )
      return (struct ShellWindowManagementProperty::tagSHELLWINDOWMANAGEMENTPROP *)Prop;
    RtlFreeHeap(*(PVOID *)(*((_QWORD *)this + 3) + 128LL), 0, Prop);
  }
  return 0LL;
}
