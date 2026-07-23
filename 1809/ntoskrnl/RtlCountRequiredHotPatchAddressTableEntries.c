/*
 * XREFs of RtlCountRequiredHotPatchAddressTableEntries @ 0x14089AC7C
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1402F8064 (RtlGetHotPatchSize.c)
 *     RtlpCheckFunctionPatchApplied @ 0x14057F480 (RtlpCheckFunctionPatchApplied.c)
 */

__int64 __fastcall RtlCountRequiredHotPatchAddressTableEntries(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _DWORD *a4,
        int *a5,
        char a6,
        _DWORD *a7)
{
  unsigned __int64 v8; // r14
  unsigned int HotPatchSize; // eax
  int v11; // r11d
  int *v12; // r9
  __int64 v13; // rdi
  int v14; // r10d
  int v15; // r12d
  char v16; // dl
  unsigned int *v17; // rbx
  char v18; // cl
  __int64 v19; // rcx
  _WORD *v20; // rdx
  _BYTE *v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // r8d
  __int64 v24; // r9
  unsigned __int64 v25; // r10

  v8 = a3;
  HotPatchSize = RtlGetHotPatchSize(a4);
  v12 = a5;
  v13 = HotPatchSize;
  v14 = *a5;
  if ( !*a5 )
  {
LABEL_25:
    *a7 = v11;
    return 0LL;
  }
  v15 = v11 + 1;
  while ( 1 )
  {
    v16 = 0;
    v17 = (unsigned int *)v12;
    if ( a6 && v14 < 0 )
    {
      v16 = v15;
    }
    else if ( !a6 )
    {
      v16 = 0;
      if ( v14 >= 0 )
        v16 = v15;
    }
    v18 = 0;
    ++v12;
    if ( (v14 & 0xFC000) == 0x1C000 )
      v18 = v16;
    if ( v18 )
      break;
    v12 = (int *)&v17[(unsigned int)v13 * (v14 & 0xFFF) + 1];
LABEL_24:
    v14 = *v12;
    if ( !*v12 )
      goto LABEL_25;
  }
  if ( (v14 & 0xFFF) == 0 )
    goto LABEL_24;
  while ( 1 )
  {
    v19 = (unsigned int)*v12;
    if ( (unsigned int)v19 < 0x10 || (int)v19 + 2 > a2 )
      return 3221225595LL;
    v20 = 0LL;
    v21 = (_BYTE *)(a1 + v19);
    if ( (_DWORD)v13 != 2 )
      v20 = v12 + 2;
    v22 = RtlpCheckFunctionPatchApplied(v21, v20);
    if ( v22 == -1LL )
      return 3221225595LL;
    if ( v22 )
    {
      if ( v22 < v25 || v22 - v25 >= v8 )
        return 3221225507LL;
    }
    else
    {
      v11 += v15;
    }
    v12 = (int *)(v24 + 4 * v13);
    if ( v23 == 1 )
      goto LABEL_24;
  }
}
