/*
 * XREFs of ?Invoke@CAudioStreamStateChanged@@UEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x18003E2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStreamStateChanged::Invoke(__int64 a1, _QWORD **a2)
{
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  unsigned int v6; // edi

  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    v4 = v3 + 8;
  else
    v4 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**a2 + 80LL))(
             *a2,
             *(_QWORD *)(a1 + 8),
             *(unsigned int *)(a1 + 16),
             *(unsigned int *)(a1 + 20),
             v4);
  v6 = result;
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**a2 + 16LL))(*a2, **a2);
    return v6;
  }
  return result;
}
