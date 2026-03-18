/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C00F8CAC
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C00F8AD0 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C028A030 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0088720 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 */

__int64 __fastcall GreGetGlyphIndicesW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6)
{
  unsigned __int64 v7; // rbx
  _WORD *v8; // rsi
  unsigned int v9; // edi
  unsigned __int64 v10; // r13
  int v11; // eax
  __int64 v12; // r15
  __int64 v13; // rcx
  unsigned int *v14; // rax
  unsigned int *v15; // r14
  int v16; // eax
  unsigned __int64 v17; // rcx
  unsigned __int64 v19; // rax
  __int16 v20; // cx
  _QWORD v21[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  int v23; // [rsp+48h] [rbp-8h]
  __int16 v25; // [rsp+A0h] [rbp+50h]
  unsigned int *v26; // [rsp+A8h] [rbp+58h]

  v7 = 0LL;
  v8 = a4;
  v21[1] = 0LL;
  v9 = -1;
  v10 = (unsigned __int64)&a4[a3];
  XDCOBJ::vLock((XDCOBJ *)v21, a1);
  if ( v21[0] )
  {
    v23 = 0;
    v22 = 0LL;
    v11 = RFONTOBJ::bInit((RFONTOBJ *)&v22, (struct XDCOBJ *)v21, 0, 2u);
    v12 = v22;
    if ( v11 )
      GreAcquireSemaphore(*(_QWORD *)(v22 + 496));
    if ( v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 104) + 32LL);
      v25 = *(unsigned __int8 *)(v13 + 108);
      if ( a3 )
      {
        v14 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463LL, 1);
        v26 = v14;
        v15 = v14;
        if ( v14 )
        {
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v22, a2, a3, v14, a5, a6);
          v16 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 104) + 16LL) + 4LL);
          if ( (v16 & 6) != 0 )
          {
            if ( (v16 & 2) != 0 && v25 )
            {
              v19 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v19 = 0LL;
              if ( v19 )
              {
                do
                {
                  v20 = *(_WORD *)v15;
                  if ( *(_WORD *)v15 != 0xFFFF || a5 != 1 )
                    v20 += v25;
                  *v8 = v20;
                  ++v15;
                  ++v8;
                  ++v7;
                }
                while ( v7 < v19 );
              }
            }
            else
            {
              v17 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v17 = 0LL;
              if ( v17 )
              {
                do
                {
                  ++v7;
                  *v8++ = *(_WORD *)v15++;
                }
                while ( v7 < v17 );
              }
            }
            v9 = a3;
          }
          Win32FreePool(v26);
        }
      }
      else if ( *(_DWORD *)(v13 + 4) <= 8u )
      {
        v9 = 0;
      }
      else
      {
        v9 = *(_DWORD *)(v13 + 200);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v21);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
  }
  return v9;
}
