/*
 * XREFs of _HamIsHostBeingDebugged@12 @ 0x10012A10
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamIsHostBeingDebugged(_DWORD *a1, _DWORD *a2, _BYTE *a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  ULONG v6; // eax
  CLIENT_CALL_RETURN v7; // edx
  int v9; // [esp+18h] [ebp-20h]
  char v10; // [esp+1Fh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v10 = 0;
  ms_exc.registration.TryLevel = 0;
  v9 = a2[136];
  v3 = a2[137];
  v4 = a2[134];
  v5 = a2[133];
  v6 = RtlLengthSid(a2 + 116);
  v7.Pointer = _NdrClientCall4(&stru_10001688, &byte_1000337C, *a1, a2, a2 + 116, v6, v5, v4, v9, v3, &v10).Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( v7.Simple >= 0 )
    *a3 = v10;
  return v7;
}
