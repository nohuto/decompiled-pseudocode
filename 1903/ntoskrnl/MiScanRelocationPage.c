/*
 * XREFs of MiScanRelocationPage @ 0x14068C820
 * Callers:
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 * Callees:
 *     MiOffsetToProtos @ 0x1400D5DB0 (MiOffsetToProtos.c)
 *     MiCreateFixupRecord @ 0x1406ED144 (MiCreateFixupRecord.c)
 */

__int64 __fastcall MiScanRelocationPage(int a1, unsigned int a2, int a3, _WORD *a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r12
  int v8; // r15d
  __int64 v9; // r14
  unsigned int v10; // r13d
  int v11; // r9d
  int v12; // esi
  int v13; // r11d
  unsigned int v14; // ebp
  int v15; // r10d
  bool i; // zf
  __int16 v17; // ax
  unsigned __int16 v18; // bx
  unsigned int v19; // r8d
  int v20; // eax
  __int64 result; // rax

  v6 = a5;
  v8 = 0;
  v9 = a2;
  v10 = 0;
  v11 = 0;
  v12 = a3;
  v13 = a1;
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 56LL) + 64LL);
  v15 = 0;
  for ( i = a3 == 0; ; i = v12 == 0 )
  {
    if ( i )
      return 0LL;
    v17 = *a4 >> 12;
    v18 = *a4 & 0xFFF;
    --v12;
    if ( v17 )
    {
      if ( v17 == 3 )
      {
        if ( v18 > 0xFFCu )
        {
          v8 = 2;
          v10 = 4;
          v11 = 1;
        }
      }
      else
      {
        if ( v17 != 10 )
          return 3221226089LL;
        if ( v18 > 0xFF8u )
        {
          v10 = 8;
          v11 = 1;
        }
        v20 = 0;
        if ( v18 <= 0xFF8u )
          v20 = v8;
        v8 = v20;
      }
    }
    if ( *a4 < 0x1000u )
    {
      v19 = v9 + v18;
    }
    else
    {
      if ( (v9 & 0xFFF) != 0 && v18 + (unsigned int)(v9 & 0xFFF) > 0xFFE )
        return 3221226089LL;
      v19 = v18 + (_DWORD)v9;
      if ( v19 < v14 )
        return 3221226089LL;
    }
    if ( v11 == 1 )
      break;
LABEL_11:
    ++a4;
  }
  if ( v15 != 1 )
  {
    result = MiCreateFixupRecord((_DWORD)v6, v13, v19, v8, v10, (__int64)a4, a6);
    if ( (int)result < 0 )
      return result;
    if ( (MiFlags & 0x40000) == 0
      || (v6[23] & 0xC0000) == 0
      || (MiOffsetToProtos(v6, v9 + v10 + (unsigned __int64)v18, (unsigned __int64 *)&a5)[8] & 4) == 0 )
    {
      v13 = a1;
      v11 = 0;
      v15 = 1;
      goto LABEL_11;
    }
  }
  return 3221225595LL;
}
