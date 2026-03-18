/*
 * XREFs of PopBcdClearPendingResume @ 0x14073D3A0
 * Callers:
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 * Callees:
 *     BcdFlushStore @ 0x14072B0C4 (BcdFlushStore.c)
 *     BiDeleteElement @ 0x14073E7D8 (BiDeleteElement.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
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
