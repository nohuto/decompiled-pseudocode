/*
 * XREFs of _HamCreateActivityForProcess@20 @ 0x1000B880
 * Callers:
 *     <none>
 * Callees:
 *     _HamIpcChannelAddCallback@4 @ 0x100072A0 (_HamIpcChannelAddCallback@4.c)
 *     _HampConnectionObjectCreate@12 @ 0x10007DC8 (_HampConnectionObjectCreate@12.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 */

int __stdcall HamCreateActivityForProcess(_DWORD *a1, int a2, int a3, int a4, int *a5)
{
  int result; // eax
  _DWORD *v6; // ecx
  int v7; // [esp+10h] [ebp-2Ch] BYREF
  int v8; // [esp+14h] [ebp-28h]
  int v9; // [esp+1Ch] [ebp-20h]
  PVOID P; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v7 = -1;
  v8 = -1;
  P = 0;
  result = HampConnectionObjectCreate(a2, (int)a1, &P);
  v9 = result;
  if ( result >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    result = _NdrClientCall4(&stru_10001688, &byte_10003160, *a1, a3, a4, &v7).Simple;
    v9 = result;
    ms_exc.registration.TryLevel = -2;
    if ( result >= 0 )
    {
      v6 = P;
      *((_DWORD *)P + 6) = v7;
      v6[7] = v8;
      HamIpcChannelAddCallback(v6);
      P = 0;
      *a5 = v7;
      a5[1] = v8;
      result = 0;
      v9 = 0;
    }
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v9;
  }
  return result;
}
