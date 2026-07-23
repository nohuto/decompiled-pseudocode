/*
 * XREFs of EtwpDemuxPrivateTraceHandle @ 0x1408C0FBC
 * Callers:
 *     EtwpEnableGuid @ 0x1406570F8 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x140659A48 (EtwpNotifyGuid.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     PidNodeCompare @ 0x1408C18BC (PidNodeCompare.c)
 */

__int64 __fastcall EtwpDemuxPrivateTraceHandle(int a1, unsigned __int16 a2, unsigned __int16 *a3)
{
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edi
  unsigned __int64 v13; // rbx
  int v14; // esi
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 **v17; // rbx
  __int64 *i; // rax
  int v19; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 >= 0x40u )
  {
    v7 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v9 = v7 + 4096;
    ExAcquirePushLockExclusiveEx(v7 + 4096, 0LL);
    v10 = v7 + 4080;
    v19 = a1;
    v11 = *(_QWORD *)(v7 + 4088);
    v12 = 0;
    v13 = *(_QWORD *)(v7 + 4080);
    if ( (v11 & 1) != 0 )
    {
      if ( v13 )
        v13 ^= v10;
      else
        v13 = 0LL;
    }
    v14 = v11 & 1;
    if ( v13 )
    {
      do
      {
        v15 = PidNodeCompare(&v19, v13);
        if ( v15 >= 0 )
        {
          if ( v15 <= 0 )
            break;
          v16 = *(_QWORD *)(v13 + 8);
        }
        else
        {
          v16 = *(_QWORD *)v13;
        }
        if ( v14 && v16 )
          v13 ^= v16;
        else
          v13 = v16;
      }
      while ( v13 );
      if ( v13 )
      {
        v17 = (__int64 **)(v13 + 32);
        for ( i = *v17; i != (__int64 *)v17; i = (__int64 *)*i )
        {
          if ( *((_WORD *)i + 9) == a2 )
          {
            *a3 = *((_WORD *)i + 8);
            goto LABEL_23;
          }
        }
      }
    }
    v12 = -1073741162;
LABEL_23:
    ExReleasePushLockEx(v9, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v12;
  }
  else
  {
    *a3 = a2;
    return 0LL;
  }
}
