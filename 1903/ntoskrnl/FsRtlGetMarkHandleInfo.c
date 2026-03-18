/*
 * XREFs of FsRtlGetMarkHandleInfo @ 0x1402832BC
 * Callers:
 *     FsRtlCheckOplockEx @ 0x140046520 (FsRtlCheckOplockEx.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140002270 (IoIs32bitProcess.c)
 */

__int64 __fastcall FsRtlGetMarkHandleInfo(IRP *a1)
{
  unsigned int Options; // edi
  struct _IRP *v3; // rcx
  struct _IRP *MasterIrp; // rax
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  Options = a1->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  if ( !IoIs32bitProcess(a1) )
  {
    if ( Options >= 0x18 )
    {
      MasterIrp = a1->AssociatedIrp.MasterIrp;
      return MasterIrp->Flags;
    }
    return 0LL;
  }
  if ( Options < 0xC )
    return 0LL;
  v3 = a1->AssociatedIrp.MasterIrp;
  LODWORD(v8) = v3->MdlAddress;
  LODWORD(v6) = *(_DWORD *)&v3->Type;
  v7 = *(int *)(&v3->Size + 1);
  MasterIrp = (struct _IRP *)&v6;
  return MasterIrp->Flags;
}
