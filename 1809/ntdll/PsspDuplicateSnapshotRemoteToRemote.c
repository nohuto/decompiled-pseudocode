/*
 * XREFs of PsspDuplicateSnapshotRemoteToRemote @ 0x180114744
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180111F60 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     EvaluateCurrentState @ 0x18009F194 (EvaluateCurrentState.c)
 *     PssValidateSnapshotDescriptor @ 0x18009FE18 (PssValidateSnapshotDescriptor.c)
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A06A0 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x1800A0A20 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A0A60 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A0AC0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x180111FE0 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall PsspDuplicateSnapshotRemoteToRemote(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v5; // r15
  signed int VirtualMemory; // ebx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rax
  unsigned __int64 v27; // rsi
  int v28; // eax
  __int64 v29; // r15
  __int64 v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h]
  _QWORD v34[144]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v35[111]; // [rsp+500h] [rbp+400h] BYREF
  unsigned int v36; // [rsp+878h] [rbp+778h]
  __int64 v37; // [rsp+880h] [rbp+780h]
  __int64 v38; // [rsp+888h] [rbp+788h]
  __int64 v39; // [rsp+898h] [rbp+798h]
  __int64 v40; // [rsp+8B0h] [rbp+7B0h]
  __int64 v41; // [rsp+8D0h] [rbp+7D0h]
  __int64 v42; // [rsp+8F0h] [rbp+7F0h]
  __int64 v43; // [rsp+968h] [rbp+868h]

  *a4 = 0LL;
  v5 = a4;
  memset(v34, 0, 0x478uLL);
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_52;
  if ( v31 == 1144 )
  {
    if ( LODWORD(v35[0]) == 1146311504 )
    {
      VirtualMemory = PssValidateSnapshotDescriptor(v35);
      if ( VirtualMemory >= 0 )
      {
        v7 = (unsigned __int64)v36 << 6;
        v8 = 0xFFFFFFFFLL;
        if ( v7 <= 0xFFFFFFFF )
          v8 = (unsigned int)v7;
        VirtualMemory = v7 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v7 <= 0xFFFFFFFF )
        {
          VirtualMemory = (unsigned int)v8 >= 0xFFFFFB88 ? 0xC0000095 : 0;
          if ( (unsigned int)(v8 + 1144) >= 0x478 )
          {
            v9 = 8LL;
            v10 = v34;
            v11 = v35;
            do
            {
              v12 = *((_OWORD *)v11 + 1);
              *(_OWORD *)v10 = *(_OWORD *)v11;
              v13 = *((_OWORD *)v11 + 2);
              *((_OWORD *)v10 + 1) = v12;
              v14 = *((_OWORD *)v11 + 3);
              *((_OWORD *)v10 + 2) = v13;
              v15 = *((_OWORD *)v11 + 4);
              *((_OWORD *)v10 + 3) = v14;
              v16 = *((_OWORD *)v11 + 5);
              *((_OWORD *)v10 + 4) = v15;
              v17 = *((_OWORD *)v11 + 6);
              *((_OWORD *)v10 + 5) = v16;
              v18 = *((_OWORD *)v11 + 7);
              v11 += 16;
              *((_OWORD *)v10 + 6) = v17;
              v10 += 16;
              *((_OWORD *)v10 - 1) = v18;
              --v9;
            }
            while ( v9 );
            v19 = v35[109];
            v20 = *((_OWORD *)v11 + 1);
            *(_OWORD *)v10 = *(_OWORD *)v11;
            v21 = *((_OWORD *)v11 + 2);
            *((_OWORD *)v10 + 1) = v20;
            v22 = *((_OWORD *)v11 + 3);
            *((_OWORD *)v10 + 2) = v21;
            v23 = *((_OWORD *)v11 + 4);
            *((_OWORD *)v10 + 3) = v22;
            v24 = *((_OWORD *)v11 + 5);
            *((_OWORD *)v10 + 4) = v23;
            v25 = *((_OWORD *)v11 + 6);
            v26 = v11[14];
            *((_OWORD *)v10 + 5) = v24;
            *((_OWORD *)v10 + 6) = v25;
            v10[14] = v26;
            v34[109] = 0LL;
            v34[112] = 0LL;
            v34[115] = 0LL;
            v34[118] = 0LL;
            v34[122] = 0LL;
            v34[126] = 0LL;
            v34[141] = 0LL;
            if ( v19 )
            {
              VirtualMemory = ZwDuplicateObject();
              if ( VirtualMemory < 0 )
                goto LABEL_52;
            }
            if ( v37 )
            {
              VirtualMemory = ZwDuplicateObject();
              if ( VirtualMemory < 0 )
                goto LABEL_52;
            }
            if ( v39 )
            {
              VirtualMemory = ZwDuplicateObject();
              if ( VirtualMemory < 0 )
                goto LABEL_52;
            }
            if ( v40 )
            {
              VirtualMemory = ZwDuplicateObject();
              if ( VirtualMemory < 0 )
                goto LABEL_52;
            }
            if ( v41 )
            {
              VirtualMemory = ZwDuplicateObject();
              if ( VirtualMemory < 0 )
                goto LABEL_52;
            }
            if ( v42 )
            {
              VirtualMemory = ZwDuplicateObject();
              if ( VirtualMemory < 0 )
                goto LABEL_52;
            }
            if ( v43 )
            {
              VirtualMemory = ZwDuplicateObject();
              if ( VirtualMemory < 0 )
                goto LABEL_52;
            }
            VirtualMemory = ZwAllocateVirtualMemory();
            if ( VirtualMemory < 0 )
              goto LABEL_52;
            HIDWORD(v34[0]) = HIDWORD(v34[0]) & 0xFFFFFFF8 | 1;
            if ( v34[113] )
              v34[113] = 1144LL;
            if ( LOWORD(v34[35]) )
              v34[36] = 296LL;
            if ( EvaluateCurrentState((_DWORD **)&g_Feature_3481474360_60407405_FeatureDescriptorDetails) )
            {
              v27 = 0LL;
              v28 = NtWriteVirtualMemory();
            }
            else
            {
              v28 = NtWriteVirtualMemory();
              v27 = 0LL;
            }
            VirtualMemory = v28;
            if ( v28 < 0 )
              goto LABEL_52;
            if ( v38 )
            {
              VirtualMemory = ZwAllocateVirtualMemory();
              if ( VirtualMemory < 0 )
                goto LABEL_52;
              if ( v8 )
              {
                while ( 1 )
                {
                  v29 = v8 - v27;
                  if ( v8 != v27 )
                    v29 = 1LL;
                  VirtualMemory = ZwReadVirtualMemory();
                  if ( VirtualMemory < 0 )
                    goto LABEL_52;
                  if ( v31 != v29 )
                    goto LABEL_51;
                  VirtualMemory = NtWriteVirtualMemory();
                  if ( VirtualMemory < 0 )
                    goto LABEL_52;
                  if ( v32 != v31 )
                  {
LABEL_51:
                    VirtualMemory = -2147483635;
                    goto LABEL_52;
                  }
                  v27 += v32;
                  if ( v27 >= v8 )
                  {
                    v5 = a4;
                    break;
                  }
                }
              }
              ZwFreeVirtualMemory();
            }
            VirtualMemory = 0;
            *v5 = 0LL;
          }
        }
        if ( VirtualMemory >= 0 )
          goto LABEL_66;
      }
    }
    else
    {
      VirtualMemory = -1073741816;
    }
  }
  else
  {
    VirtualMemory = -2147483635;
  }
LABEL_52:
  if ( v34[126] )
    ZwDuplicateObject();
  if ( v34[122] )
    ZwDuplicateObject();
  if ( v34[115] )
    ZwDuplicateObject();
  if ( v34[118] )
    ZwDuplicateObject();
  if ( v34[112] )
    ZwDuplicateObject();
  if ( v34[109] )
    ZwDuplicateObject();
  if ( v34[141] )
    ZwDuplicateObject();
LABEL_66:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot();
  return (unsigned int)VirtualMemory;
}
