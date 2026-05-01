/*
 * XREFs of _HamCreateActivityEx@24 @ 0x1000ADC0
 * Callers:
 *     _HamCreateActivity@20 @ 0x1000A800 (_HamCreateActivity@20.c)
 * Callees:
 *     _HampIpcChannelObjectCompareObjectsForTree@8 @ 0x1000AFE0 (_HampIpcChannelObjectCompareObjectsForTree@8.c)
 */

CLIENT_CALL_RETURN __stdcall HamCreateActivityEx(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int *a6)
{
  _DWORD *Heap; // eax
  _DWORD *v7; // ebx
  CLIENT_CALL_RETURN result; // eax
  int v9; // esi
  int v10; // edi
  int v11; // ebx
  ULONG v12; // eax
  _DWORD *v13; // esi
  int v14; // edi
  unsigned int v15; // esi
  int v16; // edi
  unsigned int v17; // eax
  int v18; // [esp+10h] [ebp-38h] BYREF
  int v19; // [esp+14h] [ebp-34h]
  int v20; // [esp+1Ch] [ebp-2Ch]
  _DWORD *v21; // [esp+20h] [ebp-28h]
  int v22; // [esp+24h] [ebp-24h]
  _DWORD *v23; // [esp+28h] [ebp-20h]
  CLIENT_CALL_RETURN v24; // [esp+2Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v23 = 0;
  v18 = -1;
  v19 = -1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28u);
  v7 = Heap;
  v21 = Heap;
  if ( Heap )
  {
    Heap[9] = 0;
    *Heap = 0;
    Heap[1] = 0;
    Heap[2] = 0;
    Heap[3] = 0;
    Heap[4] = 0;
    Heap[5] = a1 + 3;
    Heap[8] = a2;
    Heap[6] = -1;
    Heap[7] = -1;
    v23 = Heap;
    result.Simple = 0;
  }
  else
  {
    result.Simple = -1073741801;
    v7 = v23;
    v21 = v23;
  }
  v24.Pointer = result.Pointer;
  if ( result.Simple >= 0 )
  {
    ms_exc.registration.TryLevel = 0;
    v20 = a3[136];
    v9 = a3[137];
    v10 = a3[134];
    v11 = a3[133];
    v12 = RtlLengthSid(a3 + 116);
    result.Pointer = _NdrClientCall4(
                       &stru_10001688,
                       &byte_10003100,
                       *a1,
                       a3,
                       a3 + 116,
                       v12,
                       v11,
                       v10,
                       v20,
                       v9,
                       a4,
                       a5,
                       &v18).Pointer;
    v24.Pointer = result.Pointer;
    ms_exc.registration.TryLevel = -2;
    v7 = v21;
    if ( result.Simple >= 0 )
    {
      v21[6] = v18;
      v7[7] = v19;
      v13 = (_DWORD *)v7[5];
      v21 = v13;
      v23 = v13 + 1;
      RtlAcquireSRWLockExclusive(v13 + 1);
      v13[2] = GetCurrentThreadId();
      v14 = v7[5] + 16;
      v20 = v14;
      v15 = *(_DWORD *)v14;
      if ( (*(_DWORD *)(v14 + 4) & 1) != 0 && v15 )
        v15 ^= v14;
      v16 = *(_DWORD *)(v14 + 4) & 1;
      LOBYTE(v22) = 0;
      if ( v15 )
      {
        while ( 1 )
        {
          if ( (int)HampIpcChannelObjectCompareObjectsForTree(v7, v15) < 0 )
          {
            v17 = *(_DWORD *)v15;
            if ( v16 )
            {
              if ( !v17 )
                goto LABEL_19;
              v17 ^= v15;
            }
            if ( !v17 )
            {
LABEL_19:
              LOBYTE(v22) = 0;
              break;
            }
          }
          else
          {
            v17 = *(_DWORD *)(v15 + 4);
            if ( v16 )
            {
              if ( !v17 )
                goto LABEL_20;
              v17 ^= v15;
            }
            if ( !v17 )
            {
LABEL_20:
              LOBYTE(v22) = 1;
              break;
            }
          }
          v15 = v17;
        }
      }
      RtlRbInsertNodeEx(v20, v15, v22, v7);
      v21[2] = 0;
      RtlReleaseSRWLockExclusive(v23);
      v7 = 0;
      *a6 = v18;
      a6[1] = v19;
      result.Simple = 0;
      v24.Simple = 0;
    }
  }
  if ( v7 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    return v24;
  }
  return result;
}
