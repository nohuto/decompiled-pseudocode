/*
 * XREFs of GreCreateRectRgn @ 0x1C0004F50
 * Callers:
 *     EngCreateRectRgn @ 0x1C0107060 (EngCreateRectRgn.c)
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 * Callees:
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x1C001D720 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C001EE44 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C001F078 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C001F830 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJ@@QEAA@XZ @ 0x1C00240D0 (--1RGNMEMOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJ@@QEAA@HH@Z @ 0x1C0025400 (--0RGNMEMOBJ@@QEAA@HH@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C006B0A4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C00AA28C (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C00F5DF8 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

struct HOBJ__ *__fastcall GreCreateRectRgn(LONG a1, LONG a2, LONG a3, LONG a4)
{
  struct HOBJ__ *v4; // rbx
  struct _RECTL v6; // [rsp+30h] [rbp-50h] BYREF
  struct OBJECT *v7[2]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v8[48]; // [rsp+50h] [rbp-30h] BYREF

  v6.left = a1;
  v6.top = a2;
  v6.right = a3;
  v6.bottom = a4;
  if ( (((a1 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a4 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a3 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0
    || (((a2 & 0xF8000000) + 0x8000000) & 0xF7FFFFFF) != 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  else
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v7, 0, 1);
    v4 = v7[0];
    if ( v7[0] )
    {
      ERECTL::vOrder((ERECTL *)&v6);
      RGNOBJ::vSet((RGNOBJ *)v7, &v6);
      *((_DWORD *)v4 + 9) = GrepIsPreviousModeKernel();
      HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v8);
      v4 = HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v8, v4, 0, 1, 4u);
      if ( !v4 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v7);
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v8);
    }
    else
    {
      EngSetLastError(8u);
    }
    RGNMEMOBJ::~RGNMEMOBJ((RGNMEMOBJ *)v7);
  }
  return v4;
}
