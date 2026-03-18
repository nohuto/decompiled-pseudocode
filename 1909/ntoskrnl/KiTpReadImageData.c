/*
 * XREFs of KiTpReadImageData @ 0x14087FDCC
 * Callers:
 *     KiTpSetupCompletion @ 0x14087FEB0 (KiTpSetupCompletion.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KiTpReadImageData(_KPROCESS *BugCheckParameter1, char a2, const void *a3, void *a4, size_t Size)
{
  unsigned __int64 v9; // r8
  _BYTE v11[48]; // [rsp+30h] [rbp-58h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( BugCheckParameter1 )
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v11);
  if ( a2 )
  {
    if ( (_DWORD)Size )
    {
      v9 = (unsigned __int64)a3 + (unsigned int)Size;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  memmove(a4, a3, (unsigned int)Size);
  if ( BugCheckParameter1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
  return 0LL;
}
