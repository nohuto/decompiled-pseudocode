/*
 * XREFs of CcPreparePinWrite @ 0x1406C68B0
 * Callers:
 *     <none>
 * Callees:
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     CcPinFileData @ 0x1400D47D0 (CcPinFileData.c)
 *     CcMapDataForOverwrite @ 0x14011DF68 (CcMapDataForOverwrite.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CcUnpinData @ 0x14060AAD0 (CcUnpinData.c)
 *     CcAllocateObcb @ 0x14072A2E0 (CcAllocateObcb.c)
 */

BOOLEAN __stdcall CcPreparePinWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Zero,
        ULONG Flags,
        PVOID *Bcb,
        PVOID *Buffer)
{
  ULONG v7; // r14d
  LONGLONG v10; // rdi
  LONGLONG QuadPart; // rbx
  PVOID *p_BcbVoid; // r15
  char v13; // al
  BOOLEAN v15; // si
  PVOID v16; // rcx
  PVOID BcbVoid; // [rsp+58h] [rbp-60h] BYREF
  void *v18; // [rsp+60h] [rbp-58h] BYREF
  LONGLONG v19; // [rsp+68h] [rbp-50h] BYREF
  LONGLONG v20; // [rsp+70h] [rbp-48h] BYREF
  PVOID *v21; // [rsp+78h] [rbp-40h]

  v7 = Length;
  v18 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  QuadPart = FileOffset->QuadPart;
  v19 = FileOffset->QuadPart;
  BcbVoid = 0LL;
  p_BcbVoid = &BcbVoid;
  v13 = Flags;
  if ( (Flags & 0x20) != 0 )
  {
    CcMapDataForOverwrite((__int64)FileObject, FileOffset, Length, Bcb, (unsigned __int64 *)Buffer);
    return 1;
  }
  else
  {
    v15 = 1;
    do
    {
      if ( BcbVoid )
      {
        if ( p_BcbVoid == &BcbVoid )
        {
          BcbVoid = (PVOID)CcAllocateObcb(FileOffset, v7);
          p_BcbVoid = (PVOID *)((char *)BcbVoid + 16);
          v21 = (PVOID *)((char *)BcbVoid + 16);
          *Buffer = v18;
          v13 = Flags;
        }
        v7 += QuadPart - v10;
        QuadPart = v10;
        v19 = v10;
        v21 = ++p_BcbVoid;
      }
      if ( !(unsigned __int8)CcPinFileData((__int64)FileObject, &v19, v7, 0, 1, v13, (ULONG_PTR *)p_BcbVoid, &v18, &v20) )
      {
        v15 = 0;
        v16 = BcbVoid;
        goto LABEL_16;
      }
      v10 = v20;
      v13 = Flags;
    }
    while ( v20 - QuadPart < v7 );
    if ( p_BcbVoid == &BcbVoid )
      *Buffer = v18;
    if ( Zero )
      memset(*Buffer, 0, Length);
    CcSetDirtyPinnedData(BcbVoid, 0LL);
    v16 = BcbVoid;
    *Bcb = BcbVoid;
LABEL_16:
    if ( !v15 )
    {
      if ( v16 )
        CcUnpinData(v16);
    }
    return v15;
  }
}
