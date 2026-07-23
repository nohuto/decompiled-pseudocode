/*
 * XREFs of EtwpGetPrivateSessionTraceHandle @ 0x1408C10E4
 * Callers:
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlRandomEx @ 0x14013DBC0 (RtlRandomEx.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     PidNodeCompare @ 0x1408C18BC (PidNodeCompare.c)
 *     EtwpCheckCurrentUserProcessAccess @ 0x1408C4280 (EtwpCheckCurrentUserProcessAccess.c)
 */

__int64 __fastcall EtwpGetPrivateSessionTraceHandle(_DWORD *a1, unsigned int a2, unsigned __int16 *a3)
{
  __int64 v3; // rsi
  unsigned int v5; // ebx
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // r12
  _DWORD *v9; // rdi
  unsigned __int16 v10; // bp
  unsigned int i; // r14d
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  int v14; // esi
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 **v17; // rdi
  __int64 *j; // rcx
  int v20; // [rsp+20h] [rbp-58h] BYREF
  ULONG Seed; // [rsp+28h] [rbp-50h] BYREF
  PEPROCESS Process; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-40h]
  char v26; // [rsp+98h] [rbp+20h]

  v3 = a2;
  v5 = 0;
  v26 = 0;
  v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
  CurrentThread = KeGetCurrentThread();
  v8 = (unsigned __int64 *)(v6 + 4080);
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = (ULONG_PTR)(v8 + 2);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(v8 + 2), 0LL);
  if ( (_DWORD)v3 )
  {
    v9 = a1;
    do
    {
      if ( PsLookupProcessByProcessId((HANDLE)(unsigned int)*v9, &Process) )
      {
        *v9 = 0;
      }
      else
      {
        if ( (unsigned int)EtwpCheckCurrentUserProcessAccess(Process) )
          *v9 = 0;
        ObfDereferenceObjectWithTag(Process, 0x746C6644u);
      }
      v9 += 2;
      --v3;
    }
    while ( v3 );
LABEL_9:
    LODWORD(v3) = a2;
  }
  do
    v10 = RtlRandomEx(&Seed) & 0x7FFF;
  while ( v10 < 0x40u );
  for ( i = 0; i < (unsigned int)v3; ++i )
  {
    if ( a1[2 * i] )
    {
      v12 = *v8;
      v20 = a1[2 * i];
      v13 = v8[1];
      if ( (v13 & 1) != 0 )
      {
        if ( v12 )
          v12 ^= (unsigned __int64)v8;
        else
          v12 = 0LL;
      }
      v14 = v13 & 1;
      if ( v12 )
      {
        do
        {
          v15 = PidNodeCompare(&v20, v12);
          if ( v15 >= 0 )
          {
            if ( v15 <= 0 )
              break;
            v16 = *(_QWORD *)(v12 + 8);
          }
          else
          {
            v16 = *(_QWORD *)v12;
          }
          if ( v14 && v16 )
            v12 ^= v16;
          else
            v12 = v16;
        }
        while ( v12 );
        if ( v12 )
        {
          v17 = (__int64 **)(v12 + 32);
          for ( j = *v17; j != (__int64 *)v17; j = (__int64 *)*j )
          {
            if ( *((_WORD *)j + 9) == v10 )
              goto LABEL_9;
            if ( *((_WORD *)j + 8) == LOWORD(a1[2 * i + 1]) )
            {
              if ( *((_WORD *)j + 10) != HIWORD(a1[2 * i + 1]) )
                break;
              *((_WORD *)j + 9) = v10;
              v26 = 1;
            }
          }
        }
      }
      LODWORD(v3) = a2;
    }
  }
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v26 )
    *a3 = v10;
  else
    return (unsigned int)-1073741275;
  return v5;
}
