/*
 * XREFs of IopConnectMessageBasedInterrupt @ 0x140779928
 * Callers:
 *     IoConnectInterruptEx @ 0x140741210 (IoConnectInterruptEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetInterruptConnectionData @ 0x14073F934 (IopGetInterruptConnectionData.c)
 *     IoDisconnectInterrupt @ 0x140741080 (IoDisconnectInterrupt.c)
 *     IopConnectInterrupt @ 0x14074148C (IopConnectInterrupt.c)
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
  unsigned int v11; // ebx
  int v12; // r14d
  unsigned int *v13; // rsi
  char v14; // r15
  _DWORD *DeviceNode; // rcx
  NTSTATUS InterruptConnectionData; // eax
  _DWORD *v17; // r13
  int MessageRoutingInfo; // edi
  unsigned int v19; // r8d
  char *v20; // rcx
  unsigned __int8 v21; // r10
  unsigned int *PoolWithTag; // rax
  __int64 v23; // rax
  _QWORD *v24; // r14
  char v25; // al
  __int64 v26; // r12
  __int64 v28; // [rsp+40h] [rbp-C0h]
  char v29; // [rsp+50h] [rbp-B0h]
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v33; // [rsp+70h] [rbp-90h]
  _BYTE v34[56]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v35[12]; // [rsp+B0h] [rbp-50h] BYREF

  v33 = a3;
  v31 = a4;
  memset(v34, 0, sizeof(v34));
  v11 = 0;
  *a3 = 0LL;
  v12 = 0;
  P = 0LL;
  v13 = 0LL;
  v29 = 0;
  v14 = 0;
  memset(v35, 0, sizeof(v35));
  if ( a2 && (DeviceNode = a2->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a4 )
  {
    InterruptConnectionData = IopGetInterruptConnectionData(a2, &P);
    v17 = P;
    MessageRoutingInfo = InterruptConnectionData;
    if ( InterruptConnectionData >= 0 )
    {
      v19 = 0;
      if ( !*(_DWORD *)P )
        goto LABEL_39;
      v20 = (char *)P + 16;
      do
      {
        v21 = v14;
        if ( (unsigned int)(*((_DWORD *)v20 - 2) - 1) <= 2 )
        {
          ++v12;
          if ( a1 == 5 )
          {
            v29 = 1;
          }
          else if ( a1 == 3 )
          {
            if ( a7 )
            {
              if ( a7 < (unsigned __int8)*v20 )
                goto LABEL_39;
              v14 = a7;
            }
            else if ( a6 )
            {
              v14 = *v20;
              if ( (unsigned __int8)*v20 <= v21 )
                v14 = v21;
            }
            else
            {
              v14 = 0;
            }
          }
        }
        ++v19;
        v20 += 88;
      }
      while ( v19 < *(_DWORD *)P );
      if ( v12 )
      {
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(48 * v12 + 8), 0x6E696F49u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, (unsigned int)(48 * v12 + 8));
          v23 = 0LL;
          *(_BYTE *)v13 = v14;
          for ( LODWORD(P) = 0; (unsigned int)v23 < *v17; LODWORD(P) = v23 )
          {
            v24 = &v17[22 * v23 + 2];
            if ( (unsigned int)(*(_DWORD *)v24 - 1) <= 2 )
            {
              if ( v29 )
              {
                v25 = 0;
              }
              else if ( v14 )
              {
                v25 = v14;
              }
              else
              {
                v25 = *((_BYTE *)v24 + 8);
              }
              LODWORD(v35[0]) = 1;
              *(_OWORD *)&v35[1] = *(_OWORD *)v24;
              *(_OWORD *)&v35[3] = *((_OWORD *)v24 + 1);
              *(_OWORD *)&v35[5] = *((_OWORD *)v24 + 2);
              *(_OWORD *)&v35[7] = *((_OWORD *)v24 + 3);
              *(_OWORD *)&v35[9] = *((_OWORD *)v24 + 4);
              v35[11] = v24[10];
              MessageRoutingInfo = IopConnectInterrupt(&v32, 0LL, v31, a5, v13[1], a6, v25, 1, v28, (__int64)v35);
              if ( MessageRoutingInfo < 0 )
                goto LABEL_29;
              v26 = 6LL * v13[1];
              if ( *(_DWORD *)v24 == 3 )
              {
                *(_DWORD *)v34 = 0;
                *(_OWORD *)&v34[16] = *(_OWORD *)(v24 + 3);
                *(_DWORD *)&v34[8] = *((_DWORD *)v24 + 1);
                *(_OWORD *)&v34[36] = *(_OWORD *)(v24 + 5);
                *(_DWORD *)&v34[32] = *((_DWORD *)v24 + 18);
                MessageRoutingInfo = HalGetMessageRoutingInfo(v34, v35);
                if ( MessageRoutingInfo < 0 )
                  goto LABEL_29;
                v24 = &v35[1];
              }
              *(_QWORD *)&v13[2 * v26 + 2] = v24[9];
              v13[2 * v26 + 8] = *((_DWORD *)v24 + 20);
              *(_QWORD *)&v13[2 * v26 + 4] = v24[3];
              *(_QWORD *)&v13[2 * v26 + 6] = v32 + 112;
              v13[2 * v26 + 9] = *((_DWORD *)v24 + 1);
              LOBYTE(v13[2 * v26 + 10]) = *((_BYTE *)v24 + 8);
              v13[2 * v26 + 11] = *((_DWORD *)v24 + 4);
              v13[2 * v26 + 12] = *((_DWORD *)v24 + 3);
              ++v13[1];
            }
            v23 = (unsigned int)((_DWORD)P + 1);
          }
          MessageRoutingInfo = 0;
          *v33 = v13;
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
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    if ( MessageRoutingInfo < 0 && v13 )
    {
      if ( v13[1] )
      {
        do
          IoDisconnectInterrupt(*(PKINTERRUPT *)&v13[12 * v11++ + 6]);
        while ( v11 < v13[1] );
      }
      ExFreePoolWithTag(v13, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)MessageRoutingInfo;
}
