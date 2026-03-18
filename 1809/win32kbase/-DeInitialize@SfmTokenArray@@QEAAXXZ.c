/*
 * XREFs of ?DeInitialize@SfmTokenArray@@QEAAXXZ @ 0x1C0085C80
 * Callers:
 *     GreSfmDwmShutdown @ 0x1C0085BE0 (GreSfmDwmShutdown.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall SfmTokenArray::DeInitialize(SfmTokenArray *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)this = 0LL;
  }
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
}
