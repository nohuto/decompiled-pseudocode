/*
 * XREFs of MiSynchronousPageWrite @ 0x140193838
 * Callers:
 *     MiZeroPageFileFirstPage @ 0x140774B20 (MiZeroPageFileFirstPage.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 */

NTSTATUS __fastcall MiSynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        _QWORD *a3,
        struct _KEVENT *a4,
        char a5,
        __int64 a6,
        struct _IO_STATUS_BLOCK *a7)
{
  return IoSynchronousPageWriteEx(a1, a2, a3, a4, a5, a6, a7);
}
