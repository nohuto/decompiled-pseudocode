/*
 * XREFs of ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00816A8
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C0081680 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028AB48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0057D8C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0081840 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C015F19C (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01B8390 (--1SEMOBJ@@QEAA@XZ.c)
 *     ??0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C02519C4 (--0SEMOBJ@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 */

void __fastcall RFONTOBJ::vMakeInactive(RFONTOBJ *this)
{
  const struct SEMOBJSHARED *v2; // rdx
  bool v3; // bl
  unsigned int v4; // ecx
  struct RFONT **v5; // rbx
  int v6; // esi
  int InactiveHelper; // eax
  struct RFONT *v8; // rcx
  int v9; // ebp
  __int64 v10; // rdi
  struct RFONT *v11; // [rsp+20h] [rbp-98h] BYREF
  int v12; // [rsp+28h] [rbp-90h]
  _BYTE v13[112]; // [rsp+30h] [rbp-88h] BYREF

  if ( RFONTOBJ::bValid(this) )
  {
    SEMOBJ::SEMOBJ((SEMOBJ *)&v11, ghsemRFONTList);
    v3 = RFONTOBJ::bActive(this, v2);
    SEMOBJ::~SEMOBJ((SEMOBJ *)&v11);
    if ( v3 )
    {
      v4 = *(_DWORD *)(*(_QWORD *)this + 840LL);
      if ( v4 <= 0xA )
      {
        memset(v13, 0, sizeof(v13));
        v6 = 0;
        v5 = (struct RFONT **)v13;
      }
      else
      {
        v5 = (struct RFONT **)PALLOCMEM2(8 * v4 + 32, 1718382187LL, 1);
        if ( !v5 )
          return;
        v6 = 1;
      }
      InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v5);
      v8 = *v5;
      v9 = InactiveHelper;
      if ( *v5 )
      {
        v10 = 0LL;
        do
        {
          v12 = 0;
          v11 = v8;
          RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v11, 0LL);
          v11 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
          v8 = v5[++v10];
        }
        while ( v8 );
      }
      if ( v6 )
        Win32FreePool(v5);
      if ( v9 )
      {
        GreAcquireSemaphore(ghsemEUDC1);
        --gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
      }
    }
  }
}
