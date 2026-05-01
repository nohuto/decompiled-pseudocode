/*
 * XREFs of _HampIpcChannelWnfCallback@12 @ 0x1000AB50
 * Callers:
 *     <none>
 * Callees:
 *     _HampIpcChannelObjectComparePayloadForTree@8 @ 0x1000AD60 (_HampIpcChannelObjectComparePayloadForTree@8.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall HampIpcChannelWnfCallback(_DWORD *a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  _DWORD **v4; // ebx
  _DWORD *v5; // esi
  int result; // eax
  unsigned int v7; // esi
  BOOLEAN (__stdcall *v8)(int, int *, int); // eax
  int v9; // ecx
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  BOOLEAN (__stdcall *v12)(int, int *, int); // esi
  void (__thiscall *v13)(_DWORD, _DWORD *); // esi
  _DWORD *v14; // eax
  int v15; // eax
  unsigned int v16; // eax
  PVOID v17; // [esp-4h] [ebp-54h]
  _DWORD v18[2]; // [esp+Ch] [ebp-44h] BYREF
  __int64 v19; // [esp+14h] [ebp-3Ch]
  int v20; // [esp+1Ch] [ebp-34h]
  int v21; // [esp+20h] [ebp-30h]
  int v22; // [esp+24h] [ebp-2Ch]
  int v23; // [esp+28h] [ebp-28h]
  int v24; // [esp+2Ch] [ebp-24h]
  int v25; // [esp+30h] [ebp-20h]
  int v26; // [esp+34h] [ebp-1Ch]
  int v27; // [esp+38h] [ebp-18h]
  int v28; // [esp+3Ch] [ebp-14h]
  int v29; // [esp+40h] [ebp-10h]
  int v30; // [esp+44h] [ebp-Ch]
  int v31; // [esp+48h] [ebp-8h]
  PVOID P; // [esp+4Ch] [ebp-4h]

  RtlAcquireSRWLockExclusive(a1 + 1);
  CurrentThreadId = GetCurrentThreadId();
  v4 = (_DWORD **)(a1 + 6);
  while ( 1 )
  {
    a1[2] = CurrentThreadId;
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    v9 = *v5;
    if ( *(_DWORD **)(*v5 + 4) != v5 || (v10 = (_DWORD *)v5[1], (_DWORD *)*v10 != v5) )
      __fastfail(3u);
    *v10 = v9;
    *(_DWORD *)(v9 + 4) = v10;
    *v5 = 0;
    v5[1] = 0;
    a1[2] = 0;
    RtlReleaseSRWLockExclusive(a1 + 1);
    v11 = v5 - 3;
    v12 = (BOOLEAN (__stdcall *)(int, int *, int))a1[8];
    P = v11;
    if ( v12 == HampConnectionDeliverPayload )
    {
      v13 = (void (__thiscall *)(_DWORD, _DWORD *))a1[11];
      v18[0] = v11[6];
      v18[1] = v11[7];
      v19 = (int)v11[8];
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      v20 = 3;
      v13(v13, v18);
      v14 = P;
      v17 = P;
      *((_DWORD *)P + 6) = -1;
      v14[7] = -1;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
    }
    else
    {
      ((void (__thiscall *)(BOOLEAN (__stdcall *)(int, int *, int), _DWORD *, _DWORD *, _DWORD))v12)(v12, a1, v11, 0);
    }
    RtlAcquireSRWLockExclusive(a1 + 1);
    CurrentThreadId = GetCurrentThreadId();
  }
  a1[2] = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 1);
  if ( !a2 )
    return result;
  RtlAcquireSRWLockExclusive(a1 + 1);
  a1[2] = GetCurrentThreadId();
  v7 = a1[4];
  if ( (a1[5] & 1) != 0 && v7 )
    v7 ^= (unsigned int)(a1 + 4);
  P = (PVOID)(a1[5] & 1);
  if ( v7 )
  {
    while ( 1 )
    {
      v15 = HampIpcChannelObjectComparePayloadForTree(a2, v7);
      if ( v15 >= 0 )
      {
        if ( v15 <= 0 )
          goto LABEL_7;
        v16 = *(_DWORD *)(v7 + 4);
        if ( P && v16 )
        {
LABEL_29:
          v7 ^= v16;
          goto LABEL_22;
        }
      }
      else
      {
        v16 = *(_DWORD *)v7;
        if ( P && v16 )
          goto LABEL_29;
      }
      v7 = v16;
LABEL_22:
      if ( !v7 )
        goto LABEL_7;
    }
  }
  v7 = 0;
LABEL_7:
  a1[2] = 0;
  result = RtlReleaseSRWLockExclusive(a1 + 1);
  if ( v7 )
  {
    v8 = (BOOLEAN (__stdcall *)(int, int *, int))a1[8];
    P = v8;
    if ( v8 == HampConnectionDeliverPayload )
    {
      *(_QWORD *)(a2 + 8) = *(int *)(v7 + 32);
      return ((int (__thiscall *)(_DWORD, int))a1[11])(a1[11], a2);
    }
    else
    {
      return ((int (__thiscall *)(BOOLEAN (__stdcall *)(int, int *, int), _DWORD *, unsigned int, int))P)(
               v8,
               a1,
               v7,
               a2);
    }
  }
  return result;
}
