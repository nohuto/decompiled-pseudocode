/*
 * XREFs of EnumerateControlMethods @ 0x1C001E7F0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF84 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004FC0 (memset.c)
 *     GetPackedName @ 0x1C001EA48 (GetPackedName.c)
 */

__int64 __fastcall EnumerateControlMethods(__int64 a1, _DWORD *a2)
{
  _DWORD *v3; // r13
  __int64 v4; // rdx
  SIZE_T *v5; // rdi
  int v6; // r12d
  unsigned int v7; // ebx
  __int64 v8; // rsi
  SIZE_T *PoolWithTag; // rax
  __int64 v10; // rdx
  int v11; // ebx
  unsigned int v12; // eax
  _DWORD *v13; // rsi
  unsigned int v14; // r15d
  __int64 v15; // r14
  int PackedName; // eax
  __int64 v17; // rcx
  char *v18; // rdx
  __int64 v20; // [rsp+50h] [rbp-49h] BYREF
  SIZE_T *v21; // [rsp+58h] [rbp-41h]
  __int64 v22; // [rsp+60h] [rbp-39h]
  _QWORD v23[3]; // [rsp+68h] [rbp-31h] BYREF
  __int64 v24; // [rsp+80h] [rbp-19h] BYREF
  _DWORD *v25; // [rsp+88h] [rbp-11h]
  _QWORD v26[2]; // [rsp+90h] [rbp-9h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+A0h] [rbp+7h] BYREF
  int v28; // [rsp+B0h] [rbp+17h]

  v25 = a2;
  v26[0] = 0LL;
  v23[0] = 0LL;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v6 = 0;
  v26[1] = 0LL;
  v23[1] = v26;
  v26[0] = 0x148696541LL;
  NumberOfBytes[0] = 0LL;
  NumberOfBytes[1] = 0LL;
  v28 = 0;
  v21 = NumberOfBytes;
  LODWORD(v23[0]) = 1;
  v23[2] = 16LL;
  v20 = 1LL;
  v22 = 20LL;
  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v4,
         0LL,
         3325984LL,
         v23,
         &v20,
         0LL,
         0LL) != -2147483643 )
  {
    v11 = -1072431089;
    goto LABEL_18;
  }
  if ( LODWORD(NumberOfBytes[0]) != 1198089537 )
    goto LABEL_22;
  v7 = HIDWORD(NumberOfBytes[0]);
  if ( HIDWORD(NumberOfBytes[0]) < 0x14 )
    goto LABEL_22;
  v8 = HIDWORD(NumberOfBytes[0]);
  PoolWithTag = (SIZE_T *)ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes[0]), 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    goto LABEL_18;
  }
  memset(PoolWithTag, 0, v7);
  v10 = *(_QWORD *)(a1 + 16);
  v20 = 1LL;
  v21 = v5;
  v22 = v7;
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
          WdfDriverGlobals,
          v10,
          0LL,
          3325984LL,
          v23,
          &v20,
          0LL,
          &v24);
  if ( v11 < 0 )
    goto LABEL_16;
  if ( *(_DWORD *)v5 == 1198089537 && (v12 = *((_DWORD *)v5 + 1)) != 0 && v24 == v8 )
  {
    v13 = v5 + 1;
    if ( v12 > 1 )
    {
      v14 = *((_DWORD *)v5 + 3);
      v15 = v12 - 1;
      do
      {
        v13 = (_DWORD *)((char *)v13 + v14 + 8);
        v14 = v13[1];
        PackedName = GetPackedName(v13 + 2, v14);
        v17 = 0LL;
        v18 = AcpiFeatureMethods;
        while ( *(_DWORD *)v18 != PackedName )
        {
          v17 = (unsigned int)(v17 + 1);
          v18 += 8;
          if ( (unsigned int)v17 >= 0x10 )
            goto LABEL_14;
        }
        v6 |= *(_DWORD *)&AcpiFeatureMethods[8 * v17 + 4];
LABEL_14:
        --v15;
      }
      while ( v15 );
      v3 = v25;
    }
  }
  else
  {
LABEL_22:
    v11 = -1072431089;
  }
LABEL_16:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
LABEL_18:
  *v3 = v6;
  return (unsigned int)v11;
}
