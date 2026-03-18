/*
 * XREFs of ?GetNumStartedVirtualGpu@DXGVIRTUALMACHINE@@QEAAIXZ @ 0x1C00497D8
 * Callers:
 *     NtDxgkRegisterVailProcess @ 0x1C0293B80 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::GetNumStartedVirtualGpu(struct _KTHREAD **this)
{
  unsigned int v2; // ebx
  DXGPUSHLOCK *v3; // rcx
  struct _KTHREAD **i; // rcx
  _BYTE v6[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v3 = (DXGPUSHLOCK *)(this + 8);
  v8 = 0;
  v7 = v3;
  if ( this[9] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive(v3);
    v8 = 2;
  }
  for ( i = (struct _KTHREAD **)this[5]; i != this + 5; i = (struct _KTHREAD **)*i )
  {
    if ( *((_BYTE *)i + 16) && *((_BYTE *)i + 29) )
      ++v2;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
  return v2;
}
