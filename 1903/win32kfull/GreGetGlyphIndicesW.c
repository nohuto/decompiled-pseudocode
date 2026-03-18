/*
 * XREFs of GreGetGlyphIndicesW @ 0x1C011B238
 * Callers:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C011B050 (NtGdiGetGlyphIndicesWInternal.c)
 *     GreGetCharacterPlacementW @ 0x1C02B4894 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1C0053880 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     PALLOCMEM2 @ 0x1C0075884 (PALLOCMEM2.c)
 */

__int64 __fastcall GreGetGlyphIndicesW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5,
        int a6)
{
  unsigned __int64 v7; // rdi
  _WORD *v8; // r14
  unsigned int v9; // esi
  unsigned __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int16 v14; // r13
  unsigned int *v15; // rax
  unsigned int *v16; // r15
  int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  __int16 v22; // cx
  unsigned int *v23; // [rsp+30h] [rbp-58h]
  _QWORD v24[10]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+20h] BYREF

  v7 = 0LL;
  v8 = a4;
  v24[1] = 0LL;
  v9 = -1;
  v10 = (unsigned __int64)&a4[a3];
  XDCOBJ::vLock((XDCOBJ *)v24, a1);
  if ( v24[0] )
  {
    v26 = 0LL;
    v11 = RFONTOBJ::bInit((RFONTOBJ *)&v26, (struct XDCOBJ *)v24, 0, 2u);
    v12 = v26;
    if ( v11 )
      GreAcquireSemaphore(*(_QWORD *)(v26 + 504));
    if ( v12 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(v12 + 120) + 32LL);
      v14 = *(unsigned __int8 *)(v13 + 108);
      if ( a3 )
      {
        v15 = (unsigned int *)PALLOCMEM2(4 * a3, 2037147463LL, 1);
        v23 = v15;
        v16 = v15;
        if ( v15 )
        {
          RFONTOBJ::vXlatGlyphArray((RFONTOBJ *)&v26, a2, a3, v15, a5, a6);
          v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 120) + 16LL) + 4LL);
          if ( (v17 & 6) != 0 )
          {
            if ( (v17 & 2) != 0 && v14 )
            {
              v20 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v20 = 0LL;
              if ( v20 )
              {
                v21 = a5;
                do
                {
                  v22 = *(_WORD *)v16;
                  if ( *(_WORD *)v16 != 0xFFFF || v21 != 1 )
                    v22 += v14;
                  *v8 = v22;
                  ++v16;
                  ++v8;
                  ++v7;
                }
                while ( v7 < v20 );
              }
            }
            else
            {
              v18 = (v10 - (unsigned __int64)v8 + 1) >> 1;
              if ( (unsigned __int64)v8 > v10 )
                v18 = 0LL;
              if ( v18 )
              {
                do
                {
                  ++v7;
                  *v8++ = *(_WORD *)v16++;
                }
                while ( v7 < v18 );
              }
            }
            v9 = a3;
          }
          Win32FreePool(v23);
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
    XDCOBJ::vUnlockFast((XDCOBJ *)v24);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
  }
  return v9;
}
