/*
 * XREFs of PepNotifyQueryCoordinatedStates @ 0x1C0030B4C
 * Callers:
 *     RegisterKernelCoordinatedStates @ 0x1C0028C24 (RegisterKernelCoordinatedStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000DFC0 (memmove.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     ValidateCoordinatedDependencyOptions @ 0x1C0030398 (ValidateCoordinatedDependencyOptions.c)
 *     PepQueryName @ 0x1C0031140 (PepQueryName.c)
 */

__int64 __fastcall PepNotifyQueryCoordinatedStates(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbp
  SIZE_T v4; // rbx
  char *v5; // rdi
  _DWORD *v6; // r15
  unsigned int *PoolWithTag; // rax
  int v8; // ebx
  int v9; // ebx
  int v10; // r8d
  unsigned int v11; // r14d
  __int64 v12; // r9
  unsigned int *v13; // rdx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // esi
  int v17; // ebx
  SIZE_T v18; // r12
  char *v19; // rax
  unsigned int v20; // r12d
  char *v21; // r13
  char *v22; // r15
  char *v23; // rbx
  unsigned int *v24; // rsi
  unsigned int v25; // edx
  __int64 v26; // rcx
  SIZE_T v27; // r13
  unsigned int v28; // r12d
  _QWORD *v29; // rsi
  unsigned int v30; // r14d
  __int64 v31; // rax
  __int64 v32; // rcx
  int v33; // edx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  char v36; // dl
  __int64 v37; // r10
  _QWORD *v38; // rax
  unsigned int v39; // r8d
  __int64 v40; // r9
  _BYTE *v41; // rcx
  bool v42; // zf
  PVOID *v43; // rsi
  unsigned int *P; // [rsp+30h] [rbp-118h]
  char *v47; // [rsp+40h] [rbp-108h]
  _BYTE v49[176]; // [rsp+50h] [rbp-F8h] BYREF

  v2 = (unsigned int)dword_1C0013970;
  v4 = (unsigned int)(16 * dword_1C0013970 + 4);
  v5 = 0LL;
  v6 = 0LL;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x72637250u);
  P = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v4);
    *P = v2;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1104), 29LL, P);
    if ( v8 >= 0 )
    {
      v9 = 0;
      v10 = 0;
      v11 = 0;
      if ( (_DWORD)v2 )
      {
        v12 = v2;
        v13 = P + 4;
        do
        {
          v14 = *(v13 - 1);
          v15 = v11;
          v11 = *v13;
          v9 += v14;
          v13 += 4;
          v10 += v11 * v14;
          if ( v15 >= v11 )
            v11 = v15;
          --v12;
        }
        while ( v12 );
      }
      v16 = (224 * v2 + 55) & 0xFFFFFFF8;
      v17 = v16 + 16 * v9;
      v18 = (unsigned int)(v17 + 4 * v10);
      v19 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x72637250u);
      v47 = v19;
      v5 = v19;
      if ( !v19 )
        goto LABEL_10;
      memset(v19, 0, v18);
      v20 = 0;
      v21 = &v5[v16];
      v22 = &v5[v17];
      if ( (_DWORD)v2 )
      {
        v23 = v5 + 240;
        v24 = P + 3;
        do
        {
          KeInitializeAffinityEx(v23 - 192);
          v25 = 0;
          *(_DWORD *)v23 = *(v24 - 2);
          *((_DWORD *)v23 + 1) = *(v24 - 1);
          *((_DWORD *)v23 + 3) = *v24;
          *((_DWORD *)v23 + 2) = v24[1];
          *((_QWORD *)v23 + 3) = v21;
          v21 += 16 * *v24;
          if ( *v24 )
          {
            do
            {
              v26 = v25++;
              *(_QWORD *)(*((_QWORD *)v23 + 3) + 16 * v26 + 8) = v22;
              v22 += 4 * v24[1];
            }
            while ( v25 < *v24 );
          }
          PepQueryName(a1, v20++, 27LL, v23 - 24);
          v23 += 224;
          v24 += 4;
        }
        while ( v20 < (unsigned int)v2 );
        v5 = v47;
      }
      v27 = 4 * v11 + 24;
      v6 = ExAllocatePoolWithTag(NonPagedPoolNx, v27, 0x72637250u);
      if ( v6 )
      {
        v28 = 0;
        if ( (_DWORD)v2 )
        {
          v29 = v5 + 264;
          while ( 1 )
          {
            v30 = 0;
            if ( *((_DWORD *)v29 - 3) )
              break;
LABEL_27:
            memset(v49, 0, 0xA8uLL);
            KeCopyAffinityEx(v49, &unk_1C0013730);
            v35 = *((_DWORD *)v29 - 3);
            v36 = 0;
            if ( !v35 )
              goto LABEL_50;
            v37 = v35;
            v38 = (_QWORD *)(*v29 + 8LL);
            do
            {
              v39 = *((_DWORD *)v38 - 1);
              if ( v39 )
              {
                v40 = v39;
                v41 = (_BYTE *)(*v38 + 2LL);
                do
                {
                  v42 = *v41 == 0;
                  v41 += 4;
                  if ( !v42 )
                    v36 = 1;
                  --v40;
                }
                while ( v40 );
              }
              v38 += 2;
              --v37;
            }
            while ( v37 );
            if ( !v36 )
            {
LABEL_50:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_D(
                  (__int64)WPP_GLOBAL_Control->DeviceExtension,
                  2u,
                  1u,
                  0x57u,
                  (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids,
                  v28);
              v8 = -1073741811;
              goto LABEL_40;
            }
            if ( (unsigned int)KeIsEqualAffinityEx(v29 - 27, &unk_1C0013730) )
              *((_BYTE *)v29 - 8) = 1;
            ++v28;
            v29 += 28;
            if ( v28 >= (unsigned int)v2 )
              goto LABEL_39;
          }
          while ( 1 )
          {
            memset(v6, 0, v27);
            *v6 = v28;
            v6[1] = v30;
            v6[2] = *((_DWORD *)v29 - 4);
            v8 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))qword_1C00136D0)(*(_QWORD *)(a1 + 1104), v6);
            if ( v8 < 0 )
              break;
            v8 = ValidateCoordinatedDependencyOptions((__int64)v5, v28, v30, *((_DWORD *)v29 - 4), (__int64)v6);
            if ( v8 < 0 )
              break;
            v31 = *((_QWORD *)v6 + 2);
            v32 = *v29 + 16LL * v30;
            if ( v31 )
              v33 = *(_DWORD *)(v31 + 56);
            else
              v33 = -1;
            *(_DWORD *)v32 = v33;
            v34 = v6[3];
            *(_DWORD *)(v32 + 4) = v34;
            memmove(*(void **)(v32 + 8), v6 + 6, 4LL * v34);
            if ( ++v30 >= *((_DWORD *)v29 - 3) )
              goto LABEL_27;
          }
        }
        else
        {
LABEL_39:
          v8 = 0;
          *a2 = v5;
          v5 = 0LL;
        }
      }
      else
      {
LABEL_10:
        v8 = -1073741670;
      }
    }
LABEL_40:
    ExFreePoolWithTag(P, 0x72637250u);
    if ( v6 )
      ExFreePoolWithTag(v6, 0x72637250u);
    if ( v5 )
    {
      if ( (_DWORD)v2 )
      {
        v43 = (PVOID *)(v5 + 224);
        do
        {
          if ( *v43 )
            ExFreePoolWithTag(*v43, 0x72637250u);
          v43 += 28;
          --v2;
        }
        while ( v2 );
      }
      ExFreePoolWithTag(v5, 0x72637250u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v8;
}
