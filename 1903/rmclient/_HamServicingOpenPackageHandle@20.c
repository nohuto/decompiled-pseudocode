/*
 * XREFs of _HamServicingOpenPackageHandle@20 @ 0x10005700
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamServicingOpenPackageHandle(_DWORD *a1, int a2, int a3, PSID Sid, _DWORD *a5)
{
  ULONG v5; // eax
  CLIENT_CALL_RETURN v6; // edx
  _DWORD v8[3]; // [esp+10h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  v5 = RtlLengthSid(Sid);
  v6.Pointer = _NdrClientCall4(&stru_10001050, &byte_100024AC, *a1, a2, a3, Sid, v5, v8).Pointer;
  v8[2] = v6.Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( v6.Simple >= 0 )
  {
    *a5 = v8[0];
    a5[1] = v8[1];
  }
  return v6;
}
