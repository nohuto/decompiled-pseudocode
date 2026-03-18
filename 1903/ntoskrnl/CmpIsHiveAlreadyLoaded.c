/*
 * XREFs of CmpIsHiveAlreadyLoaded @ 0x14082A9C4
 * Callers:
 *     CmpResolveHiveLoadConflict @ 0x14082AB24 (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpIsThisSameFile @ 0x140637F64 (CmpIsThisSameFile.c)
 *     CmpConstructNameWithStatus @ 0x140655750 (CmpConstructNameWithStatus.c)
 *     CmpGetNextActiveHive @ 0x140661E60 (CmpGetNextActiveHive.c)
 *     CmpUnfreezeHive @ 0x14082AE40 (CmpUnfreezeHive.c)
 */

bool __fastcall CmpIsHiveAlreadyLoaded(__int64 a1, __int64 a2, char a3, __int64 a4, _QWORD *a5)
{
  char v5; // si
  __int64 v9; // rax
  __int64 v10; // rdx
  _BYTE *v11; // rcx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD v18[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0;
  if ( (a3 & 0x20) == 0 )
  {
    if ( a1 )
    {
      if ( !CmpIsKeyDeletedForKeyBody(a1, 0LL) )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 32);
        LODWORD(v9) = *(_DWORD *)(v9 + 184);
        *(_QWORD *)a4 = v10;
        if ( (v9 & 0x40000) != 0 && CmpIsThisSameFile(a2, *(void **)(v10 + 1536)) )
        {
          v11 = *(_BYTE **)a4;
          if ( (*(_DWORD *)(*(_QWORD *)a4 + 4152LL) & 0x40) == 0
            && (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0x40000) == 0 )
          {
            v5 = 1;
            if ( v11[2936] == 1 )
            {
              CmpUnfreezeHive(v11);
              *(_BYTE *)(*(_QWORD *)a4 + 2936LL) = 0;
            }
          }
        }
      }
    }
    else if ( (a3 & 0x10) != 0 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v14 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v14 = NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[519] & 0x20) != 0
          && CmpIsThisSameFile(a2, (void *)NextActiveHive[192])
          && (v14[519] & 0x40) == 0 )
        {
          v18[0] = 0LL;
          v15 = v14[366];
          *(_QWORD *)a4 = v14;
          CmpConstructNameWithStatus(v15, v18);
          v16 = v18[0];
          *a5 = v18[0];
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v14 + 204);
          return v16 != 0;
        }
      }
    }
  }
  return v5;
}
