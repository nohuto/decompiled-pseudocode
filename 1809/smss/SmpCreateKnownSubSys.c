/*
 * XREFs of SmpCreateKnownSubSys @ 0x140004A9C
 * Callers:
 *     SmpHandleConnectionRequest @ 0x140003DC0 (SmpHandleConnectionRequest.c)
 *     SmpLoadSubSystem @ 0x140015654 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpGetSubSysSynch @ 0x140016864 (SmpGetSubSysSynch.c)
 */

_DWORD *__fastcall SmpCreateKnownSubSys(int a1)
{
  _DWORD *Heap; // rax
  _DWORD *v3; // rbx
  __int64 SubSysSynch; // rax

  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x58uLL);
  v3 = Heap;
  if ( Heap )
  {
    if ( (a1 & 1) != 0 )
    {
      *((_QWORD *)Heap + 2) = 0LL;
LABEL_4:
      v3[1] = 0;
      v3[6] = -1;
      *((_QWORD *)v3 + 4) = 0LL;
      *((_QWORD *)v3 + 5) = 0LL;
      *v3 = 1;
      v3[2] = a1;
      *((_QWORD *)v3 + 6) = 0LL;
      *((_QWORD *)v3 + 7) = 0LL;
      return v3;
    }
    SubSysSynch = SmpGetSubSysSynch();
    *((_QWORD *)v3 + 2) = SubSysSynch;
    if ( SubSysSynch )
      goto LABEL_4;
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v3);
  }
  return 0LL;
}
