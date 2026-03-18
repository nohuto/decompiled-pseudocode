/*
 * XREFs of NtWaitForSingleObject @ 0x1405FD000
 * Callers:
 *     SepRmCallLsa @ 0x140132630 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x14062653C (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtWaitForSingleObject(HANDLE Object, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  char PreviousMode; // si
  PLARGE_INTEGER v5; // rbx
  NTSTATUS v6; // edi
  PVOID v7; // r14
  __int64 v8; // r8
  __int64 v9; // r10
  PVOID Objecta; // [rsp+48h] [rbp-30h] BYREF
  LARGE_INTEGER v12; // [rsp+50h] [rbp-28h]
  LARGE_INTEGER v13; // [rsp+98h] [rbp+20h] BYREF

  v13.QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = Timeout;
  if ( Timeout && PreviousMode )
  {
    if ( (unsigned __int64)Timeout >= 0x7FFFFFFF0000LL )
      v5 = (PLARGE_INTEGER)0x7FFFFFFF0000LL;
    v12 = *v5;
    v13 = v12;
    v5 = &v13;
  }
  v6 = ObpReferenceObjectByHandleWithTag(
         (ULONG_PTR)Object,
         0x100000,
         0LL,
         PreviousMode,
         0x7457624Fu,
         &Objecta,
         0LL,
         0LL);
  if ( v6 >= 0 )
  {
    v7 = Objecta;
    v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Objecta - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Objecta - 48) >> 8)];
    v9 = *(_QWORD *)(v8 + 32);
    if ( (v9 & 1) != 0 )
    {
      if ( (v9 & 2) != 0 )
      {
        if ( (*(_DWORD *)(v8 + 176) & *(_DWORD *)((_BYTE *)Objecta + *(unsigned __int16 *)(v8 + 180))) == *(_DWORD *)(v8 + 176) )
          v9 = *(_QWORD *)((char *)Objecta + *(unsigned __int16 *)(v8 + 182));
        else
          v9 = (__int64)Objecta + v9 - 3;
      }
      else
      {
        v9 = *(_QWORD *)((char *)Objecta + v9 - 1);
      }
    }
    else if ( v9 >= 0 )
    {
      v9 += (__int64)Objecta;
    }
    v6 = KeWaitForSingleObject((PVOID)v9, UserRequest, PreviousMode, Alertable, v5);
    ObfDereferenceObjectWithTag(v7, 0x7457624Fu);
  }
  return v6;
}
