/*
 * XREFs of sub_1800CE6B0 @ 0x1800CE6B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062218 @ 0x180062218 (sub_180062218.c)
 *     sub_1800625F4 @ 0x1800625F4 (sub_1800625F4.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall sub_1800CE6B0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  NTSTATUS result; // eax
  int v10; // edi
  __int64 v11; // rdx
  unsigned int v12; // [rsp+20h] [rbp-61h] BYREF
  _WORD v13[4]; // [rsp+28h] [rbp-59h] BYREF
  __int64 v14; // [rsp+30h] [rbp-51h]
  _BYTE v15[24]; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v16; // [rsp+58h] [rbp-29h]
  int v17; // [rsp+60h] [rbp-21h]
  __int16 v18; // [rsp+64h] [rbp-1Dh]
  __int16 v19; // [rsp+66h] [rbp-1Bh]
  unsigned int v20; // [rsp+68h] [rbp-19h]
  int v21; // [rsp+74h] [rbp-Dh]
  __int16 v22; // [rsp+78h] [rbp-9h]

  result = sub_1800625F4((__int64)a1, a3, (__int64)v15, 72LL);
  if ( result >= 0 )
  {
    *(_QWORD *)(a2 + 16) = v16;
    *(_DWORD *)(a2 + 24) = v17;
    *(_DWORD *)(a2 + 28) = v21;
    *(_WORD *)(a2 + 36) = v22;
    if ( (a5 & 2) != 0 )
    {
      v10 = 500;
      v11 = a4;
      do
      {
        if ( (int)sub_1800625F4((__int64)a1, v11, (__int64)&v12, 4LL) < 0 )
          break;
        v11 = v12;
        if ( v12 == a4 )
          break;
        ++*(_WORD *)(a2 + 34);
        if ( a3 == v11 - 16 )
          break;
        --v10;
      }
      while ( v10 );
    }
    v14 = v20;
    v13[0] = v18;
    v13[1] = v19;
    return sub_180062218(a1, (__int64)v13, a2, 1);
  }
  return result;
}
