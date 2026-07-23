/*
 * XREFs of SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405BFF50
 * Callers:
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 * Callees:
 *     SepCaptureTokenSecurityOperations @ 0x140014174 (SepCaptureTokenSecurityOperations.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1405BFE40 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405C07FC (SepCaptureTokenSecurityAttributesInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall SepCaptureTokenSecurityAttributesAndOperationsInformation(_QWORD *a1, char a2, _QWORD *a3)
{
  _DWORD *v5; // rax
  unsigned int v6; // r14d
  _QWORD *v7; // rbx
  _DWORD *v8; // rdi
  NTSTATUS result; // eax
  int v10; // r9d
  int v11; // edi
  _QWORD *PoolWithTag; // rax
  PVOID v13; // rcx
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  _QWORD *v15; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0LL;
  if ( a2 )
  {
    if ( ((unsigned __int8)a1 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = (_DWORD *)a1[1];
    if ( !v5 )
      return -1073741811;
    if ( ((unsigned __int8)v5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0;
    v7 = (_QWORD *)*a1;
    if ( *a1 )
    {
      if ( (*a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = (_QWORD *)*a1;
      v6 = *(_DWORD *)(*a1 + 4LL);
      v8 = (_DWORD *)a1[1];
    }
    else
    {
      v8 = (_DWORD *)a1[1];
      if ( *v5 != 1 )
        return -1073741811;
    }
    result = SepCaptureTokenSecurityOperations(v8, v6, a2, &P);
    if ( result >= 0 )
    {
      if ( v7 )
      {
        LOBYTE(v10) = a2;
        v11 = SepCaptureTokenSecurityAttributesInformation((_DWORD)v7, (_DWORD)v8, v6, v10, 1, (__int64)&v15);
        if ( v11 < 0 )
        {
          v7 = 0LL;
          v13 = P;
          goto LABEL_20;
        }
        v7 = v15;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x6F416553u);
      v13 = P;
      if ( !PoolWithTag )
      {
        v11 = -1073741801;
        goto LABEL_28;
      }
      PoolWithTag[1] = P;
      *PoolWithTag = v7;
      *a3 = PoolWithTag;
      v11 = 0;
LABEL_20:
      if ( v11 >= 0 )
        return v11;
LABEL_28:
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      if ( v7 )
        SepFreeCapturedTokenSecurityAttributesInformation(v7);
      return v11;
    }
  }
  else if ( a1[1] )
  {
    *a3 = a1;
    return 0;
  }
  else
  {
    return -1073741811;
  }
  return result;
}
