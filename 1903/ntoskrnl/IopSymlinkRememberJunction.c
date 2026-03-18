/*
 * XREFs of IopSymlinkRememberJunction @ 0x1406CEA0C
 * Callers:
 *     IopSymlinkProcessReparse @ 0x1406CEE5C (IopSymlinkProcessReparse.c)
 *     IopGraftName @ 0x1406CEEB8 (IopGraftName.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     IopSymlinkGetMostRecentlyUsedName @ 0x140126714 (IopSymlinkGetMostRecentlyUsedName.c)
 *     IopSymlinkGetECP @ 0x140126730 (IopSymlinkGetECP.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopGetRelatedFileName @ 0x1405B4D2C (IopGetRelatedFileName.c)
 *     IopSymlinkUpdateECP @ 0x1406CE888 (IopSymlinkUpdateECP.c)
 *     IopSymlinkInitializeSymlinkInfo @ 0x1406CECCC (IopSymlinkInitializeSymlinkInfo.c)
 *     IopSymlinkGetRelatedMountPoint @ 0x1406CF260 (IopSymlinkGetRelatedMountPoint.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406CF2A4 (IopSymlinkFreeRelatedMountPointChain.c)
 */

__int64 __fastcall IopSymlinkRememberJunction(unsigned __int16 a1, __int64 a2, __int64 a3, UNICODE_STRING *a4)
{
  int RelatedFileName; // edi
  unsigned __int16 *RelatedMountPoint; // rax
  __int64 v10; // r9
  _WORD *MostRecentlyUsedName; // rbx
  _WORD *v12; // r9
  __int16 v13; // dx
  PVOID PoolWithTag; // rax
  unsigned __int16 v16; // r8
  int v17; // [rsp+20h] [rbp-50h]
  __int16 v18; // [rsp+50h] [rbp-20h] BYREF
  _WORD *v19; // [rsp+58h] [rbp-18h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-10h] BYREF

  RelatedFileName = 0;
  RelatedMountPoint = (unsigned __int16 *)IopSymlinkGetRelatedMountPoint(a4, a1);
  MostRecentlyUsedName = RelatedMountPoint;
  if ( RelatedMountPoint )
  {
    *RelatedMountPoint = a1;
    IopSymlinkFreeRelatedMountPointChain(RelatedMountPoint);
  }
  else
  {
    MostRecentlyUsedName = (_WORD *)IopSymlinkGetMostRecentlyUsedName(v10);
    v19 = MostRecentlyUsedName;
    MostRecentlyUsedName[1] |= v13;
    *MostRecentlyUsedName = a1;
    if ( v12 == MostRecentlyUsedName )
    {
      if ( *(_QWORD *)(a2 + 64) )
      {
        v16 = v12[8] + 2;
        *(_QWORD *)&Destination.Length = 0LL;
        Destination.Buffer = 0LL;
        v18 = 0;
        RelatedFileName = IopGetRelatedFileName(a2, (__int64)&Destination, v16, &v18);
        if ( RelatedFileName >= 0 )
        {
          RtlAppendUnicodeToString(&Destination, L"\\");
          RtlAppendUnicodeStringToString(&Destination, a4 + 1);
          RelatedFileName = IopSymlinkUpdateECP((PIRP)a3, a4, a1, &Destination, v18, a4->MaximumLength);
          ExFreePoolWithTag(Destination.Buffer, 0);
          if ( RelatedFileName < 0 )
            return (unsigned int)RelatedFileName;
          IopSymlinkGetECP(*(struct _ECP_LIST **)(a3 + 112), (PVOID *)&v19);
          MostRecentlyUsedName = v19;
        }
      }
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a2 + 88) + 32LL, 0x69536F49u);
  *((_QWORD *)MostRecentlyUsedName + 1) = PoolWithTag;
  if ( PoolWithTag )
  {
    LOWORD(v17) = 0;
    IopSymlinkInitializeSymlinkInfo(
      PoolWithTag,
      (unsigned int)*(unsigned __int16 *)(a2 + 88) + 32,
      *(_QWORD *)(a2 + 96),
      *(unsigned __int16 *)(a2 + 88),
      v17,
      0LL,
      0,
      0,
      0,
      0LL);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)RelatedFileName;
}
