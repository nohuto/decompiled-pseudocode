/*
 * XREFs of PortPassThroughMarshalResultsFromSrb @ 0x1C0022178
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C0022034 (PortpCompleteRequestIrp.c)
 * Callees:
 *     PortPassThroughApplyNormalizedRequest @ 0x1C002225C (PortPassThroughApplyNormalizedRequest.c)
 *     PortPassThroughNormalize @ 0x1C00222C4 (PortPassThroughNormalize.c)
 *     memmove @ 0x1C002C080 (memmove.c)
 */

__int64 __fastcall PortPassThroughMarshalResultsFromSrb(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  int v9; // ebx
  int v10; // ecx
  unsigned __int64 v11; // r12
  char v12; // al
  unsigned __int8 v13; // si
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  void *v17; // rcx
  unsigned __int16 v18; // [rsp+20h] [rbp-58h] BYREF
  char v19; // [rsp+22h] [rbp-56h]
  unsigned __int8 v20; // [rsp+27h] [rbp-51h]
  char v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+2Ch] [rbp-4Ch]
  __int64 v23; // [rsp+38h] [rbp-40h]
  unsigned int v24; // [rsp+40h] [rbp-38h]

  *(_QWORD *)(a4 + 8) = 0LL;
  result = PortPassThroughNormalize(&v18, a1);
  v9 = result;
  if ( (int)result < 0 )
    goto LABEL_12;
  v10 = *(_DWORD *)a4;
  v11 = *(unsigned int *)(*(_QWORD *)(a1 + 184) + 8LL);
  v19 = *(_BYTE *)(a2 + 4);
  v12 = *(_BYTE *)(a2 + 3);
  if ( v12 < 0 )
  {
    if ( v20 )
      v17 = (void *)(*(_QWORD *)(a1 + 24) + v24);
    else
      v17 = 0LL;
    v13 = *(_BYTE *)(a2 + 11);
    v20 = v13;
    if ( v17 && v13 )
    {
      memmove(v17, *(const void **)(a2 + 32), v13);
      v12 = *(_BYTE *)(a2 + 3);
    }
    v10 = 0;
  }
  else
  {
    v13 = 0;
    v20 = 0;
  }
  v14 = *(unsigned int *)(a2 + 16);
  v9 = 0;
  v22 = *(_DWORD *)(a2 + 16);
  if ( (v12 & 0x3F) != 0x12 )
    v9 = v10;
  if ( v13 )
  {
    v15 = v24 + v13;
  }
  else
  {
    v15 = v18;
    *(_QWORD *)(a4 + 8) = v18;
    if ( v9 >= 0 || !*(_BYTE *)(a2 + 4) )
      goto LABEL_8;
    v9 = 0;
    v15 = 3LL;
  }
  *(_QWORD *)(a4 + 8) = v15;
LABEL_8:
  v16 = v15;
  if ( !a3 && v21 && (_DWORD)v14 && v23 )
  {
    v16 = v23 + v14;
    *(_QWORD *)(a4 + 8) = v23 + v14;
  }
  if ( v16 >= v11 )
    v16 = v11;
  *(_QWORD *)(a4 + 8) = v16;
  result = PortPassThroughApplyNormalizedRequest(&v18, a1);
LABEL_12:
  *(_DWORD *)a4 = v9;
  return result;
}
