/*
 * XREFs of ndisImmediateReadWritePort @ 0x1C00EBF30
 * Callers:
 *     NdisImmediateReadPortUchar @ 0x1C00EBA10 (NdisImmediateReadPortUchar.c)
 *     NdisImmediateReadPortUlong @ 0x1C00EBA30 (NdisImmediateReadPortUlong.c)
 *     NdisImmediateReadPortUshort @ 0x1C00EBA50 (NdisImmediateReadPortUshort.c)
 *     NdisImmediateWritePortUchar @ 0x1C00EBA90 (NdisImmediateWritePortUchar.c)
 *     NdisImmediateWritePortUlong @ 0x1C00EBAC0 (NdisImmediateWritePortUlong.c)
 *     NdisImmediateWritePortUshort @ 0x1C00EBAF0 (NdisImmediateWritePortUshort.c)
 * Callees:
 *     ndisTranslateResources @ 0x1C00D0A10 (ndisTranslateResources.c)
 *     ndisStartMapping @ 0x1C00EC174 (ndisStartMapping.c)
 */

void __fastcall ndisImmediateReadWritePort(__int64 a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4, char a5)
{
  __int64 v5; // rcx
  SIZE_T v7; // rdi
  int v8; // r15d
  int v9; // r12d
  char v11; // cl
  unsigned __int32 v12; // eax
  unsigned __int16 v13; // ax
  unsigned __int8 v14; // al
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  char v17; // [rsp+88h] [rbp+38h] BYREF

  v5 = *(_QWORD *)(a1 + 8);
  v15 = 0LL;
  v7 = a4;
  v8 = *(_DWORD *)(v5 + 3744);
  v9 = *(_DWORD *)(v5 + 3748);
  v17 = 0;
  if ( a5 )
  {
    switch ( a4 )
    {
      case 1u:
        *a3 = -1;
        break;
      case 2u:
        *(_WORD *)a3 = -1;
        break;
      case 4u:
        *(_DWORD *)a3 = -1;
        break;
    }
  }
  if ( !(unsigned int)ndisTranslateResources(v5, 1, a2, &BaseAddress, &v15) )
  {
    if ( v15 )
    {
      v11 = 0;
    }
    else
    {
      if ( (int)ndisStartMapping(v8, v9, a2, v7, v8 != 0, (__int64)&BaseAddress, (__int64)&v17) < 0 )
        return;
      v11 = v17;
    }
    if ( a5 )
    {
      switch ( (_DWORD)v7 )
      {
        case 1:
          v14 = __inbyte((unsigned __int16)BaseAddress);
          *a3 = v14;
          break;
        case 2:
          v13 = __inword((unsigned __int16)BaseAddress);
          *(_WORD *)a3 = v13;
          break;
        case 4:
          v12 = __indword((unsigned __int16)BaseAddress);
          *(_DWORD *)a3 = v12;
          break;
      }
    }
    else
    {
      switch ( (_DWORD)v7 )
      {
        case 1:
          __outbyte((unsigned __int16)BaseAddress, *a3);
          break;
        case 2:
          __outword((unsigned __int16)BaseAddress, *(_WORD *)a3);
          break;
        case 4:
          __outdword((unsigned __int16)BaseAddress, *(_DWORD *)a3);
          break;
      }
    }
    if ( v11 )
      MmUnmapIoSpace(BaseAddress, v7);
  }
}
