/*
 * XREFs of ?Release@?$CRefCountedObject@ULightweightProperty@LightweightPropertySet@@@@UEAAKXZ @ 0x18007B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<LightweightPropertySet::LightweightProperty>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  HSTRING v4; // rcx

  v2 = _InterlockedDecrement(a1 + 6);
  if ( !v2 && a1 )
  {
    v4 = (HSTRING)*((_QWORD *)a1 + 1);
    if ( v4 )
      WindowsDeleteString(v4);
    operator delete((void *)a1, (const struct std::nothrow_t *)0x20);
  }
  return v2;
}
