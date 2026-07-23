/*
 * XREFs of RtlLockModuleSection @ 0x180073C20
 * Callers:
 *     sub_180073A4C @ 0x180073A4C (sub_180073A4C.c)
 *     sub_180073ADC @ 0x180073ADC (sub_180073ADC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180073D1C @ 0x180073D1C (sub_180073D1C.c)
 *     LdrEnumerateLoadedModules @ 0x180073D60 (LdrEnumerateLoadedModules.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __cdecl RtlLockModuleSection(PVOID Address)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  _QWORD *Heap; // rax
  int v5; // edi
  _QWORD *v6; // rax
  PVOID Context; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+38h] [rbp-10h]

  RtlAcquireSRWLockExclusive(&stru_180166378);
  v2 = sub_180073D1C(Address);
  v3 = (_QWORD *)v2;
  if ( v2 )
  {
    ++*(_DWORD *)(v2 + 32);
    v5 = 0;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    v3 = Heap;
    if ( Heap )
    {
      memset(Heap, 0, 0x28uLL);
      Context = Address;
      v9 = -1073741275;
      v5 = LdrEnumerateLoadedModules(0, EnumProc, &Context);
      if ( v5 >= 0 )
      {
        v5 = v9;
        if ( v9 >= 0 )
        {
          v3[2] = v10;
          v3[3] = v11;
          *((_DWORD *)v3 + 8) = 1;
          v6 = off_18015F588;
          if ( *off_18015F588 != (_UNKNOWN *)&off_18015F580 )
            __fastfail(3u);
          *v3 = &off_18015F580;
          v3[1] = v6;
          *v6 = v3;
          off_18015F588 = (_UNKNOWN **)v3;
        }
      }
    }
    else
    {
      v5 = -1073741670;
    }
  }
  RtlReleaseSRWLockExclusive(&stru_180166378);
  if ( v5 < 0 && v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  return v5;
}
