/*
 * XREFs of SeGetLinkedToken @ 0x1408DFCD0
 * Callers:
 *     <none>
 * Callees:
 *     SepDeReferenceLogonSessionDirect @ 0x140079A94 (SepDeReferenceLogonSessionDirect.c)
 *     SeIsSModeAdminlessEnabled @ 0x1400E8634 (SeIsSModeAdminlessEnabled.c)
 *     SepDuplicateToken @ 0x1405D90A0 (SepDuplicateToken.c)
 *     SepReferenceLogonSessionSilo @ 0x14061D264 (SepReferenceLogonSessionSilo.c)
 */

__int64 __fastcall SeGetLinkedToken(int a1, __int64 a2, char **a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rsi
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  _DWORD v12[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-20h]
  int v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+5Ch] [rbp-14h]
  __int128 v17; // [rsp+60h] [rbp-10h]
  _QWORD *v18; // [rsp+A0h] [rbp+30h] BYREF

  v3 = 0LL;
  v12[1] = 0;
  v16 = 0;
  v5 = a2;
  *a3 = 0LL;
  v18 = 0LL;
  if ( (unsigned int)(a1 - 2) > 1 )
    return 3221225485LL;
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 216) + 32LL) & 4) == 0 || a1 != 2 || !SeIsSModeAdminlessEnabled() )
  {
    v9 = *(_QWORD *)(v5 + 216);
    v10 = *(_DWORD *)(v9 + 32);
    if ( (v10 & 4) != 0 && a1 == 2 || (v10 & 2) != 0 && a1 == 3 )
    {
      v11 = SepReferenceLogonSessionSilo((_DWORD *)(v9 + 16), *(_QWORD *)(v9 + 160), (__int64 *)&v18);
      v3 = v18;
      v8 = v11;
      if ( v11 < 0 )
        goto LABEL_14;
      v5 = v18[6];
    }
    v13 = 0LL;
    v15 = 0;
    v14 = 0LL;
    v12[0] = 48;
    v17 = 0LL;
    v8 = SepDuplicateToken(v5, (int)v12, 0, 1, 0, 0, 0, a3);
LABEL_14:
    if ( v3 )
      SepDeReferenceLogonSessionDirect(v3);
    return v8;
  }
  return (unsigned int)-1073741729;
}
