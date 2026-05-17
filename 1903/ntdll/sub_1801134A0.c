/*
 * XREFs of sub_1801134A0 @ 0x1801134A0
 * Callers:
 *     PssNtDuplicateSnapshot @ 0x180110670 (PssNtDuplicateSnapshot.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009C9E0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009CAA0 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x18009CE20 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009CE60 (ZwDuplicateObject.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     PssNtFreeSnapshot @ 0x180110900 (PssNtFreeSnapshot.c)
 */

__int64 __fastcall sub_1801134A0(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rdx
  _OWORD *v8; // rax
  _QWORD *v9; // rcx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rdx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rax
  int VirtualMemory; // ebx
  _QWORD v28[144]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v28, 0, 0x478uLL);
  v6 = (unsigned __int64)*(unsigned int *)(a1 + 888) << 6;
  if ( v6 > 0xFFFFFFFF )
  {
    VirtualMemory = -1073741675;
  }
  else if ( (unsigned int)(v6 + 1144) < 0x478 )
  {
    VirtualMemory = -1073741675;
  }
  else
  {
    v7 = 8LL;
    v8 = (_OWORD *)a1;
    v9 = v28;
    do
    {
      v10 = v8[1];
      *(_OWORD *)v9 = *v8;
      v11 = v8[2];
      *((_OWORD *)v9 + 1) = v10;
      v12 = v8[3];
      *((_OWORD *)v9 + 2) = v11;
      v13 = v8[4];
      *((_OWORD *)v9 + 3) = v12;
      v14 = v8[5];
      *((_OWORD *)v9 + 4) = v13;
      v15 = v8[6];
      *((_OWORD *)v9 + 5) = v14;
      v16 = v8[7];
      v8 += 8;
      *((_OWORD *)v9 + 6) = v15;
      v9 += 16;
      *((_OWORD *)v9 - 1) = v16;
      --v7;
    }
    while ( v7 );
    v17 = *(_QWORD *)(a1 + 872);
    v18 = v8[1];
    *(_OWORD *)v9 = *v8;
    v19 = v8[2];
    *((_OWORD *)v9 + 1) = v18;
    v20 = v8[3];
    *((_OWORD *)v9 + 2) = v19;
    v21 = v8[4];
    *((_OWORD *)v9 + 3) = v20;
    v22 = v8[5];
    *((_OWORD *)v9 + 4) = v21;
    v23 = v8[6];
    v24 = *((_QWORD *)v8 + 14);
    *((_OWORD *)v9 + 5) = v22;
    *((_OWORD *)v9 + 6) = v23;
    v9[14] = v24;
    v28[109] = 0LL;
    v28[112] = 0LL;
    v28[115] = 0LL;
    v28[118] = 0LL;
    v28[122] = 0LL;
    v28[126] = 0LL;
    v28[141] = 0LL;
    if ( !v17 || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
    {
      if ( !*(_QWORD *)(a1 + 896) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
      {
        if ( !*(_QWORD *)(a1 + 920) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
        {
          if ( !*(_QWORD *)(a1 + 944) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
          {
            if ( !*(_QWORD *)(a1 + 976) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
            {
              if ( !*(_QWORD *)(a1 + 1008) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
              {
                if ( !*(_QWORD *)(a1 + 1128) || (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0) )
                {
                  VirtualMemory = ZwAllocateVirtualMemory();
                  if ( VirtualMemory >= 0 )
                  {
                    HIDWORD(v28[0]) = HIDWORD(v28[0]) & 0xFFFFFFF8 | 1;
                    if ( *(_QWORD *)(a1 + 904) )
                      v28[113] = 1144LL;
                    if ( *(_WORD *)(a1 + 280) )
                      v28[36] = 296LL;
                    VirtualMemory = ZwWriteVirtualMemory();
                    if ( VirtualMemory >= 0 )
                    {
                      if ( !*(_QWORD *)(a1 + 904) || (VirtualMemory = ZwWriteVirtualMemory(), VirtualMemory >= 0) )
                      {
                        VirtualMemory = 0;
                        *a3 = 0LL;
                        goto LABEL_42;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v28[126] )
    ZwDuplicateObject();
  if ( v28[122] )
    ZwDuplicateObject();
  if ( v28[115] )
    ZwDuplicateObject();
  if ( v28[118] )
    ZwDuplicateObject();
  if ( v28[112] )
    ZwDuplicateObject();
  if ( v28[109] )
    ZwDuplicateObject();
  if ( v28[141] )
    ZwDuplicateObject();
LABEL_42:
  if ( (a4 & 1) != 0 )
    PssNtFreeSnapshot(a1);
  return (unsigned int)VirtualMemory;
}
