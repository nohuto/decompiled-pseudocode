/*
 * XREFs of MiHotPatchAllProcesses @ 0x1408564E8
 * Callers:
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x140859458 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140859510 (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PsGetNextProcess @ 0x1405B31E0 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x140856864 (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  _KPROCESS *i; // rcx
  int v5; // eax
  unsigned __int64 NextProcess; // rax
  _KPROCESS *v7; // rbx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  for ( i = 0LL; ; i = v7 )
  {
    NextProcess = PsGetNextProcess(i);
    v7 = (_KPROCESS *)NextProcess;
    if ( !NextProcess )
      break;
    v5 = *(_DWORD *)(NextProcess + 1740);
    if ( (v5 & 0x1000) == 0
      && v7 != (_KPROCESS *)PsSecureSystemProcess
      && (v5 & 1) == 0
      && !v7[2].ActiveProcessors.Bitmap[9] )
    {
      KiStackAttachProcess(v7, 0LL, (__int64)v9);
      MiHotPatchProcess(v7, a1, a2);
      KiUnstackDetachProcess((__int64)v9, 0LL);
    }
  }
  return 0LL;
}
