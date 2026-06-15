/*
 * XREFs of ?Invoke@CAudioSessionVolumeChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180044800
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionVolumeChanged::Invoke(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi

  LOBYTE(a4) = *(_BYTE *)(a1 + 20);
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD))(**a2 + 40LL))(
         *a2,
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 24),
         a4,
         *(_QWORD *)(a1 + 24));
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**a2 + 16LL))(*a2, **a2);
  return v5;
}
