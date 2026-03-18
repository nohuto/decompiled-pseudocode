/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x1C027CC38
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x1C027C8C0 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C027C874 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkEudcRFONTsWorker(_QWORD *a1, struct PFF *a2)
{
  __int64 v4; // rbx
  __int64 i; // rsi
  __int64 *v6; // rcx
  __int64 v7; // rax
  struct PFF *result; // rax
  struct PFF *v9; // rdi
  __int64 v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  while ( 1 )
  {
    result = SkipInvalidPff(a2);
    v9 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v4 = *((_QWORD *)result + 9);
      while ( v4 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 840); i = (unsigned int)(i + 1) )
        {
          v6 = (__int64 *)(*(_QWORD *)(v4 + 744) + 8 * i);
          if ( *v6 )
          {
            v7 = *(_QWORD *)(*v6 + 120);
            if ( v7 == *a1 || v7 == a1[1] )
              vMakeInactiveHelper(v6);
          }
        }
        *(_DWORD *)(v4 + 712) = 0;
        v11 = 0;
        v10 = 0LL;
        v4 = *(_QWORD *)(v4 + 496);
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v10);
      }
    }
    a2 = (struct PFF *)*((_QWORD *)v9 + 1);
  }
  return result;
}
