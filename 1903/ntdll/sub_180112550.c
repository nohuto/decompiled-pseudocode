/*
 * XREFs of sub_180112550 @ 0x180112550
 * Callers:
 *     sub_180111DA4 @ 0x180111DA4 (sub_180111DA4.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwQueryObject @ 0x18009C8E0 (ZwQueryObject.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180112550(
        __int64 a1,
        unsigned int *a2,
        unsigned int a3,
        char a4,
        __int64 (__fastcall *a5)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int),
        __int64 a6)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned int v11; // r15d
  unsigned int v12; // edi
  char v13; // si
  __int64 v14; // r9
  const wchar_t **v15; // rsi
  __int64 v16; // rbx
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h]
  __int64 v19; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int); // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h]
  char v22; // [rsp+80h] [rbp-80h] BYREF
  wchar_t *String1; // [rsp+88h] [rbp-78h]
  char v24; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v25[64]; // [rsp+170h] [rbp+70h] BYREF
  _WORD v26[264]; // [rsp+1B0h] [rbp+B0h] BYREF

  result = a1;
  v21 = a1;
  v7 = 0;
  v20 = a5;
  v19 = a6;
  v11 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v12 = 0;
      v18 = 0LL;
      v13 = 0;
      v17 = 0;
      if ( (int)ZwDuplicateObject() < 0 )
        goto LABEL_18;
      v12 = 4;
      if ( (int)ZwQueryObject() >= 0 )
        break;
      ZwClose();
LABEL_19:
      result = v21;
      ++v11;
      ++a2;
      if ( v11 >= a3 )
        return result;
    }
    if ( (a4 & 8) != 0 )
    {
      memset(v26, 0, sizeof(v26));
      if ( wcsicmp(String1, L"File") )
      {
        if ( (int)ZwQueryObject() < 0 )
          v26[8] = 0;
      }
    }
    if ( (a4 & 0x10) != 0 && (int)ZwQueryObject() >= 0 )
      v12 = 20;
    v17 = 0;
    if ( (a4 & 0x20) != 0 )
    {
      v15 = (const wchar_t **)&off_1801191D0;
      while ( wcsicmp(String1, *v15) )
      {
        ++v7;
        v15 += 3;
        if ( v7 >= 6 )
          goto LABEL_16;
      }
      v16 = 3LL * v7;
      if ( ((int (__fastcall *)(__int64, _BYTE *, __int64, int *, _QWORD, _DWORD, int))*(&off_1801191D0 + v16 + 1))(
             v18,
             v25,
             64LL,
             &v17,
             0LL,
             0,
             2) < 0
        || !v17 )
      {
LABEL_16:
        v13 = 0;
        goto LABEL_17;
      }
      v13 = (char)(&off_1801191D0)[v16 + 1];
      v12 |= 0x20u;
    }
LABEL_17:
    ZwClose();
LABEL_18:
    LOBYTE(v14) = v13;
    result = v20(
               v19,
               v12,
               *a2,
               v14,
               (unsigned __int64)&v22 & -(__int64)((v12 & 4) != 0),
               (unsigned __int64)v26 & -(__int64)((v12 & 4) != 0),
               (unsigned __int64)&v24 & -(__int64)((v12 & 0x10) != 0),
               (unsigned __int64)v25 & -(__int64)((v12 & 0x20) != 0),
               v17 & (unsigned int)-((v12 & 0x20) != 0));
    v7 = 0;
    if ( !(_BYTE)result )
      return result;
    goto LABEL_19;
  }
  return result;
}
