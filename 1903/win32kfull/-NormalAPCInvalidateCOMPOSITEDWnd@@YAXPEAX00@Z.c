/*
 * XREFs of ?NormalAPCInvalidateCOMPOSITEDWnd@@YAXPEAX00@Z @ 0x1C01E8F00
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ?InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z @ 0x1C01E8E34 (-InvalidateWEFCOMPOSITEDWindow@@YAHPEAUtagWND@@PEBUtagRECT@@@Z.c)
 */

void __fastcall NormalAPCInvalidateCOMPOSITEDWnd(char *a1, void *a2, void *a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 1;
  v7 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 2), v4, v5, v6);
  if ( v7 && (*(_BYTE *)(*(_QWORD *)(v7 + 40) + 27LL) & 2) != 0 )
    InvalidateWEFCOMPOSITEDWindow((struct tagWND *)v7, (__m128i *)(a1 + 24));
  Win32FreePool(a1 - 88);
  UserSessionSwitchLeaveCrit(v8);
}
