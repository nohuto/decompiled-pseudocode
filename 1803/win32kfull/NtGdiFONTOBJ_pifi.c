/*
 * XREFs of NtGdiFONTOBJ_pifi @ 0x1C011E850
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000476C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z @ 0x1C007777C (--0RFONTTMPOBJ@@QEAA@PEAVRFONT@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C011FA80 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C01202A0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     FONTOBJ_pifi @ 0x1C0120590 (FONTOBJ_pifi.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 */

IFIMETRICS *__fastcall NtGdiFONTOBJ_pifi(__int64 a1, __int64 a2)
{
  IFIMETRICS *v3; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  struct RFONT *v7; // rax
  FONTOBJ *v8; // rsi
  IFIMETRICS *v9; // rsi
  char *v10; // rax
  IFIMETRICS *result; // rax
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v7 = (struct RFONT *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>(ThreadCurrentObj, a1);
  v8 = (FONTOBJ *)v7;
  if ( v7 )
  {
    v3 = (IFIMETRICS *)*((_QWORD *)v6 + 40);
    if ( !v3 )
    {
      RFONTTMPOBJ::RFONTTMPOBJ((RFONTTMPOBJ *)v12, v7);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)v12, v6, 0, 0, 0LL);
      v3 = FONTOBJ_pifi(v8);
      if ( v3 && v3 >= MmSystemRangeStart )
      {
        v9 = v3;
        v10 = UMPDOBJ::_AllocUserMem(v6, v3->cjThis, 0);
        v3 = (IFIMETRICS *)v10;
        if ( v10 )
        {
          memmove(v10, v9, v9->cjThis);
          *((_QWORD *)v6 + 40) = v3;
        }
      }
      UMPDReleaseRFONTSem((struct RFONTOBJ *)v12, v6, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v12);
    }
  }
  result = v3;
  --*((_DWORD *)v6 + 105);
  return result;
}
