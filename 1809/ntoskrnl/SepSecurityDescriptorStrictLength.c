/*
 * XREFs of SepSecurityDescriptorStrictLength @ 0x1408A4F04
 * Callers:
 *     RtlLengthSecurityDescriptorStrict @ 0x1401B601C (RtlLengthSecurityDescriptorStrict.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402FFCB4 (SepCheckAndCopySelfRelativeSD.c)
 *     SeOperationAuditAlarm @ 0x14089EC94 (SeOperationAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408A0430 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSecurityDescriptorStrictLength(__int64 a1)
{
  __int16 v1; // r10
  unsigned int v2; // r9d
  unsigned __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  unsigned __int64 v17; // r8

  v1 = *(_WORD *)(a1 + 2);
  v2 = ((v1 >> 31) & 0xFFFFFFEC) + 40;
  v3 = a1 + v2;
  if ( v1 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    v4 = *(unsigned int *)(a1 + 4);
    if ( !(_DWORD)v4 )
      goto LABEL_7;
    v5 = a1 + v4;
  }
  if ( v5 )
  {
    v2 += (4 * *(unsigned __int8 *)(v5 + 1) + 11) & 0xFFFFFFFC;
    v3 = v5 + ((4 * *(unsigned __int8 *)(v5 + 1) + 11) & 0xFFFFFFFC);
  }
LABEL_7:
  if ( v1 >= 0 )
  {
    v7 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v6 = *(unsigned int *)(a1 + 8);
    if ( !(_DWORD)v6 )
      goto LABEL_14;
    v7 = a1 + v6;
  }
  if ( v7 )
  {
    v8 = (4 * *(unsigned __int8 *)(v7 + 1) + 11) & 0xFFFFFFFC;
    v9 = v8 + v7;
    v2 += v8;
    if ( v9 > v3 )
      v3 = v9;
  }
LABEL_14:
  if ( (v1 & 4) == 0 )
    goto LABEL_22;
  if ( v1 >= 0 )
  {
    v11 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v10 = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)v10 )
      goto LABEL_22;
    v11 = a1 + v10;
  }
  if ( v11 )
  {
    v12 = (*(unsigned __int16 *)(v11 + 2) + 3) & 0xFFFFFFFC;
    v13 = v12 + v11;
    v2 += v12;
    if ( v13 > v3 )
      v3 = v13;
  }
LABEL_22:
  if ( (v1 & 0x10) == 0 )
    goto LABEL_30;
  if ( v1 >= 0 )
  {
    v15 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    v14 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v14 )
      goto LABEL_30;
    v15 = a1 + v14;
  }
  if ( v15 )
  {
    v16 = (*(unsigned __int16 *)(v15 + 2) + 3) & 0xFFFFFFFC;
    v17 = v16 + v15;
    v2 += v16;
    if ( v17 > v3 )
      LODWORD(v3) = v17;
  }
LABEL_30:
  if ( v1 >= 0 )
    return v2;
  else
    return (unsigned int)(v3 - a1);
}
