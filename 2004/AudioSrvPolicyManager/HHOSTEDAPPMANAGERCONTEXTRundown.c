/*
 * XREFs of HHOSTEDAPPMANAGERCONTEXTRundown @ 0x180023F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_1800218C8 @ 0x1800218C8 (sub_1800218C8.c)
 *     sub_180021E3C @ 0x180021E3C (sub_180021E3C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall HHOSTEDAPPMANAGERCONTEXTRundown(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  int v6; // eax
  int v7; // esi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)&unk_18004FEF0;
  v9 = 0;
  sub_18001A330((__int64)&lpCriticalSection);
  v2 = qword_18004F588;
  if ( qword_18004F588 )
  {
    while ( *(__int64 **)(v2 + 16) != a1 )
    {
      v2 = *(_QWORD *)v2;
      if ( !v2 )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v2 = 0LL;
  }
  if ( v2 )
  {
    if ( v2 == qword_18004F588 )
      qword_18004F588 = *(_QWORD *)v2;
    else
      **(_QWORD **)(v2 + 8) = *(_QWORD *)v2;
    v3 = *(_QWORD *)(v2 + 8);
    if ( v2 == qword_18004F590 )
      qword_18004F590 = *(_QWORD *)(v2 + 8);
    else
      *(_QWORD *)(*(_QWORD *)v2 + 8LL) = v3;
    *(_QWORD *)v2 = qword_18004F5A8;
    qword_18004F5A8 = v2;
    if ( !--qword_18004F598 )
      sub_180017F24((__int64)&qword_18004F588);
    v4 = (_QWORD *)*a1;
    while ( v4 )
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      v6 = *(_DWORD *)(v5 + 12);
      *(_DWORD *)(v5 + 12) = 0;
      if ( v6 )
      {
        v7 = sub_180021E3C(v3, *(_QWORD *)v5, *(_QWORD *)(v5 + 16), *(_DWORD *)(v5 + 8), 0);
        if ( v7 < 0 )
        {
          if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
            && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
            && *((_BYTE *)off_18004F000 + 25) >= 2u )
          {
            sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xEu, &stru_1800447D0, v7);
          }
          sub_180005724("CPickerHostContext::RevokeInteractivityFromApps", 295, v7);
        }
      }
    }
    sub_1800218C8(a1);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
