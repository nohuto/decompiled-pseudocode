/*
 * XREFs of GreGetTextExtentExW @ 0x1C01626E4
 * Callers:
 *     NtGdiGetTextExtentExW @ 0x1C005F940 (NtGdiGetTextExtentExW.c)
 *     GreGetCharacterPlacementW @ 0x1C029DD44 (GreGetCharacterPlacementW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C005B6A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C007D5D8 (-vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C016014C (--1ESTROBJ@@QEAA@XZ.c)
 *     ?bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z @ 0x1C0162998 (-bTextExtent@ESTROBJ@@QEAAHAEAVRFONTOBJ@@JPEAUtagSIZE@@@Z.c)
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
  struct tagSIZE *v18; // [rsp+A8h] [rbp-68h]
  _QWORD v19[2]; // [rsp+B0h] [rbp-60h] BYREF
  char v20[32]; // [rsp+C0h] [rbp-50h] BYREF
  int *v21[2]; // [rsp+E0h] [rbp-30h] BYREF
  _BYTE v22[320]; // [rsp+F0h] [rbp-20h] BYREF
  char v23; // [rsp+230h] [rbp+120h] BYREF

  v8 = 0LL;
  v10 = a6;
  v17 = a4;
  v12 = 0;
  v18 = a7;
  if ( (a2 || !a3) && a7 )
  {
    if ( a3 )
    {
      DCOBJ::DCOBJ((DCOBJ *)v19, a1);
      if ( v19[0] )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v21, (struct XDCOBJ *)v19, 516);
        v16 = 0;
        v15 = 0LL;
        if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v15, (struct XDCOBJ *)v19, 0, 2 * (a8 & 1u) + 2) )
          GreAcquireSemaphore(*(_QWORD *)(v15 + 504));
        if ( v15 )
        {
          if ( (*(_DWORD *)(v15 + 84) & 4) != 0 )
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
              v10 = (int *)&v23;
            }
          }
          ESTROBJ::vInit(
            (ESTROBJ *)v22,
            a2,
            a3,
            (struct XDCOBJ *)v19,
            (struct RFONTOBJ *)&v15,
            v21,
            0LL,
            0,
            *(_DWORD *)(v19[0] + 1764LL),
            *(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 280LL),
            *(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 284LL),
            *(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 288LL),
            0,
            0,
            0,
            v10,
            0LL,
            0);
          if ( (v22[232] & 4) != 0
            && (unsigned int)ESTROBJ::bTextExtent((ESTROBJ *)v22, (struct RFONTOBJ *)&v15, 0, v18) )
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
          ESTROBJ::~ESTROBJ((ESTROBJ *)v22);
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
      }
      else
      {
        EngSetLastError(6u);
      }
      MDCOBJ::~MDCOBJ((MDCOBJ *)v19);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v20);
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
