/*
 * XREFs of ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0147DC8
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0147B10 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPath(DMMVIDPNTOPOLOGY *this)
{
  char *v1; // r10
  DMMVIDPNTOPOLOGY *v2; // r9
  char *v3; // r8
  int v4; // r11d
  char *v5; // r9
  int v6; // ecx
  char *v7; // rax
  bool v8; // cc
  int v9; // edx
  char *v10; // rax

  v1 = (char *)this + 24;
  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v3 = 0LL;
  v4 = 32;
  if ( v2 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v5 = (char *)v2 - 8;
    while ( v5 )
    {
      v6 = *((_DWORD *)v5 + 26);
      v7 = v5;
      v8 = v6 < v4;
      v9 = v4;
      v4 = v6;
      if ( !v8 )
        v7 = v3;
      v3 = v7;
      v10 = (char *)*((_QWORD *)v5 + 1);
      v5 = v10 - 8;
      if ( v10 == v1 )
        v5 = 0LL;
      if ( v6 >= v9 )
        v4 = v9;
    }
  }
  return (struct DMMVIDPNPRESENTPATH *)v3;
}
