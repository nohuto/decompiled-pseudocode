/*
 * XREFs of NtUserfnINCNTOUTSTRINGNULL @ 0x1C02377E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINCNTOUTSTRINGNULL(
        __int64 a1,
        SIZE_T a2,
        SIZE_T a3,
        volatile void *a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned int v8; // esi
  int v10; // ecx
  __int64 v11; // rbx
  int v13; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v14[12]; // [rsp+44h] [rbp-14h]

  v8 = a2;
  v13 = 0;
  *(_DWORD *)&v14[8] = 0;
  v10 = (a7 << 31) | a3 & 0x7FFFFFFF;
  *(_QWORD *)v14 = (unsigned int)v10;
  v11 = 0LL;
  if ( !a7 )
  {
    v10 ^= (v10 ^ (2 * v10)) & 0x7FFFFFFF;
    *(_DWORD *)v14 = v10;
  }
  if ( (v10 & 0x7FFFFFFFu) < 2 || (a2 = v10 & 0x7FFFFFFF, a2 < a3) )
  {
    UserSetLastError(87LL, a2, 0x7FFFFFFFLL, (__int64)a4);
  }
  else
  {
    v13 = 0;
    *(_QWORD *)&v14[4] = a4;
    ProbeForWrite(a4, a2, (v10 >> 31) + 2);
    **(_WORD **)&v14[4] = 0;
    return ((__int64 (__fastcall *)(__int64, _QWORD, SIZE_T, int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             v8,
             a3,
             &v13,
             a5);
  }
  return v11;
}
