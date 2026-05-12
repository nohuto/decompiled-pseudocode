/*
 * XREFs of RaUnitAtaPassThroughValidateInput @ 0x1C0001694
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C000F99C (RaUnitAtaPassThroughIoctl.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memset @ 0x1C0023840 (memset.c)
 */

__int64 __fastcall RaUnitAtaPassThroughValidateInput(__int64 a1, IRP *a2, char a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Length; // ebp
  __int64 Options; // rsi
  int v9; // edi
  _IRP *MasterIrp; // rdx
  _IRP *v11; // rbx
  unsigned __int16 v12; // ax
  __int64 v13; // r8
  bool v14; // zf
  char v15; // al
  unsigned __int16 Size; // ax
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  unsigned __int64 v20; // r9
  unsigned int v21; // r8d
  unsigned __int16 v22; // ax
  _BYTE *v23; // rcx
  const char *i; // rdx
  _OWORD v25[3]; // [rsp+20h] [rbp-68h] BYREF

  memset(v25, 0, sizeof(v25));
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  v9 = 0;
  if ( IoIs32bitProcess(a2) )
  {
    if ( (unsigned int)Options < 0x28 )
      return 3221225485LL;
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp->Type == 40 )
    {
      Size = MasterIrp->Size;
      if ( (Size & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (Size & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
        return 3221225485LL;
      v11 = (_IRP *)v25;
      v18 = *(_OWORD *)&MasterIrp->Type;
      *((_QWORD *)&v25[2] + 1) = MasterIrp->ThreadListEntry.Flink;
      v19 = *(_QWORD *)&MasterIrp->Flags;
      *(_QWORD *)&v25[2] = MasterIrp->AssociatedIrp.MasterIrp;
      *((_QWORD *)&v25[1] + 1) = *(&MasterIrp->Flags + 1);
      v25[0] = v18;
      *(_QWORD *)&v25[1] = v19;
      goto LABEL_7;
    }
    return 3221225561LL;
  }
  if ( (unsigned int)Options < 0x30 )
    return 3221225485LL;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v11 = MasterIrp;
  if ( MasterIrp->Type != 48 )
    return 3221225561LL;
  v12 = MasterIrp->Size;
  if ( (v12 & 4) != 0 && !LODWORD(MasterIrp->MdlAddress) || (v12 & 2) != 0 && !LODWORD(MasterIrp->MdlAddress) )
    return 3221225485LL;
LABEL_7:
  if ( !a3 )
  {
    v20 = (unsigned __int64)v11->AssociatedIrp.MasterIrp;
    if ( (unsigned __int16)v11->Type <= v20 || !LODWORD(v11->MdlAddress) )
    {
      if ( v20 > 0xFFFFFFFF )
        return 3221225621LL;
      v21 = v20 + LODWORD(v11->MdlAddress);
      if ( v21 < (unsigned int)v20 )
        return 3221225621LL;
      v22 = v11->Size;
      if ( ((v22 & 4) == 0 || v21 <= (unsigned int)Options) && ((v22 & 2) == 0 || v21 <= Length) )
      {
        v13 = *(_QWORD *)(a1 + 8);
        v14 = (*(unsigned int *)(v13 + 152) & ((unsigned __int64)MasterIrp + v20)) == 0;
        goto LABEL_9;
      }
    }
    return 3221225485LL;
  }
  v13 = *(_QWORD *)(a1 + 8);
  v14 = (*(unsigned int *)(v13 + 152) & (__int64)v11->AssociatedIrp.MasterIrp) == 0;
LABEL_9:
  if ( !v14
    || (*(_DWORD *)(v13 + 152) & (__int64)v11->MdlAddress) != 0
    || (unsigned int)(HIDWORD(v11->MdlAddress) - 1) > 0x1A5DF )
  {
    return 3221225485LL;
  }
  if ( Length > (unsigned int)Options )
    memset((char *)MasterIrp + Options, 0, Length - (unsigned int)Options);
  v15 = BYTE6(v11->ThreadListEntry.Blink);
  if ( v15 != -76 )
  {
    if ( v15 != -15 )
      return 0LL;
    if ( !a3 )
    {
      if ( g_InWinPE )
      {
        if ( (unsigned int)Options >= 0x230 && LODWORD(v11->MdlAddress) >= 0x200 )
        {
          v23 = (char *)v11->AssociatedIrp.MasterIrp + (unsigned __int64)a2->AssociatedIrp.MasterIrp;
          if ( (*v23 & 1) == 0 )
          {
            for ( i = "AutoATAWindowsString12345678901";
                  *(unsigned __int8 *)i == i[v23 + 2 - "AutoATAWindowsString12345678901"];
                  ++i )
            {
              if ( (unsigned int)++v9 >= 0x20 )
                return 0LL;
            }
          }
        }
      }
    }
    return 3221225485LL;
  }
  if ( g_InWinPE )
    return 0LL;
  return 3221225659LL;
}
