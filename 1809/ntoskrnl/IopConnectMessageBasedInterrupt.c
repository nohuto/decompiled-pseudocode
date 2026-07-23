/*
 * XREFs of IopConnectMessageBasedInterrupt @ 0x140754670
 * Callers:
 *     IoConnectInterruptEx @ 0x140711770 (IoConnectInterruptEx.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1407115F0 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x1407119EC (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140711FE4 (IopGetInterruptConnectionData.c)
 */

__int64 __fastcall IopConnectMessageBasedInterrupt(
        int a1,
        struct _DEVICE_OBJECT *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned int v7; // ebx
  int v11; // r14d
  unsigned int *v12; // rsi
  char v13; // r15
  _DWORD *DeviceNode; // rcx
  NTSTATUS InterruptConnectionData; // eax
  _DWORD *v16; // r13
  int MessageRoutingInfo; // edi
  unsigned int v18; // r8d
  char *v19; // rcx
  unsigned __int8 v20; // r10
  unsigned int *PoolWithTag; // rax
  __int64 v22; // rax
  _QWORD *v23; // r14
  char v24; // al
  __int64 v25; // r12
  __int64 v27; // [rsp+40h] [rbp-C0h]
  char v28; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v32; // [rsp+70h] [rbp-90h]
  _QWORD v33[12]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v34[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v35; // [rsp+F0h] [rbp-10h]
  int v36; // [rsp+100h] [rbp+0h]
  __int128 v37; // [rsp+104h] [rbp+4h]

  v7 = 0;
  v32 = a3;
  *a3 = 0LL;
  v30 = a4;
  P = 0LL;
  v28 = 0;
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  memset(v33, 0, sizeof(v33));
  if ( a2 && (DeviceNode = a2->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a4 )
  {
    InterruptConnectionData = IopGetInterruptConnectionData(a2, &P);
    v16 = P;
    MessageRoutingInfo = InterruptConnectionData;
    if ( InterruptConnectionData >= 0 )
    {
      v18 = 0;
      if ( !*(_DWORD *)P )
        goto LABEL_39;
      v19 = (char *)P + 16;
      do
      {
        v20 = v13;
        if ( (unsigned int)(*((_DWORD *)v19 - 2) - 1) <= 2 )
        {
          ++v11;
          if ( a1 == 5 )
          {
            v28 = 1;
          }
          else if ( a1 == 3 )
          {
            if ( a7 )
            {
              if ( a7 < (unsigned __int8)*v19 )
                goto LABEL_39;
              v13 = a7;
            }
            else if ( a6 )
            {
              v13 = *v19;
              if ( (unsigned __int8)*v19 <= v20 )
                v13 = v20;
            }
            else
            {
              v13 = 0;
            }
          }
        }
        ++v18;
        v19 += 88;
      }
      while ( v18 < *(_DWORD *)P );
      if ( v11 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(48 * v11 + 8), 0x6E696F49u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, (unsigned int)(48 * v11 + 8));
          v22 = 0LL;
          *(_BYTE *)v12 = v13;
          for ( LODWORD(P) = 0; (unsigned int)v22 < *v16; LODWORD(P) = v22 )
          {
            v23 = &v16[22 * v22 + 2];
            if ( (unsigned int)(*(_DWORD *)v23 - 1) <= 2 )
            {
              if ( v28 )
              {
                v24 = 0;
              }
              else if ( v13 )
              {
                v24 = v13;
              }
              else
              {
                v24 = *((_BYTE *)v23 + 8);
              }
              LODWORD(v33[0]) = 1;
              *(_OWORD *)&v33[1] = *(_OWORD *)v23;
              *(_OWORD *)&v33[3] = *((_OWORD *)v23 + 1);
              *(_OWORD *)&v33[5] = *((_OWORD *)v23 + 2);
              *(_OWORD *)&v33[7] = *((_OWORD *)v23 + 3);
              *(_OWORD *)&v33[9] = *((_OWORD *)v23 + 4);
              v33[11] = v23[10];
              MessageRoutingInfo = IopConnectInterrupt(&v31, 0LL, v30, a5, v12[1], a6, v24, 1, v27, (__int64)v33);
              if ( MessageRoutingInfo < 0 )
                goto LABEL_29;
              v25 = 6LL * v12[1];
              if ( *(_DWORD *)v23 == 3 )
              {
                v34[0] = 0;
                v35 = *(_OWORD *)(v23 + 3);
                v34[2] = *((_DWORD *)v23 + 1);
                v37 = *(_OWORD *)(v23 + 5);
                v36 = *((_DWORD *)v23 + 18);
                MessageRoutingInfo = HalGetMessageRoutingInfo(v34, v33);
                if ( MessageRoutingInfo < 0 )
                  goto LABEL_29;
                v23 = &v33[1];
              }
              *(_QWORD *)&v12[2 * v25 + 2] = v23[9];
              v12[2 * v25 + 8] = *((_DWORD *)v23 + 20);
              *(_QWORD *)&v12[2 * v25 + 4] = v23[3];
              *(_QWORD *)&v12[2 * v25 + 6] = v31 + 112;
              v12[2 * v25 + 9] = *((_DWORD *)v23 + 1);
              LOBYTE(v12[2 * v25 + 10]) = *((_BYTE *)v23 + 8);
              v12[2 * v25 + 11] = *((_DWORD *)v23 + 4);
              v12[2 * v25 + 12] = *((_DWORD *)v23 + 3);
              ++v12[1];
            }
            v22 = (unsigned int)((_DWORD)P + 1);
          }
          MessageRoutingInfo = 0;
          *v32 = v12;
        }
        else
        {
          MessageRoutingInfo = -1073741670;
        }
      }
      else
      {
LABEL_39:
        MessageRoutingInfo = -1073741811;
      }
    }
LABEL_29:
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    if ( MessageRoutingInfo < 0 && v12 )
    {
      if ( v12[1] )
      {
        do
          IoDisconnectInterrupt(*(PKINTERRUPT *)&v12[12 * v7++ + 6]);
        while ( v7 < v12[1] );
      }
      ExFreePoolWithTag(v12, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)MessageRoutingInfo;
}
