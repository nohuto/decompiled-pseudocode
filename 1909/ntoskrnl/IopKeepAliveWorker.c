/*
 * XREFs of IopKeepAliveWorker @ 0x140299BF0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140008320 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1408C620C (PspAdjustKeepAliveCountProcess.c)
 */

void IopKeepAliveWorker()
{
  KIRQL v0; // al
  KIRQL v1; // si
  PVOID v2; // rbx
  int v3; // edi
  PVOID v4; // rax
  PVOID *v5; // rcx
  bool v6; // zf
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  KIRQL v12; // dl

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_1404617F0);
  qword_140461820 = (__int64)KeGetCurrentThread();
LABEL_2:
  v1 = v0;
  while ( 1 )
  {
    v2 = qword_1404617E0;
    if ( qword_1404617E0 == &qword_1404617E0 )
      break;
    v3 = *((_DWORD *)qword_1404617E0 + 8);
    *((_DWORD *)qword_1404617E0 + 8) = 0;
    if ( v3 )
    {
      KeReleaseSpinLock(&qword_1404617F0, v1);
      if ( v3 > 0 )
      {
        do
        {
          ObfReferenceObject(*((PVOID *)v2 + 3));
          LOBYTE(v8) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 1LL, *((_QWORD *)v2 + 5), v8);
          --v3;
        }
        while ( v3 );
        goto LABEL_23;
      }
      if ( v3 != -1 )
      {
        v9 = (unsigned int)(-1 - v3);
        do
        {
          LOBYTE(v7) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
          ObfDereferenceObject(*((PVOID *)v2 + 3));
          --v9;
        }
        while ( v9 );
      }
      LOBYTE(v7) = *((_BYTE *)v2 + 18);
      v10 = *((_QWORD *)v2 + 3);
      if ( (_BYTE)v7 )
        v11 = *(_DWORD *)(v10 + 2092);
      else
        v11 = *(_DWORD *)(v10 + 2124);
      if ( (v11 & 0x7FFFFFFF) == 1 )
      {
        v12 = KeAcquireSpinLockRaiseToDpc(&qword_1404617F0);
        if ( MEMORY[0xFFFFF78000000014] >= *((_QWORD *)v2 + 6) )
        {
          KeReleaseSpinLock(&qword_1404617F0, v12);
          LOBYTE(v7) = *((_BYTE *)v2 + 18);
          v10 = *((_QWORD *)v2 + 3);
          goto LABEL_21;
        }
        --*((_DWORD *)v2 + 8);
        KeReleaseSpinLock(&qword_1404617F0, v12);
        KeDelayExecutionThread(0, 1u, (PLARGE_INTEGER)v2 + 6);
      }
      else
      {
LABEL_21:
        PspAdjustKeepAliveCountProcess(v10, 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
        ObfDereferenceObject(*((PVOID *)v2 + 3));
      }
LABEL_23:
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_1404617F0);
      goto LABEL_2;
    }
    v4 = *(PVOID *)v2;
    if ( *(PVOID *)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = (PVOID *)*((_QWORD *)v2 + 1), *v5 != v2) )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    v6 = *((_BYTE *)v2 + 17) == 1;
    *((_BYTE *)v2 + 16) = 0;
    if ( v6 )
      ExFreePoolWithTag(v2, 0);
  }
  qword_140461820 = 0LL;
  byte_140461818 = 0;
  KeReleaseSpinLock(&qword_1404617F0, v1);
}
