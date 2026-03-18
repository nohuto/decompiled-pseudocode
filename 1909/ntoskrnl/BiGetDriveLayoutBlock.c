/*
 * XREFs of BiGetDriveLayoutBlock @ 0x14073E384
 * Callers:
 *     BiGetNtPartitionPath @ 0x14073DD94 (BiGetNtPartitionPath.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiGetDriveLayoutInformation @ 0x140740C2C (BiGetDriveLayoutInformation.c)
 *     BiGetPhysicalDriveName @ 0x14092F030 (BiGetPhysicalDriveName.c)
 */

__int64 __fastcall BiGetDriveLayoutBlock(PCWSTR SourceString, PVOID *a2, _DWORD *a3)
{
  int DriveLayoutInformation; // ebx
  char *v7; // rax
  int v8; // ecx
  WCHAR *P; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  memset(a3, 0, 0x28uLL);
  DriveLayoutInformation = BiGetDriveLayoutInformation(SourceString);
  if ( DriveLayoutInformation < 0 )
  {
    DriveLayoutInformation = BiGetPhysicalDriveName(SourceString);
    if ( DriveLayoutInformation < 0 )
      goto LABEL_15;
    DriveLayoutInformation = BiGetDriveLayoutInformation(P);
    ExFreePoolWithTag(P, 0x4B444342u);
    if ( DriveLayoutInformation < 0 )
      goto LABEL_15;
  }
  *a3 = 0;
  v7 = (char *)*a2;
  v8 = *(_DWORD *)*a2;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      a3[1] = 0;
      *(_OWORD *)(a3 + 2) = *(_OWORD *)(v7 + 8);
    }
    else
    {
      DriveLayoutInformation = -1073741811;
    }
  }
  else
  {
    a3[1] = 1;
    a3[2] = *((_DWORD *)v7 + 2);
  }
  if ( DriveLayoutInformation < 0 )
  {
LABEL_15:
    if ( *a2 )
    {
      ExFreePoolWithTag(*a2, 0x4B444342u);
      *a2 = 0LL;
    }
  }
  return (unsigned int)DriveLayoutInformation;
}
