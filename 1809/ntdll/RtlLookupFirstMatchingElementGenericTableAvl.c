/*
 * XREFs of RtlLookupFirstMatchingElementGenericTableAvl @ 0x18008ABA0
 * Callers:
 *     <none>
 * Callees:
 *     RealPredecessor @ 0x18006BDBC (RealPredecessor.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall RtlLookupFirstMatchingElementGenericTableAvl(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  int v7; // eax
  _QWORD *v8; // rsi
  _QWORD *v9; // rax

  *a3 = 0LL;
  if ( !*(_DWORD *)(a1 + 44) )
    return 0LL;
  v6 = *(_QWORD **)(a1 + 16);
  while ( 1 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(a1 + 72))(a1, a2, v6 + 4);
    if ( v7 )
      break;
    v6 = (_QWORD *)v6[1];
LABEL_8:
    if ( !v6 )
      return 0LL;
  }
  if ( v7 == 1 )
  {
    v6 = (_QWORD *)v6[2];
    goto LABEL_8;
  }
  do
  {
    v8 = v6;
    v9 = RealPredecessor(v6);
    v6 = v9;
  }
  while ( v9 && (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD *))(a1 + 72))(a1, a2, v9 + 4) == 2 );
  *a3 = v8;
  return v8 + 4;
}
