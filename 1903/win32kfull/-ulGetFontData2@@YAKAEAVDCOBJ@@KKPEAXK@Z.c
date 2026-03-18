/*
 * XREFs of ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C005282C
 * Callers:
 *     ulGetFontData @ 0x1C00527A8 (ulGetFontData.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0052F30 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00676B0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 */

__int64 __fastcall ulGetFontData2(struct DCOBJ *a1, unsigned int a2, int a3, unsigned __int8 *a4, unsigned int a5)
{
  int v8; // eax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned int TrueTypeTable; // ebx
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+58h] [rbp-20h] BYREF

  v14 = 0LL;
  v8 = RFONTOBJ::bInit((RFONTOBJ *)&v14, a1, 0, 2u);
  v9 = v14;
  if ( v8 )
    GreAcquireSemaphore(*(_QWORD *)(v14 + 504));
  if ( !v9 )
    goto LABEL_8;
  v10 = *(__int64 **)(v9 + 120);
  if ( !v10 || (v11 = *v10, (v15[0] = v11) == 0LL) )
  {
    EngSetLastError(6u);
LABEL_8:
    TrueTypeTable = -1;
    goto LABEL_7;
  }
  TrueTypeTable = PFFOBJ::QueryTrueTypeTable(
                    (PFFOBJ *)v15,
                    *(_QWORD *)(v11 + 80),
                    *((_DWORD *)v10 + 2),
                    a2,
                    a3,
                    a5,
                    a4,
                    0LL,
                    0LL);
LABEL_7:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v14);
  return TrueTypeTable;
}
