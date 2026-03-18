/*
 * XREFs of ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00803D0
 * Callers:
 *     ulGetFontData @ 0x1C008034C (ulGetFontData.c)
 * Callees:
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C0080AD4 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall ulGetFontData2(struct DCOBJ *a1, unsigned int a2, int a3, unsigned __int8 *a4, unsigned int a5)
{
  int v8; // eax
  __int64 v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  unsigned int TrueTypeTable; // ebx
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+58h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF

  v15 = 0;
  v14 = 0LL;
  v8 = RFONTOBJ::bInit((RFONTOBJ *)&v14, a1, 0, 2u);
  v9 = v14;
  if ( v8 )
    GreAcquireSemaphore(*(_QWORD *)(v14 + 496));
  if ( !v9 )
    goto LABEL_8;
  v10 = *(__int64 **)(v9 + 104);
  if ( !v10 || (v11 = *v10, (v16 = v11) == 0) )
  {
    EngSetLastError(6u);
LABEL_8:
    TrueTypeTable = -1;
    goto LABEL_7;
  }
  TrueTypeTable = PFFOBJ::QueryTrueTypeTable(
                    (PFFOBJ *)&v16,
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
