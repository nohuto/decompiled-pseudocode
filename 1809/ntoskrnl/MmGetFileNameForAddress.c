/*
 * XREFs of MmGetFileNameForAddress @ 0x14084CEB0
 * Callers:
 *     DbgkPostModuleMessage @ 0x14026DAB4 (DbgkPostModuleMessage.c)
 *     EtwpProviderArrivalCallback @ 0x14070B344 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiObtainReferencedVadEx @ 0x1400747D0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObQueryNameStringMode @ 0x140662110 (ObQueryNameStringMode.c)
 */

__int64 __fastcall MmGetFileNameForAddress(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  char *v4; // rbx
  __int64 v6; // rcx
  char *v7; // rbp
  SIZE_T i; // rsi
  int v9; // edi
  const void **PoolWithTag; // rax
  const void **v11; // rbx
  size_t v12; // r8
  unsigned int v13; // [rsp+60h] [rbp+18h] BYREF
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v3 = MiObtainReferencedVadEx(a1, 2, &v14);
  v4 = (char *)v3;
  if ( !v3 )
    return 3221225793LL;
  if ( (*(_DWORD *)(v3 + 48) & 0x4000) != 0 || (v6 = **(_QWORD **)(v3 + 72), (*(_DWORD *)(v6 + 56) & 0x20) == 0) )
  {
    MiUnlockAndDereferenceVadShared((char *)v3);
    return 3221225545LL;
  }
  else
  {
    v7 = (char *)MiReferenceControlAreaFile(v6);
    MiUnlockAndDereferenceVadShared(v4);
    for ( i = 1040LL; ; i = v13 )
    {
      PoolWithTag = (const void **)ExAllocatePoolWithTag(PagedPool, i, 0x20206D4Du);
      v11 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741801;
        goto LABEL_11;
      }
      v13 = 0;
      v9 = ObQueryNameStringMode(v7, (__int64)PoolWithTag, i, &v13, 0);
      if ( v9 >= 0 )
        break;
      ExFreePoolWithTag(v11, 0);
      if ( v13 <= (unsigned int)i )
        goto LABEL_11;
    }
    v12 = *(unsigned __int16 *)v11;
    *(_WORD *)(a2 + 2) = v12;
    *(_WORD *)a2 = v12;
    *(_QWORD *)(a2 + 8) = v11;
    memmove(v11, v11[1], v12);
LABEL_11:
    ObfDereferenceObject(v7);
    return (unsigned int)v9;
  }
}
