/*
 * XREFs of PopProcessorParkMaskNotification @ 0x1402DAF90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopProcessorParkMaskNotification(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  __int64 v4; // rcx
  unsigned __int8 (__fastcall *v5)(__int64, __int64, __int64); // rax
  __int64 v6; // r9

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 )
    return 3221225474LL;
  v5 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(v2 + 104);
  if ( !v5 )
    return 3221225474LL;
  if ( *(_DWORD *)a2 )
  {
    do
    {
      v6 = v3++;
      *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16 * v6) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 16 * v6) + 72LL);
    }
    while ( v3 < *(_DWORD *)a2 );
    v5 = *(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(v2 + 104);
  }
  return v5(v4, 32LL, a2) == 0 ? 0xC00000BB : 0;
}
