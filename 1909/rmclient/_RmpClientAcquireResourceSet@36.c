/*
 * XREFs of _RmpClientAcquireResourceSet@36 @ 0x100114D8
 * Callers:
 *     _RmAcquireResourceSetEx@36 @ 0x10011280 (_RmAcquireResourceSetEx@36.c)
 * Callees:
 *     _HampIpcChannelObjectCompareObjectsForTree@8 @ 0x1000AFE0 (_HampIpcChannelObjectCompareObjectsForTree@8.c)
 *     __SEH_prolog4 @ 0x1000CD8C (__SEH_prolog4.c)
 *     _RmpClientCallbackAllocate@28 @ 0x10011C12 (_RmpClientCallbackAllocate@28.c)
 */

CLIENT_CALL_RETURN __fastcall RmpClientAcquireResourceSet(
        int a1,
        int a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9)
{
  int v9; // esi
  CLIENT_CALL_RETURN v10; // edi
  int v11; // esi
  int v12; // edi
  int v13; // ebx
  ULONG v14; // eax
  _DWORD *v15; // edx
  int *v16; // eax
  int v17; // esi
  int v18; // eax
  int v20; // [esp+14h] [ebp-34h]
  int v21; // [esp+18h] [ebp-30h]
  int v22; // [esp+1Ch] [ebp-2Ch]
  int *v23; // [esp+1Ch] [ebp-2Ch]
  int v25; // [esp+20h] [ebp-28h]
  CLIENT_CALL_RETURN v26; // [esp+24h] [ebp-24h]
  int v27; // [esp+28h] [ebp-20h]
  PVOID P; // [esp+2Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v27 = a1;
  v9 = a1 + 12;
  v21 = a1 + 12;
  P = 0;
  v20 = 0;
  v10.Simple = RmpClientCallbackAllocate(a6, a7, -1, -1, &P);
  if ( v10.Simple >= 0 )
    v10.Simple = 0;
  v26.Pointer = v10.Pointer;
  if ( v10.Simple < 0 )
    goto LABEL_25;
  v20 = 1;
  RtlAcquireSRWLockExclusive(v9 + 4);
  *(_DWORD *)(v9 + 8) = GetCurrentThreadId();
  ms_exc.registration.TryLevel = 0;
  v22 = a5[136];
  v11 = a5[137];
  v12 = a5[134];
  v13 = a5[133];
  v14 = RtlLengthSid(a5 + 116);
  v10.Pointer = _NdrClientCall4(
                  &stru_10001928,
                  &byte_10003F38,
                  *(_DWORD *)(v27 + 8),
                  a2,
                  a3,
                  a4,
                  a5,
                  a5 + 116,
                  v14,
                  v13,
                  v12,
                  v22,
                  v11,
                  a9).Pointer;
  v26.Pointer = v10.Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( v10.Simple < 0 )
    goto LABEL_24;
  v15 = P;
  *((_DWORD *)P + 6) = *a9;
  v15[7] = a9[1];
  v16 = (int *)(v15[5] + 16);
  v23 = v16;
  v17 = *v16;
  if ( (*(_BYTE *)(v15[5] + 20) & 1) != 0 )
  {
    if ( v17 )
      v17 ^= (unsigned int)v16;
    else
      v17 = 0;
  }
  v25 = *(_BYTE *)(v15[5] + 20) & 1;
  LOBYTE(v27) = 0;
  if ( !v17 )
    goto LABEL_23;
  while ( 1 )
  {
    if ( HampIpcChannelObjectCompareObjectsForTree(v15, v17) >= 0 )
    {
      v18 = *(_DWORD *)(v17 + 4);
      if ( v25 )
      {
        if ( !v18 )
          goto LABEL_15;
        v18 ^= v17;
      }
      if ( !v18 )
      {
LABEL_15:
        LOBYTE(v27) = 1;
        goto LABEL_22;
      }
      goto LABEL_20;
    }
    v18 = *(_DWORD *)v17;
    if ( v25 )
    {
      if ( !v18 )
        break;
      v18 ^= v17;
    }
    if ( !v18 )
      break;
LABEL_20:
    v17 = v18;
    v15 = P;
  }
  LOBYTE(v27) = 0;
LABEL_22:
  v15 = P;
  v16 = v23;
LABEL_23:
  RtlRbInsertNodeEx(v16, v17, v27, v15);
  P = 0;
LABEL_24:
  v9 = v21;
LABEL_25:
  if ( v20 )
  {
    *(_DWORD *)(v9 + 8) = 0;
    RtlReleaseSRWLockExclusive(v9 + 4);
  }
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v26;
  }
  return v10;
}
