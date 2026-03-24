/*
 * XREFs of IopCloseFileObjectExtension @ 0x140121990
 * Callers:
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     IoCancelFileOpen @ 0x14081BDC0 (IoCancelFileOpen.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x1402E9620 (PsReleaseSiloHardReference.c)
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
