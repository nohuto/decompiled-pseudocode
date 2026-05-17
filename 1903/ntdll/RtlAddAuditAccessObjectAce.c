/*
 * XREFs of RtlAddAuditAccessObjectAce @ 0x1800880D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlAddAuditAccessObjectAce(
        char *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v12; // eax
  int v13; // r8d

  v12 = a3 | 0x40;
  if ( !(_BYTE)a8 )
    v12 = a3;
  v13 = v12 | 0x80;
  if ( !(_BYTE)a9 )
    v13 = v12;
  if ( !a5 && !a6 )
    return sub_180014974(a1, a2, v13, a4, a7, 2);
  LOBYTE(a8) = 7;
  return sub_18008817C((_DWORD)a1, a2, v13, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}
