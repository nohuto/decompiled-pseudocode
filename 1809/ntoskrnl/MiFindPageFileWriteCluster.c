/*
 * XREFs of MiFindPageFileWriteCluster @ 0x140150D80
 * Callers:
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     MiFindFreePageFileSpace @ 0x14012420C (MiFindFreePageFileSpace.c)
 *     MiRefPageFileSpaceBitmaps @ 0x14014F9FC (MiRefPageFileSpaceBitmaps.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14014FBA8 (MiDerefPageFileSpaceBitmaps.c)
 *     MiSetPageFileAllocationBits @ 0x140150938 (MiSetPageFileAllocationBits.c)
 *     RtlFindLongestRunClearCapped @ 0x1402EE9A0 (RtlFindLongestRunClearCapped.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiFindPageFileWriteCluster(__int64 a1, unsigned int *a2, _DWORD *a3, int a4)
{
  ULONG v4; // r14d
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // r9d
  int FreePageFileSpace; // esi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _DWORD *result; // rax
  int v15; // r15d
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  _BYTE *v18; // r13
  int *v19; // rcx
  ULONG *v20; // rax
  ULONG LongestRunClearCapped; // eax
  _DWORD *v22; // rax
  int v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]
  _BYTE v25[8]; // [rsp+30h] [rbp-38h] BYREF
  char v26; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+48h] BYREF
  _DWORD *v28; // [rsp+B8h] [rbp+50h]
  _DWORD *v29; // [rsp+C0h] [rbp+58h]
  ULONG v30; // [rsp+C8h] [rbp+60h] BYREF

  v29 = a3;
  v28 = a2;
  v4 = *a3;
  v8 = MiSwizzleInvalidPte((unsigned __int64)*a2 << 32);
  v9 = *(_QWORD *)(a1 + 256);
  v27 = ((unsigned __int64)(*(_WORD *)(a1 + 204) & 0xF) << 12) | v8 & 0xFFFFFFFFFFFF0FFFuLL;
  FreePageFileSpace = MiFindFreePageFileSpace(v9, &v27, v4, v10 != 0 ? 38 : 32);
  if ( FreePageFileSpace )
  {
    v12 = v27;
    if ( qword_14043B180 && (v27 & 0x10) == 0 )
      v12 = v27 & ~qword_14043B180;
    v13 = HIDWORD(v12);
  }
  else
  {
    if ( a4 )
    {
      v19 = &v23;
      v18 = *(_BYTE **)(a1 + 112);
      v15 = 0;
      v23 = *(_DWORD *)a1;
      v24 = *((_QWORD *)v18 + 2);
      v20 = a2;
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 128);
      v16 = *(_DWORD *)(a1 + 124);
      if ( v16 < dword_14054118C && *(_DWORD *)(a1 + 132) != v15 )
      {
        if ( v16 >= (unsigned int)dword_14054118C >> 3 )
        {
          v17 = v16 + (v16 >> 1);
          v16 = dword_14054118C;
          if ( v17 < dword_14054118C )
            v16 = v17;
        }
        else
        {
          v16 *= 2;
        }
        *(_DWORD *)(a1 + 124) = v16;
      }
      v18 = v25;
      MiRefPageFileSpaceBitmaps((KSPIN_LOCK *)a1, (__int64)v25);
      v19 = (int *)&v26;
      v20 = (ULONG *)(a1 + 120);
      if ( v4 >= v16 )
        v4 = v16;
    }
    v30 = *v20;
    LongestRunClearCapped = RtlFindLongestRunClearCapped(v19, v4, &v30);
    LODWORD(v13) = v30;
    FreePageFileSpace = LongestRunClearCapped;
    if ( a4 )
    {
      MiSetPageFileAllocationBits(a1, v30, LongestRunClearCapped);
    }
    else
    {
      if ( LongestRunClearCapped )
      {
        if ( LongestRunClearCapped < v4 )
        {
          *(_DWORD *)(a1 + 124) = LongestRunClearCapped;
          *(_DWORD *)(a1 + 132) = v15;
        }
        *(_DWORD *)(a1 + 120) = v13 + LongestRunClearCapped;
      }
      v22 = MiDerefPageFileSpaceBitmaps(a1, (_DWORD **)v18, 0);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
    }
  }
  *v29 = FreePageFileSpace;
  result = v28;
  *v28 = v13;
  return result;
}
