/*
 * XREFs of ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C007F658
 * Callers:
 *     ?bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C007F5CC (-bScanTheList@@YAHPEAVFHOBJ@@KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 * Callees:
 *     ?bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z @ 0x1C00244E8 (-bFilteredOut@PFEOBJ@@QEAAHPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C0024724 (-bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C007F9F8 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C007FB68 (cCapString.c)
 *     ?efstyCompute@@YA?AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z @ 0x1C011D3E4 (-efstyCompute@@YA-AW4_ENUMFONTSTYLE@@PEAHAEAVPFEOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall FHOBJ::bScanLists(
        FHOBJ *this,
        struct EFSOBJ *a2,
        const unsigned __int16 *a3,
        __int64 a4,
        struct _EFFILTER_INFO *a5)
{
  char v7; // r15
  int v8; // r14d
  struct _HASHBUCKET *v9; // rax
  _QWORD *v11; // rdi
  int v12; // eax
  int v13; // esi
  __int64 v14; // rbx
  __int64 v15; // [rsp+30h] [rbp-A8h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-A0h] BYREF
  unsigned __int16 v17[32]; // [rsp+50h] [rbp-88h] BYREF

  v7 = 2;
  v8 = a4;
  if ( (_DWORD)a4 != 3 )
    v7 = 0;
  cCapString(v17, a3, 32LL, a4);
  v9 = FHOBJ::pbktSearch(this, v17, 0LL, 0LL, 0);
  if ( !v9 )
    return 1LL;
  v11 = (_QWORD *)*((_QWORD *)v9 + 1);
  v12 = *((_DWORD *)v9 + 6);
  v13 = 0;
  memset(v16, 0, sizeof(v16));
  *((_DWORD *)a5 + 8) = v12;
  while ( 1 )
  {
    v14 = v11[1];
    v15 = v14;
    if ( !(unsigned int)PFEOBJ::bFilteredOut((PFEOBJ *)&v15, a5) )
    {
      if ( v8 != 1 || (v13 = efstyCompute(v16, &v15), v13 != 5) )
      {
        if ( !(unsigned int)EFSOBJ::bAdd(a2, v14, v13, v7, *((_DWORD *)a5 + 9)) )
          break;
      }
    }
    v11 = (_QWORD *)*v11;
    if ( !v11 )
      return 1LL;
  }
  return 0LL;
}
