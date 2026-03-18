/*
 * XREFs of MiUnmapImageForEnclaveUse @ 0x1408946B4
 * Callers:
 *     MiInitializeVsmEnclave @ 0x140893AB4 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140893FA8 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiUnmapViewOfSection @ 0x1406602D0 (MiUnmapViewOfSection.c)
 */

unsigned __int64 __fastcall MiUnmapImageForEnclaveUse(unsigned __int64 a1)
{
  _BYTE v3[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v3, 0, sizeof(v3));
  KiStackAttachProcess((_KPROCESS *)PsSecureSystemProcess, 0, (__int64)v3);
  MiUnmapViewOfSection(PsSecureSystemProcess, a1, 0, 0);
  return KiUnstackDetachProcess((struct _KTHREAD *)v3, 0);
}
