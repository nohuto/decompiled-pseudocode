/*
 * XREFs of NtGdiFONTOBJ_pfdg @ 0x1C0284CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00DEC38 (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C011FA80 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C01202A0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 */

void *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1, __int64 a2)
{
  void *v3; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  struct _FD_GLYPHSET *v9; // rsi
  unsigned int v10; // ebp
  char *v11; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  int v14; // [rsp+38h] [rbp-10h]

  v3 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v7 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v8 = v7;
    if ( v7 )
    {
      v3 = (void *)*((_QWORD *)v6 + 41);
      if ( !v3 )
      {
        v14 = 0;
        v13 = v7;
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v13, v6, 0, 0, 0LL);
        v9 = *(struct _FD_GLYPHSET **)(v8 + 464);
        if ( v9 )
        {
          if ( v9 < MmSystemRangeStart )
          {
            v3 = v9;
            *((_QWORD *)v6 + 41) = v9;
          }
          else
          {
            v10 = 4 * (v9->cGlyphsSupported + 4 * (v9->cRuns + 1));
            if ( v10 )
            {
              v11 = UMPDOBJ::_AllocUserMem(v6, v10, 0);
              v3 = v11;
              if ( v11 )
              {
                if ( (unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v11, v9, v10) )
                  *((_QWORD *)v6 + 41) = v3;
                else
                  v3 = 0LL;
              }
            }
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v13, v6, 0LL, 0LL, 0LL);
        v13 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v13);
      }
    }
    if ( v6 )
      --*((_DWORD *)v6 + 105);
  }
  return v3;
}
