/*
 * XREFs of ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01E8D80
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E8CB4 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

void __fastcall NormalAPCInvalidateCOMPOSITEDWnd(char *a1, void *a2, void *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 1;
  v6 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), v4, v5);
  if ( v6 && (*(_BYTE *)(*(_QWORD *)(v6 + 40) + 27LL) & 2) != 0 )
    InvalidateWEFCOMPOSITEDWindow((struct tagWND *)v6, (__m128i *)(a1 + 24));
  Win32FreePool(a1 - 88);
  UserSessionSwitchLeaveCrit(v7);
}
