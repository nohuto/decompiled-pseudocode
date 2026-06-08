/*
 * XREFs of LpiTranslateCoordinatedIdleStates @ 0x1C0034934
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x1C0028D18 (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     GetDevExtFromIndex @ 0x1C0002520 (GetDevExtFromIndex.c)
 *     DecodeAcpiIdleState @ 0x1C000A438 (DecodeAcpiIdleState.c)
 *     WPP_RECORDER_SF_SSS @ 0x1C000AEC0 (WPP_RECORDER_SF_SSS.c)
 *     memset @ 0x1C000E300 (memset.c)
 *     ValidateLpiState @ 0x1C0030828 (ValidateLpiState.c)
 *     LpiEnumerateDependencies @ 0x1C00344FC (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiTranslateCoordinatedIdleStates(
        __int64 a1,
        unsigned int *a2,
        unsigned int **a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _DWORD *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r12
  _DWORD *PoolWithTag; // r12
  int v12; // ecx
  unsigned int v13; // esi
  int v14; // r14d
  __int64 v15; // rdi
  size_t v16; // rax
  int v17; // eax
  unsigned int v18; // r13d
  unsigned int v19; // ebx
  unsigned int v20; // r14d
  SIZE_T v21; // r13
  unsigned int *v22; // rax
  unsigned int *v23; // rdi
  char *v24; // rax
  char *v25; // r13
  __int64 v26; // r8
  __int64 v27; // rbx
  _DWORD *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // r9
  __int64 v33; // rcx
  size_t v34; // rdx
  char *v35; // rsi
  int v36; // eax
  size_t v37; // rbx
  char v38; // al
  __int64 v39; // rcx
  char *v40; // rdx
  unsigned int v41; // r14d
  unsigned int v42; // r15d
  __int64 v43; // r13
  __int64 v44; // rsi
  __int64 DevExtFromIndex; // r10
  size_t v46; // r8
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  PVOID v51; // rdx
  unsigned __int16 v53; // r9
  int v54; // [rsp+28h] [rbp-E0h]
  int v55; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v56; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v57; // [rsp+70h] [rbp-98h]
  size_t Size; // [rsp+78h] [rbp-90h]
  char v59[4]; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v60; // [rsp+84h] [rbp-84h] BYREF
  __int64 v61; // [rsp+88h] [rbp-80h]
  _DWORD *v62; // [rsp+90h] [rbp-78h] BYREF
  PVOID P; // [rsp+98h] [rbp-70h]
  size_t v64; // [rsp+A0h] [rbp-68h]
  __int64 v65; // [rsp+A8h] [rbp-60h]
  _OWORD v66[9]; // [rsp+B8h] [rbp-50h] BYREF

  memset(v66, 0, 0x58uLL);
  v6 = (_DWORD *)qword_1C00139A0;
  P = 0LL;
  if ( qword_1C00139A0 )
  {
    v8 = 0LL;
    if ( *(_DWORD *)qword_1C00139A0 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)&v6[10 * v8 + 6];
        if ( v9 )
        {
          v10 = 0LL;
          if ( *(_DWORD *)(v9 + 16) )
            break;
        }
LABEL_8:
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= *v6 )
          goto LABEL_9;
      }
      while ( 1 )
      {
        v7 = ValidateLpiState(v9 + 80 * v10 + 24, 1);
        if ( v7 < 0 )
          break;
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= *(_DWORD *)(v9 + 16) )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_9:
      v7 = 0;
    }
    if ( v7 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * *a2, 0x72637250u);
      if ( PoolWithTag )
      {
        v12 = 0;
        v13 = 0;
        v14 = 0;
        LODWORD(v57) = 0;
        v15 = 0LL;
        if ( *a2 )
        {
          while ( 1 )
          {
            PoolWithTag[v15] = v13;
            v16 = *(_QWORD *)&a2[10 * v15 + 6];
            Size = v16;
            if ( v16 )
            {
              v17 = *(_DWORD *)(v16 + 16);
              v18 = 0;
              v13 += v17;
              if ( v17 )
                break;
            }
LABEL_18:
            v15 = (unsigned int)(v15 + 1);
            if ( (unsigned int)v15 >= *a2 )
              goto LABEL_19;
          }
          while ( 1 )
          {
            v7 = LpiEnumerateDependencies(
                   a2,
                   v15,
                   v18,
                   (__int64)PoolWithTag,
                   0LL,
                   &v56,
                   &v60,
                   (unsigned int *)&v62,
                   0LL,
                   0LL,
                   0LL);
            if ( v7 < 0 )
              break;
            ++v18;
            v12 = v60 + v57;
            v14 += v56;
            LODWORD(v57) = v60 + v57;
            if ( v18 >= *(_DWORD *)(Size + 16) )
              goto LABEL_18;
          }
        }
        else
        {
LABEL_19:
          v19 = (224 * v13 + 55) & 0xFFFFFFF8;
          v20 = v19 + 16 * v14;
          v21 = v20 + 4 * v12;
          v22 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x72637250u);
          v23 = v22;
          if ( v22 )
          {
            memset(v22, 0, v21);
            Size = 56LL * v13;
            v24 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
            P = v24;
            v25 = v24;
            if ( v24 )
            {
              memset(v24, 0, Size);
              v26 = v19;
              v27 = 0LL;
              v28 = (unsigned int *)((char *)v23 + v26);
              *v23 = v13;
              v62 = v28;
              v61 = (__int64)v23 + v20;
              v56 = 0;
              if ( *a2 )
              {
                do
                {
                  v29 = (unsigned int)v27;
                  v30 = *(_QWORD *)&a2[10 * v27 + 6];
                  if ( v30 )
                  {
                    v31 = 0LL;
                    for ( LODWORD(v57) = 0; (unsigned int)v31 < *(_DWORD *)(v30 + 16); LODWORD(v57) = v31 )
                    {
                      v32 = 5 * v31;
                      v33 = (unsigned int)(PoolWithTag[v29] + v31);
                      v32 *= 16LL;
                      v34 = (size_t)&v23[56 * v33 + 12];
                      v65 = v32;
                      Size = v34;
                      v35 = &v25[56 * v33];
                      *(_DWORD *)(v34 + 192) = 10 * *(_DWORD *)(v32 + v30 + 28);
                      v36 = *(_DWORD *)(v32 + v30 + 24);
                      *(_WORD *)(v34 + 209) = 257;
                      *(_QWORD *)(v34 + 216) = v28;
                      *(_DWORD *)(v34 + 196) = 10 * v36;
                      *(_OWORD *)(v34 + 168) = *(_OWORD *)(v32 + v30 + 88);
                      *(_QWORD *)(v34 + 184) = *(_QWORD *)(v30 + 8);
                      KeInitializeAffinityEx(v34);
                      v64 = Size + 204;
                      v7 = LpiEnumerateDependencies(
                             a2,
                             v27,
                             v57,
                             (__int64)PoolWithTag,
                             (__int64)v23,
                             (_DWORD *)(Size + 204),
                             &v60,
                             (unsigned int *)(Size + 200),
                             v62,
                             v61,
                             Size);
                      if ( v7 < 0 )
                        goto LABEL_54;
                      v37 = Size;
                      if ( (unsigned int)KeIsEqualAffinityEx(Size, &unk_1C0013730) )
                      {
                        *(_BYTE *)(v37 + 208) = 1;
                        v38 = 1;
                      }
                      else
                      {
                        v38 = *(_BYTE *)(v37 + 208);
                      }
                      v39 = v65;
                      v35[48] = v38;
                      v40 = (char *)(v30 + v39 + 48);
                      *((_QWORD *)v35 + 4) = *(_QWORD *)(v39 + v30 + 52);
                      if ( *v40 != 126 )
                      {
                        v7 = DecodeAcpiIdleState(
                               a1,
                               v40,
                               0xFFFFFFFF,
                               *(unsigned int *)(v39 + v30 + 36),
                               0LL,
                               0LL,
                               0LL,
                               (__int64)v66);
                        if ( v7 < 0 )
                          goto LABEL_54;
                        *(_QWORD *)v35 = *((_QWORD *)&v66[1] + 1);
                        *(_OWORD *)(v35 + 8) = v66[2];
                        *((_QWORD *)v35 + 3) = *(_QWORD *)&v66[3];
                        *((_QWORD *)v35 + 5) = *(_QWORD *)&v66[4];
                      }
                      if ( byte_1C0013BE0 )
                      {
                        if ( !v35[48] )
                        {
                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                          {
                            v53 = 17;
LABEL_65:
                            WPP_RECORDER_SF_(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              2u,
                              3u,
                              v53,
                              (__int64)&WPP_d6536c9038633dfeb7b644def35c3466_Traceguids);
                          }
LABEL_66:
                          v7 = -1073741637;
                          goto LABEL_54;
                        }
                        if ( *(_QWORD *)v35 || *((_QWORD *)v35 + 4) )
                        {
                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                          {
                            v53 = 18;
                            goto LABEL_65;
                          }
                          goto LABEL_66;
                        }
                      }
                      LODWORD(v27) = v56;
                      v29 = v56;
                      v28 = &v62[4 * *(unsigned int *)v64];
                      v62 = v28;
                      v61 += 4LL * v60;
                      v31 = (unsigned int)(v57 + 1);
                    }
                  }
                  v27 = (unsigned int)(v27 + 1);
                  v56 = v27;
                }
                while ( (unsigned int)v27 < *a2 );
                v13 = *v23;
              }
              v41 = 0;
              if ( v13 )
              {
                while ( 1 )
                {
                  v42 = 0;
                  v43 = 56LL * v41;
                  if ( v23[v43 + 63] )
                    break;
LABEL_50:
                  if ( ++v41 >= *v23 )
                    goto LABEL_51;
                }
                while ( 1 )
                {
                  v44 = *(_QWORD *)&v23[v43 + 66] + 16LL * v42;
                  if ( *(_DWORD *)v44 != -1 )
                  {
                    DevExtFromIndex = GetDevExtFromIndex(*(_DWORD *)v44);
                    v61 = DevExtFromIndex;
                    v46 = *(_QWORD *)(DevExtFromIndex + 528);
                    v47 = 0LL;
                    Size = v46;
                    v56 = 0;
                    if ( *(_DWORD *)(v44 + 4) )
                    {
                      while ( 1 )
                      {
                        v64 = 80LL * *(unsigned __int8 *)(*(_QWORD *)(v44 + 8) + 4 * v47);
                        v7 = DecodeAcpiIdleState(
                               DevExtFromIndex,
                               (char *)(v64 + v46 + 48),
                               0xFFFFFFFF,
                               *(unsigned int *)(v64 + v46 + 36),
                               0LL,
                               (char *)&v55,
                               v59,
                               0LL);
                        if ( v7 < 0 )
                          break;
                        if ( (_BYTE)v55 )
                        {
                          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                            WPP_RECORDER_SF_SSS(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              v48,
                              v49,
                              v50,
                              v54,
                              *(const wchar_t **)&v23[v43 + 56],
                              *(const wchar_t **)(v61 + 64),
                              *(const wchar_t **)(v64 + Size + 96));
                          v7 = -1073741823;
                          goto LABEL_52;
                        }
                        DevExtFromIndex = v61;
                        v47 = v56 + 1;
                        v46 = Size;
                        v56 = v47;
                        if ( (unsigned int)v47 >= *(_DWORD *)(v44 + 4) )
                          goto LABEL_47;
                      }
                    }
                    else
                    {
LABEL_47:
                      v7 = 0;
                    }
                    if ( v7 < 0 )
                      break;
                  }
                  if ( ++v42 >= v23[v43 + 63] )
                    goto LABEL_50;
                }
              }
              else
              {
LABEL_51:
                v7 = 0;
LABEL_52:
                if ( v7 >= 0 )
                {
                  v51 = P;
                  *a3 = v23;
                  v23 = 0LL;
                  *a4 = PoolWithTag;
                  PoolWithTag = 0LL;
                  *a5 = v51;
                  P = 0LL;
                  v7 = 0;
                }
              }
            }
            else
            {
              v7 = -1073741670;
            }
LABEL_54:
            if ( v23 )
              ExFreePoolWithTag(v23, 0x72637250u);
          }
          else
          {
            v7 = -1073741670;
          }
        }
        if ( PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0x72637250u);
        if ( P )
          ExFreePoolWithTag(P, 0x72637250u);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v7;
}
