/*
 * XREFs of RFONTOBJ_vConstructPRFONTWrap @ 0x1C00BC990
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00B8770 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall RFONTOBJ_vConstructPRFONTWrap(struct RFONT **this, __int64 a2)
{
  unsigned int v3; // ecx
  int v4; // esi
  struct RFONT **v5; // rbx
  int InactiveHelper; // eax
  struct RFONT *v7; // rcx
  int v8; // r14d
  __int64 v9; // rbp
  struct RFONT *v10[2]; // [rsp+20h] [rbp-A8h] BYREF
  struct RFONT *v11[14]; // [rsp+30h] [rbp-98h] BYREF

  *this = (struct RFONT *)a2;
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 660) )
    {
      v3 = *(_DWORD *)(a2 + 840);
      if ( v3 <= 0xA )
      {
        memset(v11, 0, sizeof(v11));
        v4 = 0;
        v5 = v11;
LABEL_5:
        InactiveHelper = RFONTOBJ::bMakeInactiveHelper(this, v5);
        v7 = *v5;
        v8 = InactiveHelper;
        if ( *v5 )
        {
          v9 = 0LL;
          do
          {
            v10[0] = v7;
            RFONTOBJ::bMakeInactiveHelper(v10, 0LL);
            v10[0] = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)v10);
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
      v5 = (struct RFONT **)PALLOCMEM2(8 * v3 + 32, 1718382187LL, 1);
      if ( v5 )
      {
        v4 = 1;
        goto LABEL_5;
      }
    }
LABEL_10:
    *this = 0LL;
  }
}
