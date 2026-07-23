/*
 * XREFs of SepParseElamCertResources @ 0x14073D818
 * Callers:
 *     SeRegisterElamCertResources @ 0x14073D784 (SeRegisterElamCertResources.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14000733C (RtlStringCchLengthW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     __report_rangecheckfailure @ 0x140268FBC (__report_rangecheckfailure.c)
 */

NTSTATUS __fastcall SepParseElamCertResources(unsigned __int16 *a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // eax
  unsigned __int64 v4; // r12
  const wchar_t *v5; // rbx
  NTSTATUS result; // eax
  const wchar_t *v7; // r11
  const wchar_t *v8; // rdi
  unsigned int v9; // r13d
  bool v10; // dl
  char v11; // r8
  wchar_t v12; // ax
  char v13; // al
  unsigned int v14; // eax
  wchar_t v15; // ax
  unsigned __int16 *v16; // r11
  size_t v17; // r15
  unsigned int v18; // esi
  wchar_t *v19; // r14
  wchar_t *v20; // r8
  unsigned int v21; // r9d
  __int64 v22; // r11
  unsigned __int64 v23; // rdx
  wchar_t v24; // ax
  unsigned __int64 v25; // rcx
  __int64 v26; // rax
  __int16 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r15
  const wchar_t *v31; // r8
  __int64 v32; // rax
  int v33; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+40h] [rbp-C0h]
  const wchar_t *v35; // [rsp+48h] [rbp-B8h]
  unsigned int v36; // [rsp+50h] [rbp-B0h]
  size_t pcchLength; // [rsp+58h] [rbp-A8h] BYREF
  size_t v38; // [rsp+60h] [rbp-A0h] BYREF
  char *v39; // [rsp+68h] [rbp-98h]
  _WORD v40[24]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v41[448]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = 0;
  if ( (unsigned __int64)(a2 - 2) > 0xFFFD )
    return -1073741811;
  v3 = *a1;
  v4 = (unsigned __int64)a1 + a2;
  v39 = (char *)a1 + a2;
  v5 = a1 + 1;
  v36 = v3;
  v34 = 0;
  if ( !v3 )
    return v2;
  while ( 1 )
  {
    if ( (unsigned __int64)(v5 + 1) > v4 )
      return -1073741811;
    result = RtlStringCchLengthW(v5, (v4 - (unsigned __int64)v5) >> 1, &pcchLength);
    if ( result < 0 )
      return result;
    v7 = &v5[pcchLength + 1];
    v8 = v7 + 1;
    v35 = v7;
    if ( (unsigned __int64)(v7 + 1) >= v4 )
      return -1073741811;
    v9 = 0;
    v10 = 1;
    if ( *v5 )
    {
      do
      {
        if ( v9 >= 0x40 )
          return -1073741811;
        if ( v10 )
        {
          if ( v9 >= 0x40uLL )
            _report_rangecheckfailure();
          v41[v9] = 0;
          v11 = 0;
        }
        else
        {
          v41[v9] *= 16;
          v11 = v41[v9];
        }
        v12 = *v5;
        if ( *v5 == 32 )
        {
          if ( !v10 )
            return -1073741811;
        }
        else
        {
          if ( v12 <= 0x2Fu )
            return -1073741811;
          if ( v12 > 0x39u )
          {
            if ( v12 <= 0x40u )
              return -1073741811;
            if ( v12 > 0x46u )
            {
              if ( v12 <= 0x60u || v12 > 0x66u )
                return -1073741811;
              v13 = v12 - 87;
            }
            else
            {
              v13 = v12 - 55;
            }
          }
          else
          {
            v13 = v12 - 48;
          }
          v41[v9] = v11 + v13;
        }
        v14 = v9 + 1;
        if ( v10 )
          v14 = v9;
        v9 = v14;
        if ( *v5 != 32 )
          v10 = !v10;
        ++v5;
      }
      while ( *v5 );
      if ( !v10 )
        return -1073741811;
    }
    v15 = *v7;
    if ( *v7 != 0x8004 && (v15 <= 0x800Bu || v15 > 0x800Eu) )
      return -1073741811;
    result = RtlStringCchLengthW(v7 + 1, (v4 - (unsigned __int64)v8) >> 1, &v38);
    if ( result < 0 )
      return result;
    v17 = v38;
    v18 = 0;
    v19 = (wchar_t *)&v8[v38];
    v5 = v19 + 1;
    if ( v38 )
    {
      v20 = wcschr(v8, 0x3Bu);
      if ( !v20 )
      {
        v20 = v19;
        goto LABEL_54;
      }
      while ( 1 )
      {
        v21 = 0;
        v22 = 0LL;
        v23 = (unsigned __int64)((char *)v20 - (char *)v8 + 1) >> 1;
        if ( v8 > v20 )
          v23 = 0LL;
        if ( v23 )
        {
          do
          {
            v24 = *v8;
            ++v22;
            ++v8;
            v25 = ((unsigned __int64)v18 << 6) + v21++;
            *(_WORD *)&v41[2 * v25 + 64] = v24;
          }
          while ( v22 != v23 );
          v4 = (unsigned __int64)v39;
        }
        v26 = v21;
        v27 = 2 * v21;
        *(_WORD *)&v41[128 * (unsigned __int64)v18 + 64 + 2 * v26] = 0;
        v28 = 2LL * v18;
        v40[4 * v28] = v27;
        v40[4 * v28 + 1] = v27 + 2;
        *(_QWORD *)&v40[4 * v28 + 4] = &v41[128 * (unsigned __int64)v18 + 64];
        if ( !*v20 )
          break;
        v31 = v20 + 1;
        if ( !*v31 )
          break;
        v8 = v31;
        v20 = wcschr(v31, 0x3Bu);
        if ( !v20 )
        {
          v32 = -1LL;
          do
            ++v32;
          while ( v8[v32] );
          v20 = (wchar_t *)&v8[v32];
        }
        if ( ++v18 >= 3 )
          goto LABEL_34;
LABEL_54:
        if ( !v20 )
          goto LABEL_34;
      }
      ++v18;
LABEL_34:
      v16 = (unsigned __int16 *)v35;
    }
    v29 = v17 != 0 ? v18 : 0;
    v30 = -(__int64)v17;
    if ( !qword_14040EE10 )
      return -1073741637;
    v33 = v29;
    LOBYTE(v29) = 7;
    v2 = qword_14040EE10(v29, v41, v9, *v16, (unsigned __int64)v40 & -(__int64)(v30 != 0), v33, 0LL);
    if ( v2 >= 0 && ++v34 < v36 )
      continue;
    return v2;
  }
}
