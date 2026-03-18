/*
 * XREFs of GreOnCURSINFODestroy @ 0x1C00176B4
 * Callers:
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00175DC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020FB8 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator() @ 0x1C023FD14 (_lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_--operator().c)
 */

void __fastcall GreOnCURSINFODestroy(struct _CURSINFO *a1)
{
  __int64 HDEV; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  char v8; // [rsp+40h] [rbp+18h] BYREF

  if ( gCachedSetPointerState == a1 )
  {
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v8, ghsemDynamicModeChange);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      v6 = HDEV;
      v3 = *(_QWORD *)(HDEV + 56);
      if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v6) )
      {
        lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(v4, v3, a1);
      }
      else
      {
        v7 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        lambda_9a8a047a5147a8b2f6bffa79fe7b2ec3_::operator()(v5, v3, a1);
        SEMOBJ::vUnlock((SEMOBJ *)&v7);
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v8);
  }
}
