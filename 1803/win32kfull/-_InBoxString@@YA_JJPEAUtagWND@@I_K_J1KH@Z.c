/*
 * XREFs of ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C00E6264
 * Callers:
 *     NtUserfnINLBOXSTRING @ 0x1C00E6220 (NtUserfnINLBOXSTRING.c)
 *     NtUserfnINCBOXSTRING @ 0x1C0134AD0 (NtUserfnINCBOXSTRING.c)
 * Callees:
 *     NtUserfnINSTRINGNULL @ 0x1C00E6360 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINSTRING @ 0x1C00E6470 (NtUserfnINSTRING.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall _InBoxString(
        int a1,
        struct tagWND *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        int a8)
{
  __int64 result; // rax
  __int64 v11; // rax
  int v12; // eax
  int v13; // r8d
  bool v14; // dl
  bool v15; // zf
  int v16; // esi
  __int64 (__fastcall *v17)(int, int, int, int, __int64); // r11

  if ( (unsigned __int64)a2 - 2 > 0xFFFFFFFFFFFFFFFBuLL || !gptiCurrent )
    return -1LL;
  v11 = *((_QWORD *)a2 + 5);
  if ( a1 == 678 )
  {
    v12 = *(_DWORD *)(v11 + 28);
    v13 = 399;
    v14 = (v12 & 0x40) != 0;
    v15 = (v12 & 0x30) == 0;
  }
  else
  {
    v13 = 332;
    v14 = (*(_DWORD *)(v11 + 28) & 0x200) != 0;
    v15 = (*(_DWORD *)(v11 + 28) & 0x30) == 0;
  }
  v16 = *(_DWORD *)(gptiCurrent + 1396LL);
  if ( v14 || v15 )
  {
    *(_DWORD *)(gptiCurrent + 1396LL) = 2;
    if ( a3 == v13 )
      result = NtUserfnINSTRINGNULL((_DWORD)a2, a3, a4, a5, a6, a7, a8);
    else
      result = NtUserfnINSTRING((_DWORD)a2, a3, a4, a5, a6, a7, a8);
    goto LABEL_9;
  }
  v17 = (__int64 (__fastcall *)(int, int, int, int, __int64))mpFnidPfn[((_BYTE)a7 + 6) & 0x1F];
  if ( v17 == xxxSendMessageFF || (char *)v17 == (char *)xxxWrapSendMessageBSM )
    return -1LL;
  *(_DWORD *)(gptiCurrent + 1396LL) = 1;
  result = v17((int)a2, a3, a4, a5, a6);
LABEL_9:
  *(_DWORD *)(gptiCurrent + 1396LL) = v16;
  return result;
}
