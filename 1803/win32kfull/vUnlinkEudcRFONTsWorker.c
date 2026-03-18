/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x1C0268D28
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x1C02689D4 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C026891C (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkEudcRFONTsWorker(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 i; // rsi
  struct RFONT **v6; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  if ( a2 )
  {
    v2 = a2;
    do
    {
      if ( (*(_DWORD *)(v2 + 52) & 8) == 0 )
      {
        v4 = *(_QWORD *)(v2 + 72);
        while ( v4 )
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 824); i = (unsigned int)(i + 1) )
          {
            v6 = (struct RFONT **)(*(_QWORD *)(v4 + 728) + 8 * i);
            if ( *v6 )
            {
              v7 = *((_QWORD *)*v6 + 13);
              if ( v7 == *a1 || v7 == a1[1] )
                vMakeInactiveHelper(v6);
            }
          }
          *(_DWORD *)(v4 + 696) = 0;
          v9 = 0;
          v8 = 0LL;
          v4 = *(_QWORD *)(v4 + 488);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
        }
      }
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v2 );
  }
}
