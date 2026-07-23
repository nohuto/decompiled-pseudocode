/*
 * XREFs of IopConnectLineBasedInterrupt @ 0x14075B790
 * Callers:
 *     IoConnectInterruptEx @ 0x140711770 (IoConnectInterruptEx.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1407115F0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1407119EC (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140711FE4 (IopGetInterruptConnectionData.c)
 */

NTSTATUS __fastcall IopConnectLineBasedInterrupt(
        struct _DEVICE_OBJECT *a1,
        _QWORD *a2,
        __int64 (__fastcall *a3)(__int64 a1, __int64 a2),
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6)
{
  _BYTE *v6; // rdi
  unsigned int v7; // r12d
  _DWORD *DeviceNode; // r9
  NTSTATUS result; // eax
  int v10; // ebx
  unsigned int *v11; // rsi
  unsigned int v12; // r15d
  unsigned __int8 v13; // r14
  char *v14; // rdx
  __int64 v15; // r8
  char v16; // al
  _BYTE *PoolWithTag; // rax
  unsigned int v18; // r13d
  __int64 v19; // rcx
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  char *v28; // rsi
  __int64 v29; // r14
  __int64 v30; // [rsp+48h] [rbp-71h]
  _QWORD v31[20]; // [rsp+58h] [rbp-61h] BYREF
  PVOID P; // [rsp+108h] [rbp+4Fh] BYREF
  _QWORD *v33; // [rsp+110h] [rbp+57h]
  __int64 (__fastcall *v34)(__int64, __int64); // [rsp+118h] [rbp+5Fh]
  __int64 v35; // [rsp+120h] [rbp+67h]

  v35 = a4;
  v34 = a3;
  v33 = a2;
  P = 0LL;
  v6 = 0LL;
  *a2 = 0LL;
  v7 = 0;
  if ( !a1 )
    return -1073741811;
  DeviceNode = a1->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 || !a3 )
    return -1073741811;
  result = IopGetInterruptConnectionData(a1, &P);
  v10 = result;
  if ( result >= 0 )
  {
    v11 = (unsigned int *)P;
    if ( P )
    {
      v12 = 0;
      v13 = 0;
      if ( *(_DWORD *)P )
      {
        v14 = (char *)P + 8;
        v15 = *(unsigned int *)P;
        do
        {
          if ( !*(_DWORD *)v14 )
          {
            ++v12;
            v16 = v13;
            if ( v13 < (unsigned __int8)v14[8] )
              v16 = v14[8];
            v13 = v16;
          }
          v14 += 88;
          --v15;
        }
        while ( v15 );
        if ( v12 )
        {
          if ( !a6 )
            goto LABEL_18;
          if ( a6 >= v13 )
          {
            v13 = a6;
LABEL_18:
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v12 + 264, 0x6E696F49u);
            v6 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 8 * v12 + 264);
              v6[256] = v13;
              *((_DWORD *)v6 + 65) = v12;
              memset(v31, 0, 0x60uLL);
              v18 = 0;
              for ( LODWORD(v31[0]) = 1; v18 < *v11; ++v18 )
              {
                v19 = 22LL * v18;
                if ( !v11[v19 + 2] )
                {
                  v20 = *(_OWORD *)&v11[v19 + 6];
                  *(_OWORD *)&v31[1] = *(_OWORD *)&v11[v19 + 2];
                  v21 = *(_OWORD *)&v11[v19 + 10];
                  *(_OWORD *)&v31[3] = v20;
                  v22 = *(_OWORD *)&v11[v19 + 14];
                  *(_OWORD *)&v31[5] = v21;
                  v23 = *(_OWORD *)&v11[v19 + 18];
                  *(_OWORD *)&v31[7] = v22;
                  v31[11] = *(_QWORD *)&v11[v19 + 22];
                  *(_OWORD *)&v31[9] = v23;
                  v10 = IopConnectInterrupt(&v6[8 * v7 + 264], v34, 0LL, v35, 0, a5, v13, 1, v30, (__int64)v31);
                  if ( v10 < 0 )
                    goto LABEL_26;
                  if ( ++v7 >= v12 )
                    break;
                }
              }
              v24 = 2LL;
              v25 = v6;
              v26 = (_OWORD *)(*((_QWORD *)v6 + 33) + 112LL);
              do
              {
                *v25 = *v26;
                v25[1] = v26[1];
                v25[2] = v26[2];
                v25[3] = v26[3];
                v25[4] = v26[4];
                v25[5] = v26[5];
                v25[6] = v26[6];
                v25 += 8;
                v27 = v26[7];
                v26 += 8;
                *(v25 - 1) = v27;
                --v24;
              }
              while ( v24 );
              *v33 = v6;
            }
            else
            {
              v10 = -1073741670;
            }
            goto LABEL_26;
          }
        }
      }
      v10 = -1073741811;
LABEL_26:
      ExFreePoolWithTag(v11, 0);
      if ( v10 < 0 && v6 )
      {
        if ( v7 )
        {
          v28 = v6 + 264;
          v29 = v7;
          do
          {
            IoDisconnectInterrupt((PKINTERRUPT)(*(_QWORD *)v28 + 112LL));
            v28 += 8;
            --v29;
          }
          while ( v29 );
        }
        ExFreePoolWithTag(v6, 0);
      }
      return v10;
    }
  }
  return result;
}
