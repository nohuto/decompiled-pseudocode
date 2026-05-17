/*
 * XREFs of sub_18002E464 @ 0x18002E464
 * Callers:
 *     sub_18002E1E0 @ 0x18002E1E0 (sub_18002E1E0.c)
 *     sub_18002E73C @ 0x18002E73C (sub_18002E73C.c)
 * Callees:
 *     <none>
 */

struct _TEB *sub_18002E464()
{
  int v0; // ecx
  struct _TEB *result; // rax

  v0 = dword_180165290;
  result = NtCurrentTeb();
  if ( dword_180165290 < (unsigned int)dword_1801652E8 )
    v0 = dword_1801652E8;
  dword_180165290 = v0;
  if ( (result->SameTebFlags & 0x2000) != 0 )
    ++dword_180165294;
  else
    ++dword_180165298;
  return result;
}
