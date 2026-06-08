/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C003896C
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C003418C (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     DecodeAcpiIdleState @ 0x1C0003EA0 (DecodeAcpiIdleState.c)
 *     memset @ 0x1C00046C0 (memset.c)
 *     ValidateCoordinatedLpiDependenciesProcessor @ 0x1C002D914 (ValidateCoordinatedLpiDependenciesProcessor.c)
 *     ValidateCoordinatedLpiStates @ 0x1C002DA00 (ValidateCoordinatedLpiStates.c)
 *     LpiEnumerateDependencies @ 0x1C0038534 (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(
        __int64 a1,
        unsigned int *a2,
        unsigned int **a3,
        _QWORD *a4,
        _QWORD *a5)
{
  char *v6; // r13
  __int64 v7; // rdx
  int v8; // ebx
  _DWORD *PoolWithTag; // r12
  int v10; // edx
  unsigned int v11; // esi
  int v12; // r15d
  __int64 v13; // rdi
  size_t v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ebx
  unsigned int v18; // r15d
  unsigned int *v19; // rax
  unsigned int *v20; // rdi
  char *v21; // rax
  __int64 v22; // r8
  __int64 v23; // rbx
  _DWORD *v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  char *v30; // rsi
  int v31; // eax
  char v32; // al
  __int64 v33; // rcx
  char *v34; // rdx
  int v35; // r14d
  unsigned int v36; // esi
  unsigned int *v37; // r15
  _DWORD *v38; // rdx
  unsigned __int16 v40; // r9
  int v41; // [rsp+68h] [rbp-81h]
  unsigned int i; // [rsp+68h] [rbp-81h]
  unsigned int v43; // [rsp+6Ch] [rbp-7Dh]
  unsigned int v44; // [rsp+6Ch] [rbp-7Dh]
  size_t Size; // [rsp+70h] [rbp-79h]
  SIZE_T Sizea; // [rsp+70h] [rbp-79h]
  size_t Sizeb; // [rsp+70h] [rbp-79h]
  unsigned int v48; // [rsp+78h] [rbp-71h] BYREF
  __int64 v49; // [rsp+80h] [rbp-69h] BYREF
  _DWORD *v50; // [rsp+88h] [rbp-61h] BYREF
  __int64 v51; // [rsp+90h] [rbp-59h]
  unsigned int *v52; // [rsp+98h] [rbp-51h]
  _OWORD v53[9]; // [rsp+A8h] [rbp-41h] BYREF

  memset(v53, 0, 0x58uLL);
  v6 = 0LL;
  v8 = ValidateCoordinatedLpiStates((_DWORD *)qword_1C001B920, v7);
  if ( v8 >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * *a2, 0x72637250u);
    if ( PoolWithTag )
    {
      v10 = 0;
      v11 = 0;
      v12 = 0;
      v41 = 0;
      v13 = 0LL;
      if ( *a2 )
      {
        while ( 1 )
        {
          PoolWithTag[v13] = v11;
          v14 = *(_QWORD *)&a2[10 * v13 + 6];
          Size = v14;
          if ( v14 )
          {
            v15 = *(_DWORD *)(v14 + 16);
            v16 = 0;
            v11 += v15;
            v43 = 0;
            if ( v15 )
              break;
          }
LABEL_9:
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= *a2 )
            goto LABEL_10;
        }
        while ( 1 )
        {
          v8 = LpiEnumerateDependencies(
                 a2,
                 v13,
                 v16,
                 (__int64)PoolWithTag,
                 0LL,
                 &v49,
                 &v48,
                 (unsigned int *)&v50,
                 0LL,
                 0LL,
                 0LL);
          if ( v8 < 0 )
            break;
          v10 = v48 + v41;
          v16 = v43 + 1;
          v12 += v49;
          v41 += v48;
          v43 = v16;
          if ( v16 >= *(_DWORD *)(Size + 16) )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_10:
        v17 = (224 * v11 + 55) & 0xFFFFFFF8;
        v18 = v17 + 16 * v12;
        Sizea = v18 + 4 * v10;
        v19 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, Sizea, 0x72637250u);
        v20 = v19;
        if ( v19 )
        {
          memset(v19, 0, Sizea);
          v21 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 56LL * v11, 0x72637250u);
          v6 = v21;
          if ( v21 )
          {
            memset(v21, 0, 56LL * v11);
            v22 = v17;
            v23 = 0LL;
            v24 = (unsigned int *)((char *)v20 + v22);
            *v20 = v11;
            v50 = v24;
            v49 = (__int64)v20 + v18;
            v44 = 0;
            if ( *a2 )
            {
              do
              {
                v25 = (unsigned int)v23;
                v26 = *(_QWORD *)&a2[10 * v23 + 6];
                if ( v26 )
                {
                  v27 = 0LL;
                  for ( i = 0; (unsigned int)v27 < *(_DWORD *)(v26 + 16); i = v27 )
                  {
                    v28 = 5 * v27;
                    v29 = (unsigned int)(PoolWithTag[v25] + v27);
                    v28 *= 16LL;
                    v51 = v28;
                    Sizeb = (size_t)&v20[56 * v29 + 12];
                    v30 = &v6[56 * v29];
                    *(_DWORD *)(Sizeb + 192) = 10 * *(_DWORD *)(v28 + v26 + 28);
                    v31 = *(_DWORD *)(v28 + v26 + 24);
                    *(_WORD *)(Sizeb + 209) = 257;
                    *(_QWORD *)(Sizeb + 216) = v24;
                    *(_DWORD *)(Sizeb + 196) = 10 * v31;
                    *(_OWORD *)(Sizeb + 168) = *(_OWORD *)(v28 + v26 + 88);
                    *(_QWORD *)(Sizeb + 184) = *(_QWORD *)(v26 + 8);
                    KeInitializeAffinityEx(Sizeb);
                    v52 = (unsigned int *)(Sizeb + 204);
                    v8 = LpiEnumerateDependencies(
                           a2,
                           v23,
                           i,
                           (__int64)PoolWithTag,
                           (__int64)v20,
                           (_DWORD *)(Sizeb + 204),
                           &v48,
                           (unsigned int *)(Sizeb + 200),
                           v50,
                           v49,
                           Sizeb);
                    if ( v8 < 0 )
                      goto LABEL_40;
                    if ( (unsigned int)KeIsEqualAffinityEx(Sizeb, &unk_1C001B6B0) )
                    {
                      *(_BYTE *)(Sizeb + 208) = 1;
                      v32 = 1;
                    }
                    else
                    {
                      v32 = *(_BYTE *)(Sizeb + 208);
                    }
                    v33 = v51;
                    v30[48] = v32;
                    v34 = (char *)(v26 + v33 + 48);
                    *((_QWORD *)v30 + 4) = *(_QWORD *)(v33 + v26 + 52);
                    if ( *v34 != 126 )
                    {
                      v8 = DecodeAcpiIdleState(
                             a1,
                             v34,
                             0xFFFFFFFF,
                             *(unsigned int *)(v33 + v26 + 36),
                             0LL,
                             0LL,
                             0LL,
                             (__int64)v53);
                      if ( v8 < 0 )
                        goto LABEL_40;
                      *(_QWORD *)v30 = *((_QWORD *)&v53[1] + 1);
                      *(_OWORD *)(v30 + 8) = v53[2];
                      *((_QWORD *)v30 + 3) = *(_QWORD *)&v53[3];
                      *((_QWORD *)v30 + 5) = *(_QWORD *)&v53[4];
                    }
                    if ( byte_1C001BB60 )
                    {
                      if ( !v30[48] )
                      {
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          v40 = 17;
LABEL_51:
                          WPP_RECORDER_SF_(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            2u,
                            3u,
                            v40,
                            (__int64)&WPP_d6536c9038633dfeb7b644def35c3466_Traceguids);
                        }
LABEL_52:
                        v8 = -1073741637;
                        goto LABEL_40;
                      }
                      if ( *(_QWORD *)v30 || *((_QWORD *)v30 + 4) )
                      {
                        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          v40 = 18;
                          goto LABEL_51;
                        }
                        goto LABEL_52;
                      }
                    }
                    LODWORD(v23) = v44;
                    v25 = v44;
                    v24 = &v50[4 * *v52];
                    v50 = v24;
                    v49 += 4LL * v48;
                    v27 = i + 1;
                  }
                }
                v23 = (unsigned int)(v23 + 1);
                v44 = v23;
              }
              while ( (unsigned int)v23 < *a2 );
              v11 = *v20;
            }
            v35 = 0;
            if ( v11 )
            {
              while ( 1 )
              {
                v36 = 0;
                v37 = &v20[56 * v35];
                if ( v37[63] )
                  break;
LABEL_36:
                if ( ++v35 >= *v20 )
                  goto LABEL_37;
              }
              while ( 1 )
              {
                v38 = (_DWORD *)(*((_QWORD *)v37 + 33) + 16LL * v36);
                if ( *v38 != -1 )
                {
                  v8 = ValidateCoordinatedLpiDependenciesProcessor((__int64)(v37 + 12), (__int64)v38);
                  if ( v8 < 0 )
                    break;
                }
                if ( ++v36 >= v37[63] )
                  goto LABEL_36;
              }
            }
            else
            {
LABEL_37:
              v8 = 0;
            }
            if ( v8 >= 0 )
            {
              *a3 = v20;
              v20 = 0LL;
              *a4 = PoolWithTag;
              PoolWithTag = 0LL;
              *a5 = v6;
              v6 = 0LL;
              v8 = 0;
            }
          }
          else
          {
            v8 = -1073741670;
          }
LABEL_40:
          if ( v20 )
            ExFreePoolWithTag(v20, 0x72637250u);
        }
        else
        {
          v8 = -1073741670;
        }
      }
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0x72637250u);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v8;
}
