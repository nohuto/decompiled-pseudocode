/*
 * XREFs of ?SetWindowArrangement@CTrustedComponentForegroundControl@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z @ 0x1801429D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrustedComponentForegroundControl::SetWindowArrangement(
        CTrustedComponentForegroundControl *this,
        HWND a2,
        const struct tagRECT *a3,
        struct tagRECT *a4,
        unsigned int a5)
{
  return (*(__int64 (__fastcall **)(PVOID, HWND, const struct tagRECT *, struct tagRECT *, unsigned int))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[19].Ptr + 24LL))(
           CApplicationManagerUtility::g_pIAMGlobals[19].Ptr,
           a2,
           a3,
           a4,
           a5);
}
