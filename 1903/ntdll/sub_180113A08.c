/*
 * XREFs of sub_180113A08 @ 0x180113A08
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180110670 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x18009CE20 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009CEC0 (ZwReadVirtualMemory.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     PssNtFreeRemoteSnapshot @ 0x1801106F0 (PssNtFreeRemoteSnapshot.c)
 */

__int64 __fastcall sub_180113A08(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, char a5)
{
  _QWORD *v5; // r12
  int VirtualMemory; // ebx
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  int *v10; // rax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int64 v25; // rax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // r12
  __int64 v28; // r12
  __int64 v30; // [rsp+58h] [rbp-A8h]
  __int64 v31; // [rsp+60h] [rbp-A0h]
  _QWORD v33[144]; // [rsp+80h] [rbp-80h] BYREF
  int v34; // [rsp+500h] [rbp+400h] BYREF
  __int64 v35; // [rsp+868h] [rbp+768h]
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
  memset(v33, 0, 0x478uLL);
  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_42;
  if ( v30 == 1144 )
  {
    if ( v34 == 1146311504 )
    {
      v7 = (unsigned __int64)v36 << 6;
      if ( v7 > 0xFFFFFFFF || (unsigned int)v7 >= 0xFFFFFB88 )
      {
        VirtualMemory = -1073741675;
        goto LABEL_42;
      }
      v8 = 8LL;
      v9 = v33;
      v10 = &v34;
      do
      {
        v11 = *((_OWORD *)v10 + 1);
        *(_OWORD *)v9 = *(_OWORD *)v10;
        v12 = *((_OWORD *)v10 + 2);
        *((_OWORD *)v9 + 1) = v11;
        v13 = *((_OWORD *)v10 + 3);
        *((_OWORD *)v9 + 2) = v12;
        v14 = *((_OWORD *)v10 + 4);
        *((_OWORD *)v9 + 3) = v13;
        v15 = *((_OWORD *)v10 + 5);
        *((_OWORD *)v9 + 4) = v14;
        v16 = *((_OWORD *)v10 + 6);
        *((_OWORD *)v9 + 5) = v15;
        v17 = *((_OWORD *)v10 + 7);
        v10 += 32;
        *((_OWORD *)v9 + 6) = v16;
        v9 += 16;
        *((_OWORD *)v9 - 1) = v17;
        --v8;
      }
      while ( v8 );
      v18 = v35;
      v19 = *((_OWORD *)v10 + 1);
      *(_OWORD *)v9 = *(_OWORD *)v10;
      v20 = *((_OWORD *)v10 + 2);
      *((_OWORD *)v9 + 1) = v19;
      v21 = *((_OWORD *)v10 + 3);
      *((_OWORD *)v9 + 2) = v20;
      v22 = *((_OWORD *)v10 + 4);
      *((_OWORD *)v9 + 3) = v21;
      v23 = *((_OWORD *)v10 + 5);
      *((_OWORD *)v9 + 4) = v22;
      v24 = *((_OWORD *)v10 + 6);
      v25 = *((_QWORD *)v10 + 14);
      *((_OWORD *)v9 + 5) = v23;
      *((_OWORD *)v9 + 6) = v24;
      v9[14] = v25;
      v33[109] = 0LL;
      v33[112] = 0LL;
      v33[115] = 0LL;
      v33[118] = 0LL;
      v33[122] = 0LL;
      v33[126] = 0LL;
      v33[141] = 0LL;
      if ( v18 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_42;
      }
      if ( v37 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_42;
      }
      if ( v39 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_42;
      }
      if ( v40 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_42;
      }
      if ( v41 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_42;
      }
      if ( v42 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_42;
      }
      if ( v43 )
      {
        VirtualMemory = ZwDuplicateObject();
        if ( VirtualMemory < 0 )
          goto LABEL_42;
      }
      VirtualMemory = ZwAllocateVirtualMemory();
      if ( VirtualMemory < 0 )
        goto LABEL_42;
      HIDWORD(v33[0]) = HIDWORD(v33[0]) & 0xFFFFFFF8 | 1;
      if ( v33[113] )
        v33[113] = 1144LL;
      if ( LOWORD(v33[35]) )
        v33[36] = 296LL;
      v26 = 0LL;
      VirtualMemory = ZwWriteVirtualMemory();
      if ( VirtualMemory < 0 )
        goto LABEL_42;
      if ( v38 )
      {
        VirtualMemory = ZwAllocateVirtualMemory();
        if ( VirtualMemory < 0 )
          goto LABEL_42;
        if ( (_DWORD)v7 )
        {
          while ( 1 )
          {
            v27 = (unsigned int)v7 - v26;
            v28 = v27 != 0;
            VirtualMemory = ZwReadVirtualMemory();
            if ( VirtualMemory < 0 )
              goto LABEL_42;
            if ( v30 != v28 )
              goto LABEL_41;
            VirtualMemory = ZwWriteVirtualMemory();
            if ( VirtualMemory < 0 )
              goto LABEL_42;
            if ( v31 != v30 )
            {
LABEL_41:
              VirtualMemory = -2147483635;
              goto LABEL_42;
            }
            v26 += v31;
            if ( v26 >= (unsigned int)v7 )
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
      goto LABEL_56;
    }
    VirtualMemory = -1073741816;
  }
  else
  {
    VirtualMemory = -2147483635;
  }
LABEL_42:
  if ( v33[126] )
    ZwDuplicateObject();
  if ( v33[122] )
    ZwDuplicateObject();
  if ( v33[115] )
    ZwDuplicateObject();
  if ( v33[118] )
    ZwDuplicateObject();
  if ( v33[112] )
    ZwDuplicateObject();
  if ( v33[109] )
    ZwDuplicateObject();
  if ( v33[141] )
    ZwDuplicateObject();
LABEL_56:
  if ( (a5 & 1) != 0 )
    PssNtFreeRemoteSnapshot();
  return (unsigned int)VirtualMemory;
}
