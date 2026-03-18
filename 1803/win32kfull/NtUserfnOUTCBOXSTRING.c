/*
 * XREFs of NtUserfnOUTCBOXSTRING @ 0x1C0132370
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     NtUserfnGETDBCSTEXTLENGTHS @ 0x1C00F8F60 (NtUserfnGETDBCSTEXTLENGTHS.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTCBOXSTRING(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        volatile void *a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r8d
  int v15; // ecx
  ULONG v16; // r8d
  SIZE_T v17; // rdx
  int v18; // edx
  _DWORD v20[2]; // [rsp+48h] [rbp-40h] BYREF
  volatile void *v21; // [rsp+50h] [rbp-38h]

  if ( (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL )
    return -1LL;
  v10 = NtUserfnGETDBCSTEXTLENGTHS(a1, 329LL, a3, (__int64)a4, a5, a6, a7);
  v11 = -1LL;
  if ( v10 != -1 )
  {
    v12 = (unsigned int)(v10 + 1);
    v13 = v10 + 1;
    if ( !a7 )
      v13 = 2 * v12;
    v14 = (a7 << 31) | v13 & 0x7FFFFFFF;
    v20[1] = v14;
    v15 = v14;
    if ( (v14 & 0x7FFFFFFFu) < (unsigned int)v12 )
    {
      UserSetLastError(0LL, v12);
      return v11;
    }
    v20[0] = 0;
    v21 = a4;
    if ( (v14 & 0x7FFFFFFF) != 0 )
    {
      v16 = (v14 >> 31) + 2;
      v17 = v15 & 0x7FFFFFFF;
    }
    else
    {
      if ( !a4 )
        goto LABEL_12;
      v17 = ((unsigned __int64)(unsigned int)~v14 >> 31) + 1;
      v16 = (v14 >> 31) + 2;
    }
    ProbeForWrite(a4, v17, v16);
LABEL_12:
    v11 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _DWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
            a1,
            a2,
            a3,
            v20,
            a5);
    v18 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL);
    if ( (v18 & 0x200) == 0 && (v18 & 0x30) != 0 )
      return a7 != 0 ? 8LL : 4LL;
  }
  return v11;
}
