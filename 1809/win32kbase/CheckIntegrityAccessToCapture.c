/*
 * XREFs of CheckIntegrityAccessToCapture @ 0x1C0150CB0
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::ValidateUIPI @ 0x1C0089FDC (_anonymous_namespace_--ValidateUIPI.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CheckIntegrityAccessToCapture(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // edi

  v2 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
  if ( !v2 )
    return 0;
  v3 = 1;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 2736), 1, 1)
    || !anonymous_namespace_::ValidateUIPI(a1, (_DWORD *)(v2 + 2552), (__int64 *)(v2 + 8)) )
  {
    return 0;
  }
  return v3;
}
