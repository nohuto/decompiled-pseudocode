/*
 * XREFs of ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C00906BC
 * Callers:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C0090574 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C008D0C8 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0093ABC (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C0093C18 (cCapString.c)
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x1C0095DD8 (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall FHOBJ::bInsert(FHOBJ *this, struct PFEOBJ *a2)
{
  unsigned __int16 *v4; // rax
  __int64 v5; // r9
  struct _UNIVERSAL_FONT_ID *v6; // r9
  unsigned __int16 *v7; // rdx
  struct _HASHBUCKET *v8; // rax
  unsigned __int16 *v10; // rbx
  __int64 v11; // r9
  struct _HASHBUCKET *v13; // rax
  unsigned int v15; // [rsp+30h] [rbp-19h] BYREF
  __int64 v16; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int16 v17[32]; // [rsp+40h] [rbp-9h] BYREF

  memset(v17, 0, sizeof(v17));
  if ( !*(_DWORD *)(*((_QWORD *)this + 1) + 4LL)
    && !_wcsicmp(
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    return 1LL;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
  {
    v6 = (struct _UNIVERSAL_FONT_ID *)&v16;
    v7 = 0LL;
    v16 = *(_QWORD *)(*(_QWORD *)a2 + 84LL);
  }
  else
  {
    v4 = FHOBJ::pwszName(this, a2);
    cCapString(v17, v4, 32LL, v5);
    v6 = 0LL;
    v7 = v17;
  }
  v8 = FHOBJ::pbktSearch(this, v7, &v15, v6, 0);
  if ( (unsigned int)FHOBJ::bAddPFELink(this, v8, v15, v17, a2, 0) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v10 = FHOBJ::pwszName(this, a2);
      while ( *v10++ )
        ;
      while ( *v10 )
      {
        cCapString(v17, v10, 32LL, v11);
        v13 = FHOBJ::pbktSearch(this, v17, &v15, 0LL, 1);
        if ( !(unsigned int)FHOBJ::bAddPFELink(this, v13, v15, v17, a2, 1) )
          return 0LL;
        while ( *v10++ )
          ;
      }
    }
    return 1LL;
  }
  return 0LL;
}
