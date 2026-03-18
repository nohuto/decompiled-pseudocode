/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011EB20
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011EA1C (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C027C874 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(__int64 a1, int a2, struct PFF *a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 i; // rdx
  __int64 v9; // rcx
  struct PFF *result; // rax
  struct PFF *v11; // rdi
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+28h] [rbp-10h]

  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v11 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v5 = *((_QWORD *)result + 9);
      while ( v5 )
      {
        vMakeInactiveHelper(v5 + 728);
        if ( *(_QWORD *)(v5 + 736) )
          vMakeInactiveHelper(v5 + 736);
        if ( a2 )
        {
          v6 = *(_QWORD *)(v5 + 744);
          if ( v6 )
          {
            v7 = 0LL;
            if ( *(_DWORD *)(v5 + 840) )
            {
              do
              {
                vMakeInactiveHelper(*(_QWORD *)(v5 + 744) + 8 * v7);
                v7 = (unsigned int)(v7 + 1);
              }
              while ( (unsigned int)v7 < *(_DWORD *)(v5 + 840) );
              v6 = *(_QWORD *)(v5 + 744);
            }
            if ( v6 != v5 + 752 )
              Win32FreePool(v6);
            *(_DWORD *)(v5 + 840) = 0;
            *(_QWORD *)(v5 + 744) = 0LL;
            *(_DWORD *)(v5 + 832) = 0;
            *(_DWORD *)(v5 + 836) = 0;
          }
        }
        *(_DWORD *)(v5 + 712) = 0;
        v13 = 0;
        v12 = 0LL;
        v5 = *(_QWORD *)(v5 + 496);
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
      }
      if ( a2 )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v11 + 52); *(_QWORD *)(v9 + 120) = 0LL )
        {
          v9 = *((_QWORD *)v11 + i + 28);
          i = (unsigned int)(i + 1);
        }
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v11 + 1);
  }
  return result;
}
