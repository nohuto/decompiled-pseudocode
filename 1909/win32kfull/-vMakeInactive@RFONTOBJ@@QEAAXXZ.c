/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C02A16B8
 * Callers:
 *     GreGetGlyphOutlineInternal @ 0x1C009B008 (GreGetGlyphOutlineInternal.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C013E618 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A05A4 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00B8770 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(struct RFONT **this)
{
  struct RFONT *v1; // rax
  unsigned int v3; // ecx
  struct RFONT **v4; // rbx
  int v5; // edi
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // ebp
  __int64 v9; // rsi
  struct RFONT *v10[2]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v11[112]; // [rsp+30h] [rbp-88h] BYREF

  v1 = *this;
  if ( *this && *((_DWORD *)v1 + 165) )
  {
    v3 = *((_DWORD *)v1 + 210);
    if ( v3 <= 0xA )
    {
      memset(v11, 0, sizeof(v11));
      v5 = 0;
      v4 = (struct RFONT **)v11;
    }
    else
    {
      v4 = (struct RFONT **)PALLOCMEM2(8 * v3 + 32, 1718382187LL, 1);
      if ( !v4 )
        return;
      v5 = 1;
    }
    InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v4);
    v7 = *v4;
    v8 = InactiveHelper;
    if ( *v4 )
    {
      v9 = 0LL;
      do
      {
        v10[0] = v7;
        RFONTOBJ::bMakeInactiveHelper(v10, 0LL);
        v10[0] = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v10);
        v7 = v4[++v9];
      }
      while ( v7 );
    }
    if ( v5 )
      Win32FreePool(v4);
    if ( v8 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
}
