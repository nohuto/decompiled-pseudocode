/*
 * XREFs of DpiInitializeIoMmuContext @ 0x1C0165094
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C0167414 (DpiFdoInitializeFdo.c)
 * Callees:
 *     IoMmuInitializePageManager @ 0x1C0022F70 (IoMmuInitializePageManager.c)
 */

void __fastcall DpiInitializeIoMmuContext(__int64 a1)
{
  if ( !*(_BYTE *)(a1 + 480) )
  {
    *(_QWORD *)(a1 + 5696) = a1 + 5688;
    *(_QWORD *)(a1 + 5688) = a1 + 5688;
    KeInitializeSpinLock((PKSPIN_LOCK)(a1 + 5568));
    *(_QWORD *)(a1 + 5576) = 0LL;
    *(_DWORD *)(a1 + 5704) = 0;
    IoMmuInitializePageManager(a1 + 5584);
  }
}
