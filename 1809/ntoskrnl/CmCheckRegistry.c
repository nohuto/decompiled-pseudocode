/*
 * XREFs of CmCheckRegistry @ 0x1405A948C
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1405A7F70 (CmpReorganizeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14000FA60 (RtlClearAllBits.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1405AC0AC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckRegistry2 @ 0x1405D9EF0 (CmpCheckRegistry2.c)
 *     HvCheckHive @ 0x1405FA91C (HvCheckHive.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR a1, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v6; // r13
  _RTL_BITMAP *p_BitMapHeader; // r12
  int v8; // edx
  int v9; // r8d
  char v10; // si
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // r9d
  int v19; // [rsp+20h] [rbp-49h]
  int v20; // [rsp+40h] [rbp-29h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+48h] [rbp-21h] BYREF
  _DWORD v22[26]; // [rsp+58h] [rbp-11h] BYREF
  int v24; // [rsp+E8h] [rbp+7Fh]

  v3 = 0;
  BitMapHeader.SizeOfBitMap = 0;
  BitMapHeader.Buffer = 0LL;
  v6 = 0LL;
  p_BitMapHeader = 0LL;
  memset(v22, 0, 0x38uLL);
  v10 = 0;
  v20 = 0;
  if ( (PVOID)a1 == CmpMasterHive )
    return v3;
  v11 = a2;
  v12 = *(_DWORD *)(a1 + 272) >> 3;
  v13 = (((v12 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( (a2 & 0x80000) != 0 )
  {
    v14 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 24))(v13, 0LL, 1649167683LL);
    v6 = v14;
    if ( !v14 )
    {
      v3 = -1073741670;
      SetFailureLocation(a3, 0, 11, -1073741670, 0);
      return v3;
    }
    BitMapHeader.SizeOfBitMap = v12;
    BitMapHeader.Buffer = v14;
    p_BitMapHeader = &BitMapHeader;
    RtlClearAllBits(&BitMapHeader);
    v11 = a2;
  }
  v15 = v11 & 0x10000;
  v24 = v11 & 0x10000;
  while ( 1 )
  {
    if ( v15 )
    {
      if ( p_BitMapHeader )
        RtlClearAllBits(p_BitMapHeader);
      v16 = HvCheckHive(a1, v8, v9, (_DWORD)p_BitMapHeader, (__int64)v22, a3);
      v3 = v16;
      if ( v16 < 0 )
      {
        v19 = 16;
        goto LABEL_25;
      }
      if ( v22[0] + v22[4] + v22[8] > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(a1 + 4152) |= 0x400u;
      *(_DWORD *)(a1 + 4808) = v22[12];
      *(_DWORD *)(a1 + 4812) = v22[13];
    }
    if ( *(int *)(*(_QWORD *)(a1 + 64) + 36LL) < 0 )
      break;
    v16 = CmpValidateHiveSecurityDescriptors(a1, a3);
    v3 = v16;
    if ( v16 < 0 )
    {
      if ( v16 != -2147483606 )
      {
        if ( v16 != -1073741267 )
        {
          v19 = 48;
          goto LABEL_25;
        }
        goto LABEL_23;
      }
      v10 = 1;
    }
    v16 = CmpCheckRegistry2(a1, a2, 0, p_BitMapHeader, a3, (__int64)&v20);
    v3 = v16;
    if ( v16 >= 0 )
      goto LABEL_28;
    if ( v16 == -2147483606 )
    {
      v10 = 1;
LABEL_28:
      *(_DWORD *)(a1 + 4820) = v20;
      v3 = v10 != 0 ? 0x8000002A : 0;
      goto LABEL_31;
    }
    if ( v16 != -1073741267 )
    {
      v19 = 64;
LABEL_25:
      v17 = v16;
      goto LABEL_30;
    }
LABEL_23:
    v15 = v24;
    v10 = 1;
  }
  v3 = -1073741492;
  v19 = 32;
  v17 = -1073741492;
LABEL_30:
  SetFailureLocation(a3, 0, 11, v17, v19);
LABEL_31:
  if ( v6 )
    (*(void (__fastcall **)(unsigned int *, _QWORD))(a1 + 32))(v6, v13);
  return v3;
}
