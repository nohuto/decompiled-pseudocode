/*
 * XREFs of sub_180087874 @ 0x180087874
 * Callers:
 *     sub_180011F80 @ 0x180011F80 (sub_180011F80.c)
 *     sub_1800E5164 @ 0x1800E5164 (sub_1800E5164.c)
 * Callees:
 *     RtlInitializeSid @ 0x18000BAC0 (RtlInitializeSid.c)
 *     RtlEqualPrefixSid @ 0x1800125D0 (RtlEqualPrefixSid.c)
 *     RtlEqualSid @ 0x180067010 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

char __fastcall sub_180087874(unsigned __int8 *a1, unsigned __int8 *a2, void *a3, void *a4)
{
  __int64 v6; // rcx
  unsigned int v9; // r10d
  _DWORD *v10; // r9
  int v11; // ebp
  unsigned __int8 *v12; // r8
  unsigned int v13; // r11d
  _DWORD *v14; // rdx
  int v15; // r14d
  unsigned __int8 *v16; // rcx
  __int64 v18; // rdi
  unsigned __int8 *v19; // rbp
  int v20; // r8d
  void *v21; // rdx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+20h] [rbp-78h] BYREF
  _BYTE Sid[8]; // [rsp+28h] [rbp-70h] BYREF
  int v24; // [rsp+30h] [rbp-68h]

  v6 = *a2;
  if ( byte_180126B68[v6] != byte_180126B68[*a1] || byte_180126B68[v6 + 16] && ((a1[1] ^ a2[1]) & 0xC0) != 0 )
    return 0;
  v9 = *((_DWORD *)a2 + 2) & 1;
  v10 = (_DWORD *)((unsigned __int64)(a2 + 12) & -(__int64)(v9 != 0));
  v11 = *((_DWORD *)a2 + 2) & 2;
  if ( v11 )
    v12 = &a2[16 * v9 + 12];
  else
    v12 = 0LL;
  v13 = *((_DWORD *)a1 + 2) & 1;
  v14 = (_DWORD *)((unsigned __int64)(a1 + 12) & -(__int64)(v13 != 0));
  v15 = *((_DWORD *)a1 + 2) & 2;
  if ( v15 )
    v16 = &a1[16 * v13 + 12];
  else
    v16 = 0LL;
  if ( v12 )
  {
    if ( !v16
      || *(_DWORD *)v12 != *(_DWORD *)v16
      || *((_DWORD *)v12 + 1) != *((_DWORD *)v16 + 1)
      || *((_DWORD *)v12 + 2) != *((_DWORD *)v16 + 2)
      || *((_DWORD *)v12 + 3) != *((_DWORD *)v16 + 3) )
    {
      return 0;
    }
  }
  else if ( v16 )
  {
    return 0;
  }
  if ( v10 )
  {
    if ( !v14
      || *v10 != *v14
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 4) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 4)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 8) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 8)
      || *(_DWORD *)(((unsigned __int64)(a2 + 12) & -(__int64)((*((_DWORD *)a2 + 2) & 1) != 0)) + 0xC) != *(_DWORD *)(((unsigned __int64)(a1 + 12) & -(__int64)((*((_DWORD *)a1 + 2) & 1) != 0)) + 0xC) )
    {
      return 0;
    }
  }
  else if ( v14 )
  {
    return 0;
  }
  v18 = 16LL * v13;
  v19 = &a2[16 * v9 + (v11 != 0 ? 28LL : 12LL)];
  if ( RtlEqualSid(v19, &a1[(v15 != 0 ? 0x10 : 0) + 12 + v18]) )
    return 1;
  if ( (a2[1] & 3 | ~a2[1] & 8) != 8 || !a3 && !a4 )
    return 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 768;
  if ( RtlInitializeSid(Sid, &IdentifierAuthority, 1u) < 0 )
    return 0;
  v24 = 0;
  if ( !RtlEqualPrefixSid(&a1[(v15 != 0 ? 0x10 : 0) + 12 + v18], Sid) )
    return 0;
  v20 = *(_DWORD *)&a1[(v15 != 0 ? 36LL : 20LL) + v18];
  if ( !v20 )
  {
    if ( a3 )
    {
      v21 = a3;
      return RtlEqualSid(v19, v21) != 0;
    }
    return 0;
  }
  if ( v20 != 1 || !a4 )
    return 0;
  v21 = a4;
  return RtlEqualSid(v19, v21) != 0;
}
