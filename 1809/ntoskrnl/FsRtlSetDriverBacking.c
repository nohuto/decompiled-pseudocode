/*
 * XREFs of FsRtlSetDriverBacking @ 0x14070E560
 * Callers:
 *     IoRegisterFileSystem @ 0x14070E3C0 (IoRegisterFileSystem.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075D150 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     MmBackSystemImageWithPagefile @ 0x14070E58C (MmBackSystemImageWithPagefile.c)
 */

__int64 __fastcall FsRtlSetDriverBacking(__int64 a1, char a2)
{
  __int64 result; // rax
  ULONG_PTR v3; // rcx

  result = 0LL;
  if ( (a2 & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 )
      return MmBackSystemImageWithPagefile(v3);
    else
      return 3221226083LL;
  }
  return result;
}
