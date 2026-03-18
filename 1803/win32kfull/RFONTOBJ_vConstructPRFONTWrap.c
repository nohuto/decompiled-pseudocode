/*
 * XREFs of RFONTOBJ_vConstructPRFONTWrap @ 0x1C00832B0
 * Callers:
 *     <none>
 * Callees:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0086C60 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall RFONTOBJ_vConstructPRFONTWrap(RFONTOBJ *this, __int64 a2)
{
  unsigned int v3; // ecx
  int v4; // esi
  struct RFONT **v5; // rbx
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // r14d
  __int64 v9; // rbp
  struct RFONT *v10; // [rsp+20h] [rbp-A8h] BYREF
  int v11; // [rsp+28h] [rbp-A0h]
  struct RFONT *v12[14]; // [rsp+30h] [rbp-98h] BYREF

  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 644) )
    {
      v3 = *(_DWORD *)(a2 + 824);
      if ( v3 <= 0xA )
      {
        memset(v12, 0, sizeof(v12));
        v4 = 0;
        v5 = v12;
LABEL_5:
        InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v5);
        v7 = *v5;
        v8 = InactiveHelper;
        if ( *v5 )
        {
          v9 = 0LL;
          do
          {
            v11 = 0;
            v10 = v7;
            RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v10, 0LL);
            v10 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
            v7 = v5[++v9];
          }
          while ( v7 );
        }
        if ( v4 )
          Win32FreePool(v5);
        if ( v8 )
        {
          GreAcquireSemaphore(ghsemEUDC1);
          --gcEUDCCount;
          EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
          GreReleaseSemaphoreInternal(ghsemEUDC1);
        }
        goto LABEL_10;
      }
      v5 = (struct RFONT **)PALLOCMEM2(8 * v3 + 32);
      if ( v5 )
      {
        v4 = 1;
        goto LABEL_5;
      }
    }
LABEL_10:
    *(_QWORD *)this = 0LL;
  }
}
