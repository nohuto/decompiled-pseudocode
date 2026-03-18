/*
 * XREFs of ACPIIoctlEvalPreProcessingV1 @ 0x1C000B2E8
 * Callers:
 *     ACPIIoctlEvalControlMethod @ 0x1C000B778 (ACPIIoctlEvalControlMethod.c)
 *     ACPIIoctlAsyncEvalControlMethod @ 0x1C0055468 (ACPIIoctlAsyncEvalControlMethod.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNameSpaceObject @ 0x1C000ABD0 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AcpiIoctlArgumentToPackageObjV1 @ 0x1C000BF84 (AcpiIoctlArgumentToPackageObjV1.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memset @ 0x1C00310C0 (memset.c)
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
  __int64 *v15; // rdx
  __int64 result; // rax
  PVOID PoolWithTag; // rbp
  int v18; // eax
  __int64 v19; // rax
  _DWORD *v20; // rsi
  size_t v21; // rbx
  _WORD *v22; // rax
  int v23; // r13d
  char *v24; // r14
  __int16 v25; // ax
  unsigned __int16 v26; // ax
  __int64 v27; // rax
  int v28; // ebx
  _WORD *v29; // rax
  unsigned __int64 v31; // [rsp+38h] [rbp-70h] BYREF
  _QWORD *v32; // [rsp+40h] [rbp-68h]
  _QWORD *v33; // [rsp+48h] [rbp-60h]
  _QWORD *v34; // [rsp+50h] [rbp-58h]
  unsigned int *v35; // [rsp+58h] [rbp-50h]
  int Src; // [rsp+60h] [rbp-48h] BYREF
  char v37; // [rsp+64h] [rbp-44h]

  v32 = a5;
  v9 = 0LL;
  v33 = a6;
  v10 = 0;
  v34 = a7;
  v35 = a8;
  v11 = *(_DWORD *)(a3 + 16);
  v13 = *(_DWORD *)(a3 + 8);
  v31 = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( v11 < 8 )
    return 3221225476LL;
  if ( (unsigned int)(v13 - 1) <= 0x12 )
    return 3221225507LL;
  v14 = *(int **)(a2 + 24);
  v37 = 0;
  Src = v14[1];
  v15 = *(__int64 **)(ACPIInternalGetDeviceExtension(BugCheckParameter3) + 712);
  if ( !v15 )
    return 3221225486LL;
  result = AMLIGetNameSpaceObject(&Src, v15, &v31, 1u);
  if ( (int)result >= 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(a4, 0x28uLL, 0x52706341u);
    if ( PoolWithTag )
    {
      v18 = *v14;
      if ( *v14 == 1130980673 )
      {
        v19 = (unsigned int)v14[3];
        if ( (_DWORD)v19 )
        {
          v20 = v14 + 4;
          v21 = 40 * v19;
          v10 = v19;
          v22 = ExAllocatePoolWithTag(a4, 40 * v19, 0x41706341u);
          v9 = v22;
          if ( v22 )
          {
            memset(v22, 0, v21);
            v23 = 0;
            v24 = (char *)(v9 + 12);
            while ( 1 )
            {
              if ( *(_WORD *)v20 == 4 )
                v25 = 4;
              else
                v25 = *(_WORD *)v20 + 1;
              *((_WORD *)v24 - 11) = v25;
              v26 = *(_WORD *)v20;
              if ( *(_WORD *)v20 )
              {
                if ( v26 > 2u )
                {
                  if ( v26 == 4 )
                  {
                    v28 = AcpiIoctlArgumentToPackageObjV1(
                            (_DWORD)v20,
                            a4,
                            0,
                            (int)v9 + 8 * (5 * v23 + 3),
                            (__int64)&v9[20 * v23 + 16]);
                    if ( v28 < 0 )
                      goto LABEL_34;
                    goto LABEL_15;
                  }
                  *((_WORD *)v24 - 11) = 3;
                }
                *(_DWORD *)v24 = *((unsigned __int16 *)v20 + 1);
                *((_QWORD *)v24 + 1) = (unsigned __int64)(v20 + 1) & -(__int64)(*((_WORD *)v20 + 1) != 0);
              }
              else
              {
                *((_QWORD *)v24 - 1) = (unsigned int)v20[1];
              }
LABEL_15:
              LOWORD(v27) = *((_WORD *)v20 + 1);
              if ( (unsigned __int16)v27 < 4u )
                v27 = 4LL;
              else
                v27 = (unsigned __int16)v27;
              v24 += 40;
              v20 = (_DWORD *)((char *)v20 + v27 + 4);
              if ( ++v23 >= v10 )
                goto LABEL_18;
            }
          }
          goto LABEL_33;
        }
      }
      else if ( v18 != 1114203457 )
      {
        if ( v18 != 1231643969 && v18 != 1399416129 )
          return 3221225711LL;
        v10 = 1;
        v29 = ExAllocatePoolWithTag(a4, 0x28uLL, 0x41706341u);
        v9 = v29;
        if ( !v29 )
          goto LABEL_33;
        memset(v29, 0, 0x28uLL);
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
LABEL_18:
      *v32 = v31;
      *v33 = PoolWithTag;
      *v34 = v9;
      *v35 = v10;
      return 0LL;
    }
LABEL_33:
    v28 = -1073741670;
LABEL_34:
    if ( v31 )
      AMLIDereferenceHandleEx(v31);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x52706341u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x52706341u);
    return (unsigned int)v28;
  }
  return result;
}
