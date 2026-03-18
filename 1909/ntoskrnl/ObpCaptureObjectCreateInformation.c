/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x1405F5310
 * Callers:
 *     IopAllocRealFileObject @ 0x1405D8820 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     SeComputeQuotaInformationSize @ 0x1405D6FF0 (SeComputeQuotaInformationSize.c)
 *     SeCaptureSecurityDescriptor @ 0x1405DD2F0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1405DE240 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectName @ 0x1405F5600 (ObpCaptureObjectName.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        char a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 result; // rax
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // r10
  __int64 v12; // r14
  int v13; // r12d
  __int64 *v14; // r13
  void *v15; // rcx
  unsigned int v16; // [rsp+3Ch] [rbp-5Ch] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int64 v19; // [rsp+50h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  struct _KTHREAD *v21; // [rsp+68h] [rbp-30h]

  result = 0LL;
  *a4 = 0LL;
  a4[1] = 0LL;
  *(_QWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 8) = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 0LL;
  *(_QWORD *)(a5 + 32) = 0LL;
  *(_QWORD *)(a5 + 40) = 0LL;
  *(_QWORD *)(a5 + 48) = 0LL;
  *(_QWORD *)(a5 + 56) = 0LL;
  if ( !a3 )
    return result;
  *(_BYTE *)(a5 + 16) = a1;
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->PreviousMode )
    {
      if ( (a3 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
    }
  }
  if ( *(_DWORD *)a3 == 48 )
  {
    *(_QWORD *)(a5 + 8) = *(_QWORD *)(a3 + 8);
    v9 = *(_DWORD *)(a3 + 24);
    if ( a2 )
      v9 &= ~0x200u;
    if ( (v9 & 0xFFFEE00D) != 0 )
    {
      v13 = -1073741811;
    }
    else
    {
      *(_DWORD *)a5 = v9;
      v10 = *(_QWORD *)(a3 + 16);
      v18 = v10;
      v11 = *(_QWORD *)(a3 + 32);
      v19 = v11;
      v12 = *(_QWORD *)(a3 + 40);
      v17 = v12;
      if ( v12 )
      {
        if ( a1 )
        {
          v21 = KeGetCurrentThread();
          if ( v21->PreviousMode && (v17 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = v17;
          v11 = v19;
          v10 = v18;
        }
        *(_QWORD *)(a5 + 48) = *(_QWORD *)v12;
        *(_DWORD *)(a5 + 56) = *(_DWORD *)(v12 + 8);
      }
      if ( v11 )
      {
        v14 = (__int64 *)(a5 + 32);
        v13 = SeCaptureSecurityDescriptor(v11, a1, PagedPool, 1, (_QWORD *)(a5 + 32));
        if ( v13 < 0 )
        {
          *v14 = 0LL;
          goto LABEL_35;
        }
        SeComputeQuotaInformationSize(*v14, &v16);
        *(_DWORD *)(a5 + 28) = v16;
      }
      if ( !v12 )
        goto LABEL_22;
      *(_DWORD *)(a5 + 48) = 12;
      *(_QWORD *)(a5 + 40) = a5 + 48;
      if ( *(_BYTE *)(a5 + 56) >= 2u )
      {
        v13 = -1073741811;
      }
      else
      {
        if ( *(_DWORD *)(a5 + 52) <= 3u )
        {
LABEL_22:
          if ( v10 )
          {
            v13 = ObpCaptureObjectName(a1, v10, a4, a6);
            if ( v13 >= 0 )
              return 0LL;
          }
          else
          {
            if ( !*(_QWORD *)(a5 + 8) )
              return 0LL;
            v13 = -1073741773;
          }
          goto LABEL_35;
        }
        v13 = -1073741659;
      }
    }
  }
  else
  {
    v13 = -1073741811;
  }
LABEL_35:
  v15 = *(void **)(a5 + 32);
  if ( v15 )
  {
    SeReleaseSecurityDescriptor(v15, *(_BYTE *)(a5 + 16), 1);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v13;
}
