/*
 * XREFs of EtwpAddUmRegEntry @ 0x1405D49B0
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1405D3E90 (EtwpRegisterUMGuid.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D8E0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x1400870C0 (ObReferenceObjectByPointer.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     EtwpReferenceGuidEntry @ 0x1405D4774 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 */

__int64 __fastcall EtwpAddUmRegEntry(
        ULONG_PTR BugCheckParameter2,
        int a2,
        __int16 a3,
        __int64 a4,
        volatile signed __int16 **a5,
        __int64 a6)
{
  __int64 v6; // rbp
  int inserted; // ebx
  _KPROCESS *Process; // rbx
  volatile signed __int16 **v12; // rax
  __int64 v13; // rcx
  volatile signed __int16 *Object; // [rsp+50h] [rbp-58h]
  __int64 v16; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v17[4]; // [rsp+60h] [rbp-48h] BYREF
  __int128 v18; // [rsp+80h] [rbp-28h]

  v17[0] = 48LL;
  v6 = a4;
  v17[3] = 64LL;
  LOBYTE(a4) = 1;
  v17[1] = 0LL;
  v17[2] = 0LL;
  v18 = 0LL;
  inserted = ObCreateObjectEx(0, (_DWORD)EtwpRegistrationObjectType, (unsigned int)v17, a4);
  if ( inserted >= 0 )
  {
    memset((void *)Object, 0, 0x70uLL);
    Process = KeGetCurrentThread()->ApcState.Process;
    ObfReferenceObjectWithTag(Process, 0x52777445u);
    *((_QWORD *)Object + 10) = Process;
    _InterlockedOr16(Object + 49, 2u);
    if ( a2 == 2 )
      _InterlockedOr16(Object + 49, 8u);
    *((_WORD *)Object + 48) = a3;
    *((_QWORD *)Object + 11) = v6;
    EtwpReferenceGuidEntry(BugCheckParameter2);
    v12 = (volatile signed __int16 **)(BugCheckParameter2 + 56);
    *((_QWORD *)Object + 4) = BugCheckParameter2;
    v13 = *(_QWORD *)(BugCheckParameter2 + 56);
    if ( *(_QWORD *)(v13 + 8) != BugCheckParameter2 + 56 )
      __fastfail(3u);
    *((_QWORD *)Object + 1) = v12;
    *(_QWORD *)Object = v13;
    *(_QWORD *)(v13 + 8) = Object;
    *v12 = Object;
    *((_QWORD *)Object + 3) = Object + 8;
    *((_QWORD *)Object + 2) = Object + 8;
    _InterlockedOr16(Object + 49, 0x80u);
    ObReferenceObjectByPointer((PVOID)Object, 0, EtwpRegistrationObjectType, 0);
    inserted = ObInsertObjectEx((PVOID)Object, 0LL, 0, (__int64)&v16, a6);
    *a5 = Object;
    if ( inserted >= 0 )
      ObfDereferenceObject((PVOID)Object);
  }
  return (unsigned int)inserted;
}
