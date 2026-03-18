/*
 * XREFs of NtUserfnINCNTOUTSTRINGNULL @ 0x1C01F7E00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRINGNULL(__int64 a1, SIZE_T a2, SIZE_T a3, _WORD *a4, __int64 a5, char a6, int a7)
{
  unsigned int v8; // esi
  int v10; // ecx
  __int64 v11; // rbx
  int v13; // [rsp+40h] [rbp-18h] BYREF
  int v14; // [rsp+44h] [rbp-14h]
  _WORD *v15; // [rsp+48h] [rbp-10h]

  v8 = a2;
  v10 = ((a7 << 31) | v14 & 0x7FFFFFFF) ^ (a3 ^ ((a7 << 31) | v14 & 0x7FFFFFFF)) & 0x7FFFFFFF;
  v14 = v10;
  v11 = 0LL;
  if ( !a7 )
  {
    v10 ^= (v10 ^ (2 * v10)) & 0x7FFFFFFF;
    v14 = v10;
  }
  if ( (v10 & 0x7FFFFFFFu) < 2 || (a2 = v10 & 0x7FFFFFFF, a2 < a3) )
  {
    UserSetLastError(87LL, a2);
  }
  else
  {
    v13 = 0;
    v15 = a4;
    ProbeForWrite(a4, a2, (v10 >> 31) + 2);
    *v15 = 0;
    return ((__int64 (__fastcall *)(__int64, _QWORD, SIZE_T, int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             v8,
             a3,
             &v13,
             a5);
  }
  return v11;
}
