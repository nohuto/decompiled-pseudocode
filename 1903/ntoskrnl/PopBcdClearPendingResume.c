/*
 * XREFs of PopBcdClearPendingResume @ 0x14073B4A0
 * Callers:
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x140729D54 (BcdFlushStore.c)
 *     BiDeleteElement @ 0x14073C8D8 (BiDeleteElement.c)
 *     BcdOpenObject @ 0x14073D18C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073D318 (BcdCloseObject.c)
 */

__int64 __fastcall PopBcdClearPendingResume(__int64 a1)
{
  __int64 result; // rax
  int v3; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  result = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &v4);
  if ( (int)result >= 0 )
  {
    v3 = BiDeleteElement(v4, 637534213LL);
    if ( v3 >= 0 )
    {
      v3 = BiDeleteElement(v4, 637534245LL);
      if ( v3 >= 0 )
        BcdFlushStore(a1);
    }
    BcdCloseObject(v4);
    return (unsigned int)v3;
  }
  return result;
}
