/*
 * XREFs of VidSchEnqueueCpuEvent @ 0x1C00CA9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0002B10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C00055D0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiFreeQueuePacket @ 0x1C000E874 (VidSchiFreeQueuePacket.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C00318C4 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0DIGBGJFG@@@QEAAPEAPEA.c)
 *     ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035768 (-VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0039AC0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007ACF0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1C00CCFF8 (VidSchiAllocateHwQueuePacket.c)
 */

__int64 __fastcall VidSchEnqueueCpuEvent(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int8 a5,
        HANDLE Handle)
{
  int v8; // edi
  __int64 v9; // r14
  unsigned int v10; // r13d
  struct _VIDSCH_QUEUE_PACKET **v11; // rax
  struct _VIDSCH_QUEUE_PACKET **v12; // rdi
  unsigned int v13; // ebp
  struct _VIDSCH_QUEUE_PACKET **v14; // rsi
  __int64 v15; // r12
  struct VIDSCH_HW_QUEUE *v16; // r15
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v22; // edx
  struct _VIDSCH_QUEUE_PACKET *HwQueuePacket; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _VIDSCH_QUEUE_PACKET *v26; // rax
  struct _VIDSCH_QUEUE_PACKET *v27; // rdx
  __int64 v28; // rbx
  struct _VIDSCH_QUEUE_PACKET *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rbx
  struct _VIDSCH_QUEUE_PACKET *v32; // rdx
  __int64 v33; // rax
  PVOID v34; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  PVOID P; // [rsp+40h] [rbp-68h] BYREF
  char v37; // [rsp+48h] [rbp-60h] BYREF
  int v38; // [rsp+58h] [rbp-50h]
  unsigned int v39; // [rsp+B0h] [rbp+8h]
  __int64 v40; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v41; // [rsp+C0h] [rbp+18h]

  v39 = a1;
  v8 = a1;
  if ( a3 <= 0x41 && (a3 || (_DWORD)a1) )
  {
    v41 = *((_BYTE *)DXGPROCESS::GetCurrent() + 299);
    if ( (v41 & 8) != 0 )
    {
      LODWORD(v9) = 0;
      v34 = Handle;
    }
    else
    {
      v17 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v9 = v17;
      v34 = Object;
      if ( v17 < 0 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v19, v18);
        *(_QWORD *)(v20 + 24) = v9;
        WdLogEvent5_WdAssertion(v20);
        return (unsigned int)v9;
      }
    }
    P = 0LL;
    v10 = v8 + a3;
    v38 = 0;
    v11 = (struct _VIDSCH_QUEUE_PACKET **)NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,945908054>::AllocateElements(
                                            &P,
                                            v8 + a3);
    v12 = v11;
    if ( v11 )
    {
      v13 = 0;
      if ( !v10 )
        goto LABEL_40;
      v40 = a2 - (_QWORD)v11;
      v14 = v11;
      while ( 1 )
      {
        v15 = 0LL;
        v16 = 0LL;
        if ( v13 >= v39 )
        {
          _mm_lfence();
          v15 = *(_QWORD *)(a4 + 8LL * (v13 - v39));
        }
        else
        {
          v16 = *(struct _VIDSCH_QUEUE_PACKET **)((char *)v14 + v40);
        }
        v22 = 0;
        if ( v16 )
        {
          HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateHwQueuePacket(v16, 0LL);
        }
        else
        {
          LOBYTE(v22) = *(_DWORD *)(v15 + 788) == 0;
          HwQueuePacket = (struct _VIDSCH_QUEUE_PACKET *)VidSchiAllocateQueuePacket(v15, v22);
        }
        *v14 = HwQueuePacket;
        if ( !HwQueuePacket )
          break;
        *(_DWORD *)HwQueuePacket = 895576406;
        *((_DWORD *)*v14 + 12) = 5;
        *((_QWORD *)*v14 + 7) = MEMORY[0xFFFFF78000000320];
        *((_DWORD *)*v14 + 13) = 2;
        v26 = *v14;
        if ( v16 )
          *((_QWORD *)v26 + 12) = v16;
        else
          *((_QWORD *)v26 + 11) = v15;
        *((_QWORD *)*v14 + 13) = KeGetCurrentThread();
        *((_QWORD *)*v14 + 9) = 0LL;
        *((_DWORD *)*v14 + 68) ^= (a5 ^ (unsigned __int8)*((_DWORD *)*v14 + 68)) & 1;
        *((_DWORD *)*v14 + 68) |= 2u;
        *((_DWORD *)*v14 + 68) ^= (*((_DWORD *)*v14 + 68) ^ v41) & 8;
        *((_QWORD *)*v14 + 67) = v34;
        *((_QWORD *)*v14 + 99) = 0LL;
        v27 = *v14;
        if ( v13 )
        {
          *((_QWORD *)v27 + 100) = v12[v13 - 1];
          *((_QWORD *)v12[v13 - 1] + 99) = *v14;
        }
        else
        {
          *((_QWORD *)v27 + 100) = 0LL;
        }
        ++v13;
        ++v14;
        if ( v13 >= v10 )
        {
          v28 = v10;
          do
          {
            v29 = *v12;
            if ( *((_QWORD *)*v12 + 12) )
              VidSchiSubmitCommandPacketToHwQueue(v29);
            else
              VidSchiSubmitCommandPacketToQueue((__int64)v29);
            ++v12;
            --v28;
          }
          while ( v28 );
          goto LABEL_40;
        }
      }
      v30 = WdLogNewEntry5_WdWarning(v25, v24);
      *(_QWORD *)(v30 + 24) = -1073741801LL;
      *(_QWORD *)(v30 + 32) = 9979LL;
      WdLogEvent5_WdWarning(v30);
      if ( v13 )
      {
        v31 = v13;
        do
        {
          v32 = *v12;
          if ( *v12 )
          {
            if ( *((_QWORD *)v32 + 12) )
              VidSchiFreeQueuePacket(v16, v32);
            else
              VidSchiFreeQueuePacket(v15, (__int64)v32);
          }
          ++v12;
          --v31;
        }
        while ( v31 );
      }
    }
    LODWORD(v9) = -1073741801;
LABEL_40:
    if ( P != &v37 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
    }
    return (unsigned int)v9;
  }
  v33 = WdLogNewEntry5_WdAssertion(a1, a2);
  *(_QWORD *)(v33 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v33);
  return 3221225485LL;
}
