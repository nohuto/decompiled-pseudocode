/*
 * XREFs of sub_18006A9F8 @ 0x18006A9F8
 * Callers:
 *     sub_1800159B8 @ 0x1800159B8 (sub_1800159B8.c)
 * Callees:
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180015770 @ 0x180015770 (sub_180015770.c)
 *     sub_180015F28 @ 0x180015F28 (sub_180015F28.c)
 *     sub_180016590 @ 0x180016590 (sub_180016590.c)
 *     sub_18006ABB8 @ 0x18006ABB8 (sub_18006ABB8.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18006A9F8(__int64 a1, __int64 a2, __int64 a3, __int16 a4, __int64 *a5)
{
  int v8; // ebx
  unsigned int v9; // edi
  const WCHAR *Buffer; // rbx
  _QWORD *v11; // rdi
  unsigned int v12; // r15d
  __int16 v14[2]; // [rsp+34h] [rbp-CCh] BYREF
  _UNICODE_STRING v15; // [rsp+38h] [rbp-C8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  _BYTE v19[176]; // [rsp+60h] [rbp-A0h] BYREF

  BaseAddress = 0LL;
  memset(v19, 0, 0xAAuLL);
  *(_DWORD *)(&v15.MaximumLength + 1) = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( !a1 || !a2 || !a5 || !*a5 )
    return 3221225485LL;
  v8 = sub_180015604((__int64 *)&BaseAddress, a2, 0x19u, 0);
  if ( v8 >= 0 )
  {
    v9 = 0;
    if ( !*(_WORD *)(a1 + 4) )
    {
LABEL_10:
      v11 = BaseAddress;
      v12 = 0;
      if ( *((_WORD *)BaseAddress + 2) )
      {
        do
        {
          *(_DWORD *)&v15.Length = 11141120;
          v15.Buffer = (PWCH)v19;
          v8 = sub_180015F28(a2, (_WORD *)(v11[3] + 6LL * v12), &v15);
          if ( v8 < 0 )
            break;
          v8 = sub_180016590(a5, a2, 0, v14, v15.Buffer);
          ++v12;
        }
        while ( v12 < *((unsigned __int16 *)v11 + 2) );
      }
      goto LABEL_11;
    }
    while ( 1 )
    {
      *(_DWORD *)&v15.Length = 11141120;
      v15.Buffer = (PWCH)v19;
      v8 = sub_180015F28(a2, (_WORD *)(*(_QWORD *)(a1 + 24) + 6LL * v9), &v15);
      if ( v8 < 0 )
        break;
      Buffer = v15.Buffer;
      v18 = 0LL;
      LODWORD(v17) = 0;
      sub_18006ABB8(v15.Buffer, a2, a4);
      v8 = sub_180016590(a5, a2, 0, v14, Buffer);
      if ( v8 < 0 )
        break;
      if ( ++v9 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_10;
    }
  }
  v11 = BaseAddress;
LABEL_11:
  if ( v11 )
    sub_180015770(v11);
  if ( v8 < 0 )
  {
    if ( *a5 )
      *(_WORD *)(*a5 + 4) = 0;
  }
  return (unsigned int)v8;
}
