/*
 * XREFs of EtwpAddUmRegEntry @ 0x1405C54C0
 * Callers:
 *     EtwpRegisterUMGuid @ 0x1405C4970 (EtwpRegisterUMGuid.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140013530 (ObReferenceObjectByPointer.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     EtwpReferenceGuidEntry @ 0x1405C5288 (EtwpReferenceGuidEntry.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
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
  int v17; // [rsp+60h] [rbp-48h] BYREF
  __int64 v18; // [rsp+68h] [rbp-40h]
  __int64 v19; // [rsp+70h] [rbp-38h]
  int v20; // [rsp+78h] [rbp-30h]
  __int128 v21; // [rsp+80h] [rbp-28h]

  v17 = 48;
  v6 = a4;
  v18 = 0LL;
  v20 = 64;
  LOBYTE(a4) = 1;
  v19 = 0LL;
  v21 = 0LL;
  inserted = ObCreateObjectEx(0, (_DWORD)EtwpRegistrationObjectType, (unsigned int)&v17, a4);
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
