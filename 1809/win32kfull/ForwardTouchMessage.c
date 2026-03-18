/*
 * XREFs of ForwardTouchMessage @ 0x1C01CB5FC
 * Callers:
 *     NtUserPostMessage @ 0x1C00298E0 (NtUserPostMessage.c)
 *     NtUserfnTOUCH @ 0x1C0221180 (NtUserfnTOUCH.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z @ 0x1C01CA7F8 (-CreateValidTouchInputInfo@@YAPEAUHTOUCHINPUT__@@PEAUtagTHREADINFO@@IIQEAUtagTOUCHINPUT@@@Z.c)
 *     _FreeTouchInputInfo @ 0x1C01CB7C0 (_FreeTouchInputInfo.c)
 *     _PostMessageCheckIL @ 0x1C01CF480 (_PostMessageCheckIL.c)
 */

__int64 __fastcall ForwardTouchMessage(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        __int64 a3,
        unsigned __int64 a4,
        volatile void *Address,
        int a6,
        __int64 a7,
        unsigned int a8,
        _QWORD *a9)
{
  unsigned int v10; // r12d
  __int64 v13; // rsi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v15; // rdx
  struct HTOUCHINPUT__ *ValidTouchInputInfo; // rax
  struct HTOUCHINPUT__ *v17; // rsi
  unsigned int v18; // edi
  unsigned int v19; // ebx

  v10 = a3;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL || !Address || !a4 || a4 > 0xFFFFFFFF )
  {
    UserSetLastError(87LL, (__int64)a2, a3, a4);
    return 0LL;
  }
  v13 = (unsigned int)a4;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1);
  ProbeForRead(Address, 48 * v13, CurrentProcessWow64Process != 0 ? 1 : 4);
  ValidTouchInputInfo = CreateValidTouchInputInfo(a1, v15, v13, (struct tagTOUCHINPUT *const)Address);
  v17 = ValidTouchInputInfo;
  if ( !ValidTouchInputInfo )
    return 0LL;
  if ( a6 )
  {
    v18 = PostMessageCheckIL(a2, v10, a4, (__int64)ValidTouchInputInfo);
    v19 = a8;
  }
  else
  {
    v19 = a8;
    *a9 = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, struct HTOUCHINPUT__ *, __int64))mpFnidPfn[((_BYTE)a8 + 6) & 0x1F])(
            a2,
            v10,
            a4,
            ValidTouchInputInfo,
            a7);
    v18 = 1;
  }
  if ( !v18 || v19 >= 0x2AB && (v19 <= 0x2AC || v19 == 692) )
    FreeTouchInputInfo(v17, 1LL);
  return v18;
}
