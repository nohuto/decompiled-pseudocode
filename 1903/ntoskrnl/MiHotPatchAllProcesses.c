/*
 * XREFs of MiHotPatchAllProcesses @ 0x14088E6EC
 * Callers:
 *     MiLoadHotPatch @ 0x14088EEB0 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x14088F1E8 (MiLoadHotPatchForUserSid.c)
 *     MiUnloadHotPatch @ 0x140891E90 (MiUnloadHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140891FDC (MiUnloadHotPatchForUserSid.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
 *     MiHotPatchProcess @ 0x14088EAC0 (MiHotPatchProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2)
{
  _KPROCESS *i; // rcx
  int v5; // eax
  unsigned __int64 NextProcess; // rax
  _KPROCESS *v7; // rbx
  _BYTE v9[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v9, 0, sizeof(v9));
  for ( i = 0LL; ; i = v7 )
  {
    NextProcess = PsGetNextProcess(i);
    v7 = (_KPROCESS *)NextProcess;
    if ( !NextProcess )
      break;
    v5 = *(_DWORD *)(NextProcess + 1788);
    if ( (v5 & 0x1000) == 0
      && v7 != (_KPROCESS *)PsSecureSystemProcess
      && (v5 & 1) == 0
      && !v7[2].ActiveProcessors.Bitmap[13] )
    {
      KiStackAttachProcess(v7, 0, (__int64)v9);
      MiHotPatchProcess(v7, a1, a2);
      KiUnstackDetachProcess((struct _KTHREAD *)v9, 0);
    }
  }
  return 0LL;
}
