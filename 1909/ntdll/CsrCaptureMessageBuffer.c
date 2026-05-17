/*
 * XREFs of CsrCaptureMessageBuffer @ 0x18004C330
 * Callers:
 *     <none>
 * Callees:
 *     CsrAllocateMessagePointer @ 0x18004C220 (CsrAllocateMessagePointer.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

void *__fastcall CsrCaptureMessageBuffer(__int64 a1, const void *a2, unsigned int a3, void **a4)
{
  size_t v5; // rbx
  void *result; // rax

  v5 = a3;
  if ( !LdrpIsSecureProcess )
  {
    result = (void *)CsrAllocateMessagePointer(a1, a3, a4);
    if ( a2 )
    {
      if ( (_DWORD)v5 )
        return memmove(*a4, a2, v5);
    }
  }
  return result;
}
