/*
 * XREFs of PsspDuplicateSnapshotLocalToRemote @ 0x180114174
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180111F60 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     PssNtFreeSnapshot @ 0x180089520 (PssNtFreeSnapshot.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x18009F194 (EvaluateCurrentState.c)
 *     PssValidateSnapshotDescriptor @ 0x18009FE18 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A0A20 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A0A60 (ZwDuplicateObject.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall PsspDuplicateSnapshotLocalToRemote(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // r13d
  signed int VirtualMemory; // ebx
  __int64 v10; // rdx
  _OWORD *v11; // rax
  _QWORD *v12; // rcx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 v27; // rax
  _QWORD v29[144]; // [rsp+60h] [rbp-A0h] BYREF

  result = PssValidateSnapshotDescriptor((__int64 *)a1);
  if ( (int)result < 0 )
    return result;
  memset(v29, 0, 0x478uLL);
  v7 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  v8 = -1;
  if ( v7 <= 0xFFFFFFFF )
    v8 = *(_DWORD *)(a1 + 888) << 6;
  VirtualMemory = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v7 <= 0xFFFFFFFF )
  {
    VirtualMemory = v8 >= 0xFFFFFB88 ? 0xC0000095 : 0;
    if ( v8 + 1144 >= 0x478 )
    {
      v10 = 8LL;
      v11 = (_OWORD *)a1;
      v12 = v29;
      do
      {
        v13 = v11[1];
        *(_OWORD *)v12 = *v11;
        v14 = v11[2];
        *((_OWORD *)v12 + 1) = v13;
        v15 = v11[3];
        *((_OWORD *)v12 + 2) = v14;
        v16 = v11[4];
        *((_OWORD *)v12 + 3) = v15;
        v17 = v11[5];
        *((_OWORD *)v12 + 4) = v16;
        v18 = v11[6];
        *((_OWORD *)v12 + 5) = v17;
        v19 = v11[7];
        v11 += 8;
        *((_OWORD *)v12 + 6) = v18;
        v12 += 16;
        *((_OWORD *)v12 - 1) = v19;
        --v10;
      }
      while ( v10 );
      v20 = *(_QWORD *)(a1 + 872);
      v21 = v11[1];
      *(_OWORD *)v12 = *v11;
      v22 = v11[2];
      *((_OWORD *)v12 + 1) = v21;
      v23 = v11[3];
      *((_OWORD *)v12 + 2) = v22;
      v24 = v11[4];
      *((_OWORD *)v12 + 3) = v23;
      v25 = v11[5];
      *((_OWORD *)v12 + 4) = v24;
      v26 = v11[6];
      v27 = *((_QWORD *)v11 + 14);
      *((_OWORD *)v12 + 5) = v25;
      *((_OWORD *)v12 + 6) = v26;
      v12[14] = v27;
      v29[109] = 0LL;
      v29[112] = 0LL;
      v29[115] = 0LL;
      v29[118] = 0LL;
      v29[122] = 0LL;
      v29[126] = 0LL;
      v29[141] = 0LL;
      if ( v20 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_33;
      }
      if ( *(_QWORD *)(a1 + 896) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_33;
      }
      if ( *(_QWORD *)(a1 + 920) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_33;
      }
      if ( *(_QWORD *)(a1 + 944) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_33;
      }
      if ( *(_QWORD *)(a1 + 976) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_33;
      }
      if ( *(_QWORD *)(a1 + 1008) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_33;
      }
      if ( *(_QWORD *)(a1 + 1128) )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_33;
      }
      VirtualMemory = ZwAllocateVirtualMemory();
      if ( VirtualMemory < 0 )
        goto LABEL_33;
      HIDWORD(v29[0]) = HIDWORD(v29[0]) & 0xFFFFFFF8 | 1;
      if ( *(_QWORD *)(a1 + 904) )
        v29[113] = 1144LL;
      if ( *(_WORD *)(a1 + 280) )
        v29[36] = 296LL;
      EvaluateCurrentState((_DWORD **)&g_Feature_3481474360_60407405_FeatureDescriptorDetails);
      VirtualMemory = NtWriteVirtualMemory();
      if ( VirtualMemory < 0 )
        goto LABEL_33;
      if ( *(_QWORD *)(a1 + 904) )
      {
        VirtualMemory = NtWriteVirtualMemory();
        if ( VirtualMemory < 0 )
          goto LABEL_33;
      }
      VirtualMemory = 0;
      *a3 = 0LL;
    }
  }
  if ( VirtualMemory < 0 )
  {
LABEL_33:
    if ( v29[126] )
      ZwDuplicateObject();
    if ( v29[122] )
      ZwDuplicateObject();
    if ( v29[115] )
      ZwDuplicateObject();
    if ( v29[118] )
      ZwDuplicateObject();
    if ( v29[112] )
      ZwDuplicateObject();
    if ( v29[109] )
      ZwDuplicateObject();
    if ( v29[141] )
      ZwDuplicateObject();
  }
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)VirtualMemory;
}
