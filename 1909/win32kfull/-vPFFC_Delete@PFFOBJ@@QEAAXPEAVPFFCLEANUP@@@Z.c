/*
 * XREFs of ?vPFFC_Delete@PFFOBJ@@QEAAXPEAVPFFCLEANUP@@@Z @ 0x1C011FE78
 * Callers:
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C009674C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     bKillPFFOBJ @ 0x1C011FE4C (bKillPFFOBJ.c)
 *     ?vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ @ 0x1C02B3F10 (-vPFFC_DeleteAndCleanup@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vDelete@PFEOBJ@@QEAAXXZ @ 0x1C011FFF0 (-vDelete@PFEOBJ@@QEAAXXZ.c)
 *     FreeFileView @ 0x1C01200F4 (FreeFileView.c)
 */

void __fastcall PFFOBJ::vPFFC_Delete(PFFOBJ *this, struct PFFCLEANUP *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  __int64 i; // rbp
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)this + 216LL); (unsigned int)v3 < *(_DWORD *)(v2 + 208); v3 = (unsigned int)(v3 + 1) )
  {
    v17 = *(_QWORD *)(v2 + 8 * v3 + 216);
    if ( v17 )
    {
      PFEOBJ::vDelete((PFEOBJ *)&v17);
      v2 = *(_QWORD *)this;
    }
  }
  *((_QWORD *)a2 + 1) = *(_QWORD *)(v2 + 80);
  *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)this + 88LL);
  *((_QWORD *)a2 + 2) = *(_QWORD *)(*(_QWORD *)this + 152LL);
  v7 = *(_QWORD *)this;
  v8 = *(_QWORD *)(*(_QWORD *)this + 152LL);
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 200);
    v11 = *(_QWORD *)this;
    if ( v10 )
    {
      v12 = *(_QWORD *)(v7 + 24);
      if ( v12 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v10 + 80LL) == v12 )
        {
          v13 = 0LL;
          if ( *(_DWORD *)(v8 + 36) )
          {
            do
            {
              v14 = *(_QWORD *)(*(_QWORD *)this + 152LL);
              v15 = *(_QWORD *)(*(_QWORD *)(v14 + 200) + 8 * v13);
              v16 = v14
                  + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 200LL) + 8 * v13) + 80LL)
                  - *(_QWORD *)this;
              v13 = (unsigned int)(v13 + 1);
              *(_QWORD *)(v15 + 80) = v16;
              v11 = *(_QWORD *)this;
            }
            while ( (unsigned int)v13 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 152LL) + 36LL) );
          }
        }
      }
    }
    *(_QWORD *)(*(_QWORD *)(v11 + 152) + 152LL) = 0LL;
  }
  else
  {
    if ( *(_QWORD *)(v7 + 200) && *(_DWORD *)(v7 + 36) )
    {
      FreeFileView();
      v7 = *(_QWORD *)this;
    }
    v9 = *(_QWORD *)(v7 + 192);
    if ( v9 )
      Win32FreePool(v9);
  }
  if ( i )
    Win32FreePool(i);
  Win32FreePool(*(_QWORD *)this);
  *(_QWORD *)this = 0LL;
}
