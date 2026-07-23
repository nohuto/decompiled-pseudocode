/*
 * XREFs of CmCheckRegistry @ 0x140641AD8
 * Callers:
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14068EB68 (CmpReorganizeHive.c)
 * Callees:
 *     RtlClearAllBits @ 0x14008D950 (RtlClearAllBits.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SetFailureLocation @ 0x14027F4C0 (SetFailureLocation.c)
 *     HvCheckHive @ 0x1406323F0 (HvCheckHive.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14063FE98 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckRegistry2 @ 0x140663AD0 (CmpCheckRegistry2.c)
 */

__int64 __fastcall CmCheckRegistry(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int *v6; // r13
  _RTL_BITMAP *p_BitMapHeader; // r12
  __int64 v8; // rdx
  __int64 v9; // r8
  char v10; // si
  int v11; // ecx
  unsigned int v12; // ebx
  unsigned int v13; // r15d
  unsigned int *v14; // rax
  int v15; // eax
  int v16; // eax
  int v18; // r9d
  int v19; // [rsp+20h] [rbp-49h]
  int v20; // [rsp+40h] [rbp-29h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+48h] [rbp-21h] BYREF
  _DWORD v22[26]; // [rsp+58h] [rbp-11h] BYREF
  char v23; // [rsp+D0h] [rbp+67h] BYREF
  int v24; // [rsp+D8h] [rbp+6Fh]
  int v25; // [rsp+E8h] [rbp+7Fh]

  v24 = a2;
  v3 = 0;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  BitMapHeader.Buffer = 0LL;
  v6 = 0LL;
  p_BitMapHeader = 0LL;
  memset(v22, 0, 0x38uLL);
  v10 = 0;
  v20 = 0;
  v23 = 0;
  if ( (PVOID)BugCheckParameter2 == CmpMasterHive )
    return v3;
  v11 = v24;
  v12 = *(_DWORD *)(BugCheckParameter2 + 272) >> 3;
  v13 = (((v12 + 7) >> 3) + 7) & 0xFFFFFFF8;
  if ( (v24 & 0x80000) != 0 )
  {
    v14 = (unsigned int *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter2 + 24))(
                            v13,
                            0LL,
                            1649167683LL);
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
    v11 = v24;
  }
  v15 = v11 & 0x10000;
  v25 = v11 & 0x10000;
  while ( 1 )
  {
    if ( v15 )
    {
      if ( p_BitMapHeader )
        RtlClearAllBits(p_BitMapHeader);
      v16 = HvCheckHive(BugCheckParameter2, v8, v9, (__int64)p_BitMapHeader, (__int64)v22, a3);
      v3 = v16;
      if ( v16 < 0 )
      {
        v19 = 16;
        goto LABEL_30;
      }
      if ( v22[0] + v22[4] + v22[8] > (unsigned int)CmpReorganizeLimit )
        *(_DWORD *)(BugCheckParameter2 + 4152) |= 0x400u;
      v11 = v24;
      *(_DWORD *)(BugCheckParameter2 + 4792) = v22[12];
      *(_DWORD *)(BugCheckParameter2 + 4796) = v22[13];
    }
    if ( *(int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 36LL) < 0 )
      break;
    v16 = CmpValidateHiveSecurityDescriptors(BugCheckParameter2, v11, &v23, (__int64)p_BitMapHeader, a3);
    v3 = v16;
    if ( v16 >= 0 )
      goto LABEL_15;
    if ( v16 == -2147483606 )
    {
      v10 = 1;
LABEL_15:
      v16 = CmpCheckRegistry2(BugCheckParameter2, v23, p_BitMapHeader, a3, (__int64)&v20);
      v3 = v16;
      if ( v16 >= 0 )
        goto LABEL_16;
      if ( v16 == -2147483606 )
      {
        v10 = 1;
LABEL_16:
        *(_DWORD *)(BugCheckParameter2 + 4804) = v20;
        v3 = v10 != 0 ? 0x8000002A : 0;
        goto LABEL_17;
      }
      if ( v16 != -1073741267 )
      {
        v19 = 64;
        goto LABEL_30;
      }
      goto LABEL_25;
    }
    if ( v16 != -1073741267 )
    {
      v19 = 48;
LABEL_30:
      v18 = v16;
      goto LABEL_33;
    }
LABEL_25:
    v15 = v25;
    v10 = 1;
    v11 = v24;
  }
  v3 = -1073741492;
  v19 = 32;
  v18 = -1073741492;
LABEL_33:
  SetFailureLocation(a3, 0, 11, v18, v19);
LABEL_17:
  if ( v6 )
    (*(void (__fastcall **)(unsigned int *, _QWORD))(BugCheckParameter2 + 32))(v6, v13);
  return v3;
}
