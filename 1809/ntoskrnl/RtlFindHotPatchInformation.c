/*
 * XREFs of RtlFindHotPatchInformation @ 0x14089AF1C
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140857B4C (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     RtlFindHotPatchBase @ 0x14089AEF0 (RtlFindHotPatchBase.c)
 */

__int64 __fastcall RtlFindHotPatchInformation(char *BaseAddress)
{
  PIMAGE_NT_HEADERS v2; // rdi
  char *v3; // rax
  char *v4; // rdx
  char *v5; // rcx
  char *v6; // rax
  __int64 v7; // r8
  unsigned int SizeOfImage; // r10d
  unsigned int *v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // r10d
  __int64 v14; // r9
  ULONG Size; // [rsp+38h] [rbp+10h] BYREF

  v2 = RtlImageNtHeader(BaseAddress);
  v3 = (char *)RtlImageDirectoryEntryToData(BaseAddress, 1u, 0xAu, &Size);
  v4 = v3;
  if ( !v3 )
    return 0LL;
  if ( Size <= 4 )
    return 0LL;
  if ( Size != *(_DWORD *)v3 )
    return 0LL;
  if ( Size < 0xF4 )
    return 0LL;
  v5 = &v3[Size];
  if ( v5 < v3 )
    return 0LL;
  v6 = &BaseAddress[v2->OptionalHeader.SizeOfImage];
  if ( v4 >= v6 )
    return 0LL;
  if ( v5 > v6 )
    return 0LL;
  _mm_lfence();
  v7 = *((unsigned int *)v4 + 60);
  if ( (unsigned int)v7 >= 0xFFFFFFF8 || (_DWORD)v7 == 0 )
    return 0LL;
  SizeOfImage = v2->OptionalHeader.SizeOfImage;
  if ( (int)v7 + 8 > SizeOfImage )
    return 0LL;
  v9 = (unsigned int *)&BaseAddress[v7];
  switch ( *(_DWORD *)&BaseAddress[v7] )
  {
    case 1:
      v10 = 20;
      break;
    case 2:
      v10 = 24;
      break;
    case 3:
      v10 = 28;
      break;
    default:
      return 0LL;
  }
  v11 = v9[1];
  if ( v11 >= v10 )
  {
    if ( v9[2] )
    {
      if ( v11 + (unsigned int)v7 > v11 && v11 + (unsigned int)v7 <= SizeOfImage )
      {
        v12 = v9[4];
        if ( v12 <= 0x3FFFFFF9 )
        {
          v13 = 4 * v12 + v9[3];
          if ( v13 > 4 * v12 && v13 <= v11 && v12 == 1 && RtlFindHotPatchBase(v9) )
            return v14;
        }
      }
    }
  }
  return 0LL;
}
