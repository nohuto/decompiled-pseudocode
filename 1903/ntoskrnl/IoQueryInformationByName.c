/*
 * XREFs of IoQueryInformationByName @ 0x140856560
 * Callers:
 *     NtQueryInformationByName @ 0x140857520 (NtQueryInformationByName.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140043850 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopVerifierExAllocatePoolWithQuota_3 @ 0x1402996E0 (IopVerifierExAllocatePoolWithQuota_3.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1405B093C (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IopValidateQueryInformationParameters @ 0x1405F06C0 (IopValidateQueryInformationParameters.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x1406EEDA0 (IopCleanupExtraCreateParameters.c)
 */

__int64 __fastcall IoQueryInformationByName(
        __int64 a1,
        unsigned __int64 a2,
        void *a3,
        unsigned int a4,
        signed int a5,
        __int16 a6,
        _QWORD *Src)
{
  SIZE_T v7; // r13
  unsigned int v10; // ebx
  char v11; // r12
  char v12; // cl
  char PreviousMode; // al
  int v14; // edi
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  ULONG_PTR v18; // rcx
  size_t v19; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v21; // edi
  void *v22; // rsi
  char v23; // [rsp+40h] [rbp-268h]
  _QWORD v25[28]; // [rsp+60h] [rbp-248h] BYREF
  __int64 v26; // [rsp+140h] [rbp-168h] BYREF
  _BYTE v27[272]; // [rsp+150h] [rbp-158h] BYREF

  v7 = a4;
  memset(v27, 0, sizeof(v27));
  v10 = 0;
  v11 = 0;
  v12 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a6 & 0x100) == 0 )
    v12 = PreviousMode;
  v23 = v12;
  v14 = a5;
  result = IopValidateQueryInformationParameters(v12, (__int64)KeGetCurrentThread(), a2, (unsigned __int64)a3, v7, a5);
  if ( (int)result >= 0 )
  {
    if ( !v23 && a5 == 75 )
    {
      v14 = 71;
      v11 = 1;
    }
    if ( ((v14 - 68) & 0xFFFFFFFC) != 0 || v14 == 69 )
      return 3221225485LL;
    memset(v25, 0, 0xD8uLL);
    LODWORD(v25[0]) = 14155784;
    HIWORD(v25[8]) = 7;
    LODWORD(v25[11]) = 1;
    LODWORD(v25[8]) = 2113536;
    BYTE1(v25[17]) = 1;
    LOBYTE(v25[26]) = 1;
    v25[18] = v27;
    v25[6] = a1;
    LODWORD(v25[19]) = 32;
    v25[25] = __PAIR64__(v7, v14);
    memset(&v25[20], 0, 0x28uLL);
    LOWORD(v25[20]) = 40;
    v17 = 1LL;
    v25[24] = 1LL;
    if ( v11 )
      HIDWORD(v25[10]) |= 1u;
    if ( Src )
    {
      v18 = Src[1];
      if ( v18 )
      {
        result = FsRtlpPrepareExtraCreateParametersForCreate(v18);
        if ( (int)result < 0 )
          return result;
      }
      v19 = *(__int16 *)Src;
      if ( v19 > 0x28 )
        v19 = 40LL;
      memmove(&v25[20], Src, v19);
      v17 = v25[24];
    }
    if ( v17 == 1 )
      v25[24] = PsGetCurrentSilo();
    if ( (unsigned __int64)a3 <= 0x7FFFFFFEFFFFLL )
      v25[14] = IopVerifierExAllocatePoolWithQuota_3(v16, v7);
    else
      v25[14] = a3;
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v21 = ObOpenObjectByNameEx(a1, (__int64)IoFileObjectType, v23, 0LL, 0x80u, (__int64)v25, v25[24], &v26);
    IopCleanupExtraCreateParameters((__int64)v25);
    if ( LODWORD(v25[4]) == -1096154543 )
      v21 = v25[2];
    v22 = (void *)v25[14];
    if ( a3 != (void *)v25[14] )
    {
      if ( v21 >= 0 )
        memmove(a3, (const void *)v25[14], HIDWORD(v25[25]));
      ExFreePoolWithTag(v22, 0);
    }
    *(_DWORD *)a2 = v21;
    if ( v21 >= 0 )
      v10 = HIDWORD(v25[25]);
    *(_QWORD *)(a2 + 8) = v10;
    return (unsigned int)v21;
  }
  return result;
}
