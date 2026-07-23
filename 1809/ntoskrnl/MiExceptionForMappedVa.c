/*
 * XREFs of MiExceptionForMappedVa @ 0x1402A5A6C
 * Callers:
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     MiGetSessionVm @ 0x1400E94DC (MiGetSessionVm.c)
 */

__int64 __fastcall MiExceptionForMappedVa(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *v3; // rsi
  _KPROCESS *Process; // rbp
  __int64 i; // rax
  __int64 v6; // rdi
  unsigned __int8 v7; // al
  __int64 *v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  unsigned int v11; // ebx

  v1 = 0;
  v3 = &unk_14043A000;
  Process = KeGetCurrentThread()->ApcState.Process;
  for ( i = (__int64)MiGetAnyMultiplexedVm(1); ; i = MiGetSessionVm() )
  {
    v6 = i;
    v7 = MiLockWorkingSetShared(i);
    v8 = (__int64 *)v3[2];
    while ( v8 )
    {
      v9 = v8[11] & 0xFFFFFFFFFFFFF000uLL;
      if ( a1 >= v9 + v8[4] )
      {
        v8 = (__int64 *)v8[1];
      }
      else
      {
        if ( a1 >= v9 )
        {
          v11 = *((_DWORD *)v8 + 14);
          MiUnlockWorkingSetShared(v6, v7);
          return (v11 >> 1) & 1;
        }
        v8 = (__int64 *)*v8;
      }
    }
    MiUnlockWorkingSetShared(v6, v7);
    if ( v3 != (_QWORD *)&unk_14043A000 )
      break;
    v10 = Process[1].ActiveProcessors.Bitmap[2];
    if ( !v10 || (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) != 0 )
      break;
    v3 = (_QWORD *)(v10 + 2944);
  }
  return v1;
}
