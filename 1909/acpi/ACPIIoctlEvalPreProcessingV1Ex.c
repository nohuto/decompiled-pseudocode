/*
 * XREFs of ACPIIoctlEvalPreProcessingV1Ex @ 0x1C0010284
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C00112B4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0056F38 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     AMLIIsObjectInGivenScope @ 0x1C000E350 (AMLIIsObjectInGivenScope.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002BF74 (AcpiIoctlArgumentToPackageObjV1.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV1Ex(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  int v9; // r10d
  _WORD *v11; // rdi
  PVOID PoolWithTag; // r15
  unsigned int v13; // r12d
  int *v14; // rsi
  _QWORD *v15; // rbp
  int v16; // ebx
  int v17; // eax
  __int64 v18; // rax
  size_t v20; // rbx
  unsigned __int16 *v21; // rsi
  _WORD *v22; // rax
  unsigned int v23; // ebp
  char *v24; // r14
  __int16 v25; // ax
  unsigned __int16 v26; // ax
  __int64 v27; // rax
  _WORD *v28; // rax
  _QWORD *v29; // rcx

  v8 = *(_DWORD *)(a3 + 16);
  v9 = *(_DWORD *)(a3 + 8);
  v11 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  PoolWithTag = 0LL;
  v13 = 0;
  if ( v8 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v9 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v15 = *(_QWORD **)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v15 )
    return 3221225486LL;
  _strupr((char *)v14 + 4);
  v16 = AMLIGetNameSpaceObject(v14 + 1);
  if ( v16 >= 0 )
  {
    v16 = AMLIIsObjectInGivenScope(0LL, v15);
    if ( v16 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
      if ( PoolWithTag )
      {
        v17 = *v14;
        if ( *v14 == 1097426241 )
        {
LABEL_11:
          *a5 = 0LL;
          *a6 = PoolWithTag;
          *a7 = v11;
          *a8 = v13;
          return 0LL;
        }
        if ( v17 != 1147757889 )
        {
          if ( v17 == 1181312321 )
          {
            v18 = (unsigned int)v14[66];
            if ( !(_DWORD)v18 )
              goto LABEL_11;
            v20 = 40 * v18;
            v13 = v14[66];
            v21 = (unsigned __int16 *)(v14 + 67);
            v22 = ExAllocatePoolWithTag(a4, 40 * v18, 0x41706341u);
            v11 = v22;
            if ( v22 )
            {
              memset(v22, 0, v20);
              v23 = 0;
              if ( !v13 )
                goto LABEL_11;
              v24 = (char *)(v11 + 12);
              while ( 1 )
              {
                if ( *v21 == 4 )
                  v25 = 4;
                else
                  v25 = *v21 + 1;
                *((_WORD *)v24 - 11) = v25;
                v26 = *v21;
                if ( *v21 )
                {
                  if ( v26 > 2u )
                  {
                    if ( v26 == 4 )
                    {
                      v16 = AcpiIoctlArgumentToPackageObjV1(
                              v21,
                              (unsigned int)a4,
                              1LL,
                              &v11[20 * v23 + 12],
                              &v11[20 * v23 + 16]);
                      if ( v16 < 0 )
                        goto LABEL_12;
                      goto LABEL_25;
                    }
                    *((_WORD *)v24 - 11) = 3;
                  }
                  *(_DWORD *)v24 = v21[1];
                  *((_QWORD *)v24 + 1) = (unsigned __int64)(v21 + 2) & -(__int64)(v21[1] != 0);
                }
                else
                {
                  *((_QWORD *)v24 - 1) = 0LL;
                  memmove(&v11[16 * v23 + 8 + 4 * v23], v21 + 2, v21[1]);
                }
LABEL_25:
                LOWORD(v27) = v21[1];
                if ( (unsigned __int16)v27 < 4u )
                  v27 = 4LL;
                else
                  v27 = (unsigned __int16)v27;
                v21 = (unsigned __int16 *)((char *)v21 + v27 + 4);
                ++v23;
                v24 += 40;
                if ( v23 >= v13 )
                  goto LABEL_11;
              }
            }
            goto LABEL_34;
          }
          if ( v17 != 1164535105 )
          {
            v16 = -1073741585;
            goto LABEL_12;
          }
        }
        v13 = 1;
        v28 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
        v11 = v28;
        if ( v28 )
        {
          memset(v28, 0, 0x28uLL);
          v29 = v14 + 66;
          if ( *v14 == 1147757889 )
          {
            v11[1] = 1;
            *((_QWORD *)v11 + 2) = *v29;
          }
          else
          {
            v11[1] = 2;
            *((_DWORD *)v11 + 6) = v14[65];
            *((_QWORD *)v11 + 4) = v29;
          }
          goto LABEL_11;
        }
      }
LABEL_34:
      v16 = -1073741670;
    }
  }
LABEL_12:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x52706341u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x52706341u);
  return (unsigned int)v16;
}
