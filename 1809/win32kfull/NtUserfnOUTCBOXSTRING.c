/*
 * XREFs of NtUserfnOUTCBOXSTRING @ 0x1C0154F40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  ULONG v19; // r8d
  SIZE_T v20; // rdx
  int v21; // eax
  _DWORD v23[2]; // [rsp+38h] [rbp-40h] BYREF
  volatile void *v24; // [rsp+40h] [rbp-38h]

  if ( (unsigned __int64)(a1 - 2) > 0xFFFFFFFFFFFFFFFBuLL )
    return -1LL;
  v11 = (a6 + 6) & 0x1F;
  v12 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64))mpFnidPfn[v11])(a1, 329LL, a3, a7, a5);
  v13 = -1LL;
  if ( v12 != -1 )
  {
    v14 = (unsigned int)(v12 + 1);
    v15 = a7 << 31;
    v16 = v12 + 1;
    if ( !a7 )
      v16 = 2 * v14;
    v17 = v15 | v16 & 0x7FFFFFFFu;
    v23[1] = v17;
    v18 = v15 | v16 & 0x7FFFFFFF;
    if ( ((unsigned int)v17 & 0x7FFFFFFF) < (unsigned int)v14 )
    {
      UserSetLastError(0LL, v14, v17, 0x7FFFFFFFLL);
      return v13;
    }
    v23[0] = 0;
    v24 = a4;
    if ( (v17 & 0x7FFFFFFF) != 0 )
    {
      v19 = ((int)v17 >> 31) + 2;
      v20 = v18 & 0x7FFFFFFF;
    }
    else
    {
      if ( !a4 )
        goto LABEL_12;
      v20 = ((unsigned __int64)(unsigned int)~(_DWORD)v17 >> 31) + 1;
      v19 = ((int)v17 >> 31) + 2;
    }
    ProbeForWrite(a4, v20, v19);
LABEL_12:
    v13 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _DWORD *, __int64))mpFnidPfn[v11])(a1, a2, a3, v23, a5);
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 28LL);
    if ( (v21 & 0x200) == 0 && (v21 & 0x30) != 0 )
      return a7 != 0 ? 8LL : 4LL;
  }
  return v13;
}
