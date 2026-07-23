/*
 * XREFs of sub_18002DEC8 @ 0x18002DEC8
 * Callers:
 *     sub_18002E26C @ 0x18002E26C (sub_18002E26C.c)
 *     sub_1800CE068 @ 0x1800CE068 (sub_1800CE068.c)
 * Callees:
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_18002952C @ 0x18002952C (sub_18002952C.c)
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 *     sub_18002D8FC @ 0x18002D8FC (sub_18002D8FC.c)
 *     sub_18002DE68 @ 0x18002DE68 (sub_18002DE68.c)
 *     sub_18002E1A4 @ 0x18002E1A4 (sub_18002E1A4.c)
 *     sub_18002E5E8 @ 0x18002E5E8 (sub_18002E5E8.c)
 *     sub_18002E6A0 @ 0x18002E6A0 (sub_18002E6A0.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180070848 @ 0x180070848 (sub_180070848.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     sub_1800CF794 @ 0x1800CF794 (sub_1800CF794.c)
 */

__int64 __fastcall sub_18002DEC8(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  PWSTR *v6; // r15
  int v7; // eax
  int v8; // ebx
  _UNICODE_STRING v9; // xmm1
  bool v11; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v12; // [rsp+54h] [rbp-ACh] BYREF
  _UNICODE_STRING v13; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  WCHAR *v16[2]; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING v17; // [rsp+90h] [rbp-70h] BYREF
  _WORD v18[128]; // [rsp+A0h] [rbp-60h] BYREF
  PWSTR Path[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v20; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v16[0] = 0LL;
  v16[1] = 0LL;
  v4 = 0;
  v14 = 0LL;
  v17.Buffer = v18;
  v11 = 0;
  *(_DWORD *)&v17.Length = 0x1000000;
  v18[0] = 0;
  *(_QWORD *)&v13.Length = 0LL;
  v13.Buffer = 0LL;
  v12 = 0;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((dword_180162714 & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    sub_180021798(
      *(_QWORD *)(v1 + 80),
      v5 & ((-(__int64)((dword_180162714 & 4) != 0) & 0x400) + 31488) | 1,
      (__int64 *)Path);
    v6 = Path;
  }
  else
  {
    sub_180021798(0LL, 0LL, (__int64 *)Path);
    v6 = *(PWSTR **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = sub_18002D8FC(
           (const UNICODE_STRING *)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           v16,
           &v17,
           &String1,
           &v13,
           &v11,
           (__int64)&v12);
    v8 = v7;
    if ( v11 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      v8 = sub_18002E5E8(a1, (unsigned int)&v13, (unsigned int)&String1, (unsigned int)&v17, v7);
      if ( v8 < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v12 |= 1u;
      *(_DWORD *)(v2 + 264) = sub_18002952C(&String1);
      v8 = sub_18002E6A0(&String1, &v13, (__int64)&v14);
      if ( v8 != -1073741515 )
        goto LABEL_14;
    }
    sub_18002E1A4(v2 + 72);
    v9 = String1;
    *(_UNICODE_STRING *)(v2 + 72) = v13;
    *(_UNICODE_STRING *)(v2 + 88) = v9;
    *(_QWORD *)&v13.Length = 0LL;
    v13.Buffer = 0LL;
    v8 = sub_18002D3B4(a1, &v17);
    if ( v8 != 1073741838 )
      goto LABEL_14;
    if ( v18 != v17.Buffer )
      RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v17.Buffer);
    *(_DWORD *)&v17.Length = 0x1000000;
    v17.Buffer = v18;
    v18[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  v8 = -1073741701;
LABEL_14:
  if ( v14 )
  {
    sub_180070848(a1);
  }
  else if ( sub_18002DE68() )
  {
    sub_1800CF794(v12, a1);
  }
  if ( v18 != v17.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v17.Buffer);
  *(_DWORD *)&v17.Length = 0x1000000;
  v17.Buffer = v18;
  v18[0] = 0;
  sub_18002E1A4(&v13);
  if ( v20 )
    RtlReleasePath(Path[0]);
  return (unsigned int)v8;
}
