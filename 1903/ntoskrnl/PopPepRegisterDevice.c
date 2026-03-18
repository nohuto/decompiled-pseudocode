/*
 * XREFs of PopPepRegisterDevice @ 0x14076FC28
 * Callers:
 *     PopFxRegisterDeviceWithPep @ 0x140191A9C (PopFxRegisterDeviceWithPep.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     PopPepComponentGetResidencyIdleState @ 0x1400B0830 (PopPepComponentGetResidencyIdleState.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     PopPepInsertDevice @ 0x140191B88 (PopPepInsertDevice.c)
 *     PopPepComponentGetLatencyIdleState @ 0x140191E14 (PopPepComponentGetLatencyIdleState.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

char __fastcall PopPepRegisterDevice(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  char v5; // bl
  unsigned int v9; // esi
  unsigned int v10; // r10d
  __int64 v11; // rdx
  unsigned int v12; // r11d
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r15
  __int64 v16; // r14
  char *PoolWithTag; // rax
  char *v18; // rdi
  char *v19; // r14
  char **v20; // r8
  char **v21; // rdx
  _BYTE *v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // r13d
  __int64 *v25; // rax
  char *v26; // rbp
  __int64 v27; // r15
  _BYTE *v28; // rax
  unsigned __int64 v29; // rdx
  char **v30; // rcx
  char *v31; // r8
  char *v32; // r11
  int v33; // eax
  int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // r9d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rcx
  char *v41; // [rsp+30h] [rbp-48h]
  __int64 v42; // [rsp+38h] [rbp-40h]
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
      v13 = *(_DWORD *)(*(_QWORD *)v11 + 28LL);
      if ( v13 <= 0 )
        break;
      v14 = v13 + v10;
      if ( v13 + v10 < v10 )
        break;
      ++v12;
      v11 += 8LL;
      v10 += v13;
      if ( v12 >= v9 )
      {
        v15 = 0LL;
        v16 = (int)(200 * v9 + 184);
        if ( v14 )
        {
          v15 = (int)(200 * v9 + 184);
          v16 += 24LL * v14;
        }
        Size = v16 + 60LL * (v9 + 1);
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x54706550u);
        v18 = PoolWithTag;
        if ( PoolWithTag )
        {
          DbgPrintEx(0x92u, 3u, "PopPep: register device (0x%p, %wZ)\n", PoolWithTag, a1);
          memset(v18, 0, Size);
          *((_QWORD *)v18 + 4) = a2;
          v41 = &v18[v15];
          v19 = &v18[v16];
          *((_QWORD *)v18 + 3) = *(_QWORD *)a3;
          KeInitializeEvent((PRKEVENT)(v18 + 40), NotificationEvent, 0);
          v20 = (char **)(v18 + 72);
          *((_DWORD *)v18 + 45) = v9;
          v21 = (char **)(v18 + 72);
          *((_DWORD *)v18 + 35) = v9;
          v18[136] = 1;
          v22 = &ActivityAttributes;
          v23 = 0LL;
          do
          {
            if ( v23 <= 5 && *v22 == 1 )
            {
              *v21 = v19;
              v19 += 20;
            }
            ++v23;
            ++v21;
            v22 += 136;
          }
          while ( (__int64)v22 < (__int64)&CmpLogExt );
          *((_QWORD *)v18 + 2) |= 1uLL;
          v24 = 0;
          v25 = (__int64 *)(a3 + 16);
          v42 = a3 + 16;
          v26 = v18 + 216;
          while ( 1 )
          {
            v27 = *v25;
            *((_DWORD *)v26 - 6) = v24;
            v28 = &ActivityAttributes;
            *((_DWORD *)v26 - 7) = 3;
            v29 = 0LL;
            v30 = v20;
            do
            {
              v31 = v19;
              if ( v29 <= 5 && *v28 == 1 )
                v31 = *v30;
              else
                v19 += 20;
              *(_QWORD *)&v26[-48LL - (_QWORD)v18 + (_QWORD)v30] = v31;
              ++v29;
              ++v30;
              v28 += 136;
            }
            while ( (__int64)v28 < (__int64)&CmpLogExt );
            KeInitializeEvent((PRKEVENT)v26, NotificationEvent, 0);
            v32 = v41;
            *((_QWORD *)v26 - 2) = *(_QWORD *)(v27 + 16);
            v33 = *(_DWORD *)(v27 + 28);
            *((_DWORD *)v26 + 39) = v33;
            v34 = v33 - 1;
            if ( (unsigned int)(v33 - 1) >= *(_DWORD *)(v27 + 24) )
              v34 = *(_DWORD *)(v27 + 24);
            *(_DWORD *)(v27 + 24) = v34;
            *((_QWORD *)v26 + 10) = -1LL;
            *((_DWORD *)v26 + 29) = v34;
            *((_QWORD *)v26 + 20) = v41;
            *((_QWORD *)v26 + 11) = 0LL;
            *((_QWORD *)v26 + 12) = 0LL;
            **((_DWORD **)v26 + 6) |= 4u;
            v35 = *(_DWORD *)(v27 + 28);
            if ( v35 > 1 )
            {
              *((_QWORD *)v18 + 2) &= ~1uLL;
              v35 = *(_DWORD *)(v27 + 28);
            }
            v36 = 0;
            if ( v35 )
              break;
LABEL_27:
            *((_DWORD *)v26 + 30) = 0;
            *((_DWORD *)v26 + 31) = PopPepComponentGetLatencyIdleState((__int64)(v26 - 32), *((_QWORD *)v26 + 10));
            *((_DWORD *)v26 + 32) = PopPepComponentGetResidencyIdleState(v38, *((_QWORD *)v26 + 11));
            ++v24;
            *((_DWORD *)v26 + 33) = *((_DWORD *)v26 + 39) - 1;
            *((_DWORD *)v26 + 34) = *((_DWORD *)v26 + 39) - 1;
            *((_DWORD *)v26 + 35) = *((_DWORD *)v26 + 39) - 1;
            v26 += 200;
            v25 = (__int64 *)(v42 + 8);
            v42 += 8LL;
            if ( v24 >= v9 )
            {
              v5 = 1;
              *a5 = v18;
              if ( a4 == 2 )
                v18[124] = 1;
              *((_DWORD *)v18 + 42) = 1;
              PopPepInsertDevice(v39, (__int64 *)v18);
              return v5;
            }
            v20 = (char **)(v18 + 72);
          }
          while ( v32 - v18 <= Size - 24 )
          {
            v37 = v36++;
            *(_QWORD *)v32 = *(_QWORD *)(*(_QWORD *)(v27 + 32) + 24 * v37);
            *((_QWORD *)v32 + 1) = *(_QWORD *)(*(_QWORD *)(v27 + 32) + 24 * v37 + 8);
            v32 += 24;
            v41 = v32;
            if ( v36 >= *(_DWORD *)(v27 + 28) )
              goto LABEL_27;
          }
          ExFreePoolWithTag(v18, 0x54706550u);
        }
        return v5;
      }
    }
  }
  return v5;
}
