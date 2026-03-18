/*
 * XREFs of HmgUnlock @ 0x1C00766BC
 * Callers:
 *     GreUnlockRegion @ 0x1C00D9D90 (GreUnlockRegion.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C002AD50 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C002AFB0 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C002B0E0 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002BEC0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 */

__int64 __fastcall HmgUnlock(unsigned int a1)
{
  unsigned int v1; // ebx
  __int16 v2; // edi^2
  struct OBJECT *EntryObject; // rax
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v1 = 0;
  v5 = 0LL;
  v2 = HIWORD(a1);
  v6 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v5, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 1, 0, 0);
  if ( v6 )
  {
    if ( *(_BYTE *)(v5 + 14) == 4 && *(_WORD *)(v5 + 12) == v2 )
    {
      EntryObject = GdiHandleManager::GetEntryObject(
                      (GdiHandleEntryDirectory **)gpHandleManager,
                      *(_DWORD *)v5 & 0xFFFFFF);
      if ( EntryObject )
      {
        if ( *((_WORD *)EntryObject + 6) && *((struct _KTHREAD **)EntryObject + 2) == KeGetCurrentThread() )
        {
          _InterlockedDecrement((volatile signed __int32 *)EntryObject + 3);
          v1 = 1;
        }
      }
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v5);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v5);
  return v1;
}
