/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00FF654
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00FF55C (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C026891C (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 i; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  if ( a3 )
  {
    v3 = a3;
    do
    {
      if ( (*(_DWORD *)(v3 + 52) & 8) == 0 )
      {
        v5 = *(_QWORD *)(v3 + 72);
        while ( v5 )
        {
          vMakeInactiveHelper(v5 + 712);
          if ( *(_QWORD *)(v5 + 720) )
            vMakeInactiveHelper(v5 + 720);
          if ( a2 )
          {
            v8 = *(_QWORD *)(v5 + 728);
            if ( v8 )
            {
              v9 = 0LL;
              if ( *(_DWORD *)(v5 + 824) )
              {
                do
                {
                  vMakeInactiveHelper(*(_QWORD *)(v5 + 728) + 8 * v9);
                  v9 = (unsigned int)(v9 + 1);
                }
                while ( (unsigned int)v9 < *(_DWORD *)(v5 + 824) );
                v8 = *(_QWORD *)(v5 + 728);
              }
              if ( v8 != v5 + 736 )
                Win32FreePool(v8);
              *(_DWORD *)(v5 + 824) = 0;
              *(_QWORD *)(v5 + 728) = 0LL;
              *(_DWORD *)(v5 + 816) = 0;
              *(_DWORD *)(v5 + 820) = 0;
            }
          }
          *(_DWORD *)(v5 + 696) = 0;
          v11 = 0;
          v10 = 0LL;
          v5 = *(_QWORD *)(v5 + 488);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
        }
        if ( a2 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 208); *(_QWORD *)(v7 + 120) = 0LL )
          {
            v7 = *(_QWORD *)(v3 + 8 * i + 224);
            i = (unsigned int)(i + 1);
          }
        }
      }
      v3 = *(_QWORD *)(v3 + 8);
    }
    while ( v3 );
  }
}
