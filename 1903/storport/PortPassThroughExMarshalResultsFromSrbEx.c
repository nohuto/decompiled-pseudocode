/*
 * XREFs of PortPassThroughExMarshalResultsFromSrbEx @ 0x1C0051400
 * Callers:
 *     PortpCompleteRequestIrp @ 0x1C0051BA8 (PortpCompleteRequestIrp.c)
 * Callees:
 *     memmove @ 0x1C0023500 (memmove.c)
 *     PortPassThroughExApplyNormalizedRequest @ 0x1C0051288 (PortPassThroughExApplyNormalizedRequest.c)
 *     PortPassThroughExNormalize @ 0x1C00515BC (PortPassThroughExNormalize.c)
 */

void __fastcall PortPassThroughExMarshalResultsFromSrbEx(PIRP Irp, __int64 a2, char a3, __int64 a4)
{
  _IRP *MasterIrp; // rax
  SIZE_T v8; // rdi
  unsigned int *PoolWithTag; // rax
  unsigned __int8 *v10; // rbx
  int v11; // esi
  unsigned __int8 v12; // bp
  int v13; // r8d
  unsigned __int8 v14; // cl
  const void *v15; // r9
  SIZE_T Length; // r12
  int *v17; // rax
  int v18; // edx
  unsigned __int8 v19; // dl
  char *v20; // rax
  unsigned __int8 v21; // cl
  unsigned int v22; // eax
  __int64 v23; // rax

  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  *(_QWORD *)(a4 + 8) = 0LL;
  v8 = (unsigned int)(LODWORD(MasterIrp->MdlAddress) + 63);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v8, 0x69506C50u);
  v10 = (unsigned __int8 *)PoolWithTag;
  if ( PoolWithTag )
  {
    v11 = PortPassThroughExNormalize(PoolWithTag, Irp);
    if ( v11 < 0 )
    {
LABEL_35:
      ExFreePoolWithTag(v10, 0x69506C50u);
      goto LABEL_36;
    }
    v12 = 0;
    v13 = *(_DWORD *)a4;
    v14 = 0;
    v15 = 0LL;
    Length = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
    v17 = (int *)(a2 + *(unsigned int *)(a2 + 120));
    v18 = *v17;
    if ( *v17 == 64 || v18 == 65 )
    {
      v15 = (const void *)*((_QWORD *)v17 + 2);
    }
    else
    {
      if ( v18 != 66 )
      {
LABEL_10:
        v10[16] = v12;
        if ( *(char *)(a2 + 3) >= 0 )
        {
          v10[17] = 0;
          v19 = 0;
        }
        else
        {
          v19 = v10[17];
          if ( v19 )
          {
            v20 = (char *)Irp->AssociatedIrp.MasterIrp + *((unsigned int *)v10 + 7);
            if ( v20 )
            {
              v10[17] = v14;
              memmove(v20, v15, v14);
              v19 = v10[17];
            }
          }
          v13 = 0;
        }
        v11 = 0;
        v21 = v10[18];
        v22 = *(_DWORD *)(a2 + 60);
        if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 0x12 )
          v11 = v13;
        if ( v21 == 1 )
        {
          *((_DWORD *)v10 + 9) = v22;
        }
        else
        {
          *((_DWORD *)v10 + 8) = v22;
          if ( v21 == 3 && v22 && *((_DWORD *)v10 + 9) )
            *((_DWORD *)v10 + 9) = *(_DWORD *)(*(unsigned int *)(a2 + 124) + a2 + 8);
        }
        if ( v19 )
        {
          v8 = (unsigned int)v19 + *((_DWORD *)v10 + 7);
        }
        else if ( v11 < 0 && v12 )
        {
          v11 = 0;
          v8 = 8LL;
        }
        if ( !a3 )
        {
          v23 = *((_QWORD *)v10 + 6);
          if ( v23 )
            v8 = v23 + *((unsigned int *)v10 + 9);
        }
        if ( v8 >= Length )
          v8 = Length;
        *(_QWORD *)(a4 + 8) = v8;
        PortPassThroughExApplyNormalizedRequest((__int128 *)v10, Irp);
        goto LABEL_35;
      }
      v15 = (const void *)*((_QWORD *)v17 + 3);
    }
    v12 = *((_BYTE *)v17 + 8);
    v14 = *((_BYTE *)v17 + 9);
    goto LABEL_10;
  }
  v11 = -1073741670;
LABEL_36:
  *(_DWORD *)a4 = v11;
}
