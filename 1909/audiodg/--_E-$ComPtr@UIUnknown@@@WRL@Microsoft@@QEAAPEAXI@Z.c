/*
 * XREFs of ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x140026324
 * Callers:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1400024F0 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x140046710 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x140015EC0 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1400161B4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'(char *a1)
{
  char *v1; // rbx

  v1 = a1 - 8;
  `eh vector destructor iterator'(
    a1,
    8LL,
    *((_QWORD *)a1 - 1),
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Storage::Streams::IDataReader>::~ComPtr<Windows::Storage::Streams::IDataReader>);
  operator delete[](v1);
  return v1;
}
