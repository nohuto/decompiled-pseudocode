/*
 * XREFs of NtGdiDdDDIDestroyDCFromMemory @ 0x1C011D9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C0251534 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ?vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z @ 0x1C025A464 (-vAltCheckLockIgnoreStockBit@SURFREF@@QEAAXPEAUHSURF__@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDIDestroyDCFromMemory(ULONG64 a1)
{
  int v1; // ebx
  DYNAMICMODECHANGESHARELOCK *v2; // rcx
  HSURF v4[2]; // [rsp+20h] [rbp-48h]
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v6; // [rsp+50h] [rbp-18h]
  char v7; // [rsp+78h] [rbp+10h] BYREF

  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)v4 = *(_OWORD *)a1;
  if ( !*(_QWORD *)(a1 + 8) || !v4[0] )
    return 3221225485LL;
  v1 = -1073741811;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v7);
  SURFREF::SURFREF((SURFREF *)v5);
  SURFREF::vAltCheckLockIgnoreStockBit((SURFREF *)v5, v4[1]);
  if ( (unsigned int)SURFREF::bValid((SURFREF *)v5) && *(_QWORD *)(v6 + 224) )
    v1 = 0;
  SURFREF::~SURFREF((SURFREF *)v5);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v2);
  if ( v1 >= 0 )
  {
    if ( !(unsigned int)bDeleteDCInternal(v4[0], 0LL, 0LL) )
      v1 = -1073741811;
    if ( v1 >= 0 && !(unsigned int)bDeleteSurface(v4[1]) )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v1;
}
