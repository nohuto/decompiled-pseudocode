/*
 * XREFs of ?Release@?$CRefCountedObject@UPER_APPLICATION_DATA@@@@UEAAKXZ @ 0x1800768D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<PER_APPLICATION_DATA>::Release(void *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 12);
  if ( !v2 && a1 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a1 + 2);
    WindowsDeleteString(*((HSTRING *)a1 + 1));
    *((_QWORD *)a1 + 1) = 0LL;
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  }
  return v2;
}
