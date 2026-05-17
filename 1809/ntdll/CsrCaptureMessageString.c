/*
 * XREFs of CsrCaptureMessageString @ 0x18005D110
 * Callers:
 *     CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x18005D000 (CsrCaptureMessageMultiUnicodeStringsInPlace.c)
 * Callees:
 *     CsrAllocateMessagePointer @ 0x18005D1C0 (CsrAllocateMessagePointer.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

void __fastcall CsrCaptureMessageString(__int64 a1, const void *a2, int a3, unsigned int a4, unsigned __int16 *a5)
{
  void **v8; // rdi
  unsigned __int16 *v9; // r8
  unsigned __int16 MessagePointer; // ax

  if ( !LdrpIsSecureProcess )
  {
    v8 = (void **)(a5 + 4);
    v9 = a5 + 4;
    if ( a2 )
    {
      *a5 = a3;
      MessagePointer = CsrAllocateMessagePointer(a1, a4, v9);
      a5[1] = MessagePointer;
      if ( a3 )
      {
        memmove(*v8, a2, a4);
        MessagePointer = a5[1];
      }
      if ( *a5 < MessagePointer )
        *((_BYTE *)*v8 + *a5) = 0;
    }
    else
    {
      *a5 = 0;
      a5[1] = a4;
      CsrAllocateMessagePointer(a1, a4, v9);
      if ( a4 )
        *(_BYTE *)*v8 = 0;
    }
  }
}
