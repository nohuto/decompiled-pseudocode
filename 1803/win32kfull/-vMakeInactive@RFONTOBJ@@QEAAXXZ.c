/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0197244
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02775D8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0086C60 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  struct RFONT *v10; // [rsp+20h] [rbp-98h] BYREF
  int v11; // [rsp+28h] [rbp-90h]
  _BYTE v12[112]; // [rsp+30h] [rbp-88h] BYREF

  v1 = *this;
  if ( *this && *((_DWORD *)v1 + 161) )
  {
    v3 = *((_DWORD *)v1 + 206);
    if ( v3 <= 0xA )
    {
      memset(v12, 0, sizeof(v12));
      v5 = 0;
      v4 = (struct RFONT **)v12;
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
        v11 = 0;
        v10 = v7;
        RFONTOBJ::bMakeInactiveHelper(&v10, 0LL);
        v10 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
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
