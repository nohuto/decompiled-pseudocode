/*
 * XREFs of ??_G?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@UEAAPEAXI@Z @ 0x180106520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_G?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800E4C08 (--_G-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  void *v4; // rcx
  unsigned __int64 v5; // rdi

  *a1 = &CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::`vftable';
  v4 = (void *)a1[1];
  if ( v4 )
  {
    v5 = 0LL;
    if ( a1[2] )
    {
      do
        Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::`scalar deleting destructor'((__int64 *)(a1[1] + 8 * v5++));
      while ( v5 < a1[2] );
      v4 = (void *)a1[1];
    }
    CoTaskMemFree(v4);
    a1[1] = 0LL;
  }
  a1[2] = 0LL;
  a1[4] = 0LL;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
