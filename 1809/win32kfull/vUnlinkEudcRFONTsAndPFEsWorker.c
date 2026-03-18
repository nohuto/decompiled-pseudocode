/*
 * XREFs of vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C027CAC8
 * Callers:
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C027C9B8 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C027C874 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkEudcRFONTsAndPFEsWorker(_QWORD *a1, __int64 a2, struct PFF *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct PFF *result; // rax
  struct PFF *v16; // rdi
  __int64 v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+28h] [rbp-10h]

  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v16 = result;
    if ( !result )
      return result;
    if ( (*((_DWORD *)result + 13) & 8) != 0 )
      goto LABEL_21;
    v6 = *((_QWORD *)result + 9);
    while ( 1 )
    {
      v12 = 0LL;
      if ( !v6 )
        break;
      v7 = *(_DWORD *)(v6 + 840);
      v8 = 1;
      if ( !v7 )
        goto LABEL_10;
      v9 = *(_QWORD *)(v6 + 744);
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + 8 * v12);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 120);
          v8 = 0;
          if ( v11 == *a1 || v11 == a1[1] )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v7 )
          goto LABEL_10;
      }
      vMakeInactiveHelper((__int64 *)(v9 + 8 * v12));
      if ( *(_QWORD *)(*(_QWORD *)(v6 + 120) + 120LL) == a2 )
      {
        v13 = *(_QWORD *)(v6 + 744);
      }
      else
      {
LABEL_10:
        v13 = *(_QWORD *)(v6 + 744);
        if ( !v13 || !v8 )
          goto LABEL_15;
      }
      if ( v13 != v6 + 752 )
        Win32FreePool(v13);
      *(_QWORD *)(v6 + 744) = 0LL;
      *(_DWORD *)(v6 + 840) = 0;
      *(_DWORD *)(v6 + 832) = 0;
      *(_DWORD *)(v6 + 836) = 0;
LABEL_15:
      *(_DWORD *)(v6 + 712) = 0;
      v18 = 0;
      v17 = 0LL;
      v6 = *(_QWORD *)(v6 + 496);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    }
    if ( *((_DWORD *)v16 + 52) )
    {
      do
      {
        v14 = *((_QWORD *)v16 + v12 + 28);
        if ( *(_QWORD *)(v14 + 120) == a2 )
          *(_QWORD *)(v14 + 120) = 0LL;
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *((_DWORD *)v16 + 52) );
    }
LABEL_21:
    a3 = (struct PFF *)*((_QWORD *)v16 + 1);
  }
}
