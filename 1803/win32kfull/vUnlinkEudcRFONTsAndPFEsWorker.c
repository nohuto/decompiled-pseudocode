/*
 * XREFs of vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C0268BC4
 * Callers:
 *     vUnlinkEudcRFONTsAndPFEs @ 0x1C0268AC0 (vUnlinkEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C026891C (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkEudcRFONTsAndPFEsWorker(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbx
  unsigned int v7; // edx
  int v8; // esi
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-18h] BYREF
  int v16; // [rsp+28h] [rbp-10h]

  if ( !a3 )
    return;
  v3 = a3;
  do
  {
    if ( (*(_DWORD *)(v3 + 52) & 8) != 0 )
      goto LABEL_22;
    v6 = *(_QWORD *)(v3 + 72);
    while ( 1 )
    {
      v12 = 0LL;
      if ( !v6 )
        break;
      v7 = *(_DWORD *)(v6 + 824);
      v8 = 1;
      if ( !v7 )
        goto LABEL_11;
      v9 = *(_QWORD *)(v6 + 728);
      while ( 1 )
      {
        v10 = *(_QWORD *)(v9 + 8 * v12);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 104);
          v8 = 0;
          if ( v11 == *a1 || v11 == a1[1] )
            break;
        }
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v7 )
          goto LABEL_11;
      }
      vMakeInactiveHelper((struct RFONT **)(v9 + 8 * v12));
      if ( *(_QWORD *)(*(_QWORD *)(v6 + 104) + 120LL) == a2 )
      {
        v13 = *(_QWORD *)(v6 + 728);
      }
      else
      {
LABEL_11:
        v13 = *(_QWORD *)(v6 + 728);
        if ( !v13 || !v8 )
          goto LABEL_16;
      }
      if ( v13 != v6 + 736 )
        Win32FreePool(v13);
      *(_QWORD *)(v6 + 728) = 0LL;
      *(_DWORD *)(v6 + 824) = 0;
      *(_DWORD *)(v6 + 816) = 0;
      *(_DWORD *)(v6 + 820) = 0;
LABEL_16:
      *(_DWORD *)(v6 + 696) = 0;
      v16 = 0;
      v15 = 0LL;
      v6 = *(_QWORD *)(v6 + 488);
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v15);
    }
    if ( *(_DWORD *)(v3 + 208) )
    {
      do
      {
        v14 = *(_QWORD *)(v3 + 8 * v12 + 224);
        if ( *(_QWORD *)(v14 + 120) == a2 )
          *(_QWORD *)(v14 + 120) = 0LL;
        v12 = (unsigned int)(v12 + 1);
      }
      while ( (unsigned int)v12 < *(_DWORD *)(v3 + 208) );
    }
LABEL_22:
    v3 = *(_QWORD *)(v3 + 8);
  }
  while ( v3 );
}
