/*
 * XREFs of LdrpReleaseDllPath @ 0x180081F20
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpReleaseDllPath(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 124) )
    return RtlReleasePath(*(_QWORD *)a1);
  return result;
}
