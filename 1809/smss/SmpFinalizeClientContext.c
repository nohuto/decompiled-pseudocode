/*
 * XREFs of SmpFinalizeClientContext @ 0x140003CDC
 * Callers:
 *     SmpApiCallback @ 0x140003860 (SmpApiCallback.c)
 * Callees:
 *     SmpDereferenceKnownSubSys @ 0x14000478C (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x1400048D8 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140004968 (SmpReleaseControlBlock.c)
 */

void __fastcall SmpFinalizeClientContext(char *BaseAddress, int a2, unsigned int a3)
{
  int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // ecx
  void *v10; // rcx

  if ( BaseAddress )
  {
    RtlAcquireSRWLockExclusive(BaseAddress + 24);
    v6 = *(_DWORD *)BaseAddress;
    if ( a2 == 1 )
    {
      v6 |= 1u;
      *(_DWORD *)BaseAddress = v6;
    }
    v7 = *((_DWORD *)BaseAddress + 1);
    v8 = *((_DWORD *)BaseAddress + 2);
    if ( a3 <= v7 )
    {
      v9 = v8 - 1;
    }
    else
    {
      *((_DWORD *)BaseAddress + 1) = a3;
      v9 = a3 + v8 - v7 - 1;
    }
    *((_DWORD *)BaseAddress + 2) = v9;
    if ( (v6 & 1) == 0 || v9 )
    {
      RtlReleaseSRWLockExclusive(BaseAddress + 24);
    }
    else
    {
      v10 = (void *)*((_QWORD *)BaseAddress + 4);
      if ( (v6 & 0x10) != 0 )
      {
        SmpDereferenceKnownSubSys(v10);
      }
      else if ( (v6 & 8) != 0 )
      {
        SmpDestroyControlBlock(v10);
        SmpReleaseControlBlock(*((PVOID *)BaseAddress + 4));
      }
      else if ( v10 )
      {
        NtClose(v10);
      }
      NtAlpcDisconnectPort(*((_QWORD *)BaseAddress + 2), 1LL);
      NtClose(*((HANDLE *)BaseAddress + 2));
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    }
  }
}
