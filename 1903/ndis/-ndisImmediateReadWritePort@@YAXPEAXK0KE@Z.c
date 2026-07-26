/*
 * XREFs of ?ndisImmediateReadWritePort@@YAXPEAXK0KE@Z @ 0x1C008068C
 * Callers:
 *     NdisImmediateReadPortUchar @ 0x1C0081320 (NdisImmediateReadPortUchar.c)
 *     NdisImmediateReadPortUlong @ 0x1C0081340 (NdisImmediateReadPortUlong.c)
 *     NdisImmediateReadPortUshort @ 0x1C0081360 (NdisImmediateReadPortUshort.c)
 *     NdisImmediateWritePortUchar @ 0x1C00813A0 (NdisImmediateWritePortUchar.c)
 *     NdisImmediateWritePortUlong @ 0x1C00813D0 (NdisImmediateWritePortUlong.c)
 *     NdisImmediateWritePortUshort @ 0x1C0081400 (NdisImmediateWritePortUshort.c)
 * Callees:
 *     ndisTranslateResources @ 0x1C002EA28 (ndisTranslateResources.c)
 *     ?ndisStartMapping@@YAJW4_INTERFACE_TYPE@@KKKKPEAPEAXPEAE@Z @ 0x1C00808E0 (-ndisStartMapping@@YAJW4_INTERFACE_TYPE@@KKKKPEAPEAXPEAE@Z.c)
 */

void __fastcall ndisImmediateReadWritePort(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rcx
  unsigned __int8 v6; // si
  SIZE_T v8; // rdi
  enum _INTERFACE_TYPE v10; // r12d
  unsigned int v11; // r13d
  unsigned __int32 v12; // eax
  unsigned __int16 v13; // ax
  unsigned __int8 v14; // al
  __int64 v15; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF
  unsigned __int8 v17; // [rsp+88h] [rbp+38h] BYREF

  v5 = a1[1];
  v6 = 0;
  v15 = 0LL;
  v8 = a4;
  v10 = *(_DWORD *)(v5 + 3720);
  v11 = *(_DWORD *)(v5 + 3724);
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
  BaseAddress = 0LL;
  if ( !(unsigned int)ndisTranslateResources(v5, 1LL, a2, (__int64 *)&BaseAddress, &v15) )
  {
    if ( !v15 )
    {
      if ( (int)ndisStartMapping(v10, v11, a2, v8, v10 != Internal, &BaseAddress, &v17) < 0 )
        return;
      v6 = v17;
    }
    if ( a5 )
    {
      switch ( (_DWORD)v8 )
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
      switch ( (_DWORD)v8 )
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
    if ( v6 )
      MmUnmapIoSpace(BaseAddress, v8);
  }
}
