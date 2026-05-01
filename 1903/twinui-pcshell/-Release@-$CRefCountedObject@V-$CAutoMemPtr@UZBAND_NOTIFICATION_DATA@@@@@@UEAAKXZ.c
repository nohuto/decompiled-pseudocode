/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ @ 0x180079BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  __int64 *v3; // rsi

  v2 = _InterlockedDecrement(a1 + 4);
  if ( !v2 && a1 )
  {
    v3 = (__int64 *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = 0LL;
    if ( v3 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v3 + 1);
      operator delete(v3, (const struct std::nothrow_t *)0x10);
    }
    operator delete((void *)a1, (const struct std::nothrow_t *)0x18);
  }
  return v2;
}
