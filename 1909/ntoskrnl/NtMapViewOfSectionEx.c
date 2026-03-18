/*
 * XREFs of NtMapViewOfSectionEx @ 0x1406EB3D0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x14067E25C (MiMapViewOfSectionExCommon.c)
 */

NTSTATUS __fastcall NtMapViewOfSectionEx(
        void *a1,
        void *a2,
        PVOID *a3,
        PVOID *a4,
        _QWORD *a5,
        int a6,
        int a7,
        __int64 *a8,
        unsigned int a9)
{
  return MiMapViewOfSectionExCommon(
           a1,
           a2,
           0,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode,
           0);
}
