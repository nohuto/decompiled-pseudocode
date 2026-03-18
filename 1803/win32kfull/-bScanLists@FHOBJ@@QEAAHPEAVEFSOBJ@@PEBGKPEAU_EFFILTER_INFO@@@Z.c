/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C00CBDC8
 * Callers:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C00CA754 (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     cCapString @ 0x1C00CA9C4 (cCapString.c)
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C00CBC28 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00CC784 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C00CCF84 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C010F8D4 (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall FHOBJ::bScanLists(FHOBJ *this, struct EFSOBJ *a2, WCHAR *a3, int a4, struct _EFFILTER_INFO *a5)
{
  char v7; // r15
  struct _HASHBUCKET *v9; // rax
  _QWORD *v10; // rdi
  int v11; // eax
  int v12; // esi
  __int64 v13; // rbx
  __int64 v15; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int16 v17[32]; // [rsp+50h] [rbp-88h] BYREF

  v7 = 2;
  if ( a4 != 3 )
    v7 = 0;
  cCapString(v17, a3, 32);
  v9 = FHOBJ::pbktSearch(this, v17, 0LL, 0LL, 0);
  if ( !v9 )
    return 1LL;
  v10 = (_QWORD *)*((_QWORD *)v9 + 1);
  v11 = *((_DWORD *)v9 + 6);
  v12 = 0;
  memset(v16, 0, sizeof(v16));
  *((_DWORD *)a5 + 8) = v11;
  while ( 1 )
  {
    v13 = v10[1];
    v15 = v13;
    if ( !(unsigned int)PFEOBJ::bFilteredOut((PFEOBJ *)&v15, a5) )
    {
      if ( a4 != 1 || (v12 = efstyCompute(v16, &v15), v12 != 5) )
      {
        if ( !(unsigned int)EFSOBJ::bAdd(a2, v13, v12, v7, *((_DWORD *)a5 + 9)) )
          break;
      }
    }
    v10 = (_QWORD *)*v10;
    if ( !v10 )
      return 1LL;
  }
  return 0LL;
}
