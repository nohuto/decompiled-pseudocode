/*
 * XREFs of ACPIIoctlEvalPreProcessingV1 @ 0x1C000E4C8
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C00112B4 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0056F38 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001CF0 (ACPIInternalGetDeviceExtension.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNameSpaceObject @ 0x1C001A858 (AMLIGetNameSpaceObject.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C002BF74 (AcpiIoctlArgumentToPackageObjV1.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIIoctlEvalPreProcessingV1(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        POOL_TYPE a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        unsigned int *a8)
{
  _WORD *v9; // rdi
  unsigned int v10; // r15d
  unsigned int v11; // eax
  int v13; // ecx
  int *v14; // rbx
  __int64 result; // rax
  PVOID PoolWithTag; // rbp
  int v17; // eax
  __int64 v18; // rax
  _DWORD *v19; // rsi
  size_t v20; // rbx
  _WORD *v21; // rax
  int v22; // r13d
  char *v23; // r14
  __int16 v24; // ax
  unsigned __int16 v25; // ax
  __int64 v26; // rax
  int v27; // ebx
  _WORD *v28; // rax
  int Src; // [rsp+60h] [rbp-48h] BYREF
  char v31; // [rsp+64h] [rbp-44h]

  v9 = 0LL;
  v10 = 0;
  v11 = *(_DWORD *)(a3 + 16);
  v13 = *(_DWORD *)(a3 + 8);
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v11 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v13 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v31 = 0;
  Src = v14[1];
  if ( !*(_QWORD *)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 712) )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src);
  if ( (int)result >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
    if ( PoolWithTag )
    {
      v17 = *v14;
      if ( *v14 == 1130980673 )
      {
        v18 = (unsigned int)v14[3];
        if ( (_DWORD)v18 )
        {
          v19 = v14 + 4;
          v20 = 40 * v18;
          v10 = v18;
          v21 = ExAllocatePoolWithTag(a4, 40 * v18, 0x41706341u);
          v9 = v21;
          if ( v21 )
          {
            memset(v21, 0, v20);
            v22 = 0;
            v23 = (char *)(v9 + 12);
            while ( 1 )
            {
              if ( *(_WORD *)v19 == 4 )
                v24 = 4;
              else
                v24 = *(_WORD *)v19 + 1;
              *((_WORD *)v23 - 11) = v24;
              v25 = *(_WORD *)v19;
              if ( *(_WORD *)v19 )
              {
                if ( v25 > 2u )
                {
                  if ( v25 == 4 )
                  {
                    v27 = AcpiIoctlArgumentToPackageObjV1(
                            v19,
                            (unsigned int)a4,
                            0LL,
                            &v9[20 * v22 + 12],
                            &v9[20 * v22 + 16]);
                    if ( v27 < 0 )
                      goto LABEL_33;
                    goto LABEL_14;
                  }
                  *((_WORD *)v23 - 11) = 3;
                }
                *(_DWORD *)v23 = *((unsigned __int16 *)v19 + 1);
                *((_QWORD *)v23 + 1) = (unsigned __int64)(v19 + 1) & -(__int64)(*((_WORD *)v19 + 1) != 0);
              }
              else
              {
                *((_QWORD *)v23 - 1) = (unsigned int)v19[1];
              }
LABEL_14:
              LOWORD(v26) = *((_WORD *)v19 + 1);
              if ( (unsigned __int16)v26 < 4u )
                v26 = 4LL;
              else
                v26 = (unsigned __int16)v26;
              v23 += 40;
              v19 = (_DWORD *)((char *)v19 + v26 + 4);
              if ( ++v22 >= v10 )
                goto LABEL_17;
            }
          }
          goto LABEL_32;
        }
      }
      else if ( v17 != 1114203457 )
      {
        if ( v17 != 1231643969 && v17 != 1399416129 )
          return 3221225711LL;
        v10 = 1;
        v28 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
        v9 = v28;
        if ( !v28 )
          goto LABEL_32;
        memset(v28, 0, 0x28uLL);
        if ( *v14 == 1231643969 )
        {
          v9[1] = 1;
          *((_QWORD *)v9 + 2) = (unsigned int)v14[2];
        }
        else
        {
          v9[1] = 2;
          *((_DWORD *)v9 + 6) = v14[2];
          *((_QWORD *)v9 + 4) = (unsigned __int64)(v14 + 3) & -(__int64)(v14[2] != 0);
        }
      }
LABEL_17:
      *a5 = 0LL;
      *a6 = PoolWithTag;
      *a7 = v9;
      *a8 = v10;
      return 0LL;
    }
LABEL_32:
    v27 = -1073741670;
LABEL_33:
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x52706341u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x52706341u);
    return (unsigned int)v27;
  }
  return result;
}
