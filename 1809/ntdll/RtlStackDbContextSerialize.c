/*
 * XREFs of RtlStackDbContextSerialize @ 0x1801155BC
 * Callers:
 *     RtlpHpStackTraceSerialize @ 0x180105204 (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlStackDbContextSerialize(
        __int64 a1,
        __int64 (__fastcall *a2)(_DWORD *, __int64, unsigned __int64 *),
        unsigned __int64 *a3,
        __int64 a4)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  _QWORD *v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rcx
  _BYTE *i; // rdx
  _QWORD *v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rcx
  _BYTE *j; // rdx
  unsigned int v20; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+28h] [rbp-38h] BYREF
  __int64 v22; // [rsp+30h] [rbp-30h] BYREF
  volatile signed __int64 *v23; // [rsp+38h] [rbp-28h]
  _DWORD v24[4]; // [rsp+40h] [rbp-20h] BYREF

  RtlAcquireSRWLockExclusive(a1 + 32, (unsigned __int64)a2, a3, a4);
  v23 = (volatile signed __int64 *)(a1 + 40);
  RtlAcquireSRWLockExclusive(a1 + 40, v7, v8, v9);
  v24[0] = *(_DWORD *)a1;
  v24[1] = *(_DWORD *)(a1 + 16);
  v24[2] = 524289;
  v10 = a2(v24, 12LL, a3);
  if ( v10 >= 0 )
  {
    v11 = *(_QWORD **)(a1 + 8);
    v12 = v11;
    if ( v11 )
    {
      v13 = *v11;
      if ( (*v11 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v13 = *v11;
      if ( (v13 & 1) == 0 )
        goto LABEL_24;
    }
    for ( i = v11 + 1; ; i += 8 )
    {
      if ( (unsigned __int64)i >= *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5) )
      {
LABEL_10:
        v13 = 0LL;
        goto LABEL_11;
      }
      if ( (*i & 1) == 0 )
        break;
    }
LABEL_30:
    v12 = *(__int64 **)i;
    v11 = i;
    v13 = *(_QWORD *)i;
LABEL_11:
    while ( v13 )
    {
      v21 = v13;
      v20 = *(_DWORD *)(v13 + 16);
      v10 = ((__int64 (__fastcall *)(unsigned int *, __int64, unsigned __int64 *, _QWORD))a2)(&v20, 4LL, a3, 0LL);
      if ( v10 < 0 )
        goto LABEL_37;
      v10 = a2(&v21, 8LL, a3);
      if ( v10 < 0 )
        goto LABEL_37;
      v10 = a2((_DWORD *)(v21 + 24), 8LL * *(unsigned __int8 *)(v21 + 19), a3);
      if ( v10 < 0 )
        goto LABEL_37;
      if ( !v12 )
        goto LABEL_25;
      v13 = *v12;
      if ( (*v12 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v13 = *v12;
      if ( (v13 & 1) != 0 )
      {
LABEL_25:
        for ( i = v11 + 1;
              (unsigned __int64)i < *(_QWORD *)(a1 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
              i += 8 )
        {
          if ( (*i & 1) == 0 )
            goto LABEL_30;
        }
        goto LABEL_10;
      }
LABEL_24:
      v12 = (__int64 *)v13;
    }
    v15 = *(_QWORD **)(a1 + 24);
    v16 = v15;
    if ( v15 )
    {
      v17 = *v15;
      if ( (*v15 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v17 = *v15;
      if ( (v17 & 1) == 0 )
        goto LABEL_45;
    }
    for ( j = v15 + 1; ; j += 8 )
    {
      if ( (unsigned __int64)j >= *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5) )
      {
LABEL_34:
        v17 = 0LL;
        goto LABEL_35;
      }
      if ( (*j & 1) == 0 )
        break;
    }
LABEL_51:
    v16 = *(__int64 **)j;
    v15 = j;
    v17 = *(_QWORD *)j;
LABEL_35:
    while ( v17 )
    {
      v22 = v17;
      v20 = *(_DWORD *)(v17 + 16);
      v10 = ((__int64 (__fastcall *)(unsigned int *, __int64, unsigned __int64 *, _QWORD))a2)(&v20, 4LL, a3, 0LL);
      if ( v10 < 0 )
        goto LABEL_37;
      v10 = a2(&v22, 8LL, a3);
      if ( v10 < 0 )
        goto LABEL_37;
      v10 = a2((_DWORD *)(v22 + 24), (HIBYTE(v20) + 7) & 0xFFFFFFF8, a3);
      if ( v10 < 0 )
        goto LABEL_37;
      if ( !v16 )
        goto LABEL_46;
      v17 = *v16;
      if ( (*v16 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
        v17 = *v16;
      if ( (v17 & 1) != 0 )
      {
LABEL_46:
        for ( j = v15 + 1;
              (unsigned __int64)j < *(_QWORD *)(a1 + 24) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 20) >> 5);
              j += 8 )
        {
          if ( (*j & 1) == 0 )
            goto LABEL_51;
        }
        goto LABEL_34;
      }
LABEL_45:
      v16 = (__int64 *)v17;
    }
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD, unsigned __int64 *, _QWORD))a2)(0LL, 0LL, a3, 0LL);
  }
LABEL_37:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  RtlReleaseSRWLockExclusive(v23);
  return (unsigned int)v10;
}
