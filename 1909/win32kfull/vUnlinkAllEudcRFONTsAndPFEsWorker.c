/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C0102EEC
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C0102DE8 (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C02925F8 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 i; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    v3 = a3;
    do
    {
      if ( (*(_DWORD *)(v3 + 52) & 8) == 0 )
      {
        v5 = *(_QWORD *)(v3 + 72);
        if ( v5 )
        {
          v10 = 0LL;
          do
          {
            vMakeInactiveHelper(v5 + 728);
            if ( *(_QWORD *)(v5 + 736) )
              vMakeInactiveHelper(v5 + 736);
            if ( a2 )
            {
              v8 = *(_QWORD *)(v5 + 744);
              if ( v8 )
              {
                v9 = 0LL;
                if ( *(_DWORD *)(v5 + 840) )
                {
                  do
                  {
                    vMakeInactiveHelper(*(_QWORD *)(v5 + 744) + 8 * v9);
                    v9 = (unsigned int)(v9 + 1);
                  }
                  while ( (unsigned int)v9 < *(_DWORD *)(v5 + 840) );
                  v8 = *(_QWORD *)(v5 + 744);
                }
                if ( v8 != v5 + 752 )
                  Win32FreePool(v8);
                *(_DWORD *)(v5 + 840) = 0;
                *(_QWORD *)(v5 + 744) = 0LL;
                *(_DWORD *)(v5 + 832) = 0;
                *(_DWORD *)(v5 + 836) = 0;
              }
            }
            *(_DWORD *)(v5 + 712) = 0;
            v5 = *(_QWORD *)(v5 + 496);
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
          }
          while ( v5 );
        }
        if ( a2 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 208); *(_QWORD *)(v7 + 120) = 0LL )
          {
            v7 = *(_QWORD *)(v3 + 8 * i + 216);
            i = (unsigned int)(i + 1);
          }
        }
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( v3 );
  }
}
