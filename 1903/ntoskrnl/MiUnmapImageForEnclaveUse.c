/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x140894E94
 * Callers:
 *     MiInitializeVsmEnclave @ 0x140894294 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140894788 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiUnmapViewOfSection @ 0x14064C640 (MiUnmapViewOfSection.c)
 */

unsigned __int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1)
{
  _BYTE v3[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v3);
  MiUnmapViewOfSection(PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess((struct _KTHREAD *)v3, 0);
}
