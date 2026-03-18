/*
 * XREFs of GreGetTextExtentExW @ 0x1C013CF34
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C0083FC0 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C028A030 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00870A4 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0139050 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C013917C (--1ESTROBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetTextExtentExW(
        HDC a1,
        unsigned __int16 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int *a6,
        struct tagSIZE *a7,
        char a8)
{
  int *v8; // r14
  int *v10; // rbx
  unsigned int v12; // r12d
  unsigned int v14; // eax
  __int64 v15; // [rsp+90h] [rbp-80h] BYREF
  int v16; // [rsp+98h] [rbp-78h]
  unsigned int v17; // [rsp+A0h] [rbp-70h]
  _QWORD v18[2]; // [rsp+A8h] [rbp-68h] BYREF
  struct tagSIZE *v19; // [rsp+B8h] [rbp-58h]
  unsigned int *v20[2]; // [rsp+C0h] [rbp-50h] BYREF
  _BYTE v21[320]; // [rsp+D0h] [rbp-40h] BYREF
  char v22; // [rsp+210h] [rbp+100h] BYREF

  v8 = 0LL;
  v10 = a6;
  v17 = a4;
  v12 = 0;
  v19 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      MDCOBJ::MDCOBJ((MDCOBJ *)v18, a1);
      if ( v18[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v20, (struct XDCOBJ *)v18, 516);
        v16 = 0;
        v15 = 0LL;
        if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v15, (struct XDCOBJ *)v18, 0, 2 * (a8 & 1u) + 2) )
          GreAcquireSemaphore(*(_QWORD *)(v15 + 496));
        if ( v15 )
        {
          if ( (*(_DWORD *)(v15 + 68) & 4) != 0 )
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v15, a2, a3);
          if ( !a6 && a5 )
          {
            if ( a3 > 0x28 )
            {
              v8 = (int *)PALLOCMEM2(4 * a3, 1954051143LL, 1);
              if ( !v8 )
                EngSetLastError(8u);
              v10 = v8;
            }
            else
            {
              v10 = (int *)&v22;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v21,
            a2,
            a3,
            (struct XDCOBJ *)v18,
            (struct RFONTOBJ *)&v15,
            v20,
            0LL,
            0,
            *(_DWORD *)(v18[0] + 2148LL),
            *(_DWORD *)(*(_QWORD *)(v18[0] + 80LL) + 160LL),
            *(_DWORD *)(*(_QWORD *)(v18[0] + 80LL) + 168LL),
            *(_DWORD *)(*(_QWORD *)(v18[0] + 80LL) + 172LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v21[232] & 4) != 0
            && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v21, (struct RFONTOBJ *)&v15, 0, v19) )
          {
            if ( a5 && v10 )
            {
              v14 = 0;
              do
              {
                if ( *v10 > v17 )
                  break;
                ++v14;
                ++v10;
              }
              while ( v14 < a3 );
              *a5 = v14;
            }
            v12 = 1;
          }
          if ( v8 )
            Win32FreePool(v8);
          ESTROBJ::~ESTROBJ((ESTROBJ *)v21);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
      }
      else
      {
        EngSetLastError(6u);
      }
      if ( v18[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v18);
      return v12;
    }
    else
    {
      if ( a5 )
        *a5 = 0;
      return 1LL;
    }
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
