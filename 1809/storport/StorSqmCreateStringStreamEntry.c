/*
 * XREFs of StorSqmCreateStringStreamEntry @ 0x1C0053618
 * Callers:
 *     RaSqmLogAdapterStatistics @ 0x1C003C3D8 (RaSqmLogAdapterStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorSqmCreateStringStreamEntry(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 || !*a2 )
    a2 = L"(null)";
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)a1 = 2;
  return result;
}
