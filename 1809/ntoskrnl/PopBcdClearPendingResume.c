/*
 * XREFs of PopBcdClearPendingResume @ 0x140712248
 * Callers:
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x1406E3854 (BcdFlushStore.c)
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BcdOpenObject @ 0x1407140C4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140714240 (BcdCloseObject.c)
 */

NTSTATUS __fastcall PopBcdClearPendingResume(HANDLE BcdStoreHandle)
{
  NTSTATUS result; // eax
  int v3; // ebx
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp+10h] BYREF

  result = BcdOpenObject(BcdStoreHandle, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( result >= 0 )
  {
    v3 = BiDeleteElement(BcdObjectHandle, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(BcdObjectHandle, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(BcdStoreHandle);
    }
    BcdCloseObject(BcdObjectHandle);
    return v3;
  }
  return result;
}
