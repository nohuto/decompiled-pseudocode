/*
 * XREFs of CcPinRead @ 0x1406393D0
 * Callers:
 *     <none>
 * Callees:
 *     CcPinFileData @ 0x1400AE210 (CcPinFileData.c)
 *     CcUnpinData @ 0x1405DFDF0 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x140708170 (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPinRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  char v6; // r12
  PLARGE_INTEGER v7; // r9
  _DWORD *SharedCacheMap; // rax
  PVOID *v10; // rsi
  unsigned int v11; // r15d
  LONGLONG v12; // rdi
  PVOID *v13; // r14
  LONGLONG v14; // rbx
  BOOLEAN v16; // [rsp+50h] [rbp-78h]
  PVOID Obcb; // [rsp+58h] [rbp-70h] BYREF
  PVOID *v18; // [rsp+60h] [rbp-68h]
  void *v19; // [rsp+68h] [rbp-60h] BYREF
  LONGLONG v20; // [rsp+70h] [rbp-58h] BYREF
  _DWORD *v21; // [rsp+78h] [rbp-50h]
  LONGLONG QuadPart; // [rsp+D0h] [rbp+8h] BYREF
  PLARGE_INTEGER v23; // [rsp+D8h] [rbp+10h]
  ULONG v24; // [rsp+E0h] [rbp+18h]

  v24 = Length;
  v23 = FileOffset;
  v6 = Flags;
  v7 = FileOffset;
  v19 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v18 = &Obcb;
  __incgsdword(4 * (v6 & 1) + 24088);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v21 = SharedCacheMap;
  v10 = Buffer;
  v11 = v24;
  v12 = QuadPart;
  v13 = v18;
  v14 = v20;
  do
  {
    if ( Obcb )
    {
      if ( v13 == &Obcb )
      {
        Obcb = (PVOID)CcAllocateObcb(v7, v11);
        v13 = (PVOID *)((char *)Obcb + 16);
        v18 = (PVOID *)((char *)Obcb + 16);
        *v10 = v19;
        SharedCacheMap = v21;
      }
      v11 += v12 - v14;
      v24 = v11;
      v12 = v14;
      QuadPart = v14;
      v18 = ++v13;
    }
    if ( !(unsigned __int8)CcPinFileData(
                             (__int64)FileObject,
                             &QuadPart,
                             v11,
                             (SharedCacheMap[38] & 0x200) == 0,
                             0,
                             v6,
                             (ULONG_PTR *)v13,
                             &v19,
                             &v20) )
    {
      __incgsdword(0x5E54u);
      v16 = 0;
      goto LABEL_12;
    }
    v14 = v20;
    SharedCacheMap = v21;
    v7 = v23;
  }
  while ( v20 - v12 < v11 );
  *Bcb = Obcb;
  if ( v13 == &Obcb )
    *v10 = v19;
  v16 = 1;
LABEL_12:
  __addgsdword(0x5E58u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( !v16 && Obcb )
    CcUnpinData(Obcb);
  return v16;
}
