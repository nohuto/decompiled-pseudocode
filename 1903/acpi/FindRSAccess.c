/*
 * XREFs of FindRSAccess @ 0x1C0005C70
 * Callers:
 *     RegRSAccess @ 0x1C0005B9C (RegRSAccess.c)
 *     SupportsOnlyRawAccess @ 0x1C0020A18 (SupportsOnlyRawAccess.c)
 *     RawFieldAccess @ 0x1C0067824 (RawFieldAccess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindRSAccess(int a1)
{
  __int64 result; // rax

  for ( result = gpRSAccessHead; result && *(_DWORD *)(result + 8) != a1; result = *(_QWORD *)result )
    ;
  return result;
}
