/*
 * XREFs of XilCoreCommonBuffer_AllocateBuffers @ 0x1C0047B48
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x1C00476A8 (XilCoreCommonBuffer_AcquireBuffer.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C00478E8 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_Create @ 0x1C0047F2C (XilCoreCommonBuffer_Create.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x1C0048190 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FE0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_qdd @ 0x1C0014F90 (WPP_RECORDER_SF_qdd.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x1C00468C4 (DmaEnabler_AllocateCommonBufferPage.c)
 *     WPP_RECORDER_SF_ddqDddd @ 0x1C0047530 (WPP_RECORDER_SF_ddqDddd.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C006ABC8 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C006B054 (SecureDmaEnabler_FreeCommonBufferPage.c)
 */

void __fastcall XilCoreCommonBuffer_AllocateBuffers(__int64 **a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  unsigned int v7; // r12d
  __int64 v8; // rax
  unsigned int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 *v14; // r15
  __int64 **v15; // rdi
  KIRQL v16; // al
  __int64 v17; // r14
  _QWORD *v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rcx
  __int64 ***v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r9
  int v28; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+28h] [rbp-80h]
  __int64 v30; // [rsp+30h] [rbp-78h]
  __int64 v31; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v33; // [rsp+C0h] [rbp+18h]
  __int64 v34; // [rsp+C8h] [rbp+20h]

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qdd(
      a1[1][9],
      5u,
      8u,
      0xBu,
      (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids,
      a2,
      *(_DWORD *)(a2 + 24),
      *(_DWORD *)(a2 + 28));
  _InterlockedIncrement((volatile signed __int32 *)a1 + 52);
  v7 = ((unsigned int)(a3 * *(_DWORD *)a2) >> 12) + (((a3 * *(_DWORD *)a2) & 0xFFF) != 0);
  v8 = 0x1000u / *(_DWORD *)a2;
  v33 = 0x1000u / *(_DWORD *)a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v30) = v8;
    LODWORD(v29) = v7;
    WPP_RECORDER_SF_dd(a1[1][9], 5u, 8u, 0xCu, (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids, v29, v30);
    v8 = v33;
  }
  v9 = 0;
  if ( v7 )
  {
    v10 = 88 * v8 + 32;
    v34 = v10;
    do
    {
      v11 = **a1;
      if ( *((_BYTE *)*a1 + 80) )
        v12 = SecureDmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(v11 + 104), v10, &v31, &v32);
      else
        v12 = DmaEnabler_AllocateCommonBufferPage(*(__int64 **)(v11 + 96), v10, &v31, &v32);
      if ( v12 < 0 )
        break;
      v14 = (__int64 *)v31;
      if ( (*(_DWORD *)(v31 + 8) & 0xFFF) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(a1[1][9], 3u, 8u, 0xDu, (__int64)&WPP_5fc7d39ce5cf31fa9112447a0ca2d111_Traceguids);
        if ( *((_BYTE *)*a1 + 80) )
          SecureDmaEnabler_FreeCommonBufferPage(v13, v14);
        else
          (*(void (__fastcall **)(unsigned __int64, __int64))(WdfFunctions_01023 + 1664))(
            WPP_MAIN_CB.Dpc.ProcessorHistory,
            v14[2]);
      }
      else
      {
        v15 = a1 + 2;
        v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a1 + 2);
        v17 = v32;
        *((_BYTE *)a1 + 25) = v16;
        ++*((_DWORD *)a1 + 50);
        *(_QWORD *)(v17 + 24) = v14;
        *(_BYTE *)(v17 + 16) = 1;
        v18 = *(_QWORD **)(a2 + 56);
        if ( *v18 != a2 + 48 )
LABEL_32:
          __fastfail(3u);
        *(_QWORD *)v17 = a2 + 48;
        *(_QWORD *)(v17 + 8) = v18;
        *v18 = v17;
        *(_QWORD *)(a2 + 56) = v17;
        if ( v33 )
        {
          v19 = a2 + 32;
          v20 = (_QWORD *)(v17 + 80);
          do
          {
            v21 = *v14;
            *(v20 - 4) = *v14;
            *(v20 - 4) = v21 + v6 * *(_DWORD *)a2;
            v22 = v14[1];
            *(v20 - 3) = v22;
            v23 = v6 * *(_DWORD *)a2;
            *(v20 - 2) = v17;
            *(v20 - 3) = v22 + v23;
            *((_DWORD *)v20 - 2) = *(_DWORD *)a2;
            v24 = *(_QWORD **)(v19 + 8);
            if ( *v24 != v19 )
              goto LABEL_32;
            *(v20 - 5) = v24;
            *(v20 - 6) = v19;
            *v24 = v20 - 6;
            *(_QWORD *)(v19 + 8) = v20 - 6;
            v25 = (__int64 ***)a1[21];
            if ( *v25 != a1 + 20 )
              goto LABEL_32;
            *v20 = a1 + 20;
            v20[1] = v25;
            *v25 = (__int64 **)v20;
            a1[21] = v20;
            v26 = (unsigned int)(*(_DWORD *)(a2 + 24) + 1);
            v27 = (unsigned int)(*(_DWORD *)(a2 + 28) + 1);
            *(_DWORD *)(a2 + 24) = v26;
            *(_DWORD *)(a2 + 28) = v27;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_ddqDddd(a1[1][9], v26, v19, v27, v28);
              v19 = a2 + 32;
            }
            ++v6;
            v20 += 11;
          }
          while ( v6 < v33 );
          v15 = a1 + 2;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)v15, *((_BYTE *)v15 + 9));
        v6 = 0;
      }
      v10 = v34;
      ++v9;
    }
    while ( v9 < v7 );
  }
}
