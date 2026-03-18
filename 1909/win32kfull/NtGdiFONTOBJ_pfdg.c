/*
 * XREFs of NtGdiFONTOBJ_pfdg @ 0x1C02AD030
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00952BC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009E21C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C009E3F4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C009E55C (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C011EED0 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 */

struct _FD_GLYPHSET *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1, __int64 a2, __int64 a3)
{
  struct _FD_GLYPHSET *v4; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  struct _FD_GLYPHSET *v10; // rsi
  unsigned int v11; // ebp
  struct _FD_GLYPHSET *v12; // rax
  unsigned __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v8 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v9 = v8;
    if ( v8 )
    {
      v4 = (struct _FD_GLYPHSET *)*((_QWORD *)v7 + 41);
      if ( !v4 )
      {
        v14 = v8;
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v14, v7, 0, 0, 0LL);
        v10 = *(struct _FD_GLYPHSET **)(v9 + 472);
        if ( v10 )
        {
          if ( v10 < MmSystemRangeStart )
          {
            v4 = v10;
            *((_QWORD *)v7 + 41) = v10;
          }
          else
          {
            v11 = 4 * (v10->cGlyphsSupported + 4 * (v10->cRuns + 1));
            if ( v11 )
            {
              v12 = (struct _FD_GLYPHSET *)UMPDOBJ::_AllocUserMem(v7, v11, 0);
              v4 = v12;
              if ( v12 )
              {
                if ( (unsigned int)WriteFD_GLYPHSET(v12, v10, v11) )
                  *((_QWORD *)v7 + 41) = v4;
                else
                  v4 = 0LL;
              }
            }
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v14, v7, 0LL, 0LL, 0LL);
        v14 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
      }
    }
    if ( v7 )
      --*((_DWORD *)v7 + 105);
  }
  return v4;
}
