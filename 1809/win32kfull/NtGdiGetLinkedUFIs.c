/*
 * XREFs of NtGdiGetLinkedUFIs @ 0x1C00C4B20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00C4EB8 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall NtGdiGetLinkedUFIs(HDC a1, void *a2, int a3)
{
  __int64 v3; // r14
  int LinkedFontUFIs; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rsi
  bool v8; // zf
  __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  int v11; // [rsp+28h] [rbp-50h]
  _QWORD v12[6]; // [rsp+30h] [rbp-48h] BYREF

  v3 = a3;
  LinkedFontUFIs = 0;
  v7 = 0LL;
  v8 = a3 == 0;
  if ( a3 > 0 )
  {
    if ( a2 )
    {
      if ( (unsigned int)a3 <= 0x4E2000 )
        v7 = (struct _UNIVERSAL_FONT_ID *)PALLOCMEM2((unsigned int)(8 * a3), 1684629063LL, 0);
      LinkedFontUFIs = (v7 != 0LL) - 1;
      goto LABEL_6;
    }
    v8 = a3 == 0;
  }
  if ( !v8 && !a2 )
  {
    LinkedFontUFIs = -1;
    goto LABEL_28;
  }
  if ( a3 < 0 && a2 )
    LinkedFontUFIs = -1;
LABEL_6:
  if ( LinkedFontUFIs != -1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v12, a1);
    if ( v12[0] )
    {
      v11 = 0;
      v10 = 0LL;
      if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v10, (struct XDCOBJ *)v12, 0, 2u) )
        GreAcquireSemaphore(*(_QWORD *)(v10 + 504));
      if ( v10 )
        LinkedFontUFIs = RFONTOBJ::GetLinkedFontUFIs((RFONTOBJ *)&v10, (struct XDCOBJ *)v12, v7, v3);
      else
        LinkedFontUFIs = -1;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
    }
    else
    {
      LinkedFontUFIs = -1;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    if ( LinkedFontUFIs > 0 && a2 )
    {
      ProbeForWrite(a2, 8 * v3, 4u);
      if ( LinkedFontUFIs < (int)v3 )
        LODWORD(v3) = LinkedFontUFIs;
      memmove(a2, v7, 8LL * (int)v3);
    }
  }
LABEL_28:
  if ( v7 )
    Win32FreePool(v7);
  if ( LinkedFontUFIs == -1 )
    EngSetLastError(8u);
  return (unsigned int)LinkedFontUFIs;
}
