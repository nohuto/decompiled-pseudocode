/*
 * XREFs of FxPurgeBugCheckDriverInfo @ 0x1C00928F0
 * Callers:
 *     FxDestroy @ 0x1C00590E4 (FxDestroy.c)
 * Callees:
 *     memmove @ 0x1C001BE80 (memmove.c)
 */

void __fastcall FxPurgeBugCheckDriverInfo(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  KIRQL v2; // al
  __int64 BugCheckDriverInfoIndex; // rbx
  KIRQL v4; // si
  _FX_DRIVER_GLOBALS **v5; // rcx
  __int64 v6; // rax

  v2 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  BugCheckDriverInfoIndex = FxDriverGlobals->BugCheckDriverInfoIndex;
  v4 = v2;
  if ( (_DWORD)BugCheckDriverInfoIndex )
  {
    if ( P )
    {
      if ( (unsigned int)BugCheckDriverInfoIndex < dword_1C00ABE10 )
      {
        v5 = (_FX_DRIVER_GLOBALS **)((char *)P + 56 * BugCheckDriverInfoIndex);
        if ( *v5 == FxDriverGlobals )
        {
          if ( dword_1C00ABE10 - (_DWORD)BugCheckDriverInfoIndex != 1 )
            memmove(v5, v5 + 7, 56LL * (dword_1C00ABE10 - (unsigned int)BugCheckDriverInfoIndex - 1));
          if ( (unsigned int)BugCheckDriverInfoIndex < --dword_1C00ABE10 )
          {
            do
            {
              v6 = (unsigned int)BugCheckDriverInfoIndex;
              LODWORD(BugCheckDriverInfoIndex) = BugCheckDriverInfoIndex + 1;
              --*(_DWORD *)(*((_QWORD *)P + 7 * v6) + 348LL);
            }
            while ( (unsigned int)BugCheckDriverInfoIndex < dword_1C00ABE10 );
          }
        }
      }
    }
  }
  KeReleaseSpinLock(&SpinLock, v4);
}
