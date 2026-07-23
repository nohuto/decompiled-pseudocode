/*
 * XREFs of ObpCaptureObjectCreateInformation @ 0x1405E3910
 * Callers:
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 * Callees:
 *     SeComputeQuotaInformationSize @ 0x1405CABB0 (SeComputeQuotaInformationSize.c)
 *     ObpCaptureObjectName @ 0x1405E3BF0 (ObpCaptureObjectName.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall ObpCaptureObjectCreateInformation(
        unsigned __int8 a1,
        unsigned __int8 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        unsigned int a6)
{
  int v7; // r9d
  int v9; // eax
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r14
  int v13; // r12d
  __int64 *v15; // r13
  __int64 v16; // rcx
  unsigned int v17; // [rsp+3Ch] [rbp-4Ch] BYREF
  __int64 v18; // [rsp+40h] [rbp-48h]
  __int64 v19; // [rsp+48h] [rbp-40h]
  __int64 v20; // [rsp+50h] [rbp-38h]

  v7 = a2;
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
    return 0LL;
  *(_BYTE *)(a5 + 16) = a1;
  if ( a1 && KeGetCurrentThread()->PreviousMode && (a3 & 7) != 0 )
    goto LABEL_18;
  if ( *(_DWORD *)a3 != 48 )
  {
    v13 = -1073741811;
    goto LABEL_33;
  }
  *(_QWORD *)(a5 + 8) = *(_QWORD *)(a3 + 8);
  v9 = *(_DWORD *)(a3 + 24);
  if ( a2 )
    v9 &= ~0x200u;
  if ( (v9 & 0xFFFEE00D) != 0 )
  {
    v13 = -1073741811;
    goto LABEL_33;
  }
  *(_DWORD *)a5 = v9;
  v10 = *(_QWORD *)(a3 + 16);
  v19 = v10;
  v11 = *(_QWORD *)(a3 + 32);
  v20 = v11;
  v12 = *(_QWORD *)(a3 + 40);
  v18 = v12;
  if ( v12 )
  {
    if ( !a1 )
    {
LABEL_14:
      *(_QWORD *)(a5 + 48) = *(_QWORD *)v12;
      *(_DWORD *)(a5 + 56) = *(_DWORD *)(v12 + 8);
      goto LABEL_19;
    }
    if ( !KeGetCurrentThread()->PreviousMode || (v18 & 3) == 0 )
    {
      v12 = v18;
      v11 = v20;
      v10 = v19;
      goto LABEL_14;
    }
LABEL_18:
    ExRaiseDatatypeMisalignment();
  }
LABEL_19:
  if ( v11 )
  {
    v15 = (__int64 *)(a5 + 32);
    LOBYTE(v7) = 1;
    v13 = SeCaptureSecurityDescriptor(v11, a1, 1, v7, a5 + 32);
    if ( v13 < 0 )
    {
      *v15 = 0LL;
      goto LABEL_33;
    }
    SeComputeQuotaInformationSize(*v15, &v17);
    *(_DWORD *)(a5 + 28) = v17;
  }
  if ( !v12 )
    goto LABEL_21;
  *(_DWORD *)(a5 + 48) = 12;
  *(_QWORD *)(a5 + 40) = a5 + 48;
  if ( *(_BYTE *)(a5 + 56) >= 2u )
  {
    v13 = -1073741811;
    goto LABEL_33;
  }
  if ( *(_DWORD *)(a5 + 52) > 3u )
  {
    v13 = -1073741659;
  }
  else
  {
LABEL_21:
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
  }
LABEL_33:
  v16 = *(_QWORD *)(a5 + 32);
  if ( v16 )
  {
    LOBYTE(a3) = 1;
    SeReleaseSecurityDescriptor(v16, *(unsigned __int8 *)(a5 + 16), a3);
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  return (unsigned int)v13;
}
