/*
 * XREFs of ACPIIoctlEvalPreProcessingV2Ex @ 0x1C0055E50
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C000B778 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0055468 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIIsObjectInGivenScope @ 0x1C002910C (AMLIIsObjectInGivenScope.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     AcpiIoctlArgumentToPackageObjV2 @ 0x1C00565A0 (AcpiIoctlArgumentToPackageObjV2.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV2Ex(
        ULONG_PTR a1,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        __int64 *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  unsigned int v8; // eax
  int v9; // r10d
  _WORD *v11; // rdi
  PVOID PoolWithTag; // r15
  unsigned int v13; // r12d
  int *v15; // rsi
  __int64 *v16; // rbp
  int v17; // ebx
  int v18; // eax
  __int64 v19; // rax
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
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  POOL_TYPE v31; // [rsp+88h] [rbp+20h]

  v31 = a4;
  v8 = *(_DWORD *)(a3 + 16);
  v9 = *(_DWORD *)(a3 + 8);
  v30 = 0LL;
  v11 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  PoolWithTag = 0LL;
  v13 = 0;
  if ( v8 < 0x104 )
    return 3221225476LL;
  if ( (unsigned int)(v9 - 1) <= 0x16 )
    return 3221225507LL;
  v15 = *(int **)(a2 + 24);
  v16 = *(__int64 **)(ACPIInternalGetDeviceExtension(a1) + 712);
  if ( !v16 )
    return 3221225486LL;
  _strupr((char *)v15 + 4);
  v17 = AMLIGetNameSpaceObject((_BYTE *)v15 + 4, v16, (unsigned __int64 *)&v30, 1u);
  if ( v17 < 0 )
    goto LABEL_11;
  v17 = AMLIIsObjectInGivenScope(v30, v16);
  if ( v17 < 0 )
    goto LABEL_11;
  PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
  if ( !PoolWithTag )
    goto LABEL_10;
  v18 = *v15;
  if ( *v15 == 1332307265 )
    goto LABEL_46;
  if ( v18 == 1349084481 || v18 == 1365861697 )
  {
    v13 = 1;
    v28 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
    v11 = v28;
    if ( !v28 )
      goto LABEL_10;
    memset(v28, 0, 0x28uLL);
    v29 = v15 + 66;
    if ( *v15 == 1349084481 )
    {
      v11[1] = 1;
      *((_QWORD *)v11 + 2) = *v29;
    }
    else
    {
      v11[1] = 2;
      *((_DWORD *)v11 + 6) = v15[65];
      *((_QWORD *)v11 + 4) = v29;
    }
LABEL_46:
    *a5 = v30;
    *a6 = PoolWithTag;
    *a7 = v11;
    *a8 = v13;
    return 0LL;
  }
  if ( v18 != 1382638913 )
  {
    v17 = -1073741585;
    goto LABEL_11;
  }
  v19 = (unsigned int)v15[66];
  if ( !(_DWORD)v19 )
    goto LABEL_46;
  v20 = 40 * v19;
  v13 = v15[66];
  v21 = (unsigned __int16 *)(v15 + 67);
  v22 = ExAllocatePoolWithTag(a4, 40 * v19, 0x41706341u);
  v11 = v22;
  if ( v22 )
  {
    memset(v22, 0, v20);
    v23 = 0;
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
            v17 = AcpiIoctlArgumentToPackageObjV2(
                    (_DWORD)v21,
                    v31,
                    1,
                    (unsigned int)v11 + 8 * (5 * v23 + 3),
                    (__int64)&v11[20 * v23 + 16]);
            if ( v17 < 0 )
              goto LABEL_11;
            goto LABEL_38;
          }
          *((_WORD *)v24 - 11) = 3;
        }
        *(_DWORD *)v24 = *((_DWORD *)v21 + 1);
        *((_QWORD *)v24 + 1) = (unsigned __int64)(v21 + 4) & -(__int64)(*((_DWORD *)v21 + 1) != 0);
      }
      else
      {
        *((_QWORD *)v24 - 1) = 0LL;
        memmove(&v11[16 * v23 + 8 + 4 * v23], v21 + 4, *((unsigned int *)v21 + 1));
      }
LABEL_38:
      v27 = *((unsigned int *)v21 + 1);
      if ( (unsigned int)v27 < 4 )
        v27 = 4LL;
      v21 = (unsigned __int16 *)((char *)v21 + v27 + 8);
      ++v23;
      v24 += 40;
      if ( v23 >= v13 )
        goto LABEL_46;
    }
  }
LABEL_10:
  v17 = -1073741670;
LABEL_11:
  if ( v30 )
    AMLIDereferenceHandleEx(v30);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x52706341u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x52706341u);
  return (unsigned int)v17;
}
