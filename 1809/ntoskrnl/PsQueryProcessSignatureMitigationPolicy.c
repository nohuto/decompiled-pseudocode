/*
 * XREFs of PsQueryProcessSignatureMitigationPolicy @ 0x1406CC740
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __fastcall PsQueryProcessSignatureMitigationPolicy(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rsi
  int v3; // edi
  _DWORD *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx

  *a2 = 0;
  v2 = a1;
  v3 = *(_DWORD *)(a1 + 2080);
  v4 = a2;
  LOBYTE(a1) = *(_BYTE *)(a1 + 1736);
  if ( (unsigned __int8)a1 >= 8u && *(_BYTE *)(v2 + 1737) >= 8u )
  {
    *a2 |= 1u;
  }
  else if ( qword_14040EE00
         && (LOBYTE(a2) = 6, (unsigned int)qword_14040EE00(a1, a2))
         && qword_14040EE00
         && (LOBYTE(v6) = *(_BYTE *)(v2 + 1737), LOBYTE(v5) = 6, (unsigned int)qword_14040EE00(v6, v5)) )
  {
    *v4 |= 2u;
  }
  else if ( (v3 & 0x1000000) != 0 )
  {
    *v4 |= 8u;
  }
  else if ( (v3 & 0x2000000) != 0 )
  {
    *v4 |= 0x10u;
  }
  if ( (v3 & 0x800000) != 0 )
    *v4 |= 4u;
}
