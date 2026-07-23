/*
 * XREFs of SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1400142C0
 * Callers:
 *     SepConvertTokenPrivileges @ 0x1400142A0 (SepConvertTokenPrivileges.c)
 *     SepCopyTokenAccessInformation @ 0x1405C00C8 (SepCopyTokenAccessInformation.c)
 *     NtQueryInformationToken @ 0x14062B780 (NtQueryInformationToken.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepConvertTokenPrivilegesToLuidAndAttributes(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v3; // r10d
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = 0LL;
  v3 = 0;
  v4 = 1LL;
  do
  {
    if ( (v4 & a1[8]) != 0 )
    {
      v5 = a2 + 12 * v2;
      *(_QWORD *)v5 = (int)v3;
      *(_DWORD *)(v5 + 8) = ((v4 & a1[9]) != 0 ? 2 : 0) | ((v4 & a1[10]) != 0);
      v2 = (unsigned int)(v2 + 1);
    }
    ++v3;
    v4 = __ROL8__(v4, 1);
  }
  while ( v3 <= 0x24 );
  return (unsigned int)v2;
}
