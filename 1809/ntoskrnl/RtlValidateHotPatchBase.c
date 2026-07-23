/*
 * XREFs of RtlValidateHotPatchBase @ 0x14089B1A4
 * Callers:
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlGetHotPatchSize @ 0x1402F8064 (RtlGetHotPatchSize.c)
 *     RtlDetermineHotPatchExtent @ 0x14089ADBC (RtlDetermineHotPatchExtent.c)
 */

char __fastcall RtlValidateHotPatchBase(_DWORD *a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // eax
  __int64 v7; // rdx
  unsigned int *v9; // r14
  unsigned int *v10; // r11
  __int64 HotPatchSize; // r13
  unsigned int v12; // esi
  unsigned int v13; // ebp
  int v14; // ebx
  int v15; // edi
  int v16; // r10d
  unsigned int v18; // [rsp+50h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a2 + 24);
  v7 = (unsigned int)a1[1];
  if ( v5 < (unsigned int)v7 )
  {
    v9 = (_DWORD *)((char *)a1 + v7);
    HotPatchSize = (unsigned int)RtlGetHotPatchSize(a1);
    do
    {
LABEL_18:
      v16 = *v10;
      if ( !*v10 )
        return 1;
      if ( v10 >= v9 || (v16 & 0x3FF03000) != 0 || (v16 & 0x40000000) != 0 )
        return 0;
      if ( v16 >= 0 )
      {
        v12 = a3;
        v13 = a4;
        if ( (v16 & 0xFC000) != 0x1C000 )
          return 0;
      }
      else
      {
        v12 = a4;
        v13 = a3;
      }
      ++v10;
      v14 = v16 & 0xFFF;
    }
    while ( (v16 & 0xFFF) == 0 );
    v15 = v16 & 0x4000;
    while ( (!v15 || (unsigned __int64)v10[1] + 8 <= v13)
         && ((v16 & 0x8000) == 0 || RtlDetermineHotPatchExtent(v16, *v10, &v18, &a5) && a5 <= v12 >> 12)
         && (v16 & 0xFC000) != 0x78000 )
    {
      v10 += HotPatchSize;
      if ( !--v14 )
        goto LABEL_18;
    }
  }
  return 0;
}
