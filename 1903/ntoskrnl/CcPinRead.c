/*
 * XREFs of CcPinRead @ 0x1406BCE70
 * Callers:
 *     <none>
 * Callees:
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     CcUnpinData @ 0x14060AAD0 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x14072A2E0 (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPinRead(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  PLARGE_INTEGER v6; // r10
  _DWORD *SharedCacheMap; // r13
  PVOID *v9; // rsi
  unsigned int v10; // r12d
  LONGLONG v11; // rbx
  LONGLONG v12; // rdi
  PVOID *v13; // r14
  BOOLEAN v15; // [rsp+50h] [rbp-68h]
  PVOID Obcb; // [rsp+58h] [rbp-60h] BYREF
  PVOID *v17; // [rsp+60h] [rbp-58h]
  LONGLONG v18; // [rsp+68h] [rbp-50h] BYREF
  void *v19; // [rsp+70h] [rbp-48h] BYREF
  LONGLONG QuadPart; // [rsp+C0h] [rbp+8h] BYREF
  PLARGE_INTEGER v21; // [rsp+C8h] [rbp+10h]
  ULONG v22; // [rsp+D0h] [rbp+18h]
  ULONG v23; // [rsp+D8h] [rbp+20h]

  v23 = Flags;
  v22 = Length;
  v21 = FileOffset;
  v6 = FileOffset;
  v19 = 0LL;
  v18 = 0LL;
  QuadPart = FileOffset->QuadPart;
  Obcb = 0LL;
  v17 = &Obcb;
  if ( (Flags & 1) != 0 )
    __incgsdword(0x5E1Cu);
  else
    __incgsdword(0x5E18u);
  HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink) = 0;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v9 = Buffer;
  v10 = v22;
  v11 = v18;
  v12 = QuadPart;
  v13 = v17;
  do
  {
    if ( Obcb )
    {
      if ( v13 == &Obcb )
      {
        Obcb = (PVOID)CcAllocateObcb(v6, v10);
        v13 = (PVOID *)((char *)Obcb + 16);
        v17 = (PVOID *)((char *)Obcb + 16);
        *v9 = v19;
        LOBYTE(Flags) = v23;
      }
      v10 += v12 - v11;
      v22 = v10;
      v12 = v11;
      QuadPart = v11;
      v17 = ++v13;
    }
    if ( !(unsigned __int8)CcPinFileData(
                             (__int64)FileObject,
                             &QuadPart,
                             v10,
                             (SharedCacheMap[38] & 0x200) == 0,
                             0,
                             Flags,
                             (ULONG_PTR *)v13,
                             &v19,
                             &v18) )
    {
      __incgsdword(0x5E54u);
      v15 = 0;
      goto LABEL_14;
    }
    v11 = v18;
    LOBYTE(Flags) = v23;
    v6 = v21;
  }
  while ( v18 - v12 < v10 );
  *Bcb = Obcb;
  if ( v13 == &Obcb )
    *v9 = v19;
  v15 = 1;
LABEL_14:
  __addgsdword(0x5E58u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  if ( !v15 && Obcb )
    CcUnpinData(Obcb);
  return v15;
}
