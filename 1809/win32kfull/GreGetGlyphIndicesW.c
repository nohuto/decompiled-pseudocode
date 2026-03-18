/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C0115198
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C0114FB0 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C029DD44 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0084210 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetGlyphIndicesW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6)
{
  _WORD *v7; // rsi
  unsigned int v8; // edi
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int16 v14; // r13
  unsigned int *v15; // rax
  unsigned int *v16; // r14
  int v17; // eax
  unsigned __int64 v18; // rax
  __int16 v19; // cx
  unsigned __int64 v20; // rcx
  __int64 v22; // [rsp+30h] [rbp-78h] BYREF
  int v23; // [rsp+38h] [rbp-70h]
  _QWORD v24[13]; // [rsp+40h] [rbp-68h] BYREF
  unsigned int *v26; // [rsp+C8h] [rbp+20h]

  v7 = a4;
  v8 = -1;
  v9 = (unsigned __int64)&a4[a3];
  DCOBJ::DCOBJ((DCOBJ *)v24, a1);
  v10 = 0LL;
  if ( v24[0] )
  {
    v23 = 0;
    v22 = 0LL;
    v11 = RFONTOBJ::bInit((RFONTOBJ *)&v22, (struct XDCOBJ *)v24, 0, 2u);
    v12 = v22;
    if ( v11 )
      GreAcquireSemaphore(*(_QWORD *)(v22 + 504));
    if ( v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 120) + 32LL);
      v14 = *(unsigned __int8 *)(v13 + 108);
      if ( a3 )
      {
        v15 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463LL, 1);
        v26 = v15;
        v16 = v15;
        if ( v15 )
        {
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v22, a2, a3, v15, a5, a6);
          v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 120) + 16LL) + 4LL);
          if ( (v17 & 6) != 0 )
          {
            if ( (v17 & 2) != 0 && v14 )
            {
              v18 = (v9 - (unsigned __int64)v7 + 1) >> 1;
              if ( (unsigned __int64)v7 > v9 )
                v18 = 0LL;
              if ( v18 )
              {
                do
                {
                  v19 = *(_WORD *)v16;
                  if ( *(_WORD *)v16 != 0xFFFF || a5 != 1 )
                    v19 += v14;
                  *v7 = v19;
                  ++v16;
                  ++v7;
                  ++v10;
                }
                while ( v10 < v18 );
              }
            }
            else
            {
              v20 = (v9 - (unsigned __int64)v7 + 1) >> 1;
              if ( (unsigned __int64)v7 > v9 )
                v20 = 0LL;
              if ( v20 )
              {
                do
                {
                  ++v10;
                  *v7++ = *(_WORD *)v16++;
                }
                while ( v10 < v20 );
              }
            }
            v8 = a3;
          }
          Win32FreePool(v26);
        }
      }
      else if ( *(_DWORD *)(v13 + 4) <= 8u )
      {
        v8 = 0;
      }
      else
      {
        v8 = *(_DWORD *)(v13 + 200);
      }
    }
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v24);
  return v8;
}
