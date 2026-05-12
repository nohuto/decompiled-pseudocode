/*
 * XREFs of PortPassThroughMarshalResultsFromSrb @ 0x1C0051848
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C0051BA8 (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C0023500 (memmove.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     PortPassThroughApplyNormalizedRequest @ 0x1C00511D4 (PortPassThroughApplyNormalizedRequest.c)
 *     PortPassThroughNormalize @ 0x1C005198C (PortPassThroughNormalize.c)
 */

char __fastcall PortPassThroughMarshalResultsFromSrb(IRP *a1, __int64 a2, char a3, __int64 a4)
{
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  unsigned __int64 Length; // r13
  char v12; // al
  char *v13; // rcx
  unsigned __int8 v14; // di
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __int128 v19[4]; // [rsp+20h] [rbp-40h] BYREF

  memset(v19, 0, 0x38uLL);
  *(_QWORD *)(a4 + 8) = 0LL;
  v8 = PortPassThroughNormalize(v19, a1);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(_DWORD *)a4;
    Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    BYTE2(v19[0]) = *(_BYTE *)(a2 + 4);
    v12 = *(_BYTE *)(a2 + 3);
    if ( v12 >= 0 )
    {
      v14 = 0;
      BYTE7(v19[0]) = 0;
    }
    else
    {
      if ( BYTE7(v19[0]) )
        v13 = (char *)a1->AssociatedIrp.MasterIrp + LODWORD(v19[2]);
      else
        v13 = 0LL;
      v14 = *(_BYTE *)(a2 + 11);
      BYTE7(v19[0]) = v14;
      if ( v13 && v14 )
      {
        memmove(v13, *(const void **)(a2 + 32), v14);
        v12 = *(_BYTE *)(a2 + 3);
      }
      v10 = 0;
    }
    v15 = *(unsigned int *)(a2 + 16);
    v9 = 0;
    HIDWORD(v19[0]) = *(_DWORD *)(a2 + 16);
    if ( (v12 & 0x3F) != 0x12 )
      v9 = v10;
    if ( v14 )
    {
      v16 = LODWORD(v19[2]) + (unsigned int)v14;
    }
    else
    {
      v16 = LOWORD(v19[0]);
      if ( v9 < 0 && *(_BYTE *)(a2 + 4) )
      {
        v9 = 0;
        v16 = 3LL;
      }
    }
    v17 = v16;
    if ( !a3 && BYTE8(v19[0]) && (_DWORD)v15 && *((_QWORD *)&v19[1] + 1) )
      v17 = *((_QWORD *)&v19[1] + 1) + v15;
    if ( v17 >= Length )
      v17 = Length;
    *(_QWORD *)(a4 + 8) = v17;
    LOBYTE(v8) = PortPassThroughApplyNormalizedRequest(v19, a1);
  }
  *(_DWORD *)a4 = v9;
  return v8;
}
