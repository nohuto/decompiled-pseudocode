/*
 * XREFs of ??_G?$_Ref_count_obj@VAsynchronousWorkItem@ButtonProcessor@@@std@@UEAAPEAXI@Z @ 0x1800EB7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count_obj<ButtonProcessor::AsynchronousWorkItem>::`scalar deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
