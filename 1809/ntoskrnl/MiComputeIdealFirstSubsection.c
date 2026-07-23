/*
 * XREFs of MiComputeIdealFirstSubsection @ 0x140853C24
 * Callers:
 *     MiCreateDataFileMap @ 0x14061CFCC (MiCreateDataFileMap.c)
 * Callees:
 *     FsRtlGetFileExtents @ 0x14026E868 (FsRtlGetFileExtents.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiComputeIdealFirstSubsection(struct _FILE_OBJECT *a1)
{
  _DWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  _DWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rdx

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6546694Du);
  v4 = 0LL;
  v5 = result;
  if ( result )
  {
    *(_QWORD *)result = 2LL;
    if ( (int)FsRtlGetFileExtents(a1, v3, 0LL, 0x40000000LL, result) >= 0 )
    {
      v6 = v5[1];
      if ( v6 == 1 )
      {
        if ( (v5[2] & 0x3FFFF) == 0 && *((_QWORD *)v5 + 2) == 0x40000LL )
          v4 = 0x40000LL;
      }
      else if ( v6 == 2 )
      {
        v7 = *((_QWORD *)v5 + 2);
        if ( v7 + *((_QWORD *)v5 + 4) == 0x40000 && (v7 & 0xF) == 0 )
          v4 = *((_QWORD *)v5 + 2);
      }
    }
    ExFreePoolWithTag(v5, 0);
    return (_DWORD *)v4;
  }
  return result;
}
