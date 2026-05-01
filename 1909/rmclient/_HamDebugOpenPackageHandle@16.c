/*
 * XREFs of _HamDebugOpenPackageHandle@16 @ 0x100123A0
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

CLIENT_CALL_RETURN __stdcall HamDebugOpenPackageHandle(_DWORD *a1, int a2, PSID Sid, _DWORD *a4)
{
  ULONG v4; // eax
  CLIENT_CALL_RETURN v5; // edx
  _DWORD v7[3]; // [esp+10h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  v4 = RtlLengthSid(Sid);
  v5.Pointer = _NdrClientCall4(&stru_10001838, &byte_10003B22, *a1, a2, Sid, v4, v7).Pointer;
  v7[2] = v5.Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( v5.Simple >= 0 )
  {
    *a4 = v7[0];
    a4[1] = v7[1];
  }
  return v5;
}
