/*
 * XREFs of IopSymlinkProcessReparse @ 0x1406CEE5C
 * Callers:
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 * Callees:
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140126714 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x140126730 (IopSymlinkGetECP.c)
 *     IopSymlinkRememberJunction @ 0x1406CEA0C (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1406CEEB8 (IopGraftName.c)
 *     IopFindMatchingComponentsLengthR @ 0x14085CA30 (IopFindMatchingComponentsLengthR.c)
 */

int __fastcall IopSymlinkProcessReparse(PIRP Irp, __int64 a2, __int64 a3, char a4)
{
  ULONG_PTR Information; // rax
  __int64 v7; // rdx
  __int64 MostRecentlyUsedName; // rax
  unsigned __int16 MatchingComponentsLengthR; // ax
  UNICODE_STRING *v11; // [rsp+30h] [rbp+8h] BYREF

  Information = Irp->IoStatus.Information;
  if ( Information - 2684354563u <= 0x16 && (v7 = 4194817LL, _bittest64(&v7, Information - 2684354563u)) )
  {
    if ( !a4 )
      LODWORD(Information) = IopGraftName(Irp);
  }
  else if ( Information > 2 )
  {
    LODWORD(Information) = IopSymlinkGetECP((struct _ECP_LIST *)Irp->UserBuffer, (PVOID *)&v11);
    if ( (Information & 0x80000000) != 0LL
      || (MostRecentlyUsedName = IopSymlinkGetMostRecentlyUsedName((__int64)v11),
          MatchingComponentsLengthR = IopFindMatchingComponentsLengthR(a2 + 88, MostRecentlyUsedName + 16),
          LODWORD(Information) = IopSymlinkRememberJunction(MatchingComponentsLengthR, a2, (__int64)Irp, v11),
          (Information & 0x80000000) != 0LL) )
    {
      Irp->IoStatus.Status = Information;
    }
  }
  return Information;
}
