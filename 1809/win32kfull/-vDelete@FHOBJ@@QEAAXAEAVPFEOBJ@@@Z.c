/*
 * XREFs of ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C007DFD4
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C007DEA8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C007F9F8 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C0086E74 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C011CDE8 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall FHOBJ::vDelete(FHOBJ *this, struct PFEOBJ *a2)
{
  unsigned __int16 *v4; // rax
  __int64 v5; // r9
  struct _UNIVERSAL_FONT_ID *v6; // r9
  unsigned __int16 *v7; // rdx
  struct _HASHBUCKET *v8; // rax
  unsigned __int16 *v9; // rbx
  __int64 v10; // r9
  struct _HASHBUCKET *v12; // rax
  unsigned int v14; // [rsp+30h] [rbp-19h] BYREF
  __int64 v15; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int16 v16[32]; // [rsp+40h] [rbp-9h] BYREF

  memset(v16, 0, sizeof(v16));
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL)
    || _wcsicmp(
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      v6 = (struct _UNIVERSAL_FONT_ID *)&v15;
      v7 = 0LL;
      v15 = *(_QWORD *)(*(_QWORD *)a2 + 84LL);
    }
    else
    {
      v4 = FHOBJ::pwszName(this, a2);
      cCapString(v16, v4, 32LL, v5);
      v6 = 0LL;
      v7 = v16;
    }
    v8 = FHOBJ::pbktSearch(this, v7, &v14, v6, 0);
    FHOBJ::vDeletePFELink(this, v8, v14, a2);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v9 = FHOBJ::pwszName(this, a2);
      while ( *v9++ )
        ;
      while ( *v9 )
      {
        cCapString(v16, v9, 32LL, v10);
        v12 = FHOBJ::pbktSearch(this, v16, &v14, 0LL, 1);
        FHOBJ::vDeletePFELink(this, v12, v14, a2);
        while ( *v9++ )
          ;
      }
    }
  }
}
