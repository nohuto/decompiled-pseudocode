/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C012F024
 * Callers:
 *     NtUserfnINLBOXSTRING @ 0x1C012EFE0 (NtUserfnINLBOXSTRING.c)
 *     NtUserfnINCBOXSTRING @ 0x1C015DAC0 (NtUserfnINCBOXSTRING.c)
 * Callees:
 *     NtUserfnINSTRINGNULL @ 0x1C008FEA0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINSTRING @ 0x1C012F110 (NtUserfnINSTRING.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _InBoxString(
        int a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        int a8)
{
  __int64 result; // rax
  unsigned int v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx
  int v14; // esi
  __int64 (__fastcall *v15)(int, int, int, int, __int64); // r11

  if ( (unsigned __int64)a2 - 2 > 0xFFFFFFFFFFFFFFFBuLL || !gptiCurrent )
    return -1LL;
  v11 = *(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL);
  if ( a1 == 678 )
  {
    v12 = 399;
    v13 = v11 >> 6;
  }
  else
  {
    v12 = 332;
    v13 = v11 >> 9;
  }
  v14 = *(_DWORD *)(gptiCurrent + 1412LL);
  if ( (v13 & 1) != 0 || (*(_DWORD *)(*((_QWORD *)a2 + 5) + 28LL) & 0x30) == 0 )
  {
    *(_DWORD *)(gptiCurrent + 1412LL) = 2;
    if ( a3 == v12 )
      result = NtUserfnINSTRINGNULL((__int64)a2, a3, a4, a5, a6, a7, a8);
    else
      result = NtUserfnINSTRING((_DWORD)a2, a3, a4, a5, a6, a7, a8);
    goto LABEL_9;
  }
  v15 = (__int64 (__fastcall *)(int, int, int, int, __int64))mpFnidPfn[((_BYTE)a7 + 6) & 0x1F];
  if ( v15 == xxxSendMessageFF || (char *)v15 == (char *)xxxWrapSendMessageBSM )
    return -1LL;
  *(_DWORD *)(gptiCurrent + 1412LL) = 1;
  result = v15((int)a2, a3, a4, a5, a6);
LABEL_9:
  *(_DWORD *)(gptiCurrent + 1412LL) = v14;
  return result;
}
