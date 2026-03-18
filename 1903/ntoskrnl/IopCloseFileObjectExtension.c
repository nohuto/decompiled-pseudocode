/*
 * XREFs of IopCloseFileObjectExtension @ 0x14000A28C
 * Callers:
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     IoCancelFileOpen @ 0x140855E20 (IoCancelFileOpen.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140306C00 (PsReleaseSiloHardReference.c)
 */

__int64 __fastcall IopCloseFileObjectExtension(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 v2; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 208);
  if ( v1 != IopRevocationExtension )
  {
    v2 = v1[8];
    if ( v2 )
    {
      *(_DWORD *)(v2 + 4) &= ~1u;
      return PsReleaseSiloHardReference(*(PVOID *)(v2 + 8));
    }
  }
  return result;
}
