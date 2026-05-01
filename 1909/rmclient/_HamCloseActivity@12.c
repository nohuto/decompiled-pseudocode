/*
 * XREFs of _HamCloseActivity@12 @ 0x1000A970
 * Callers:
 *     <none>
 * Callees:
 *     _HampIpcChannelObjectComparePayloadForTree@8 @ 0x1000AD60 (_HampIpcChannelObjectComparePayloadForTree@8.c)
 */

CLIENT_CALL_RETURN __stdcall HamCloseActivity(_DWORD *a1, int a2, int a3)
{
  CLIENT_CALL_RETURN result; // eax
  unsigned int v4; // esi
  int v5; // edi
  int v6; // eax
  unsigned int v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // ecx
  int v10; // esi
  int v11; // eax
  _DWORD v12[17]; // [esp+10h] [ebp-60h] BYREF
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  result.Pointer = _NdrClientCall4(&stru_10001688, &byte_1000334C, *a1, a2, a3).Pointer;
  v12[16] = result.Pointer;
  ms_exc.registration.TryLevel = -2;
  if ( result.Simple >= 0 )
  {
    memset(&v12[5], 0, 44);
    v12[0] = a2;
    v12[1] = a3;
    v12[2] = 0;
    v12[3] = 0;
    v12[4] = 3;
    RtlAcquireSRWLockExclusive(a1 + 4);
    a1[5] = GetCurrentThreadId();
    v4 = a1[7];
    if ( (a1[8] & 1) != 0 && v4 )
      v4 ^= (unsigned int)(a1 + 7);
    v5 = a1[8] & 1;
    if ( v4 )
    {
      while ( 1 )
      {
        v6 = HampIpcChannelObjectComparePayloadForTree(v12, v4);
        if ( v6 >= 0 )
        {
          if ( v6 <= 0 )
          {
LABEL_10:
            if ( v4 )
            {
              RtlRbRemoveNode(a1 + 7, v4);
              v8 = (_DWORD *)(v4 + 12);
              v9 = (_DWORD *)a1[10];
              if ( (_DWORD *)*v9 != a1 + 9 )
                __fastfail(3u);
              *v8 = a1 + 9;
              v8[1] = v9;
              *v9 = v8;
              a1[10] = v8;
              v10 = a1[3];
              RtlAcquireSRWLockExclusive(v10 + 16);
              v11 = *(_DWORD *)(v10 + 36) | 2;
              *(_DWORD *)(v10 + 36) = v11;
              if ( (v11 & 1) == 0 )
              {
                *(_DWORD *)(v10 + 36) = v11 | 1;
                TpPostWork(*(_DWORD *)(v10 + 32));
              }
              RtlReleaseSRWLockExclusive(v10 + 16);
            }
            break;
          }
          v7 = *(_DWORD *)(v4 + 4);
          if ( v5 && v7 )
          {
LABEL_22:
            v4 ^= v7;
            goto LABEL_9;
          }
        }
        else
        {
          v7 = *(_DWORD *)v4;
          if ( v5 && v7 )
            goto LABEL_22;
        }
        v4 = v7;
LABEL_9:
        if ( !v4 )
          goto LABEL_10;
      }
    }
    a1[5] = 0;
    RtlReleaseSRWLockExclusive(a1 + 4);
    return 0;
  }
  return result;
}
