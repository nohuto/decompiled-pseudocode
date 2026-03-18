/*
 * XREFs of NtUserfnOUTSTRING @ 0x1C00D9C40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTSTRING(
        __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        _BYTE *a4,
        __int64 a5,
        char a6,
        int a7)
{
  int v11; // ecx
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  ULONG v14; // r8d
  __int64 v15; // rbx
  int v17; // [rsp+48h] [rbp-20h] BYREF
  int v18; // [rsp+4Ch] [rbp-1Ch]
  _BYTE *v19; // [rsp+50h] [rbp-18h]

  v17 = 0;
  v19 = 0LL;
  v11 = (a7 << 31) | a3 & 0x7FFFFFFF;
  v18 = v11;
  v12 = (unsigned int)v11;
  if ( !a7 )
  {
    v11 ^= (v11 ^ (2 * v11)) & 0x7FFFFFFF;
    v18 = v11;
    v12 = (unsigned int)v11;
  }
  v13 = v11 & 0x7FFFFFFF;
  if ( v13 < a3 )
  {
    v15 = 0LL;
    UserSetLastError(0LL, v13, v12, 0x7FFFFFFFLL);
    return v15;
  }
  v17 = 0;
  v19 = a4;
  if ( (v11 & 0x7FFFFFFF) != 0 )
  {
    v14 = (v11 >> 31) + 2;
  }
  else
  {
    if ( !a4 )
      goto LABEL_10;
    v13 = ((unsigned __int64)(unsigned int)~(_DWORD)v12 >> 31) + 1;
    v14 = (v11 >> 31) + 2;
  }
  ProbeForWrite(a4, v13, v14);
LABEL_10:
  v15 = ((__int64 (__fastcall *)(__int64, _QWORD, unsigned __int64, int *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          &v17,
          a5);
  if ( !v15 && a3 )
  {
    if ( a7 )
      *a4 = 0;
    else
      *(_WORD *)a4 = 0;
  }
  return v15;
}
