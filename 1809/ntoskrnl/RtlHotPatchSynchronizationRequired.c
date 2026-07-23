/*
 * XREFs of RtlHotPatchSynchronizationRequired @ 0x14089B04C
 * Callers:
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1400D9660 (RtlFindClearBitsAndSet.c)
 *     RtlGetHotPatchSize @ 0x1402F8064 (RtlGetHotPatchSize.c)
 *     RtlpCheckFunctionPatchApplied @ 0x14057F480 (RtlpCheckFunctionPatchApplied.c)
 */

__int64 __fastcall RtlHotPatchSynchronizationRequired(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        PRTL_BITMAP BitMapHeader,
        _BYTE *a8)
{
  __int64 HotPatchSize; // rdi
  unsigned int *v10; // r8
  signed int v11; // r10d
  unsigned int *v12; // r11
  bool v13; // cl
  _WORD *v14; // rdx
  __int64 v15; // rax
  char v16; // cl
  __int64 v17; // r8
  int v18; // r9d
  ULONG i; // r8d
  int v21; // ecx
  ULONG ClearBitsAndSet; // eax

  *a8 = 0;
  if ( a3 )
  {
    HotPatchSize = (unsigned int)RtlGetHotPatchSize(a2);
    do
    {
      v11 = *v10;
      v12 = v10;
      if ( !*v10 )
        break;
      v13 = 0;
      ++v10;
      if ( (v11 & 0xFC000) == 0x1C000 )
        v13 = v11 >= 0;
      if ( v13 )
      {
        if ( (v11 & 0xFFF) != 0 )
        {
          do
          {
            v14 = 0LL;
            if ( (_DWORD)HotPatchSize != 2 )
              v14 = v10 + 2;
            v15 = RtlpCheckFunctionPatchApplied((_BYTE *)(a1 + *v10), v14);
            if ( v15 == -1 )
              return 3221225595LL;
            if ( v15 )
            {
              if ( a6 )
                _bittestandset((signed __int32 *)BitMapHeader->Buffer, (v15 - a5) >> 3);
            }
            else if ( (v16 & 7) == 7 )
            {
LABEL_14:
              *a8 = 1;
              return 0LL;
            }
            v10 = (unsigned int *)(v17 + 4 * HotPatchSize);
          }
          while ( v18 != 1 );
        }
      }
      else
      {
        v10 = &v12[(unsigned int)HotPatchSize * (v11 & 0xFFF) + 1];
      }
    }
    while ( v10 );
  }
  if ( a6 )
  {
    for ( i = 0; ; i = ClearBitsAndSet )
    {
      ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, i);
      if ( ClearBitsAndSet == -1 )
        break;
      v21 = *(_DWORD *)(a6 + 6LL * ClearBitsAndSet);
      if ( v21 && (((_BYTE)a1 + (_BYTE)v21) & 7) == 7 )
        goto LABEL_14;
    }
  }
  return 0LL;
}
