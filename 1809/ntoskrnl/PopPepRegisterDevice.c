/*
 * XREFs of PopPepRegisterDevice @ 0x1407258D0
 * Callers:
 *     PopFxRegisterDeviceWithPep @ 0x140179974 (PopFxRegisterDeviceWithPep.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     PopPepComponentGetResidencyIdleState @ 0x1401000F0 (PopPepComponentGetResidencyIdleState.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     PopPepInsertDevice @ 0x140179870 (PopPepInsertDevice.c)
 *     PopPepComponentGetLatencyIdleState @ 0x140179948 (PopPepComponentGetLatencyIdleState.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char __fastcall PopPepRegisterDevice(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  char v5; // bl
  unsigned int v9; // esi
  unsigned int v10; // r10d
  __int64 v11; // rdx
  unsigned int v12; // r11d
  unsigned int v13; // r8d
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r15
  __int64 v18; // r14
  char *PoolWithTag; // rax
  char *v20; // rdi
  char *v21; // r14
  char **v22; // r8
  char **v23; // rdx
  _BYTE *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned int v26; // r13d
  __int64 *v27; // rax
  char *v28; // rbp
  __int64 v29; // r15
  _BYTE *v30; // rax
  unsigned __int64 v31; // rdx
  char **v32; // rcx
  char *v33; // r8
  char *v34; // r11
  int v35; // eax
  int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // r9d
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  char *v43; // [rsp+30h] [rbp-48h]
  __int64 v44; // [rsp+38h] [rbp-40h]
  size_t Size; // [rsp+90h] [rbp+18h]

  v5 = 0;
  *a5 = 0LL;
  v9 = *(_DWORD *)(a3 + 8);
  if ( v9 )
  {
    v10 = 0;
    v11 = a3 + 16;
    v12 = 0;
    while ( 1 )
    {
      v13 = v10;
      v14 = *(_DWORD *)(*(_QWORD *)v11 + 28LL);
      if ( v14 <= 0 )
        break;
      v15 = v10 + v14;
      v16 = -1;
      if ( v15 >= v10 )
        v16 = v15;
      v10 = v16;
      if ( v15 < v13 )
        break;
      ++v12;
      v11 += 8LL;
      if ( v12 >= v9 )
      {
        v17 = 0LL;
        v18 = (int)(200 * v9 + 184);
        if ( v16 )
        {
          v17 = (int)(200 * v9 + 184);
          v18 += 24LL * v16;
        }
        Size = v18 + 60LL * (v9 + 1);
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x54706550u);
        v20 = PoolWithTag;
        if ( PoolWithTag )
        {
          DbgPrintEx(0x92u, 3u, "PopPep: register device (0x%p, %wZ)\n", PoolWithTag, a1);
          memset(v20, 0, Size);
          *((_QWORD *)v20 + 4) = a2;
          v43 = &v20[v17];
          v21 = &v20[v18];
          *((_QWORD *)v20 + 3) = *(_QWORD *)a3;
          KeInitializeEvent((PRKEVENT)(v20 + 40), NotificationEvent, 0);
          v22 = (char **)(v20 + 72);
          *((_DWORD *)v20 + 45) = v9;
          v23 = (char **)(v20 + 72);
          *((_DWORD *)v20 + 35) = v9;
          v20[136] = 1;
          v24 = &ActivityAttributes;
          v25 = 0LL;
          do
          {
            if ( v25 <= 5 && *v24 == 1 )
            {
              *v23 = v21;
              v21 += 20;
            }
            ++v25;
            ++v23;
            v24 += 136;
          }
          while ( (__int64)v24 < (__int64)AlpcHandleDataType );
          *((_QWORD *)v20 + 2) |= 1uLL;
          v26 = 0;
          v27 = (__int64 *)(a3 + 16);
          v44 = a3 + 16;
          v28 = v20 + 216;
          while ( 1 )
          {
            v29 = *v27;
            *((_DWORD *)v28 - 6) = v26;
            v30 = &ActivityAttributes;
            *((_DWORD *)v28 - 7) = 3;
            v31 = 0LL;
            v32 = v22;
            do
            {
              v33 = v21;
              if ( v31 <= 5 && *v30 == 1 )
                v33 = *v32;
              else
                v21 += 20;
              *(_QWORD *)&v28[-48LL - (_QWORD)v20 + (_QWORD)v32] = v33;
              ++v31;
              ++v32;
              v30 += 136;
            }
            while ( (__int64)v30 < (__int64)AlpcHandleDataType );
            KeInitializeEvent((PRKEVENT)v28, NotificationEvent, 0);
            v34 = v43;
            *((_QWORD *)v28 - 2) = *(_QWORD *)(v29 + 16);
            v35 = *(_DWORD *)(v29 + 28);
            *((_DWORD *)v28 + 39) = v35;
            v36 = v35 - 1;
            if ( (unsigned int)(v35 - 1) >= *(_DWORD *)(v29 + 24) )
              v36 = *(_DWORD *)(v29 + 24);
            *(_DWORD *)(v29 + 24) = v36;
            *((_QWORD *)v28 + 10) = -1LL;
            *((_DWORD *)v28 + 29) = v36;
            *((_QWORD *)v28 + 20) = v43;
            *((_QWORD *)v28 + 11) = 0LL;
            *((_QWORD *)v28 + 12) = 0LL;
            **((_DWORD **)v28 + 6) |= 4u;
            v37 = *(_DWORD *)(v29 + 28);
            if ( v37 > 1 )
            {
              *((_QWORD *)v20 + 2) &= ~1uLL;
              v37 = *(_DWORD *)(v29 + 28);
            }
            v38 = 0;
            if ( v37 )
              break;
LABEL_29:
            *((_DWORD *)v28 + 30) = 0;
            *((_DWORD *)v28 + 31) = PopPepComponentGetLatencyIdleState((__int64)(v28 - 32), *((_QWORD *)v28 + 10));
            *((_DWORD *)v28 + 32) = PopPepComponentGetResidencyIdleState(v40, *((_QWORD *)v28 + 11));
            ++v26;
            *((_DWORD *)v28 + 33) = *((_DWORD *)v28 + 39) - 1;
            *((_DWORD *)v28 + 34) = *((_DWORD *)v28 + 39) - 1;
            *((_DWORD *)v28 + 35) = *((_DWORD *)v28 + 39) - 1;
            v28 += 200;
            v27 = (__int64 *)(v44 + 8);
            v44 += 8LL;
            if ( v26 >= v9 )
            {
              v5 = 1;
              *a5 = v20;
              if ( a4 == 2 )
                v20[124] = 1;
              *((_DWORD *)v20 + 42) = 1;
              PopPepInsertDevice(v41, (__int64 *)v20);
              return v5;
            }
            v22 = (char **)(v20 + 72);
          }
          while ( v34 - v20 <= Size - 24 )
          {
            v39 = v38++;
            *(_QWORD *)v34 = *(_QWORD *)(*(_QWORD *)(v29 + 32) + 24 * v39);
            *((_QWORD *)v34 + 1) = *(_QWORD *)(*(_QWORD *)(v29 + 32) + 24 * v39 + 8);
            v34 += 24;
            v43 = v34;
            if ( v38 >= *(_DWORD *)(v29 + 28) )
              goto LABEL_29;
          }
          ExFreePoolWithTag(v20, 0x54706550u);
        }
        return v5;
      }
    }
  }
  return v5;
}
