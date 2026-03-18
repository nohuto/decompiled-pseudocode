/*
 * XREFs of KiTpReadImageData @ 0x1408806CC
 * Callers:
 *     KiTpSetupCompletion @ 0x1408807B0 (KiTpSetupCompletion.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
