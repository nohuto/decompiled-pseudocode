/*
 * XREFs of ?OnInputAppTerminated@TabTipAdapter@KeyboardHosting@@QEAAXXZ @ 0x1802C48EC
 * Callers:
 *     ?OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z @ 0x1802B7E40 (-OnApplicationStateChanged@TouchKeyboardExperienceManager@@UEAAJPEBGW4PLM_STATE_CHANGE@@@Z.c)
 * Callees:
 *     ?SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x1802C68F4 (-SetInputAppAUMID@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall KeyboardHosting::TabTipAdapter::OnInputAppTerminated(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  ULONG_PTR *p_SpinCount; // rax

  v2 = this + 9;
  EnterCriticalSection(this + 9);
  p_SpinCount = &this[6].SpinCount;
  *(_QWORD *)&this[7].LockCount = 0LL;
  if ( this[7].OwningThread >= (HANDLE)8 )
    p_SpinCount = (ULONG_PTR *)*p_SpinCount;
  *(_WORD *)p_SpinCount = 0;
  KeyboardHosting::TabTipAdapter::SetInputAppAUMID((KeyboardHosting::TabTipAdapter *)this, &word_180411F30);
  if ( v2 )
    LeaveCriticalSection(v2);
}
