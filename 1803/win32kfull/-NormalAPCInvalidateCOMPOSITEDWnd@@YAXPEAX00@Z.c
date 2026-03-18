/*
 * XREFs of ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01B1260
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01B11A4 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

void __fastcall NormalAPCInvalidateCOMPOSITEDWnd(char *a1, void *a2, void *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 1;
  v5 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), v4);
  if ( v5 && (*(_BYTE *)(*(_QWORD *)(v5 + 40) + 27LL) & 2) != 0 )
    InvalidateWEFCOMPOSITEDWindow((struct tagWND *)v5, (__m128i *)(a1 + 24));
  Win32FreePool(a1 - 88);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
}
