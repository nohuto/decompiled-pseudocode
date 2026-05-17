/*
 * XREFs of RtlUnlockModuleSection @ 0x180073B70
 * Callers:
 *     sub_180073890 @ 0x180073890 (sub_180073890.c)
 *     sub_1800738D0 @ 0x1800738D0 (sub_1800738D0.c)
 *     sub_180073A4C @ 0x180073A4C (sub_180073A4C.c)
 *     sub_180073ADC @ 0x180073ADC (sub_180073ADC.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180073D1C @ 0x180073D1C (sub_180073D1C.c)
 *     ZwUnlockVirtualMemory @ 0x18009FF70 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockModuleSection(__int64 a1)
{
  __int64 v2; // rax
  unsigned int v3; // edi
  __int64 v4; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx

  RtlAcquireSRWLockExclusive(&qword_180166378);
  v2 = sub_180073D1C(a1);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 32))-- == 1 )
    {
      v6 = *(_QWORD *)v2;
      if ( *(_QWORD *)(v6 + 8) != v4 || (v7 = *(_QWORD **)(v4 + 8), *v7 != v4) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      v3 = ZwUnlockVirtualMemory(-1LL, v4 + 16, v4 + 24, 1LL);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
    }
  }
  else
  {
    v3 = -1073741782;
  }
  RtlReleaseSRWLockExclusive(&qword_180166378);
  return v3;
}
