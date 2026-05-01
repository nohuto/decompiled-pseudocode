/*
 * XREFs of _RmpClientWnfMessageQueueWorker@12 @ 0x10006350
 * Callers:
 *     <none>
 * Callees:
 *     _HampIpcChannelObjectComparePayloadForTree@8 @ 0x1000AD60 (_HampIpcChannelObjectComparePayloadForTree@8.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __stdcall RmpClientWnfMessageQueueWorker(int a1, int a2, int a3)
{
  _DWORD *v3; // edi
  void **v4; // ebx
  void **v5; // esi
  int v6; // eax
  void **v8; // eax
  int (__stdcall *v9)(int, int, int); // ecx
  int v10; // eax
  _DWORD *v11; // edi
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // edi
  int (__stdcall *v18)(int, int, int); // eax
  int v19; // esi
  _DWORD *v20; // ecx
  _DWORD **v21; // eax
  _DWORD *v22; // esi
  int v23; // edx
  _DWORD *v24; // ecx
  int (__stdcall *v25)(int, PVOID, int); // eax
  _DWORD *v26; // ecx
  void (__thiscall *v27)(_DWORD, _DWORD *); // edi
  _DWORD *v28; // eax
  int v29; // edx
  _DWORD *v30; // eax
  _DWORD *v31; // edx
  int (__stdcall *v32)(int, PVOID, int); // esi
  void (__thiscall *v33)(_DWORD, _DWORD *); // ecx
  _DWORD *v34; // eax
  DWORD CurrentThreadId; // eax
  int v36; // eax
  unsigned int v37; // eax
  _DWORD *v38; // ecx
  int (__stdcall *v39)(int, PVOID, int); // edx
  PVOID v40; // [esp-4h] [ebp-A4h]
  PVOID v41; // [esp-4h] [ebp-A4h]
  void (__thiscall *v42)(_DWORD, _DWORD, _DWORD, _DWORD); // [esp-4h] [ebp-A4h]
  _DWORD v43[2]; // [esp+Ch] [ebp-94h] BYREF
  __int64 v44; // [esp+14h] [ebp-8Ch]
  int v45; // [esp+1Ch] [ebp-84h]
  int v46; // [esp+20h] [ebp-80h]
  int v47; // [esp+24h] [ebp-7Ch]
  int v48; // [esp+28h] [ebp-78h]
  int v49; // [esp+2Ch] [ebp-74h]
  int v50; // [esp+30h] [ebp-70h]
  int v51; // [esp+34h] [ebp-6Ch]
  int v52; // [esp+38h] [ebp-68h]
  int v53; // [esp+3Ch] [ebp-64h]
  int v54; // [esp+40h] [ebp-60h]
  int v55; // [esp+44h] [ebp-5Ch]
  int v56; // [esp+48h] [ebp-58h]
  _DWORD v57[2]; // [esp+4Ch] [ebp-54h] BYREF
  __int64 v58; // [esp+54h] [ebp-4Ch]
  int v59; // [esp+5Ch] [ebp-44h]
  int v60; // [esp+60h] [ebp-40h]
  int v61; // [esp+64h] [ebp-3Ch]
  int v62; // [esp+68h] [ebp-38h]
  int v63; // [esp+6Ch] [ebp-34h]
  int v64; // [esp+70h] [ebp-30h]
  int v65; // [esp+74h] [ebp-2Ch]
  int v66; // [esp+78h] [ebp-28h]
  int v67; // [esp+7Ch] [ebp-24h]
  int v68; // [esp+80h] [ebp-20h]
  int v69; // [esp+84h] [ebp-1Ch]
  int v70; // [esp+88h] [ebp-18h]
  int (__stdcall *v71)(int, PVOID, int); // [esp+8Ch] [ebp-14h]
  PVOID v72; // [esp+90h] [ebp-10h]
  void (__thiscall *v73)(_DWORD, _DWORD, _DWORD, _DWORD); // [esp+94h] [ebp-Ch]
  PVOID P; // [esp+98h] [ebp-8h]
  _DWORD *v75; // [esp+9Ch] [ebp-4h]

  v3 = (_DWORD *)a2;
  RtlAcquireSRWLockExclusive(a2 + 16);
  v4 = (void **)(a2 + 8);
  while ( 1 )
  {
    v5 = (void **)*v4;
    v6 = v3[9];
    if ( *v4 == v4 && (v6 & 2) == 0 )
      break;
    if ( (v6 & 2) != 0 )
    {
      v5 = 0;
      v3[9] = v6 & 0xFFFFFFFD;
    }
    else
    {
      if ( v5 == v4 || v5[1] != v4 || (v8 = (void **)*v5, *((void ***)*v5 + 1) != v5) )
LABEL_63:
        __fastfail(3u);
      *v4 = v8;
      v8[1] = v4;
      *v5 = 0;
      v5[1] = 0;
    }
    RtlReleaseSRWLockExclusive(v3 + 4);
    if ( v5 )
    {
      v9 = (int (__stdcall *)(int, int, int))v3[5];
      v10 = v3[1];
      v75 = (_DWORD *)v10;
      v73 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))v9;
      if ( v9 == HampIpcChannelWnfCallback )
      {
        v11 = (_DWORD *)v10;
        v12 = (_DWORD *)(v10 + 4);
        v73 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))v12;
        while ( 1 )
        {
          RtlAcquireSRWLockExclusive(v12);
          v11[2] = GetCurrentThreadId();
          v13 = (_DWORD *)v11[6];
          P = v13;
          if ( v13 == v11 + 6 )
            break;
          v23 = *v13;
          if ( *(_DWORD **)(*v13 + 4) != v13 )
            goto LABEL_63;
          v24 = (_DWORD *)v13[1];
          if ( (_DWORD *)*v24 != v13 )
            goto LABEL_63;
          *v24 = v23;
          *(_DWORD *)(v23 + 4) = v24;
          *v13 = 0;
          v13[1] = 0;
          v11[2] = 0;
          RtlReleaseSRWLockExclusive(v11 + 1);
          v25 = (int (__stdcall *)(int, PVOID, int))v11[8];
          v26 = (char *)P - 12;
          P = (char *)P - 12;
          v71 = v25;
          if ( v25 == HampConnectionDeliverPayload )
          {
            v27 = (void (__thiscall *)(_DWORD, _DWORD *))v11[11];
            v43[0] = v26[6];
            v43[1] = v26[7];
            v44 = (int)v26[8];
            v46 = 0;
            v47 = 0;
            v48 = 0;
            v49 = 0;
            v50 = 0;
            v51 = 0;
            v52 = 0;
            v53 = 0;
            v54 = 0;
            v55 = 0;
            v56 = 0;
            v45 = 3;
            v27(v27, v43);
            v28 = P;
            v40 = P;
            *((_DWORD *)P + 6) = -1;
            v28[7] = -1;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v40);
            v11 = v75;
          }
          else
          {
            ((void (__thiscall *)(int (__stdcall *)(int, PVOID, int), _DWORD *, _DWORD *, _DWORD))v71)(v25, v11, v26, 0);
          }
          v12 = v11 + 1;
        }
        v11[2] = 0;
        RtlReleaseSRWLockExclusive(v11 + 1);
        if ( v5 != (void **)-12 )
        {
          RtlAcquireSRWLockExclusive(v11 + 1);
          v11[2] = GetCurrentThreadId();
          v14 = (unsigned int)(v11 + 4);
          v15 = v11[5];
          v16 = v11[4];
          if ( (v15 & 1) != 0 && v16 )
            v16 ^= v14;
          v72 = (PVOID)(v15 & 1);
          if ( !v16 )
          {
            v16 = 0;
LABEL_55:
            v42 = v73;
            v75[2] = 0;
            RtlReleaseSRWLockExclusive(v42);
            if ( v16 )
            {
              v38 = v75;
              v39 = (int (__stdcall *)(int, PVOID, int))v75[8];
              v73 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD))v39;
              if ( v39 == HampConnectionDeliverPayload )
              {
                *(_QWORD *)(v5 + 5) = *(int *)(v16 + 32);
                ((void (__thiscall *)(_DWORD, void **))v38[11])(v38[11], v5 + 3);
              }
              else
              {
                v73(v39, v75, v16, v5 + 3);
              }
            }
            goto LABEL_23;
          }
          while ( 2 )
          {
            v36 = HampIpcChannelObjectComparePayloadForTree(v5 + 3, v16);
            if ( v36 >= 0 )
            {
              if ( v36 <= 0 )
                goto LABEL_55;
              v37 = *(_DWORD *)(v16 + 4);
              if ( !v72 || !v37 )
                goto LABEL_50;
LABEL_47:
              v16 ^= v37;
            }
            else
            {
              v37 = *(_DWORD *)v16;
              if ( v72 && v37 )
                goto LABEL_47;
LABEL_50:
              v16 = v37;
            }
            if ( !v16 )
              goto LABEL_55;
            continue;
          }
        }
LABEL_23:
        v3 = (_DWORD *)a2;
      }
      else
      {
        if ( v9 == HampConnectionDeliverStateChangePayload )
        {
          (*(void (__thiscall **)(_DWORD, void **, _DWORD))(v10 + 56))(
            *(_DWORD *)(v10 + 56),
            v5 + 3,
            *(_DWORD *)(v10 + 60));
          goto LABEL_23;
        }
        ((void (__stdcall *)(int, void **, void *))v73)(v10, v5 + 3, v5[2]);
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      goto LABEL_25;
    }
    v18 = (int (__stdcall *)(int, int, int))v3[5];
    v19 = v3[1];
    v75 = (_DWORD *)v19;
    P = v18;
    if ( v18 == HampIpcChannelWnfCallback )
    {
      v71 = (int (__stdcall *)(int, PVOID, int))(v19 + 4);
      RtlAcquireSRWLockExclusive(v19 + 4);
      *(_DWORD *)(v19 + 8) = GetCurrentThreadId();
      v20 = (_DWORD *)v19;
      v21 = (_DWORD **)(v19 + 24);
      for ( P = (PVOID)(v19 + 24); ; v21 = (_DWORD **)P )
      {
        v22 = *v21;
        if ( *v21 == v21 )
          break;
        v29 = *v22;
        if ( *(_DWORD **)(*v22 + 4) != v22 )
          goto LABEL_63;
        v30 = (_DWORD *)v22[1];
        if ( (_DWORD *)*v30 != v22 )
          goto LABEL_63;
        *v30 = v29;
        *(_DWORD *)(v29 + 4) = v30;
        *v22 = 0;
        v22[1] = 0;
        v20[2] = 0;
        RtlReleaseSRWLockExclusive(v20 + 1);
        v31 = v22 - 3;
        v72 = v22 - 3;
        v32 = (int (__stdcall *)(int, PVOID, int))v75[8];
        if ( v32 == HampConnectionDeliverPayload )
        {
          v33 = (void (__thiscall *)(_DWORD, _DWORD *))v75[11];
          v57[0] = v31[6];
          v57[1] = v31[7];
          v58 = (int)v31[8];
          v60 = 0;
          v61 = 0;
          v62 = 0;
          v63 = 0;
          v64 = 0;
          v65 = 0;
          v66 = 0;
          v67 = 0;
          v68 = 0;
          v69 = 0;
          v70 = 0;
          v59 = 3;
          v33(v33, v57);
          v34 = v72;
          v41 = v72;
          *((_DWORD *)v72 + 6) = -1;
          v34[7] = -1;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v41);
        }
        else
        {
          ((void (__thiscall *)(int (__stdcall *)(int, PVOID, int), _DWORD *, _DWORD *, _DWORD))v32)(v32, v75, v31, 0);
        }
        RtlAcquireSRWLockExclusive(v71);
        CurrentThreadId = GetCurrentThreadId();
        v20 = v75;
        v75[2] = CurrentThreadId;
      }
      v20[2] = 0;
      RtlReleaseSRWLockExclusive(v20 + 1);
      RtlAcquireSRWLockExclusive(v3 + 4);
    }
    else
    {
      ((void (__thiscall *)(int (__stdcall *)(int, int, int), int, _DWORD, _DWORD))P)(v18, v19, 0, 0);
LABEL_25:
      RtlAcquireSRWLockExclusive(v3 + 4);
    }
  }
  v3[9] = v6 & 0xFFFFFFFE;
  return RtlReleaseSRWLockExclusive(v3 + 4);
}
