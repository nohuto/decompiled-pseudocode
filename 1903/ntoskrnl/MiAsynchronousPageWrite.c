/*
 * XREFs of MiAsynchronousPageWrite @ 0x1402C1300
 * Callers:
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 * Callees:
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 */

NTSTATUS __fastcall MiAsynchronousPageWrite(
        struct _FILE_OBJECT *a1,
        struct _MDL *a2,
        LARGE_INTEGER *a3,
        void (__fastcall *a4)(void *, struct _IO_STATUS_BLOCK *, _QWORD),
        void *a5,
        int a6,
        int a7,
        char a8,
        __int64 a9,
        struct _IO_STATUS_BLOCK *a10,
        IRP **a11)
{
  return IoAsynchronousPageWrite(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
