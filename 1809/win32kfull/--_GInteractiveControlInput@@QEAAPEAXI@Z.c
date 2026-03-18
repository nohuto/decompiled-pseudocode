/*
 * XREFs of ??_GInteractiveControlInput@@QEAAPEAXI@Z @ 0x1C023A5C4
 * Callers:
 *     ?CleanQueue@InteractiveControlDevice@@QEAAXK@Z @ 0x1C023A648 (-CleanQueue@InteractiveControlDevice@@QEAAXK@Z.c)
 *     ?Deinitialize@InteractiveControlDevice@@QEAAXXZ @ 0x1C023A964 (-Deinitialize@InteractiveControlDevice@@QEAAXXZ.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C023B658 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     <none>
 */

InteractiveControlInput *__fastcall InteractiveControlInput::`scalar deleting destructor'(
        InteractiveControlInput *this,
        char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 10);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)this + 10) = 0LL;
    *((_DWORD *)this + 22) = 0;
  }
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
