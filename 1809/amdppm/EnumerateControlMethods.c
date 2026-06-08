/*
 * XREFs of EnumerateControlMethods @ 0x1C002706C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000CA20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 */

__int64 __fastcall EnumerateControlMethods(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rdx
  SIZE_T *v5; // rdi
  int v6; // r14d
  int v7; // ebx
  unsigned int v8; // ebx
  __int64 v9; // rsi
  SIZE_T *PoolWithTag; // rax
  __int64 v11; // rdx
  unsigned int v12; // eax
  _DWORD *v13; // r9
  unsigned int v14; // r11d
  __int64 v15; // rsi
  unsigned int v16; // r8d
  unsigned int v17; // edx
  unsigned int v18; // eax
  _BYTE *v19; // rcx
  int v20; // ecx
  unsigned int v21; // edx
  unsigned __int8 *v22; // r10
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // rax
  char *v26; // rdx
  __int64 v28; // [rsp+50h] [rbp-39h] BYREF
  SIZE_T *v29; // [rsp+58h] [rbp-31h]
  __int64 v30; // [rsp+60h] [rbp-29h]
  _QWORD v31[3]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v32; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v33[2]; // [rsp+88h] [rbp-1h] BYREF
  SIZE_T NumberOfBytes[2]; // [rsp+98h] [rbp+Fh] BYREF
  int v35; // [rsp+A8h] [rbp+1Fh]

  v33[0] = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = 0LL;
  v6 = 0;
  v33[1] = 0LL;
  v31[1] = v33;
  NumberOfBytes[0] = 0LL;
  NumberOfBytes[1] = 0LL;
  v35 = 0;
  v29 = NumberOfBytes;
  v33[0] = 0x148696541LL;
  v31[0] = 1LL;
  v31[2] = 16LL;
  v28 = 1LL;
  v30 = 20LL;
  if ( (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, _QWORD))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v4,
         0LL,
         3325984LL,
         v31,
         &v28,
         0LL,
         0LL) != -2147483643 )
  {
    v7 = -1072431089;
    goto LABEL_35;
  }
  if ( LODWORD(NumberOfBytes[0]) != 1198089537 )
    goto LABEL_32;
  v8 = HIDWORD(NumberOfBytes[0]);
  if ( HIDWORD(NumberOfBytes[0]) < 0x14 )
    goto LABEL_32;
  v9 = HIDWORD(NumberOfBytes[0]);
  PoolWithTag = (SIZE_T *)ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes[0]), 0x72637250u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = -1073741670;
    goto LABEL_35;
  }
  memset(PoolWithTag, 0, v8);
  v11 = *(_QWORD *)(a1 + 16);
  v28 = 1LL;
  v29 = v5;
  v30 = v8;
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD *, __int64 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
         WdfDriverGlobals,
         v11,
         0LL,
         3325984LL,
         v31,
         &v28,
         0LL,
         &v32);
  if ( v7 < 0 )
    goto LABEL_33;
  if ( *(_DWORD *)v5 != 1198089537 || (v12 = *((_DWORD *)v5 + 1)) == 0 || v32 != v9 )
  {
LABEL_32:
    v7 = -1072431089;
    goto LABEL_33;
  }
  v13 = v5 + 1;
  if ( v12 <= 1 )
    goto LABEL_33;
  v14 = *((_DWORD *)v5 + 3);
  v15 = v12 - 1;
  do
  {
    v13 = (_DWORD *)((char *)v13 + v14 + 8);
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v14 = v13[1];
    v19 = v13 + 2;
    if ( !v14 )
      goto LABEL_20;
    while ( *v19 == 46 )
    {
      v16 = v18;
LABEL_17:
      ++v18;
      ++v19;
      if ( v18 >= v14 )
        goto LABEL_20;
    }
    if ( *v19 )
      goto LABEL_17;
    v17 = v18;
LABEL_20:
    v20 = 0;
    if ( v17 > v16 && v17 - v16 - 1 <= 4 )
    {
      v21 = v17 - 1;
      if ( v21 > v16 )
      {
        v22 = (unsigned __int8 *)v13 + v21 + 8;
        v23 = v21 - v16;
        do
        {
          v24 = *v22--;
          v20 = v24 + (v20 << 8);
          --v23;
        }
        while ( v23 );
      }
    }
    v25 = 0LL;
    v26 = AcpiFeatureMethods;
    while ( *(_DWORD *)v26 != v20 )
    {
      v25 = (unsigned int)(v25 + 1);
      v26 += 8;
      if ( (unsigned int)v25 >= 0x10 )
        goto LABEL_30;
    }
    v6 |= *(_DWORD *)&AcpiFeatureMethods[8 * v25 + 4];
LABEL_30:
    --v15;
  }
  while ( v15 );
LABEL_33:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x72637250u);
LABEL_35:
  *a2 = v6;
  return (unsigned int)v7;
}
